#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002C[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223,
    0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0,
    231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0,
    239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0,
    0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0,
    0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0,
    283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291,
    0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0,
    300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0,
    0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317,
    0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0,
    326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0,
    0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0,
    0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0,
    0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    432, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440,
    0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0,
    449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0,
    0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0,
    0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0,
    0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539,
};

void unit_002C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B0000;
    case 2u: goto L_001B0010;
    case 3u: goto L_001B0018;
    case 4u: goto L_001B0020;
    case 5u: goto L_001B0050;
    case 6u: goto L_001B0090;
    case 7u: goto L_001B00A0;
    case 8u: goto L_001B00A8;
    case 9u: goto L_001B00B0;
    case 10u: goto L_001B01AC;
    case 11u: goto L_001B01DC;
    case 12u: goto L_001B024C;
    case 13u: goto L_001B0254;
    case 14u: goto L_001B0268;
    case 15u: goto L_001B02A0;
    case 16u: goto L_001B02D0;
    case 17u: goto L_001B031C;
    case 18u: goto L_001B034C;
    case 19u: goto L_001B03D0;
    case 20u: goto L_001B03D8;
    case 21u: goto L_001B03E8;
    case 22u: goto L_001B03F4;
    case 23u: goto L_001B0420;
    case 24u: goto L_001B0454;
    case 25u: goto L_001B0468;
    case 26u: goto L_001B047C;
    case 27u: goto L_001B0490;
    case 28u: goto L_001B04AC;
    case 29u: goto L_001B0540;
    case 30u: goto L_001B0554;
    case 31u: goto L_001B0568;
    case 32u: goto L_001B05B0;
    case 33u: goto L_001B05CC;
    case 34u: goto L_001B05E4;
    case 35u: goto L_001B0680;
    case 36u: goto L_001B0690;
    case 37u: goto L_001B06A0;
    case 38u: goto L_001B06C0;
    case 39u: goto L_001B06F8;
    case 40u: goto L_001B0710;
    case 41u: goto L_001B0720;
    case 42u: goto L_001B073C;
    case 43u: goto L_001B076C;
    case 44u: goto L_001B078C;
    case 45u: goto L_001B07B0;
    case 46u: goto L_001B07E0;
    case 47u: goto L_001B07EC;
    case 48u: goto L_001B0804;
    case 49u: goto L_001B0820;
    case 50u: goto L_001B0858;
    case 51u: goto L_001B08B4;
    case 52u: goto L_001B08FC;
    case 53u: goto L_001B0954;
    case 54u: goto L_001B0A98;
    case 55u: goto L_001B0AC0;
    case 56u: goto L_001B0AD0;
    case 57u: goto L_001B0B40;
    case 58u: goto L_001B0B50;
    case 59u: goto L_001B0B6C;
    case 60u: goto L_001B0B84;
    case 61u: goto L_001B0BA0;
    case 62u: goto L_001B0BB0;
    case 63u: goto L_001B0BC0;
    case 64u: goto L_001B0BE0;
    case 65u: goto L_001B0C0C;
    case 66u: goto L_001B0C20;
    case 67u: goto L_001B0C30;
    case 68u: goto L_001B0C40;
    case 69u: goto L_001B0C54;
    case 70u: goto L_001B0C80;
    case 71u: goto L_001B0CB0;
    case 72u: goto L_001B0CBC;
    case 73u: goto L_001B0CD4;
    case 74u: goto L_001B0CF0;
    case 75u: goto L_001B0D00;
    case 76u: goto L_001B0D24;
    case 77u: goto L_001B0D50;
    case 78u: goto L_001B0D70;
    case 79u: goto L_001B0D8C;
    case 80u: goto L_001B0DB8;
    case 81u: goto L_001B0DD0;
    case 82u: goto L_001B0DE0;
    case 83u: goto L_001B0E04;
    case 84u: goto L_001B0E0C;
    case 85u: goto L_001B0E14;
    case 86u: goto L_001B0E1C;
    case 87u: goto L_001B0E24;
    case 88u: goto L_001B0E2C;
    case 89u: goto L_001B0E34;
    case 90u: goto L_001B0E50;
    case 91u: goto L_001B0E84;
    case 92u: goto L_001B0E90;
    case 93u: goto L_001B0EA0;
    case 94u: goto L_001B0EB0;
    case 95u: goto L_001B0EC0;
    case 96u: goto L_001B0F20;
    case 97u: goto L_001B0F30;
    case 98u: goto L_001B0F40;
    case 99u: goto L_001B0F50;
    case 100u: goto L_001B0F60;
    case 101u: goto L_001B0F70;
    case 102u: goto L_001B0F80;
    case 103u: goto L_001B0FA4;
    case 104u: goto L_001B0FB4;
    case 105u: goto L_001B0FF0;
    case 106u: goto L_001B102C;
    case 107u: goto L_001B1040;
    case 108u: goto L_001B104C;
    case 109u: goto L_001B1058;
    case 110u: goto L_001B1070;
    case 111u: goto L_001B1090;
    case 112u: goto L_001B10B4;
    case 113u: goto L_001B10C0;
    case 114u: goto L_001B10D0;
    case 115u: goto L_001B1104;
    case 116u: goto L_001B1110;
    case 117u: goto L_001B1124;
    case 118u: goto L_001B112C;
    case 119u: goto L_001B1150;
    case 120u: goto L_001B1160;
    case 121u: goto L_001B1170;
    case 122u: goto L_001B1190;
    case 123u: goto L_001B11C8;
    case 124u: goto L_001B11E0;
    case 125u: goto L_001B1200;
    case 126u: goto L_001B1210;
    case 127u: goto L_001B123C;
    case 128u: goto L_001B125C;
    case 129u: goto L_001B1280;
    case 130u: goto L_001B12B0;
    case 131u: goto L_001B12C8;
    case 132u: goto L_001B12E0;
    case 133u: goto L_001B1318;
    case 134u: goto L_001B1330;
    case 135u: goto L_001B134C;
    case 136u: goto L_001B1354;
    case 137u: goto L_001B1370;
    case 138u: goto L_001B1390;
    case 139u: goto L_001B13C8;
    case 140u: goto L_001B13E0;
    case 141u: goto L_001B13FC;
    case 142u: goto L_001B1410;
    case 143u: goto L_001B142C;
    case 144u: goto L_001B1440;
    case 145u: goto L_001B145C;
    case 146u: goto L_001B1464;
    case 147u: goto L_001B146C;
    case 148u: goto L_001B1484;
    case 149u: goto L_001B14B0;
    case 150u: goto L_001B14E0;
    case 151u: goto L_001B1504;
    case 152u: goto L_001B1524;
    case 153u: goto L_001B153C;
    case 154u: goto L_001B154C;
    case 155u: goto L_001B1564;
    case 156u: goto L_001B1580;
    case 157u: goto L_001B15A8;
    case 158u: goto L_001B15B4;
    case 159u: goto L_001B15C0;
    case 160u: goto L_001B15E4;
    case 161u: goto L_001B15F4;
    case 162u: goto L_001B1600;
    case 163u: goto L_001B1610;
    case 164u: goto L_001B1630;
    case 165u: goto L_001B1658;
    case 166u: goto L_001B166C;
    case 167u: goto L_001B1680;
    case 168u: goto L_001B1690;
    case 169u: goto L_001B16A8;
    case 170u: goto L_001B16B8;
    case 171u: goto L_001B16D4;
    case 172u: goto L_001B16E4;
    case 173u: goto L_001B16F8;
    case 174u: goto L_001B170C;
    case 175u: goto L_001B1720;
    case 176u: goto L_001B1738;
    case 177u: goto L_001B1748;
    case 178u: goto L_001B175C;
    case 179u: goto L_001B1770;
    case 180u: goto L_001B1788;
    case 181u: goto L_001B17B0;
    case 182u: goto L_001B17F0;
    case 183u: goto L_001B1804;
    case 184u: goto L_001B1828;
    case 185u: goto L_001B1830;
    case 186u: goto L_001B1850;
    case 187u: goto L_001B1880;
    case 188u: goto L_001B18A8;
    case 189u: goto L_001B1910;
    case 190u: goto L_001B1934;
    case 191u: goto L_001B1954;
    case 192u: goto L_001B1970;
    case 193u: goto L_001B19A0;
    case 194u: goto L_001B19B8;
    case 195u: goto L_001B19D0;
    case 196u: goto L_001B19EC;
    case 197u: goto L_001B19F8;
    case 198u: goto L_001B1A04;
    case 199u: goto L_001B1A20;
    case 200u: goto L_001B1A30;
    case 201u: goto L_001B1A58;
    case 202u: goto L_001B1A9C;
    case 203u: goto L_001B1AC0;
    case 204u: goto L_001B1AF0;
    case 205u: goto L_001B1B08;
    case 206u: goto L_001B1B20;
    case 207u: goto L_001B1B60;
    case 208u: goto L_001B1B70;
    case 209u: goto L_001B1BB0;
    case 210u: goto L_001B1BC8;
    case 211u: goto L_001B1BD8;
    case 212u: goto L_001B1BF0;
    case 213u: goto L_001B1C2C;
    case 214u: goto L_001B1C7C;
    case 215u: goto L_001B1CB8;
    case 216u: goto L_001B1D1C;
    case 217u: goto L_001B1D24;
    case 218u: goto L_001B1D3C;
    case 219u: goto L_001B1D48;
    case 220u: goto L_001B1D50;
    case 221u: goto L_001B1D68;
    case 222u: goto L_001B1D74;
    case 223u: goto L_001B1D7C;
    case 224u: goto L_001B1D94;
    case 225u: goto L_001B1DA0;
    case 226u: goto L_001B1DA8;
    case 227u: goto L_001B1DC8;
    case 228u: goto L_001B1DD4;
    case 229u: goto L_001B1DDC;
    case 230u: goto L_001B1DF4;
    case 231u: goto L_001B1E00;
    case 232u: goto L_001B1E08;
    case 233u: goto L_001B1E28;
    case 234u: goto L_001B1E34;
    case 235u: goto L_001B1E3C;
    case 236u: goto L_001B1E54;
    case 237u: goto L_001B1E60;
    case 238u: goto L_001B1E68;
    case 239u: goto L_001B1E80;
    case 240u: goto L_001B1E8C;
    case 241u: goto L_001B1E94;
    case 242u: goto L_001B1EAC;
    case 243u: goto L_001B1EB8;
    case 244u: goto L_001B1EC0;
    case 245u: goto L_001B1ED8;
    case 246u: goto L_001B1EE4;
    case 247u: goto L_001B1EEC;
    case 248u: goto L_001B1F04;
    case 249u: goto L_001B1F10;
    case 250u: goto L_001B1F18;
    case 251u: goto L_001B1F30;
    case 252u: goto L_001B1F3C;
    case 253u: goto L_001B1F44;
    case 254u: goto L_001B1F5C;
    case 255u: goto L_001B1F68;
    case 256u: goto L_001B1F70;
    case 257u: goto L_001B1F88;
    case 258u: goto L_001B1F94;
    case 259u: goto L_001B1F9C;
    case 260u: goto L_001B1FB4;
    case 261u: goto L_001B1FC0;
    case 262u: goto L_001B1FC8;
    case 263u: goto L_001B1FE4;
    case 264u: goto L_001B1FF0;
    case 265u: goto L_001B1FF8;
    case 266u: goto L_001B2010;
    case 267u: goto L_001B201C;
    case 268u: goto L_001B2024;
    case 269u: goto L_001B203C;
    case 270u: goto L_001B2048;
    case 271u: goto L_001B2050;
    case 272u: goto L_001B2068;
    case 273u: goto L_001B2074;
    case 274u: goto L_001B207C;
    case 275u: goto L_001B2094;
    case 276u: goto L_001B20A0;
    case 277u: goto L_001B20A8;
    case 278u: goto L_001B20C0;
    case 279u: goto L_001B20CC;
    case 280u: goto L_001B20D4;
    case 281u: goto L_001B20EC;
    case 282u: goto L_001B20F8;
    case 283u: goto L_001B2100;
    case 284u: goto L_001B2118;
    case 285u: goto L_001B2124;
    case 286u: goto L_001B212C;
    case 287u: goto L_001B2144;
    case 288u: goto L_001B2150;
    case 289u: goto L_001B2158;
    case 290u: goto L_001B2170;
    case 291u: goto L_001B217C;
    case 292u: goto L_001B2184;
    case 293u: goto L_001B219C;
    case 294u: goto L_001B21A8;
    case 295u: goto L_001B21B0;
    case 296u: goto L_001B21C8;
    case 297u: goto L_001B21D4;
    case 298u: goto L_001B21DC;
    case 299u: goto L_001B21F4;
    case 300u: goto L_001B2200;
    case 301u: goto L_001B2208;
    case 302u: goto L_001B2220;
    case 303u: goto L_001B222C;
    case 304u: goto L_001B2234;
    case 305u: goto L_001B224C;
    case 306u: goto L_001B2258;
    case 307u: goto L_001B2260;
    case 308u: goto L_001B2278;
    case 309u: goto L_001B2284;
    case 310u: goto L_001B228C;
    case 311u: goto L_001B22A4;
    case 312u: goto L_001B22B0;
    case 313u: goto L_001B22B8;
    case 314u: goto L_001B22D0;
    case 315u: goto L_001B22DC;
    case 316u: goto L_001B22E4;
    case 317u: goto L_001B22FC;
    case 318u: goto L_001B2308;
    case 319u: goto L_001B2310;
    case 320u: goto L_001B2328;
    case 321u: goto L_001B2334;
    case 322u: goto L_001B233C;
    case 323u: goto L_001B2354;
    case 324u: goto L_001B2360;
    case 325u: goto L_001B2368;
    case 326u: goto L_001B2380;
    case 327u: goto L_001B238C;
    case 328u: goto L_001B2394;
    case 329u: goto L_001B23AC;
    case 330u: goto L_001B23B8;
    case 331u: goto L_001B23C0;
    case 332u: goto L_001B23D8;
    case 333u: goto L_001B23E4;
    case 334u: goto L_001B23EC;
    case 335u: goto L_001B2404;
    case 336u: goto L_001B2410;
    case 337u: goto L_001B2418;
    case 338u: goto L_001B2430;
    case 339u: goto L_001B243C;
    case 340u: goto L_001B2444;
    case 341u: goto L_001B245C;
    case 342u: goto L_001B2468;
    case 343u: goto L_001B2470;
    case 344u: goto L_001B2488;
    case 345u: goto L_001B2494;
    case 346u: goto L_001B249C;
    case 347u: goto L_001B24B4;
    case 348u: goto L_001B24BC;
    case 349u: goto L_001B24C4;
    case 350u: goto L_001B24DC;
    case 351u: goto L_001B24E4;
    case 352u: goto L_001B24EC;
    case 353u: goto L_001B2504;
    case 354u: goto L_001B2510;
    case 355u: goto L_001B2518;
    case 356u: goto L_001B2530;
    case 357u: goto L_001B253C;
    case 358u: goto L_001B2544;
    case 359u: goto L_001B255C;
    case 360u: goto L_001B2568;
    case 361u: goto L_001B2570;
    case 362u: goto L_001B2588;
    case 363u: goto L_001B2594;
    case 364u: goto L_001B259C;
    case 365u: goto L_001B25B4;
    case 366u: goto L_001B25C0;
    case 367u: goto L_001B25C8;
    case 368u: goto L_001B25E8;
    case 369u: goto L_001B25FC;
    case 370u: goto L_001B2618;
    case 371u: goto L_001B2630;
    case 372u: goto L_001B263C;
    case 373u: goto L_001B2644;
    case 374u: goto L_001B265C;
    case 375u: goto L_001B2668;
    case 376u: goto L_001B2684;
    case 377u: goto L_001B269C;
    case 378u: goto L_001B26A8;
    case 379u: goto L_001B26B0;
    case 380u: goto L_001B26C8;
    case 381u: goto L_001B26D4;
    case 382u: goto L_001B26F0;
    case 383u: goto L_001B2704;
    case 384u: goto L_001B270C;
    case 385u: goto L_001B2728;
    case 386u: goto L_001B2738;
    case 387u: goto L_001B274C;
    case 388u: goto L_001B2764;
    case 389u: goto L_001B2780;
    case 390u: goto L_001B278C;
    case 391u: goto L_001B27A8;
    case 392u: goto L_001B27BC;
    case 393u: goto L_001B27D0;
    case 394u: goto L_001B27E4;
    case 395u: goto L_001B27F8;
    case 396u: goto L_001B280C;
    case 397u: goto L_001B2820;
    case 398u: goto L_001B2834;
    case 399u: goto L_001B284C;
    case 400u: goto L_001B2868;
    case 401u: goto L_001B2874;
    case 402u: goto L_001B2890;
    case 403u: goto L_001B28A4;
    case 404u: goto L_001B28C0;
    case 405u: goto L_001B28CC;
    case 406u: goto L_001B28E8;
    case 407u: goto L_001B28F8;
    case 408u: goto L_001B290C;
    case 409u: goto L_001B2924;
    case 410u: goto L_001B2940;
    case 411u: goto L_001B294C;
    case 412u: goto L_001B2968;
    case 413u: goto L_001B297C;
    case 414u: goto L_001B2990;
    case 415u: goto L_001B29A4;
    case 416u: goto L_001B29B8;
    case 417u: goto L_001B29CC;
    case 418u: goto L_001B29E0;
    case 419u: goto L_001B29F4;
    case 420u: goto L_001B2A0C;
    case 421u: goto L_001B2A28;
    case 422u: goto L_001B2A34;
    case 423u: goto L_001B2A50;
    case 424u: goto L_001B2A64;
    case 425u: goto L_001B2A80;
    case 426u: goto L_001B2A8C;
    case 427u: goto L_001B2AA8;
    case 428u: goto L_001B2AC4;
    case 429u: goto L_001B2AD0;
    case 430u: goto L_001B2AD8;
    case 431u: goto L_001B2AF4;
    case 432u: goto L_001B2B00;
    case 433u: goto L_001B2B08;
    case 434u: goto L_001B2B24;
    case 435u: goto L_001B2B30;
    case 436u: goto L_001B2B38;
    case 437u: goto L_001B2B50;
    case 438u: goto L_001B2B5C;
    case 439u: goto L_001B2B64;
    case 440u: goto L_001B2B7C;
    case 441u: goto L_001B2B88;
    case 442u: goto L_001B2B90;
    case 443u: goto L_001B2BA8;
    case 444u: goto L_001B2BB4;
    case 445u: goto L_001B2BBC;
    case 446u: goto L_001B2BD4;
    case 447u: goto L_001B2BE0;
    case 448u: goto L_001B2BE8;
    case 449u: goto L_001B2C00;
    case 450u: goto L_001B2C0C;
    case 451u: goto L_001B2C18;
    case 452u: goto L_001B2C38;
    case 453u: goto L_001B2C50;
    case 454u: goto L_001B2C70;
    case 455u: goto L_001B2CA4;
    case 456u: goto L_001B2CC0;
    case 457u: goto L_001B2D70;
    case 458u: goto L_001B2DA0;
    case 459u: goto L_001B2DB8;
    case 460u: goto L_001B2DD0;
    case 461u: goto L_001B2DE8;
    case 462u: goto L_001B2E20;
    case 463u: goto L_001B2E6C;
    case 464u: goto L_001B2F6C;
    case 465u: goto L_001B2F80;
    case 466u: goto L_001B2FB0;
    case 467u: goto L_001B2FC8;
    case 468u: goto L_001B2FE0;
    case 469u: goto L_001B2FF0;
    case 470u: goto L_001B3004;
    case 471u: goto L_001B3010;
    case 472u: goto L_001B3038;
    case 473u: goto L_001B3054;
    case 474u: goto L_001B307C;
    case 475u: goto L_001B30C0;
    case 476u: goto L_001B30F0;
    case 477u: goto L_001B3108;
    case 478u: goto L_001B3120;
    case 479u: goto L_001B3188;
    case 480u: goto L_001B3198;
    case 481u: goto L_001B355C;
    case 482u: goto L_001B3588;
    case 483u: goto L_001B35B4;
    case 484u: goto L_001B35D8;
    case 485u: goto L_001B3604;
    case 486u: goto L_001B3634;
    case 487u: goto L_001B3664;
    case 488u: goto L_001B369C;
    case 489u: goto L_001B36D0;
    case 490u: goto L_001B3734;
    case 491u: goto L_001B3758;
    case 492u: goto L_001B3760;
    case 493u: goto L_001B376C;
    case 494u: goto L_001B37AC;
    case 495u: goto L_001B37D0;
    case 496u: goto L_001B37D8;
    case 497u: goto L_001B37E4;
    case 498u: goto L_001B3814;
    case 499u: goto L_001B3838;
    case 500u: goto L_001B3874;
    case 501u: goto L_001B3890;
    case 502u: goto L_001B38C0;
    case 503u: goto L_001B38F0;
    case 504u: goto L_001B390C;
    case 505u: goto L_001B3918;
    case 506u: goto L_001B3920;
    case 507u: goto L_001B3934;
    case 508u: goto L_001B3958;
    case 509u: goto L_001B3974;
    case 510u: goto L_001B3994;
    case 511u: goto L_001B39A8;
    case 512u: goto L_001B39CC;
    case 513u: goto L_001B3BD4;
    case 514u: goto L_001B3BF0;
    case 515u: goto L_001B3C78;
    case 516u: goto L_001B3D34;
    case 517u: goto L_001B3D68;
    case 518u: goto L_001B3D84;
    case 519u: goto L_001B3D9C;
    case 520u: goto L_001B3DB4;
    case 521u: goto L_001B3DBC;
    case 522u: goto L_001B3DC4;
    case 523u: goto L_001B3DD0;
    case 524u: goto L_001B3DE8;
    case 525u: goto L_001B3E08;
    case 526u: goto L_001B3E1C;
    case 527u: goto L_001B3E3C;
    case 528u: goto L_001B3E54;
    case 529u: goto L_001B3E70;
    case 530u: goto L_001B3E88;
    case 531u: goto L_001B3EAC;
    case 532u: goto L_001B3EE8;
    case 533u: goto L_001B3F00;
    case 534u: goto L_001B3F24;
    case 535u: goto L_001B3F70;
    case 536u: goto L_001B3F90;
    case 537u: goto L_001B3F9C;
    case 538u: goto L_001B3FE0;
    case 539u: goto L_001B3FFC;
    default: bad_entry(c, 0x001B0000u); return;
    }
L_001B0000:
    set32(c.r[2], ld32((c.r[1].w[0] + 16064u)));
    set32(c.r[6], c.r[6].w[0] + 16072u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001B0010:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 2;
L_001B0018:
    set32(c.r[2], ld32((c.r[1].w[0] + 16068u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001B0020:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0020u | kUnwind; return; } goto L_001B0020; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16104u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001B0050:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0050u | kUnwind; return; } goto L_001B0050; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_001B03D8; } }
L_001B0090:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00A0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001B00A0u) [[unlikely]] return; }
L_001B00A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00A8u);  if (depth < kMaxDepth) unit_002B(c, 117u, depth + 1u); else { c.pc = 0x001AD080u; return; } if (c.pc != 0x001B00A8u) [[unlikely]] return; }
L_001B00A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B00B0u);  if (depth < kMaxDepth) unit_002B(c, 85u, depth + 1u); else { c.pc = 0x001ACB80u; return; } if (c.pc != 0x001B00B0u) [[unlikely]] return; }
L_001B00B0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st32((c.r[29].w[0] + 224u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 33920ull;
    set32(c.r[9], c.r[29].w[0] + 180u);
    set32(c.r[2], 0u + 320u);
    set32(c.r[8], c.r[29].w[0] + 184u);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    set32(c.r[10], c.r[29].w[0] + 192u);
    set32(c.r[2], 0u + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16392u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[10], ld32((c.r[1].w[0] + 3840u)));
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 232u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 200u));
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16384u)));
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 216u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 236u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 201u));
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 252u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16388u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 63;
L_001B01AC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B01ACu | kUnwind; return; } goto L_001B01AC; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16424u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001B01DC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B01DCu | kUnwind; return; } goto L_001B01DC; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] + 16464u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_001B03D8; } }
L_001B024C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0254u); st32((c.r[29].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001B0254u) [[unlikely]] return; }
L_001B0254:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B0278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0268u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001B0268u) [[unlikely]] return; }
L_001B0268:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 34u));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B02F8; } }
L_001B0278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 16224u)));
    set32(c.r[6], c.r[6].w[0] + 16232u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 16228u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
L_001B02A0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B02A0u | kUnwind; return; } goto L_001B02A0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16264u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001B02D0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B02D0u | kUnwind; return; } goto L_001B02D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_001B0370; } }
L_001B02F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 16144u)));
    set32(c.r[6], c.r[6].w[0] + 16152u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 16148u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
L_001B031C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B031Cu | kUnwind; return; } goto L_001B031C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16184u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001B034C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B034Cu | kUnwind; return; } goto L_001B034C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_001B0370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] + 16464u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_001B03D8; } }
L_001B03D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001B03F8; } }
L_001B03D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_001B03EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00158C50u; return; } if (c.pc != 0x001B03E8u) [[unlikely]] return; }
L_001B03E8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_001B03EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B03F4u);  if (depth < kMaxDepth) unit_0016(c, 94u, depth + 1u); else { c.pc = 0x00158E70u; return; } if (c.pc != 0x001B03F4u) [[unlikely]] return; }
L_001B03F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001B03F8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_001B0420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    st32((c.r[1].w[0] + 6720u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[1].w[0] + 6728u), c.r[4].w[0]);  if (t) { goto L_001B0454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0454u);  if (depth < kMaxDepth) unit_0016(c, 114u, depth + 1u); else { c.pc = 0x00159110u; return; } if (c.pc != 0x001B0454u) [[unlikely]] return; }
L_001B0454:
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 4ull;  if (t) { goto L_001B046C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0468u);  if (depth < kMaxDepth) unit_0016(c, 104u, depth + 1u); else { c.pc = 0x00159000u; return; } if (c.pc != 0x001B0468u) [[unlikely]] return; }
L_001B0468:
    c.r[3].d[0] = c.r[16].d[0] & 4ull;
    c.budget -= 1;
L_001B046C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B047C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B047Cu);  if (depth < kMaxDepth) unit_0079(c, 36u, depth + 1u); else { c.pc = 0x002E4630u; return; } if (c.pc != 0x001B047Cu) [[unlikely]] return; }
L_001B047C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B04ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x001B04ACu) [[unlikely]] return; }
L_001B04AC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_001B050C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);  if (t) { goto L_001B04C4; } }
    breakpoint(c, 0x001B04C0u);
    c.budget -= 1;
L_001B04C4:
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 40u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[29].w[0] + 62u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    mmi::div(c, 0, c.r[16].w[0], c.r[4].w[0]);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.hi.d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 60u);  if (t) { goto L_001B0518; } }
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_001B0514; } }
L_001B050C:
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001B0514:
    set32(c.r[3], c.r[29].w[0] + 60u);
    c.budget -= 1;
L_001B0518:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x001B0554u) [[unlikely]] return; }
L_001B0554:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B057C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0568u);  if (depth < kMaxDepth) unit_002B(c, 272u, depth + 1u); else { c.pc = 0x001AE210u; return; } if (c.pc != 0x001B0568u) [[unlikely]] return; }
L_001B0568:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B0584; } }
L_001B057C:
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001B0584:
    set32(c.r[3], c.r[29].w[0] + 44u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B05B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x001B05CCu) [[unlikely]] return; }
L_001B05CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[17].sd[0] < 1000ll ? 1ull : 0ull;  if (t) { goto L_001B0634; } }
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B05E4u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002B(c, 347u, depth + 1u); else { c.pc = 0x001AE910u; return; } if (c.pc != 0x001B05E4u) [[unlikely]] return; }
L_001B05E4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 56u)));
    set32(c.r[6], c.r[29].w[0] + 62u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 58u)));
    set32(c.r[3], 0u - 1u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001B061C; } }
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B0624; } }
L_001B061C:
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001B0624:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B0658; } }
L_001B0634:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B064C; } }
    set32(c.r[3], 0u + 9u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001B0658; } }
L_001B064C:
    set32(c.r[3], 0u + 5u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001B0658:
    set32(c.r[3], c.r[29].w[0] + 60u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0680:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AB(c, 236u, depth); }
L_001B0690:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[4].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00AB(c, 236u, depth); }
L_001B06A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 10224u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001B06C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B06FC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10224u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_001B06F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B06F8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B06F8u) [[unlikely]] return; }
L_001B06F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B06FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001B0720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B073Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 37u, depth + 1u); else { c.pc = 0x001B06A0u; return; } if (c.pc != 0x001B073Cu) [[unlikely]] return; }
L_001B073C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] - 10272u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_001B0774; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B076Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 49u, depth + 1u); else { c.pc = 0x001B0820u; return; } if (c.pc != 0x001B076Cu) [[unlikely]] return; }
L_001B076C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B0790; } }
L_001B0774:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B078Cu); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_002C(c, 49u, depth + 1u); else { c.pc = 0x001B0820u; return; } if (c.pc != 0x001B078Cu) [[unlikely]] return; }
L_001B078C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B0790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B07B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B0804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10272u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07E0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0016(c, 138u, depth + 1u); else { c.pc = 0x00159430u; return; } if (c.pc != 0x001B07E0u) [[unlikely]] return; }
L_001B07E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B07ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 38u, depth + 1u); else { c.pc = 0x001B06C0u; return; } if (c.pc != 0x001B07ECu) [[unlikely]] return; }
L_001B07EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B0808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B0804u) [[unlikely]] return; }
L_001B0804:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B0808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0820:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001B0AB4; } }
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[4], 0u + 123u);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 11;
L_001B0858:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0858u | kUnwind; return; } goto L_001B0858; } }
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20800u);
    set32(c.r[8], c.r[4].w[0] << 2);
    set32(c.r[6], 0u + 6u);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    c.budget -= 16;
L_001B08B4:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B08B4u | kUnwind; return; } goto L_001B08B4; } }
    set32(c.r[9], ld32((c.r[29].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20848u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], 0u + 19u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20852u);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    c.budget -= 10;
L_001B08FC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B08FCu | kUnwind; return; } goto L_001B08FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + 20928u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    set32(c.r[9], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20932u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[9].w[0]), c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20936u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 15;
L_001B0954:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0954u | kUnwind; return; } goto L_001B0954; } }
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 20960u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + 20996u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[15], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20964u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[10].w[0] + 21004u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[3].w[0] + 20968u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], c.r[9].w[0] + 20988u);
    set32(c.r[3], c.r[3].w[0] + 20972u);
    set32(c.r[25], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], c.r[9].w[0] + 21000u);
    st32((c.r[11].w[0]), c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20976u);
    set32(c.r[16], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[14], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20980u);
    set32(c.r[13], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[9], c.r[9].w[0] + 21008u);
    set32(c.r[3], c.r[3].w[0] + 20984u);
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[16].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[10], c.r[10].w[0] + 21012u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[24], c.r[29].w[0] + 204u);
    set32(c.r[9], c.r[9].w[0] + 21016u);
    set32(c.r[11], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[29].w[0] + 232u);
    set32(c.r[8], 0u + 69u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.f[1] = ld32((c.r[24].w[0]));
    c.f[0] = ld32((c.r[24].w[0] + 4u));
    st32((c.r[25].w[0]), c.f[1]);
    st32((c.r[25].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[15].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[14].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[13].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[12].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[11].w[0]), c.r[3].w[0]);
    c.budget -= 73;
L_001B0A98:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0A98u | kUnwind; return; } goto L_001B0A98; } }
L_001B0AB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_001B0AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0AD0u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0016(c, 211u, depth + 1u); else { c.pc = 0x00159FC0u; return; } if (c.pc != 0x001B0AD0u) [[unlikely]] return; }
L_001B0AD0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_001B0B2C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001B0B24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B0B1C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B0B14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B0B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001B0B30; } }
L_001B0B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B0B30; } }
L_001B0B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001B0B30; } }
L_001B0B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001B0B30; } }
L_001B0B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001B0B30; } }
L_001B0B2C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001B0B30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B0B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B0B6Cu) [[unlikely]] return; }
L_001B0B6C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B0B84; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0B84u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0016(c, 212u, depth + 1u); else { c.pc = 0x00159FF0u; return; } if (c.pc != 0x001B0B84u) [[unlikely]] return; }
L_001B0B84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0BA0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001598B0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 159u, depth); }
L_001B0BB0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159A50u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 171u, depth); }
L_001B0BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0BE0u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002C(c, 32u, depth + 1u); else { c.pc = 0x001B05B0u; return; } if (c.pc != 0x001B0BE0u) [[unlikely]] return; }
L_001B0BE0:
    set32(c.r[2], c.r[29].w[0] + 56u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 62u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C0Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 166u, depth + 1u); else { c.pc = 0x00159980u; return; } if (c.pc != 0x001B0C0Cu) [[unlikely]] return; }
L_001B0C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0C20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159980u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 166u, depth); }
L_001B0C30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159430u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 138u, depth); }
L_001B0C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 37u, depth + 1u); else { c.pc = 0x001B06A0u; return; } if (c.pc != 0x001B0C54u) [[unlikely]] return; }
L_001B0C54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10320u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B0C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B0CD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CB0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0016(c, 121u, depth + 1u); else { c.pc = 0x001591E0u; return; } if (c.pc != 0x001B0CB0u) [[unlikely]] return; }
L_001B0CB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 38u, depth + 1u); else { c.pc = 0x001B06C0u; return; } if (c.pc != 0x001B0CBCu) [[unlikely]] return; }
L_001B0CBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B0CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0CD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B0CD4u) [[unlikely]] return; }
L_001B0CD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B0CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0CF0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001597E0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 153u, depth); }
L_001B0D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B0D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D24u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_002C(c, 27u, depth + 1u); else { c.pc = 0x001B0490u; return; } if (c.pc != 0x001B0D24u) [[unlikely]] return; }
L_001B0D24:
    set32(c.r[2], c.r[29].w[0] + 56u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 62u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D50u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 144u, depth + 1u); else { c.pc = 0x00159580u; return; } if (c.pc != 0x001B0D50u) [[unlikely]] return; }
L_001B0D50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0D8Cu); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_002C(c, 29u, depth + 1u); else { c.pc = 0x001B0540u; return; } if (c.pc != 0x001B0D8Cu) [[unlikely]] return; }
L_001B0D8C:
    set32(c.r[2], c.r[29].w[0] + 40u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 44u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 46u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 144u, depth + 1u); else { c.pc = 0x00159580u; return; } if (c.pc != 0x001B0DB8u) [[unlikely]] return; }
L_001B0DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B0DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0DE0u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0016(c, 210u, depth + 1u); else { c.pc = 0x00159FA0u; return; } if (c.pc != 0x001B0DE0u) [[unlikely]] return; }
L_001B0DE0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B0E3C; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_002C[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B0E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001B0E40; } }
L_001B0E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0E40; } }
L_001B0E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B0E40; } }
L_001B0E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001B0E40; } }
L_001B0E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001B0E40; } }
L_001B0E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001B0E40; } }
L_001B0E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001B0E40; } }
L_001B0E3C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_001B0E40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B0E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B0E84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25152u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B0E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0E84u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0016(c, 144u, depth + 1u); else { c.pc = 0x00159580u; return; } if (c.pc != 0x001B0E84u) [[unlikely]] return; }
L_001B0E84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B0E90:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159730u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 151u, depth); }
L_001B0EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B0EB0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001591E0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 121u, depth); }
L_001B0EC0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001B0ED8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B0EF0; } }
L_001B0ED8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001B0EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 9;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159220u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 123u, depth); }
L_001B0F20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159310u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 130u, depth); }
L_001B0F30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159350u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 132u, depth); }
L_001B0F40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159310u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 130u, depth); }
L_001B0F50:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159350u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 132u, depth); }
L_001B0F60:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00159390u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 134u, depth); }
L_001B0F70:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001593E0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 136u, depth); }
L_001B0F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FA4u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001B0FA4u) [[unlikely]] return; }
L_001B0FA4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B0FB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x001B0FB4u) [[unlikely]] return; }
L_001B0FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10384u);
    set32(c.r[3], c.r[3].w[0] - 10344u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B0FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B1070; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10384u);
    set32(c.r[2], c.r[2].w[0] - 10344u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B102Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0016(c, 121u, depth + 1u); else { c.pc = 0x001591E0u; return; } if (c.pc != 0x001B102Cu) [[unlikely]] return; }
L_001B102C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B1040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1040u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001B1040u) [[unlikely]] return; }
L_001B1040:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B104Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001B104Cu) [[unlikely]] return; }
L_001B104C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 70u, depth + 1u); else { c.pc = 0x001B0C80u; return; } if (c.pc != 0x001B1058u) [[unlikely]] return; }
L_001B1058:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B1074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B1070u) [[unlikely]] return; }
L_001B1070:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B1074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001B10B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B10B4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x00159490u; return; } if (c.pc != 0x001B10B4u) [[unlikely]] return; }
L_001B10B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B10C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001591E0u | kUnwind; return; } [[clang::musttail]] return unit_0016(c, 121u, depth); }
L_001B10D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1104u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001B1104u) [[unlikely]] return; }
L_001B1104:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1110u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x001B1110u) [[unlikely]] return; }
L_001B1110:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1124u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001B1124u) [[unlikely]] return; }
L_001B1124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B112Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001B112Cu) [[unlikely]] return; }
L_001B112C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B1150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0FF0u | kUnwind; return; } goto L_001B0FF0; }
L_001B1170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001B1190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B11E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B11C8u) [[unlikely]] return; }
L_001B11C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B11E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B11E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B11E0u) [[unlikely]] return; }
L_001B11E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B11E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B123Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001B123Cu) [[unlikely]] return; }
L_001B123C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10144u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B125Cu); st32((c.r[19].w[0] + 32u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001B125Cu) [[unlikely]] return; }
L_001B125C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B1280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B12C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001B12B0u) [[unlikely]] return; }
L_001B12B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B12CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B12C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B12C8u) [[unlikely]] return; }
L_001B12C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B12CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B12E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1318u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001B1318u) [[unlikely]] return; }
L_001B1318:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1330u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1330u) [[unlikely]] return; }
L_001B1330:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B134C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B134Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B134Cu) [[unlikely]] return; }
L_001B134C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1354u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001B1354u) [[unlikely]] return; }
L_001B1354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B1370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10176u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001B1390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B13CC; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10176u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001B13C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13C8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B13C8u) [[unlikely]] return; }
L_001B13C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B13CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B13E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B13FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001B13FCu) [[unlikely]] return; }
L_001B13FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B142Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001B142Cu) [[unlikely]] return; }
L_001B142C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B1440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B145Cu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_002C(c, 140u, depth + 1u); else { c.pc = 0x001B13E0u; return; } if (c.pc != 0x001B145Cu) [[unlikely]] return; }
L_001B145C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1464u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0018(c, 142u, depth + 1u); else { c.pc = 0x00163560u; return; } if (c.pc != 0x001B1464u) [[unlikely]] return; }
L_001B1464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B146Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B146Cu) [[unlikely]] return; }
L_001B146C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001B1484; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1484u); set32(c.r[6], c.r[6].w[0] + 17600u);  if (depth < kMaxDepth) unit_002C(c, 189u, depth + 1u); else { c.pc = 0x001B1910u; return; } if (c.pc != 0x001B1484u) [[unlikely]] return; }
L_001B1484:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B14B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B1564; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_001B14E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B14E0u);  if (depth < kMaxDepth) unit_0011(c, 179u, depth + 1u); else { c.pc = 0x00146C60u; return; } if (c.pc != 0x001B14E0u) [[unlikely]] return; }
L_001B14E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B1504; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B1504; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1504u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1504u) [[unlikely]] return; }
L_001B1504:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B1524; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_001B1524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1524u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001B1524u) [[unlikely]] return; }
L_001B1524:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B153C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B153Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001B153Cu) [[unlikely]] return; }
L_001B153C:
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B154Cu); st32((c.r[17].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0018(c, 144u, depth + 1u); else { c.pc = 0x001635B0u; return; } if (c.pc != 0x001B154Cu) [[unlikely]] return; }
L_001B154C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B1568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1564u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B1564u) [[unlikely]] return; }
L_001B1564:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B1568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15A8u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x001B15A8u) [[unlikely]] return; }
L_001B15A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 164u, depth + 1u); else { c.pc = 0x001B1630u; return; } if (c.pc != 0x001B15B4u) [[unlikely]] return; }
L_001B15B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 181u, depth + 1u); else { c.pc = 0x001B17B0u; return; } if (c.pc != 0x001B15C0u) [[unlikely]] return; }
L_001B15C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B15E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B15E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B15E4u) [[unlikely]] return; }
L_001B15E4:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B15F4u); set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));  if (depth < kMaxDepth) unit_0024(c, 176u, depth + 1u); else { c.pc = 0x001914D0u; return; } if (c.pc != 0x001B15F4u) [[unlikely]] return; }
L_001B15F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1600u); set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));  if (depth < kMaxDepth) unit_0025(c, 410u, depth + 1u); else { c.pc = 0x00197D40u; return; } if (c.pc != 0x001B1600u) [[unlikely]] return; }
L_001B1600:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1610u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001B1610u) [[unlikely]] return; }
L_001B1610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B1630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1658u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 186u, depth + 1u); else { c.pc = 0x001B1850u; return; } if (c.pc != 0x001B1658u) [[unlikely]] return; }
L_001B1658:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B166Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B166Cu) [[unlikely]] return; }
L_001B166C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x001B1680u) [[unlikely]] return; }
L_001B1680:
    set32(c.r[2], c.r[16].w[0] + 10u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1690u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B1690u) [[unlikely]] return; }
L_001B1690:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B16A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16A8u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001B16A8u) [[unlikely]] return; }
L_001B16A8:
    set32(c.r[19], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16B8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001B16B8u) [[unlikely]] return; }
L_001B16B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5136u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16D4u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x001B16D4u) [[unlikely]] return; }
L_001B16D4:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16E4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001B16E4u) [[unlikely]] return; }
L_001B16E4:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B16F8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B16F8u) [[unlikely]] return; }
L_001B16F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B170C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B170Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x001B170Cu) [[unlikely]] return; }
L_001B170C:
    set32(c.r[19], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B1720u) [[unlikely]] return; }
L_001B1720:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001B1738; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001B1738u) [[unlikely]] return; }
L_001B1738:
    set32(c.r[2], c.r[16].w[0] + 30u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1748u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B1748u) [[unlikely]] return; }
L_001B1748:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B175C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B175Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 144u, depth + 1u); else { c.pc = 0x0015DB40u; return; } if (c.pc != 0x001B175Cu) [[unlikely]] return; }
L_001B175C:
    set32(c.r[18], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[16].w[0] + 30u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B1770u) [[unlikely]] return; }
L_001B1770:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B1788; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1788u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001B1788u) [[unlikely]] return; }
L_001B1788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B17B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B17E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(101ll);  if (t) { goto L_001B17E8; } }
L_001B17E0:
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(100ll);
    c.budget -= 2;
L_001B17E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B17F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001B17F0u) [[unlikely]] return; }
L_001B17F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B180C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1804u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x001B1804u) [[unlikely]] return; }
L_001B1804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_001B1814; } }
L_001B180C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_001B1814:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1828u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1828u) [[unlikely]] return; }
L_001B1828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x001B1830u) [[unlikely]] return; }
L_001B1830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1850:
    c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 37ll ? 1ull : 0ull;  if (t) { goto L_001B1864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B1874; } }
L_001B1864:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 29u);  if (t) { goto L_001B1874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B1874; } }
L_001B1874:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1880:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[10], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_001B18FC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B18FC; } }
    st32((c.r[6].w[0]), 0u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_001B18F0; } }
L_001B18A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[9], c.r[11].w[0] << 3);
    set32(c.r[8], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_001B18E4; } }
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[9].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_001B18FC; } }
L_001B18E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B18FC; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_001B18F0:
    c.r[3].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B18A8u | kUnwind; return; } goto L_001B18A8; } }
L_001B18FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1934u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x001B1934u) [[unlikely]] return; }
L_001B1934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10096u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1954u); st32((c.r[18].w[0] + 32u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x001B1954u) [[unlikely]] return; }
L_001B1954:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B1970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B19B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19A0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001B19A0u) [[unlikely]] return; }
L_001B19A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B19BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B19B8u) [[unlikely]] return; }
L_001B19B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B19BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B19D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19ECu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001B19ECu) [[unlikely]] return; }
L_001B19EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B19F8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002C(c, 156u, depth + 1u); else { c.pc = 0x001B1580u; return; } if (c.pc != 0x001B19F8u) [[unlikely]] return; }
L_001B19F8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001B1A04u) [[unlikely]] return; }
L_001B1A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_001B1A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A58u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 418u, depth + 1u); else { c.pc = 0x00197EE0u; return; } if (c.pc != 0x001B1A58u) [[unlikely]] return; }
L_001B1A58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[16].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 10016u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1A9Cu); set32(c.r[5], c.r[2].w[0] - 1000u);  if (depth < kMaxDepth) unit_002C(c, 206u, depth + 1u); else { c.pc = 0x001B1B20u; return; } if (c.pc != 0x001B1A9Cu) [[unlikely]] return; }
L_001B1A9C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B1AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B1B08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1AF0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 420u, depth + 1u); else { c.pc = 0x00197F70u; return; } if (c.pc != 0x001B1AF0u) [[unlikely]] return; }
L_001B1AF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B1B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1B08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B1B08u) [[unlikely]] return; }
L_001B1B08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B1B0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B1B20:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001B1B50; } }
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2072u)));
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4072u)));
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 10;
L_001B1B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B1B60:
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 3;
    { set32(c.r[7], c.r[4].w[0] + 32u);  goto L_001B1B70; }
L_001B1B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BB0u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x001B1BB0u) [[unlikely]] return; }
L_001B1BB0:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BC8u); set32(c.r[6], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1BC8u) [[unlikely]] return; }
L_001B1BC8:
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B1BD8u) [[unlikely]] return; }
L_001B1BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B1BF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 88u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[19].w[0] + 2020u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C2Cu); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_002C(c, 187u, depth + 1u); else { c.pc = 0x001B1880u; return; } if (c.pc != 0x001B1C2Cu) [[unlikely]] return; }
L_001B1C2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2C54; } }
L_001B1C40:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2C54; } }
L_001B1C54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B1CE8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1C7Cu); set32(c.r[7], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_002C(c, 456u, depth + 1u); else { c.pc = 0x001B2CC0u; return; } if (c.pc != 0x001B1C7Cu) [[unlikely]] return; }
L_001B1C7C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B1C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2C54; } }
L_001B1C90:
    set32(c.r[3], ld32((c.r[19].w[0] + 6132u)));
    set32(c.r[2], 0u + 2600u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B1CE8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 2u);
    set32(c.r[5], c.r[5].w[0] + 28352u);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 6;
L_001B1CB8:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001B1CD8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B1CD8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B1CB8u | kUnwind; return; } goto L_001B1CB8; } }
L_001B1CE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(96ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_001B2C10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001B0000u < 16384u) { entry = entries_002C[(t - 0x001B0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B1D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D24u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1D24u) [[unlikely]] return; }
L_001B1D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1D40; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 435u, depth + 1u); else { c.pc = 0x0037B840u; return; } if (c.pc != 0x001B1D3Cu) [[unlikely]] return; }
L_001B1D3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D50u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1D50u) [[unlikely]] return; }
L_001B1D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1D6C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 252u, depth + 1u); else { c.pc = 0x0029A9F0u; return; } if (c.pc != 0x001B1D68u) [[unlikely]] return; }
L_001B1D68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D7Cu); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1D7Cu) [[unlikely]] return; }
L_001B1D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1D98; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1D94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 281u, depth + 1u); else { c.pc = 0x001A76E0u; return; } if (c.pc != 0x001B1D94u) [[unlikely]] return; }
L_001B1D94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DA8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1DA8u) [[unlikely]] return; }
L_001B1DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1DCC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DC8u); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x001B1DC8u) [[unlikely]] return; }
L_001B1DC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DDCu); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1DDCu) [[unlikely]] return; }
L_001B1DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1DF8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1DF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 157u, depth + 1u); else { c.pc = 0x0023E1E0u; return; } if (c.pc != 0x001B1DF4u) [[unlikely]] return; }
L_001B1DF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E08u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1E08u) [[unlikely]] return; }
L_001B1E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1E2C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E28u); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x001B1E28u) [[unlikely]] return; }
L_001B1E28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E3Cu); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1E3Cu) [[unlikely]] return; }
L_001B1E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1E58; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 185u, depth + 1u); else { c.pc = 0x00299E30u; return; } if (c.pc != 0x001B1E54u) [[unlikely]] return; }
L_001B1E54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E68u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1E68u) [[unlikely]] return; }
L_001B1E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1E84; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 299u, depth + 1u); else { c.pc = 0x002D7D10u; return; } if (c.pc != 0x001B1E80u) [[unlikely]] return; }
L_001B1E80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1E94u); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1E94u) [[unlikely]] return; }
L_001B1E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1EB0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 97u, depth + 1u); else { c.pc = 0x0029DF40u; return; } if (c.pc != 0x001B1EACu) [[unlikely]] return; }
L_001B1EAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EC0u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1EC0u) [[unlikely]] return; }
L_001B1EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1EDC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1ED8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 233u, depth + 1u); else { c.pc = 0x0029F9A0u; return; } if (c.pc != 0x001B1ED8u) [[unlikely]] return; }
L_001B1ED8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1EECu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1EECu) [[unlikely]] return; }
L_001B1EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1F08; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F04u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 245u, depth + 1u); else { c.pc = 0x002B2BD0u; return; } if (c.pc != 0x001B1F04u) [[unlikely]] return; }
L_001B1F04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F18u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1F18u) [[unlikely]] return; }
L_001B1F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1F34; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 281u, depth + 1u); else { c.pc = 0x002B3180u; return; } if (c.pc != 0x001B1F30u) [[unlikely]] return; }
L_001B1F30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F44u); set32(c.r[4], 0u + 3056u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1F44u) [[unlikely]] return; }
L_001B1F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1F60; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 342u, depth + 1u); else { c.pc = 0x002DFA80u; return; } if (c.pc != 0x001B1F5Cu) [[unlikely]] return; }
L_001B1F5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F70u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1F70u) [[unlikely]] return; }
L_001B1F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1F8C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 235u, depth + 1u); else { c.pc = 0x002D72D0u; return; } if (c.pc != 0x001B1F88u) [[unlikely]] return; }
L_001B1F88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1F9Cu); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1F9Cu) [[unlikely]] return; }
L_001B1F9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1FB8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 46u, depth + 1u); else { c.pc = 0x002E0810u; return; } if (c.pc != 0x001B1FB4u) [[unlikely]] return; }
L_001B1FB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FC8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1FC8u) [[unlikely]] return; }
L_001B1FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B1FE8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 25u, depth + 1u); else { c.pc = 0x002E03E0u; return; } if (c.pc != 0x001B1FE4u) [[unlikely]] return; }
L_001B1FE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B1FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B1FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B1FF8u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B1FF8u) [[unlikely]] return; }
L_001B1FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2014; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2010u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 97u, depth + 1u); else { c.pc = 0x002E51F0u; return; } if (c.pc != 0x001B2010u) [[unlikely]] return; }
L_001B2010:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B201C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2024u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2024u) [[unlikely]] return; }
L_001B2024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2040; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B203Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 25u, depth + 1u); else { c.pc = 0x002B4310u; return; } if (c.pc != 0x001B203Cu) [[unlikely]] return; }
L_001B203C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2050u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2050u) [[unlikely]] return; }
L_001B2050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B206C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2068u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 56u, depth + 1u); else { c.pc = 0x002B4A00u; return; } if (c.pc != 0x001B2068u) [[unlikely]] return; }
L_001B2068:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B206C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B207Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B207Cu) [[unlikely]] return; }
L_001B207C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2098; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2094u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 355u, depth + 1u); else { c.pc = 0x002B3D50u; return; } if (c.pc != 0x001B2094u) [[unlikely]] return; }
L_001B2094:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B20A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20A8u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B20A8u) [[unlikely]] return; }
L_001B20A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B20C4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 294u, depth + 1u); else { c.pc = 0x002B3350u; return; } if (c.pc != 0x001B20C0u) [[unlikely]] return; }
L_001B20C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B20C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B20CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20D4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B20D4u) [[unlikely]] return; }
L_001B20D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B20F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B20ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 90u, depth + 1u); else { c.pc = 0x002F0F40u; return; } if (c.pc != 0x001B20ECu) [[unlikely]] return; }
L_001B20EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B20F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B20F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2100u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2100u) [[unlikely]] return; }
L_001B2100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B211C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2118u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 146u, depth + 1u); else { c.pc = 0x002F1A80u; return; } if (c.pc != 0x001B2118u) [[unlikely]] return; }
L_001B2118:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B211C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B212Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B212Cu) [[unlikely]] return; }
L_001B212C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2148; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 225u, depth + 1u); else { c.pc = 0x002F24D0u; return; } if (c.pc != 0x001B2144u) [[unlikely]] return; }
L_001B2144:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2158u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2158u) [[unlikely]] return; }
L_001B2158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2174; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2170u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 275u, depth + 1u); else { c.pc = 0x002D79E0u; return; } if (c.pc != 0x001B2170u) [[unlikely]] return; }
L_001B2170:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B217C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2184u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2184u) [[unlikely]] return; }
L_001B2184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B21A0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B219Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 326u, depth + 1u); else { c.pc = 0x002FE620u; return; } if (c.pc != 0x001B219Cu) [[unlikely]] return; }
L_001B219C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B21A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B21A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21B0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B21B0u) [[unlikely]] return; }
L_001B21B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B21CC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 373u, depth + 1u); else { c.pc = 0x002FEC20u; return; } if (c.pc != 0x001B21C8u) [[unlikely]] return; }
L_001B21C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B21CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B21D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21DCu); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B21DCu) [[unlikely]] return; }
L_001B21DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B21F8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B21F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 393u, depth + 1u); else { c.pc = 0x002FEEB0u; return; } if (c.pc != 0x001B21F4u) [[unlikely]] return; }
L_001B21F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B21F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2208u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2208u) [[unlikely]] return; }
L_001B2208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2224; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2220u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 219u, depth + 1u); else { c.pc = 0x0029A450u; return; } if (c.pc != 0x001B2220u) [[unlikely]] return; }
L_001B2220:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B222C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2234u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2234u) [[unlikely]] return; }
L_001B2234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2250; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B224Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 227u, depth + 1u); else { c.pc = 0x0029A5B0u; return; } if (c.pc != 0x001B224Cu) [[unlikely]] return; }
L_001B224C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2260u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2260u) [[unlikely]] return; }
L_001B2260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B227C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2278u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 96u, depth + 1u); else { c.pc = 0x0026CCE0u; return; } if (c.pc != 0x001B2278u) [[unlikely]] return; }
L_001B2278:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B227C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B228Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B228Cu) [[unlikely]] return; }
L_001B228C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B22A8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 233u, depth + 1u); else { c.pc = 0x0026DCF0u; return; } if (c.pc != 0x001B22A4u) [[unlikely]] return; }
L_001B22A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B22A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B22B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22B8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B22B8u) [[unlikely]] return; }
L_001B22B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B22D4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 22u, depth + 1u); else { c.pc = 0x0026C440u; return; } if (c.pc != 0x001B22D0u) [[unlikely]] return; }
L_001B22D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B22D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B22DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22E4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B22E4u) [[unlikely]] return; }
L_001B22E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2300; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B22FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 220u, depth + 1u); else { c.pc = 0x0026DB70u; return; } if (c.pc != 0x001B22FCu) [[unlikely]] return; }
L_001B22FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2310u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2310u) [[unlikely]] return; }
L_001B2310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B232C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2328u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 84u, depth + 1u); else { c.pc = 0x002A53D0u; return; } if (c.pc != 0x001B2328u) [[unlikely]] return; }
L_001B2328:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B232C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B233Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B233Cu) [[unlikely]] return; }
L_001B233C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2358; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2354u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 255u, depth + 1u); else { c.pc = 0x002CE790u; return; } if (c.pc != 0x001B2354u) [[unlikely]] return; }
L_001B2354:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2368u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2368u) [[unlikely]] return; }
L_001B2368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2384; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2380u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 276u, depth + 1u); else { c.pc = 0x002CE9C0u; return; } if (c.pc != 0x001B2380u) [[unlikely]] return; }
L_001B2380:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B238C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2394u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2394u) [[unlikely]] return; }
L_001B2394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B23B0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 171u, depth + 1u); else { c.pc = 0x002A6010u; return; } if (c.pc != 0x001B23ACu) [[unlikely]] return; }
L_001B23AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B23B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B23B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23C0u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B23C0u) [[unlikely]] return; }
L_001B23C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B23DC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 129u, depth + 1u); else { c.pc = 0x002A5B40u; return; } if (c.pc != 0x001B23D8u) [[unlikely]] return; }
L_001B23D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B23DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B23E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B23ECu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B23ECu) [[unlikely]] return; }
L_001B23EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2408; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 220u, depth + 1u); else { c.pc = 0x002A6510u; return; } if (c.pc != 0x001B2404u) [[unlikely]] return; }
L_001B2404:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2418u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2418u) [[unlikely]] return; }
L_001B2418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2434; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2430u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 290u, depth + 1u); else { c.pc = 0x002CA7C0u; return; } if (c.pc != 0x001B2430u) [[unlikely]] return; }
L_001B2430:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B243C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2444u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2444u) [[unlikely]] return; }
L_001B2444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2460; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B245Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 12u, depth + 1u); else { c.pc = 0x002D82E0u; return; } if (c.pc != 0x001B245Cu) [[unlikely]] return; }
L_001B245C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2470u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2470u) [[unlikely]] return; }
L_001B2470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B248C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2488u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 143u, depth + 1u); else { c.pc = 0x002D93F0u; return; } if (c.pc != 0x001B2488u) [[unlikely]] return; }
L_001B2488:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B248C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B249Cu); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B249Cu) [[unlikely]] return; }
L_001B249C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2C3C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 320u, depth + 1u); else { c.pc = 0x002CF050u; return; } if (c.pc != 0x001B24B4u) [[unlikely]] return; }
L_001B24B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B24BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24C4u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B24C4u) [[unlikely]] return; }
L_001B24C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2C3C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 331u, depth + 1u); else { c.pc = 0x002CF200u; return; } if (c.pc != 0x001B24DCu) [[unlikely]] return; }
L_001B24DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B24E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B24ECu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B24ECu) [[unlikely]] return; }
L_001B24EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2508; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2504u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 281u, depth + 1u); else { c.pc = 0x002A6F90u; return; } if (c.pc != 0x001B2504u) [[unlikely]] return; }
L_001B2504:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2518u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2518u) [[unlikely]] return; }
L_001B2518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2534; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2530u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 2u, depth + 1u); else { c.pc = 0x002EC010u; return; } if (c.pc != 0x001B2530u) [[unlikely]] return; }
L_001B2530:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B253C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2544u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2544u) [[unlikely]] return; }
L_001B2544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2560; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B255Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 49u, depth + 1u); else { c.pc = 0x002D8880u; return; } if (c.pc != 0x001B255Cu) [[unlikely]] return; }
L_001B255C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2570u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2570u) [[unlikely]] return; }
L_001B2570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B258C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2588u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 96u, depth + 1u); else { c.pc = 0x002D8EE0u; return; } if (c.pc != 0x001B2588u) [[unlikely]] return; }
L_001B2588:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B258C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B259Cu); set32(c.r[4], 0u + 544u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B259Cu) [[unlikely]] return; }
L_001B259C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B25B8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 36u, depth + 1u); else { c.pc = 0x002F0700u; return; } if (c.pc != 0x001B25B4u) [[unlikely]] return; }
L_001B25B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B25B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B25C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25C8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B25C8u) [[unlikely]] return; }
L_001B25C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2C3C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B25E8u); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x001B25E8u) [[unlikely]] return; }
L_001B25E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10080u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B25FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2618u); set32(c.r[4], 0u + 2000u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2618u) [[unlikely]] return; }
L_001B2618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2634; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 252u, depth + 1u); else { c.pc = 0x002FB930u; return; } if (c.pc != 0x001B2630u) [[unlikely]] return; }
L_001B2630:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B263C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2644u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2644u) [[unlikely]] return; }
L_001B2644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2660; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B265Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D8B20u; return; } if (c.pc != 0x001B265Cu) [[unlikely]] return; }
L_001B265C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2684u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2684u) [[unlikely]] return; }
L_001B2684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B26A0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B269Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 74u, depth + 1u); else { c.pc = 0x002FCBD0u; return; } if (c.pc != 0x001B269Cu) [[unlikely]] return; }
L_001B269C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B26A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B26A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26B0u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B26B0u) [[unlikely]] return; }
L_001B26B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B26CC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 109u, depth + 1u); else { c.pc = 0x00310DF0u; return; } if (c.pc != 0x001B26C8u) [[unlikely]] return; }
L_001B26C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B26CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B26D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B26F0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B26F0u) [[unlikely]] return; }
L_001B26F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B2C3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2704u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 14u, depth + 1u); else { c.pc = 0x00228150u; return; } if (c.pc != 0x001B2704u) [[unlikely]] return; }
L_001B2704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B270C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2728u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2728u) [[unlikely]] return; }
L_001B2728:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B2744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2738u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2738u) [[unlikely]] return; }
L_001B2738:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001B275C; } }
L_001B2744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B274Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B274Cu) [[unlikely]] return; }
L_001B274C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B2C3C; } }
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_001B275C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2764u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2764u) [[unlikely]] return; }
L_001B2764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2784; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2780u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 312u, depth + 1u); else { c.pc = 0x002CAA80u; return; } if (c.pc != 0x001B2780u) [[unlikely]] return; }
L_001B2780:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B278C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27A8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B27A8u) [[unlikely]] return; }
L_001B27A8:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B27C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27BCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B27BCu) [[unlikely]] return; }
L_001B27BC:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001B2844; } }
L_001B27C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27D0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B27D0u) [[unlikely]] return; }
L_001B27D0:
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B27F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27E4u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B27E4u) [[unlikely]] return; }
L_001B27E4:
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B2840; } }
L_001B27F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B27F8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B27F8u) [[unlikely]] return; }
L_001B27F8:
    c.r[2].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B280Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B280Cu) [[unlikely]] return; }
L_001B280C:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B2840; } }
L_001B2818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2820u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2820u) [[unlikely]] return; }
L_001B2820:
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2834u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2834u) [[unlikely]] return; }
L_001B2834:
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2840:
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_001B2844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B284Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B284Cu) [[unlikely]] return; }
L_001B284C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B286C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2868u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 312u, depth + 1u); else { c.pc = 0x002CAA80u; return; } if (c.pc != 0x001B2868u) [[unlikely]] return; }
L_001B2868:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B286C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2874:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2890u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2890u) [[unlikely]] return; }
L_001B2890:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28A4u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B28A4u) [[unlikely]] return; }
L_001B28A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B28C4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 312u, depth + 1u); else { c.pc = 0x002CAA80u; return; } if (c.pc != 0x001B28C0u) [[unlikely]] return; }
L_001B28C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B28C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B28CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28E8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B28E8u) [[unlikely]] return; }
L_001B28E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B2904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B28F8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B28F8u) [[unlikely]] return; }
L_001B28F8:
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001B291C; } }
L_001B2904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B290Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B290Cu) [[unlikely]] return; }
L_001B290C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B2C3C; } }
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_001B291C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2924u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2924u) [[unlikely]] return; }
L_001B2924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2944; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2940u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 347u, depth + 1u); else { c.pc = 0x002CB190u; return; } if (c.pc != 0x001B2940u) [[unlikely]] return; }
L_001B2940:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B294C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2968u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2968u) [[unlikely]] return; }
L_001B2968:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B297Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B297Cu) [[unlikely]] return; }
L_001B297C:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 144u);  if (t) { goto L_001B2A04; } }
L_001B2988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2990u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2990u) [[unlikely]] return; }
L_001B2990:
    c.r[2].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B29B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29A4u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B29A4u) [[unlikely]] return; }
L_001B29A4:
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B2A00; } }
L_001B29B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29B8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B29B8u) [[unlikely]] return; }
L_001B29B8:
    c.r[2].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B29D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29CCu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B29CCu) [[unlikely]] return; }
L_001B29CC:
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001B2A00; } }
L_001B29D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29E0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B29E0u) [[unlikely]] return; }
L_001B29E0:
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B29F4u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B29F4u) [[unlikely]] return; }
L_001B29F4:
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2A00:
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_001B2A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A0Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2A0Cu) [[unlikely]] return; }
L_001B2A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2A2C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 347u, depth + 1u); else { c.pc = 0x002CB190u; return; } if (c.pc != 0x001B2A28u) [[unlikely]] return; }
L_001B2A28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2A34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A50u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001B2A50u) [[unlikely]] return; }
L_001B2A50:
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A64u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2A64u) [[unlikely]] return; }
L_001B2A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2A84; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2A80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 347u, depth + 1u); else { c.pc = 0x002CB190u; return; } if (c.pc != 0x001B2A80u) [[unlikely]] return; }
L_001B2A80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2A8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AA8u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2AA8u) [[unlikely]] return; }
L_001B2AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2AC8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 352u, depth + 1u); else { c.pc = 0x002CB2A0u; return; } if (c.pc != 0x001B2AC4u) [[unlikely]] return; }
L_001B2AC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AD8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2AD8u) [[unlikely]] return; }
L_001B2AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2AF8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2AF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 510u, depth + 1u); else { c.pc = 0x002EBD70u; return; } if (c.pc != 0x001B2AF4u) [[unlikely]] return; }
L_001B2AF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B08u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2B08u) [[unlikely]] return; }
L_001B2B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2B28; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 312u, depth + 1u); else { c.pc = 0x0037EA40u; return; } if (c.pc != 0x001B2B24u) [[unlikely]] return; }
L_001B2B24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B38u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2B38u) [[unlikely]] return; }
L_001B2B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2B54; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 227u, depth + 1u); else { c.pc = 0x0038E410u; return; } if (c.pc != 0x001B2B50u) [[unlikely]] return; }
L_001B2B50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B64u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2B64u) [[unlikely]] return; }
L_001B2B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2B80; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 423u, depth + 1u); else { c.pc = 0x002FF220u; return; } if (c.pc != 0x001B2B7Cu) [[unlikely]] return; }
L_001B2B7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2B90u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2B90u) [[unlikely]] return; }
L_001B2B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2BAC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 264u, depth + 1u); else { c.pc = 0x0029AC30u; return; } if (c.pc != 0x001B2BA8u) [[unlikely]] return; }
L_001B2BA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BBCu); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2BBCu) [[unlikely]] return; }
L_001B2BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2BD8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 268u, depth + 1u); else { c.pc = 0x0026E160u; return; } if (c.pc != 0x001B2BD4u) [[unlikely]] return; }
L_001B2BD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2BE8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2BE8u) [[unlikely]] return; }
L_001B2BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2C04; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 33u, depth + 1u); else { c.pc = 0x003985D0u; return; } if (c.pc != 0x001B2C00u) [[unlikely]] return; }
L_001B2C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2C3C; } }
L_001B2C0C:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_001B2C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2C18u) [[unlikely]] return; }
L_001B2C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B2C3C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C38u); c.r[7].d[0] = c.r[2].d[0] | 16970ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x001B2C38u) [[unlikely]] return; }
L_001B2C38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B2C3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2C54; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2C50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 422u, depth + 1u); else { c.pc = 0x00197FC0u; return; } if (c.pc != 0x001B2C50u) [[unlikely]] return; }
L_001B2C50:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B2C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B2C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001B2CB0; } }
L_001B2C90:
    set32(c.r[4], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B2CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2CA4u);  if (depth < kMaxDepth) unit_0019(c, 312u, depth + 1u); else { c.pc = 0x00167330u; return; } if (c.pc != 0x001B2CA4u) [[unlikely]] return; }
L_001B2CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001B2CB0; } }
L_001B2CAC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001B2CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B2CC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 6132u)));
    set32(c.r[2], 0u + 4244u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 415u);  if (t) { goto L_001B2CE8; } }
    set32(c.r[2], 0u + 4344u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2979u);  if (t) { goto L_001B2CE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B2D08; } }
L_001B2CE4:
    set32(c.r[2], 0u + 415u);
    c.budget -= 1;
L_001B2CE8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 425u);  if (t) { goto L_001B2CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2D5C; } }
L_001B2CF8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B2D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2D5C; } }
L_001B2D08:
    set32(c.r[2], 0u + 2514u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 310u);  if (t) { goto L_001B2D24; } }
    set32(c.r[2], 0u + 2516u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B2D5C; } }
    set32(c.r[2], 0u + 310u);
    c.budget -= 1;
L_001B2D24:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 318u);  if (t) { goto L_001B2D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2D5C; } }
L_001B2D34:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B2D44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2D5C; } }
L_001B2D44:
    set32(c.r[2], 0u + 340u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B2D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B2D5C; } }
L_001B2D58:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B2D5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B2D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B2DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DA0u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x001B2DA0u) [[unlikely]] return; }
L_001B2DA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B2DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B2DB8u) [[unlikely]] return; }
L_001B2DB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B2DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B2DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2DE8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001B2DE8u) [[unlikely]] return; }
L_001B2DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] - 9936u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B2E20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 10128u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2E6Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0011(c, 12u, depth + 1u); else { c.pc = 0x001442A0u; return; } if (c.pc != 0x001B2E6Cu) [[unlikely]] return; }
L_001B2E6C:
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[1] = ld32((c.r[1].w[0] + 10112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 31840u);
    set32(c.r[5], c.r[5].w[0] + 31840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[1].w[0] + 10104u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 10120u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 57;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B2F6C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001B2F6C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2F6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B2F6Cu) [[unlikely]] return; }
L_001B2F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B2F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B2FC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FB0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001B2FB0u) [[unlikely]] return; }
L_001B2FB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B2FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B2FC8u) [[unlikely]] return; }
L_001B2FC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B2FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B2FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B2FF0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B2FF0u) [[unlikely]] return; }
L_001B2FF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B3004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3004u);  if (depth < kMaxDepth) unit_002C(c, 460u, depth + 1u); else { c.pc = 0x001B2DD0u; return; } if (c.pc != 0x001B3004u) [[unlikely]] return; }
L_001B3004:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B3010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53340000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] | 16724ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3038u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B3038u) [[unlikely]] return; }
L_001B3038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9952u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3054u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3054u) [[unlikely]] return; }
L_001B3054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3068; } }
L_001B3064:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3068:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B307Cu); c.r[5].d[0] = c.r[2].d[0] | 16722ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B307Cu) [[unlikely]] return; }
L_001B307C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B308C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3090; } }
L_001B308C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3090:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B30C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B3108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B30F0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B30F0u) [[unlikely]] return; }
L_001B30F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B310C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B3108u) [[unlikely]] return; }
L_001B3108:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B310C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B3120:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 204u), c.r[7].w[0]);
    set32(c.r[18], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 23;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B3198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x57500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3188u); c.r[5].d[0] = c.r[2].d[0] | 20302ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3188u) [[unlikely]] return; }
L_001B3188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3198; } }
L_001B3198:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[22].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 68u, depth); } }
    set32(c.r[2], 0u + 104u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 67u, depth); } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[2], 0u + 184u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { [[clang::musttail]] return unit_002D(c, 64u, depth); } }
    set32(c.r[2], 0u + 182u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_002D(c, 63u, depth); } }
    set32(c.r[2], 0u + 183u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { [[clang::musttail]] return unit_002D(c, 62u, depth); } }
    set32(c.r[2], 0u + 191u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { [[clang::musttail]] return unit_002D(c, 61u, depth); } }
    set32(c.r[2], 0u + 190u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { [[clang::musttail]] return unit_002D(c, 60u, depth); } }
    set32(c.r[2], 0u + 189u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 59u, depth); } }
    set32(c.r[2], 0u + 188u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { [[clang::musttail]] return unit_002D(c, 58u, depth); } }
    set32(c.r[2], 0u + 187u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { [[clang::musttail]] return unit_002D(c, 57u, depth); } }
    set32(c.r[2], 0u + 181u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { [[clang::musttail]] return unit_002D(c, 56u, depth); } }
    set32(c.r[2], 0u + 186u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 255u);  if (t) { [[clang::musttail]] return unit_002D(c, 55u, depth); } }
    set32(c.r[2], 0u + 185u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_002D(c, 54u, depth); } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[4], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 52u, depth); } }
    set32(c.r[4], 0u + 120u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 47u, depth); } }
    set32(c.r[4], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 46u, depth); } }
    set32(c.r[4], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 45u, depth); } }
    set32(c.r[2], 0u + 192u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 41u, depth); } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 39u, depth); } }
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 38u, depth); } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 35u, depth); } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 33u, depth); } }
    set32(c.r[2], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 32u, depth); } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 30u, depth); } }
    set32(c.r[2], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 28u, depth); } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 25u, depth); } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 21u, depth); } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 17u, depth); } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 12u, depth); } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { [[clang::musttail]] return unit_002D(c, 9u, depth); } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);  if (t) { [[clang::musttail]] return unit_002D(c, 6u, depth); } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 5u, depth); } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3F2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001B3EF4; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001B3E7C; } }
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3E5C; } }
    set32(c.r[2], 0u + 84u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3E44; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3DF8; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3D14; } }
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3CF8; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C80; } }
    set32(c.r[2], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C80; } }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C80; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C80; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C60; } }
    set32(c.r[2], 0u + 98u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C60; } }
    set32(c.r[2], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C60; } }
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C60; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3C44; } }
    set32(c.r[2], 0u + 87u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3A98; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);  if (t) { goto L_001B39C0; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3964; } }
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B37EC; } }
    set32(c.r[2], 0u + 89u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3788; } }
    set32(c.r[2], 0u + 88u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B371C; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B36D8; } }
    set32(c.r[2], 0u + 90u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B36A4; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B366C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B363C; } }
    set32(c.r[2], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B360C; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B35E0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001B35BC; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3590; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3564; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3544; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B3514; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B34F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 77u, depth); } }
L_001B34F0:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3514:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3544:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B355Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B355Cu) [[unlikely]] return; }
L_001B355C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3564:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3588u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B3588u) [[unlikely]] return; }
L_001B3588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3590:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35B4u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B35B4u) [[unlikely]] return; }
L_001B35B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B35BC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B35D8u); set32(c.r[8], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B35D8u) [[unlikely]] return; }
L_001B35D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B35E0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[20].w[0] + 3u));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3604u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B3604u) [[unlikely]] return; }
L_001B3604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B360C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[8], c.r[2].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3634u); c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B3634u) [[unlikely]] return; }
L_001B3634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B363C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[6].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[8], c.r[2].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3664u); c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_002D(c, 112u, depth + 1u); else { c.pc = 0x001B5310u; return; } if (c.pc != 0x001B3664u) [[unlikely]] return; }
L_001B3664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B366C:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_001B369C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B369Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B369Cu) [[unlikely]] return; }
L_001B369C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B36A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0]), 0u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_001B36D0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1268u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B36D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B36D0u) [[unlikely]] return; }
L_001B36D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B36D8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_001B3714; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 176u), 0u);
    c.budget -= 6;
L_001B3714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B371C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B3774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3734u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3734u) [[unlikely]] return; }
L_001B3734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3748; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3748:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3758u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001B3758u) [[unlikely]] return; }
L_001B3758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 51u, depth + 1u); else { c.pc = 0x001F5010u; return; } if (c.pc != 0x001B3760u) [[unlikely]] return; }
L_001B3760:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B376Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001B376Cu) [[unlikely]] return; }
L_001B376C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B3780; } }
L_001B3774:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001B3780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { [[clang::musttail]] return unit_002D(c, 81u, depth); } }
L_001B3788:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B37EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);  if (t) { goto L_001B37A4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 2;
L_001B37A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37ACu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B37ACu) [[unlikely]] return; }
L_001B37AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B37C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B37C0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B37C0:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37D0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001B37D0u) [[unlikely]] return; }
L_001B37D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 51u, depth + 1u); else { c.pc = 0x001F5010u; return; } if (c.pc != 0x001B37D8u) [[unlikely]] return; }
L_001B37D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B37E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001B37E4u) [[unlikely]] return; }
L_001B37E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B37EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 899u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3844; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3814u); c.r[5].d[0] = c.r[2].d[0] | 16979ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3814u) [[unlikely]] return; }
L_001B3814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3828; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3828:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3838u); set32(c.r[5], ld32((c.r[18].w[0] + 912u)));  if (depth < kMaxDepth) unit_007D(c, 187u, depth + 1u); else { c.pc = 0x002F7000u; return; } if (c.pc != 0x001B3838u) [[unlikely]] return; }
L_001B3838:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3844:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 1252u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_001B389C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);  if (t) { goto L_001B386C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45440000u);
    c.budget -= 2;
L_001B386C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3874u); c.r[5].d[0] = c.r[2].d[0] | 19531ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3874u) [[unlikely]] return; }
L_001B3874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3888; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3890u);  if (depth < kMaxDepth) unit_0075(c, 231u, depth + 1u); else { c.pc = 0x002D6EA0u; return; } if (c.pc != 0x001B3890u) [[unlikely]] return; }
L_001B3890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B389C; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001B389C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001B38B8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 2;
L_001B38B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38C0u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B38C0u) [[unlikely]] return; }
L_001B38C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B38D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B38D4; } }
L_001B38D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B38D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B38F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 31u, depth + 1u); else { c.pc = 0x001DC580u; return; } if (c.pc != 0x001B38F0u) [[unlikely]] return; }
L_001B38F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B3910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B390Cu);  if (depth < kMaxDepth) unit_0033(c, 128u, depth + 1u); else { c.pc = 0x001CD950u; return; } if (c.pc != 0x001B390Cu) [[unlikely]] return; }
L_001B390C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B3910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3918u);  if (depth < kMaxDepth) unit_0035(c, 217u, depth + 1u); else { c.pc = 0x001D7A70u; return; } if (c.pc != 0x001B3918u) [[unlikely]] return; }
L_001B3918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 221u, depth + 1u); else { c.pc = 0x001D7AC0u; return; } if (c.pc != 0x001B3920u) [[unlikely]] return; }
L_001B3920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3934u); c.r[5].d[0] = c.r[2].d[0] | 16979ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3934u) [[unlikely]] return; }
L_001B3934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3948; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3948:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3958u); set32(c.r[5], ld32((c.r[18].w[0] + 912u)));  if (depth < kMaxDepth) unit_007D(c, 187u, depth + 1u); else { c.pc = 0x002F7000u; return; } if (c.pc != 0x001B3958u) [[unlikely]] return; }
L_001B3958:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3964:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3974u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001B3974u) [[unlikely]] return; }
L_001B3974:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B398C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 901u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3994u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001B3994u) [[unlikely]] return; }
L_001B3994:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 283u, depth + 1u); else { c.pc = 0x0029AEB0u; return; } if (c.pc != 0x001B39A8u) [[unlikely]] return; }
L_001B39A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 901u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);
    c.budget -= 1;
L_001B39C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B39CCu); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B39CCu) [[unlikely]] return; }
L_001B39CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001B39E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B39E0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B39E0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[8].w[0] + 152u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 2u));
    st32((c.r[8].w[0] + 136u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 3u));
    st32((c.r[8].w[0] + 140u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 4u));
    st32((c.r[8].w[0] + 144u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 5u));
    st32((c.r[8].w[0] + 148u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001B3A6C; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001B3A6C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 395u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3A98:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001B3AD4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 396u));
    set32(c.r[2], 0u + 63u);
    c.r[3].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[2], 0u - 64u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3AD4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[6], 0u - 64u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 188u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3BBC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[2].d[0] = c.r[3].d[0] & 63ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001B3B38; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001B3B38:
    c.r[3].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 16ull;  if (t) { goto L_001B3B68; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 396u));
    set32(c.r[3], 0u - 64u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] | 4ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 9;
L_001B3B68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B3B90; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 396u));
    set32(c.r[3], 0u - 64u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] | 32ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001B3B90:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3BBC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 396u));
    set32(c.r[2], 0u - 64u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001B3BBC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 396u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B3BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 268u, depth + 1u); else { c.pc = 0x001EBD90u; return; } if (c.pc != 0x001B3BD4u) [[unlikely]] return; }
L_001B3BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3BE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3BE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B3BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3BF0u);  if (depth < kMaxDepth) unit_0034(c, 143u, depth + 1u); else { c.pc = 0x001D16D0u; return; } if (c.pc != 0x001B3BF0u) [[unlikely]] return; }
L_001B3BF0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001B3C18; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001B3C18:
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 1612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 396u));
    set32(c.r[2], 0u - 64u);
    c.r[3].d[0] = 0ull & 63ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3C44:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 396u));
    set32(c.r[2], 0u - 64u);
    c.r[3].d[0] = 0ull & 63ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3C60:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3C78u); set32(c.r[4], c.r[2].w[0] - 96u);  if (depth < kMaxDepth) unit_0046(c, 80u, depth + 1u); else { c.pc = 0x002196D0u; return; } if (c.pc != 0x001B3C78u) [[unlikely]] return; }
L_001B3C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] - c.r[22].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 79u, depth); } }
L_001B3C80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 42u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B3CC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3CC4:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 100u);
    st32((c.r[1].w[0] - 23600u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[2].w[0] - 100u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 60u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 23592u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3CF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 640u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3D14:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D34u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 50u, depth + 1u); else { c.pc = 0x00168C20u; return; } if (c.pc != 0x001B3D34u) [[unlikely]] return; }
L_001B3D34:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3D8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3D8C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001B3D60; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 2;
L_001B3D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D68u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3D68u) [[unlikely]] return; }
L_001B3D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3D7C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D84u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001B3D84u) [[unlikely]] return; }
L_001B3D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B3DAC; } }
L_001B3D8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3D9Cu); st32((c.r[18].w[0] + 988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 76u, depth + 1u); else { c.pc = 0x001C4BC0u; return; } if (c.pc != 0x001B3D9Cu) [[unlikely]] return; }
L_001B3D9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 864u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B3DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DB4u);  if (depth < kMaxDepth) unit_0032(c, 332u, depth + 1u); else { c.pc = 0x001CB9F0u; return; } if (c.pc != 0x001B3DB4u) [[unlikely]] return; }
L_001B3DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DBCu);  if (depth < kMaxDepth) unit_002C(c, 468u, depth + 1u); else { c.pc = 0x001B2FE0u; return; } if (c.pc != 0x001B3DBCu) [[unlikely]] return; }
L_001B3DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DC4u); set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  if (depth < kMaxDepth) unit_0031(c, 76u, depth + 1u); else { c.pc = 0x001C4BC0u; return; } if (c.pc != 0x001B3DC4u) [[unlikely]] return; }
L_001B3DC4:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 14u, depth + 1u); else { c.pc = 0x001CC2D0u; return; } if (c.pc != 0x001B3DD0u) [[unlikely]] return; }
L_001B3DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3DE8u); set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC510u; return; } if (c.pc != 0x001B3DE8u) [[unlikely]] return; }
L_001B3DE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 864u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3DF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 76u, depth + 1u); else { c.pc = 0x001C4BC0u; return; } if (c.pc != 0x001B3E08u) [[unlikely]] return; }
L_001B3E08:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001B3E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 14u, depth + 1u); else { c.pc = 0x001CC2D0u; return; } if (c.pc != 0x001B3E1Cu) [[unlikely]] return; }
L_001B3E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B3E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 80u, depth); } }
L_001B3E2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B3E30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E3Cu); st32((c.r[18].w[0] + 864u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC510u; return; } if (c.pc != 0x001B3E3Cu) [[unlikely]] return; }
L_001B3E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3E44:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E54u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 16u, depth + 1u); else { c.pc = 0x001BD040u; return; } if (c.pc != 0x001B3E54u) [[unlikely]] return; }
L_001B3E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3E5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 56u, depth + 1u); else { c.pc = 0x001BDC70u; return; } if (c.pc != 0x001B3E70u) [[unlikely]] return; }
L_001B3E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 1;
L_001B3E7C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3E88u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3E88u) [[unlikely]] return; }
L_001B3E88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3E9C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3E9C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EACu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001B3EACu) [[unlikely]] return; }
L_001B3EAC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18048u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    st8((c.r[29].w[0] + 319u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 318u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3EE8u); st32((c.r[29].w[0] + 312u), c.f[12]);  if (depth < kMaxDepth) unit_0032(c, 350u, depth + 1u); else { c.pc = 0x001CBD30u; return; } if (c.pc != 0x001B3EE8u) [[unlikely]] return; }
L_001B3EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 1;
L_001B3EF4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F00u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3F00u) [[unlikely]] return; }
L_001B3F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B3F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3F14; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3F14:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F24u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x001B3F24u) [[unlikely]] return; }
L_001B3F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
L_001B3F2C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B3F40; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_001B3F40:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 392u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] << (c.r[5].w[0] & 63u);
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[2], 0u + 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[17].w[0] + 392u), c.r[3].d[0]);  if (t) { [[clang::musttail]] return unit_002D(c, 78u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F70u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3F70u) [[unlikely]] return; }
L_001B3F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_001B3F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B3F84; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B3F84:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001B3FE4; } }
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 1;
L_001B3F90:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3F9Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 105u, depth + 1u); else { c.pc = 0x001CD570u; return; } if (c.pc != 0x001B3F9Cu) [[unlikely]] return; }
L_001B3F9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_001B3FD8; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], 0u - 5u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B3F90u | kUnwind; return; } goto L_001B3F90; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_001B3FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FE0u);  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001B3FE0u) [[unlikely]] return; }
L_001B3FE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B3FE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D590000u);  if (t) { goto L_001B3FF4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D590000u);
    c.budget -= 2;
L_001B3FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B3FFCu); c.r[5].d[0] = c.r[2].d[0] | 21076ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B3FFCu) [[unlikely]] return; }
L_001B3FFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002D(c, 3u, depth); } }
    [[clang::musttail]] return unit_002D(c, 2u, depth);
}

}
