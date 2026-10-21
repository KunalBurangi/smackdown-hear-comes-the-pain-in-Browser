/*! coi-serviceworker v0.1.7 - Guido Zuidhof, licensed under MIT */
let coepCredentialless = false;
if (typeof window === 'undefined') {
    self.addEventListener("install", () => self.skipWaiting());
    self.addEventListener("activate", (event) => event.waitUntil(self.clients.claim()));

    self.addEventListener("message", (ev) => {
        if (!ev.data) {
        } else if (ev.data.type === "deregister") {
            self.registration
                .unregister()
                .then(() => {
                    return self.clients.matchAll();
                })
                .then(clients => {
                    clients.forEach(client => client.navigate(client.url));
                });
        } else if (ev.data.type === "coepCredentialless") {
            coepCredentialless = ev.data.value;
        }
    });

    self.addEventListener("fetch", function (event) {
        const r = event.request;
        if (r.cache === "only-if-cached" && r.mode !== "same-origin") {
            return;
        }

        const request = (coepCredentialless && r.mode === "no-cors")
            ? new Request(r, {
                credentials: "omit",
            })
            : r;
        event.respondWith(
            fetch(request)
                .then((response) => {
                    if (response.status === 0) {
                        return response;
                    }
                    if (response.headers.has("Cross-Origin-Opener-Policy") && response.headers.has("Cross-Origin-Embedder-Policy")) {
                        return response;
                    }

                    const newHeaders = new Headers(response.headers);
                    newHeaders.set("Cross-Origin-Embedder-Policy",
                        coepCredentialless ? "credentialless" : "require-corp"
                    );
                    newHeaders.set("Cross-Origin-Opener-Policy", "same-origin");
                    if (newHeaders.has("Content-Encoding")) {
                        newHeaders.delete("Content-Encoding");
                        newHeaders.delete("Content-Length");
                    }

                    return new Response(response.body, {
                        status: response.status,
                        statusText: response.statusText,
                        headers: newHeaders,
                    });
                })
                .catch((e) => console.error(e))
        );
    });
} else {
    (() => {
        const reloadedBySelf = window.sessionStorage.getItem("coiReloadedBySelf");
        window.sessionStorage.removeItem("coiReloadedBySelf");

        const currentScript = document.currentScript;
        const coi = {
            shouldRegister: () => !window.crossOriginIsolated,
            shouldDeregister: () => window.crossOriginIsolated,
            doReload: () => window.location.reload(),
            quiet: false,
            ...window.coi
        };

        if (navigator.serviceWorker && coi.shouldDeregister()) {
            navigator.serviceWorker.getRegistrations().then((regs) => {
                for (const reg of regs) {
                    if (reg.active && reg.active.scriptURL.includes("coi-serviceworker")) {
                        reg.unregister();
                    }
                }
            }).catch(() => {});
        }

        if (navigator.serviceWorker && coi.shouldRegister()) {
            navigator.serviceWorker.register(currentScript.src).then(
                (registration) => {
                    if (!coi.quiet) console.log("COI service worker registered");

                    registration.addEventListener("updatefound", () => {
                        window.sessionStorage.setItem("coiReloadedBySelf", "true");
                        window.location.reload();
                    });

                    if (registration.active && !navigator.serviceWorker.controller) {
                        window.sessionStorage.setItem("coiReloadedBySelf", "true");
                        window.location.reload();
                    }
                },
                (err) => {
                    if (!coi.quiet) console.error("COI service worker failed to register:", err);
                }
            );
        }
    })();
}
