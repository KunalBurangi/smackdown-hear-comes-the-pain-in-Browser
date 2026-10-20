#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000B[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 22, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0,
    134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206,
    0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215,
    0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 311, 0,
    0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C008;
    case 3u: goto L_0012C018;
    case 4u: goto L_0012C048;
    case 5u: goto L_0012C070;
    case 6u: goto L_0012C088;
    case 7u: goto L_0012C098;
    case 8u: goto L_0012C0B0;
    case 9u: goto L_0012C0C8;
    case 10u: goto L_0012C150;
    case 11u: goto L_0012C164;
    case 12u: goto L_0012C180;
    case 13u: goto L_0012C198;
    case 14u: goto L_0012C1A4;
    case 15u: goto L_0012C1F0;
    case 16u: goto L_0012C214;
    case 17u: goto L_0012C268;
    case 18u: goto L_0012C2A0;
    case 19u: goto L_0012C2B4;
    case 20u: goto L_0012C2F8;
    case 21u: goto L_0012C310;
    case 22u: goto L_0012C314;
    case 23u: goto L_0012C320;
    case 24u: goto L_0012C324;
    case 25u: goto L_0012C358;
    case 26u: goto L_0012C388;
    case 27u: goto L_0012C3C0;
    case 28u: goto L_0012C3C4;
    case 29u: goto L_0012C3CC;
    case 30u: goto L_0012C420;
    case 31u: goto L_0012C458;
    case 32u: goto L_0012C498;
    case 33u: goto L_0012C4B0;
    case 34u: goto L_0012C4F0;
    case 35u: goto L_0012C508;
    case 36u: goto L_0012C538;
    case 37u: goto L_0012C568;
    case 38u: goto L_0012C5A8;
    case 39u: goto L_0012C5EC;
    case 40u: goto L_0012C628;
    case 41u: goto L_0012C678;
    case 42u: goto L_0012C6A0;
    case 43u: goto L_0012C6B8;
    case 44u: goto L_0012C6C0;
    case 45u: goto L_0012C6C8;
    case 46u: goto L_0012C6FC;
    case 47u: goto L_0012C718;
    case 48u: goto L_0012C720;
    case 49u: goto L_0012C754;
    case 50u: goto L_0012C770;
    case 51u: goto L_0012C778;
    case 52u: goto L_0012C7AC;
    case 53u: goto L_0012C7C8;
    case 54u: goto L_0012C7D0;
    case 55u: goto L_0012C804;
    case 56u: goto L_0012C820;
    case 57u: goto L_0012C828;
    case 58u: goto L_0012C85C;
    case 59u: goto L_0012C878;
    case 60u: goto L_0012C894;
    case 61u: goto L_0012C8B0;
    case 62u: goto L_0012C8C0;
    case 63u: goto L_0012C8E0;
    case 64u: goto L_0012C924;
    case 65u: goto L_0012C938;
    case 66u: goto L_0012C950;
    case 67u: goto L_0012C994;
    case 68u: goto L_0012C9A8;
    case 69u: goto L_0012C9C0;
    case 70u: goto L_0012CA04;
    case 71u: goto L_0012CA18;
    case 72u: goto L_0012CA30;
    case 73u: goto L_0012CA78;
    case 74u: goto L_0012CA8C;
    case 75u: goto L_0012CAA0;
    case 76u: goto L_0012CADC;
    case 77u: goto L_0012CAF0;
    case 78u: goto L_0012CB10;
    case 79u: goto L_0012CB20;
    case 80u: goto L_0012CB30;
    case 81u: goto L_0012CB48;
    case 82u: goto L_0012CB88;
    case 83u: goto L_0012CB90;
    case 84u: goto L_0012CBA0;
    case 85u: goto L_0012CBA8;
    case 86u: goto L_0012CBD4;
    case 87u: goto L_0012CBE8;
    case 88u: goto L_0012CBFC;
    case 89u: goto L_0012CC0C;
    case 90u: goto L_0012CC28;
    case 91u: goto L_0012CC40;
    case 92u: goto L_0012CC58;
    case 93u: goto L_0012CC60;
    case 94u: goto L_0012CC68;
    case 95u: goto L_0012CC7C;
    case 96u: goto L_0012CC90;
    case 97u: goto L_0012CCB0;
    case 98u: goto L_0012CCC0;
    case 99u: goto L_0012CCE0;
    case 100u: goto L_0012CD74;
    case 101u: goto L_0012CD7C;
    case 102u: goto L_0012CDE0;
    case 103u: goto L_0012CE50;
    case 104u: goto L_0012CEC0;
    case 105u: goto L_0012CF30;
    case 106u: goto L_0012CF80;
    case 107u: goto L_0012CFD0;
    case 108u: goto L_0012D050;
    case 109u: goto L_0012D07C;
    case 110u: goto L_0012D160;
    case 111u: goto L_0012D1EC;
    case 112u: goto L_0012D200;
    case 113u: goto L_0012D2A0;
    case 114u: goto L_0012D2C4;
    case 115u: goto L_0012D300;
    case 116u: goto L_0012D330;
    case 117u: goto L_0012D360;
    case 118u: goto L_0012D378;
    case 119u: goto L_0012D390;
    case 120u: goto L_0012D3C0;
    case 121u: goto L_0012D450;
    case 122u: goto L_0012D458;
    case 123u: goto L_0012D4A0;
    case 124u: goto L_0012D4B4;
    case 125u: goto L_0012D4C4;
    case 126u: goto L_0012D4D4;
    case 127u: goto L_0012D504;
    case 128u: goto L_0012D530;
    case 129u: goto L_0012D558;
    case 130u: goto L_0012D560;
    case 131u: goto L_0012D568;
    case 132u: goto L_0012D570;
    case 133u: goto L_0012D578;
    case 134u: goto L_0012D580;
    case 135u: goto L_0012D588;
    case 136u: goto L_0012D590;
    case 137u: goto L_0012D598;
    case 138u: goto L_0012D5A0;
    case 139u: goto L_0012D5A8;
    case 140u: goto L_0012D5B0;
    case 141u: goto L_0012D5B8;
    case 142u: goto L_0012D5C0;
    case 143u: goto L_0012D5C8;
    case 144u: goto L_0012D5D0;
    case 145u: goto L_0012D5D8;
    case 146u: goto L_0012D5E0;
    case 147u: goto L_0012D5E8;
    case 148u: goto L_0012D600;
    case 149u: goto L_0012D650;
    case 150u: goto L_0012D6C4;
    case 151u: goto L_0012D6CC;
    case 152u: goto L_0012D6E0;
    case 153u: goto L_0012D6F4;
    case 154u: goto L_0012D700;
    case 155u: goto L_0012D714;
    case 156u: goto L_0012D720;
    case 157u: goto L_0012D740;
    case 158u: goto L_0012D778;
    case 159u: goto L_0012D788;
    case 160u: goto L_0012D79C;
    case 161u: goto L_0012D7AC;
    case 162u: goto L_0012D7C4;
    case 163u: goto L_0012D7CC;
    case 164u: goto L_0012D7DC;
    case 165u: goto L_0012D808;
    case 166u: goto L_0012D878;
    case 167u: goto L_0012D88C;
    case 168u: goto L_0012D8D8;
    case 169u: goto L_0012D984;
    case 170u: goto L_0012D98C;
    case 171u: goto L_0012D998;
    case 172u: goto L_0012D9A4;
    case 173u: goto L_0012D9AC;
    case 174u: goto L_0012D9E0;
    case 175u: goto L_0012D9F8;
    case 176u: goto L_0012DA10;
    case 177u: goto L_0012DA24;
    case 178u: goto L_0012DA2C;
    case 179u: goto L_0012DA3C;
    case 180u: goto L_0012DA48;
    case 181u: goto L_0012DA60;
    case 182u: goto L_0012DAAC;
    case 183u: goto L_0012DAD4;
    case 184u: goto L_0012DAE4;
    case 185u: goto L_0012DAFC;
    case 186u: goto L_0012DB20;
    case 187u: goto L_0012DB50;
    case 188u: goto L_0012DB68;
    case 189u: goto L_0012DB80;
    case 190u: goto L_0012DB9C;
    case 191u: goto L_0012DBC4;
    case 192u: goto L_0012DBCC;
    case 193u: goto L_0012DBD4;
    case 194u: goto L_0012DBE4;
    case 195u: goto L_0012DBF0;
    case 196u: goto L_0012DC24;
    case 197u: goto L_0012DC30;
    case 198u: goto L_0012DC4C;
    case 199u: goto L_0012DC68;
    case 200u: goto L_0012DC7C;
    case 201u: goto L_0012DCB0;
    case 202u: goto L_0012DCBC;
    case 203u: goto L_0012DCD0;
    case 204u: goto L_0012DCE0;
    case 205u: goto L_0012DCF4;
    case 206u: goto L_0012DCFC;
    case 207u: goto L_0012DD0C;
    case 208u: goto L_0012DD14;
    case 209u: goto L_0012DD20;
    case 210u: goto L_0012DD3C;
    case 211u: goto L_0012DD44;
    case 212u: goto L_0012DD54;
    case 213u: goto L_0012DD60;
    case 214u: goto L_0012DD70;
    case 215u: goto L_0012DD7C;
    case 216u: goto L_0012DD8C;
    case 217u: goto L_0012DD94;
    case 218u: goto L_0012DD9C;
    case 219u: goto L_0012DDAC;
    case 220u: goto L_0012DDB4;
    case 221u: goto L_0012DDBC;
    case 222u: goto L_0012DDC4;
    case 223u: goto L_0012DDCC;
    case 224u: goto L_0012DDD4;
    case 225u: goto L_0012DDE0;
    case 226u: goto L_0012DDF4;
    case 227u: goto L_0012DE08;
    case 228u: goto L_0012DE48;
    case 229u: goto L_0012DE60;
    case 230u: goto L_0012DE98;
    case 231u: goto L_0012DEA0;
    case 232u: goto L_0012DEA8;
    case 233u: goto L_0012DEB0;
    case 234u: goto L_0012DEB8;
    case 235u: goto L_0012DEC0;
    case 236u: goto L_0012DEC8;
    case 237u: goto L_0012DED0;
    case 238u: goto L_0012DED8;
    case 239u: goto L_0012DEE0;
    case 240u: goto L_0012DEE8;
    case 241u: goto L_0012DEF0;
    case 242u: goto L_0012DEF8;
    case 243u: goto L_0012DF00;
    case 244u: goto L_0012DF38;
    case 245u: goto L_0012DF50;
    case 246u: goto L_0012DF68;
    case 247u: goto L_0012DF70;
    case 248u: goto L_0012DF78;
    case 249u: goto L_0012DF90;
    case 250u: goto L_0012DFDC;
    case 251u: goto L_0012DFF8;
    case 252u: goto L_0012E014;
    case 253u: goto L_0012E01C;
    case 254u: goto L_0012E050;
    case 255u: goto L_0012E06C;
    case 256u: goto L_0012E080;
    case 257u: goto L_0012E094;
    case 258u: goto L_0012E0A0;
    case 259u: goto L_0012E0C0;
    case 260u: goto L_0012E0CC;
    case 261u: goto L_0012E0EC;
    case 262u: goto L_0012E0F8;
    case 263u: goto L_0012E110;
    case 264u: goto L_0012E130;
    case 265u: goto L_0012E144;
    case 266u: goto L_0012E150;
    case 267u: goto L_0012E164;
    case 268u: goto L_0012E174;
    case 269u: goto L_0012E190;
    case 270u: goto L_0012E1A4;
    case 271u: goto L_0012E1C0;
    case 272u: goto L_0012E1D0;
    case 273u: goto L_0012E1DC;
    case 274u: goto L_0012E1F0;
    case 275u: goto L_0012E21C;
    case 276u: goto L_0012E228;
    case 277u: goto L_0012E230;
    case 278u: goto L_0012E250;
    case 279u: goto L_0012E27C;
    case 280u: goto L_0012E288;
    case 281u: goto L_0012E290;
    case 282u: goto L_0012E2B0;
    case 283u: goto L_0012E2DC;
    case 284u: goto L_0012E2E4;
    case 285u: goto L_0012E308;
    case 286u: goto L_0012E310;
    case 287u: goto L_0012E330;
    case 288u: goto L_0012E34C;
    case 289u: goto L_0012E358;
    case 290u: goto L_0012E36C;
    case 291u: goto L_0012E374;
    case 292u: goto L_0012E3A0;
    case 293u: goto L_0012E3B4;
    case 294u: goto L_0012E3BC;
    case 295u: goto L_0012E3E0;
    case 296u: goto L_0012E410;
    case 297u: goto L_0012E428;
    case 298u: goto L_0012E440;
    case 299u: goto L_0012E454;
    case 300u: goto L_0012E490;
    case 301u: goto L_0012E4C0;
    case 302u: goto L_0012E4D8;
    case 303u: goto L_0012E4F0;
    case 304u: goto L_0012E500;
    case 305u: goto L_0012E530;
    case 306u: goto L_0012E540;
    case 307u: goto L_0012E548;
    case 308u: goto L_0012E558;
    case 309u: goto L_0012E560;
    case 310u: goto L_0012E570;
    case 311u: goto L_0012E578;
    case 312u: goto L_0012E588;
    case 313u: goto L_0012E590;
    case 314u: goto L_0012E5A0;
    case 315u: goto L_0012E5A8;
    case 316u: goto L_0012E5B8;
    case 317u: goto L_0012E5D0;
    case 318u: goto L_0012E5E0;
    case 319u: goto L_0012E600;
    case 320u: goto L_0012E610;
    case 321u: goto L_0012E630;
    case 322u: goto L_0012E640;
    case 323u: goto L_0012E650;
    case 324u: goto L_0012E660;
    case 325u: goto L_0012E670;
    case 326u: goto L_0012E680;
    case 327u: goto L_0012E690;
    case 328u: goto L_0012E6A0;
    case 329u: goto L_0012E6B0;
    case 330u: goto L_0012E6C0;
    case 331u: goto L_0012E6D0;
    case 332u: goto L_0012E6E0;
    case 333u: goto L_0012E6F0;
    case 334u: goto L_0012E70C;
    case 335u: goto L_0012E720;
    case 336u: goto L_0012E740;
    case 337u: goto L_0012E778;
    case 338u: goto L_0012E790;
    case 339u: goto L_0012E7A0;
    case 340u: goto L_0012E7B0;
    case 341u: goto L_0012E7C0;
    case 342u: goto L_0012E7D0;
    case 343u: goto L_0012E7E0;
    case 344u: goto L_0012E7F0;
    case 345u: goto L_0012E800;
    case 346u: goto L_0012E834;
    case 347u: goto L_0012E8A0;
    case 348u: goto L_0012E8D0;
    case 349u: goto L_0012E8E8;
    case 350u: goto L_0012E900;
    case 351u: goto L_0012E938;
    case 352u: goto L_0012E950;
    case 353u: goto L_0012E960;
    case 354u: goto L_0012E9A0;
    case 355u: goto L_0012E9EC;
    case 356u: goto L_0012EA00;
    case 357u: goto L_0012EA1C;
    case 358u: goto L_0012EA38;
    case 359u: goto L_0012EA60;
    case 360u: goto L_0012EA74;
    case 361u: goto L_0012EA88;
    case 362u: goto L_0012EAAC;
    case 363u: goto L_0012EABC;
    case 364u: goto L_0012EAE0;
    case 365u: goto L_0012EAFC;
    case 366u: goto L_0012EB30;
    case 367u: goto L_0012EB44;
    case 368u: goto L_0012EB60;
    case 369u: goto L_0012EB7C;
    case 370u: goto L_0012EB90;
    case 371u: goto L_0012EBA0;
    case 372u: goto L_0012EBBC;
    case 373u: goto L_0012EBF0;
    case 374u: goto L_0012ECC0;
    case 375u: goto L_0012ECD8;
    case 376u: goto L_0012ED00;
    case 377u: goto L_0012ED30;
    case 378u: goto L_0012ED48;
    case 379u: goto L_0012ED60;
    case 380u: goto L_0012ED84;
    case 381u: goto L_0012ED90;
    case 382u: goto L_0012EDAC;
    case 383u: goto L_0012EDE0;
    case 384u: goto L_0012EEC0;
    case 385u: goto L_0012EED8;
    case 386u: goto L_0012EF00;
    case 387u: goto L_0012EF30;
    case 388u: goto L_0012EF48;
    case 389u: goto L_0012EF60;
    case 390u: goto L_0012EF84;
    case 391u: goto L_0012EF90;
    case 392u: goto L_0012EFB4;
    case 393u: goto L_0012EFE0;
    case 394u: goto L_0012EFF4;
    case 395u: goto L_0012F020;
    case 396u: goto L_0012F03C;
    case 397u: goto L_0012F0B0;
    case 398u: goto L_0012F0E0;
    case 399u: goto L_0012F0F8;
    case 400u: goto L_0012F110;
    case 401u: goto L_0012F2F0;
    case 402u: goto L_0012F304;
    case 403u: goto L_0012F340;
    case 404u: goto L_0012F390;
    case 405u: goto L_0012F3DC;
    case 406u: goto L_0012F3F0;
    case 407u: goto L_0012F40C;
    case 408u: goto L_0012F428;
    case 409u: goto L_0012F450;
    case 410u: goto L_0012F464;
    case 411u: goto L_0012F478;
    case 412u: goto L_0012F49C;
    case 413u: goto L_0012F4AC;
    case 414u: goto L_0012F4D0;
    case 415u: goto L_0012F4EC;
    case 416u: goto L_0012F52C;
    case 417u: goto L_0012F554;
    case 418u: goto L_0012F568;
    case 419u: goto L_0012F590;
    case 420u: goto L_0012F5C0;
    case 421u: goto L_0012F610;
    case 422u: goto L_0012F630;
    case 423u: goto L_0012F670;
    case 424u: goto L_0012F830;
    case 425u: goto L_0012F844;
    case 426u: goto L_0012F870;
    case 427u: goto L_0012F8B0;
    case 428u: goto L_0012F8FC;
    case 429u: goto L_0012F910;
    case 430u: goto L_0012F92C;
    case 431u: goto L_0012F948;
    case 432u: goto L_0012F970;
    case 433u: goto L_0012F984;
    case 434u: goto L_0012F998;
    case 435u: goto L_0012F9BC;
    case 436u: goto L_0012F9CC;
    case 437u: goto L_0012F9F0;
    case 438u: goto L_0012FA24;
    case 439u: goto L_0012FA50;
    case 440u: goto L_0012FA6C;
    case 441u: goto L_0012FAA0;
    case 442u: goto L_0012FAB4;
    case 443u: goto L_0012FAD0;
    case 444u: goto L_0012FB10;
    case 445u: goto L_0012FB28;
    case 446u: goto L_0012FB40;
    case 447u: goto L_0012FB70;
    case 448u: goto L_0012FB88;
    case 449u: goto L_0012FBA0;
    case 450u: goto L_0012FBE0;
    case 451u: goto L_0012FBF8;
    case 452u: goto L_0012FC10;
    case 453u: goto L_0012FC50;
    case 454u: goto L_0012FC68;
    case 455u: goto L_0012FC80;
    case 456u: goto L_0012FCC0;
    case 457u: goto L_0012FCD8;
    case 458u: goto L_0012FCF0;
    case 459u: goto L_0012FD30;
    case 460u: goto L_0012FD48;
    case 461u: goto L_0012FD60;
    case 462u: goto L_0012FD90;
    case 463u: goto L_0012FDC0;
    case 464u: goto L_0012FDE0;
    case 465u: goto L_0012FE40;
    case 466u: goto L_0012FE70;
    case 467u: goto L_0012FE78;
    case 468u: goto L_0012FEBC;
    case 469u: goto L_0012FEF0;
    case 470u: goto L_0012FF40;
    case 471u: goto L_0012FF4C;
    case 472u: goto L_0012FF58;
    case 473u: goto L_0012FF70;
    case 474u: goto L_0012FF90;
    case 475u: goto L_0012FFA0;
    case 476u: goto L_0012FFB0;
    case 477u: goto L_0012FFC0;
    case 478u: goto L_0012FFD0;
    case 479u: goto L_0012FFE0;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    st32((c.r[29].w[0] + 608u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.budget -= 2;
L_0012C008:
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B710u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 295u, depth); } }
    c.budget -= 1;
L_0012C018:
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[3], 0u + 348u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(349ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | 960ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = c.r[20].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012C164; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0012C048:
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[16].w[0] - 43u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(59ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0012C164; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 23456u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012C070:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_0012C088; } }
    c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0012C11C; } }
L_0012C088:
    set32(c.r[2], 0u - 193u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0012C110; } }
    c.budget -= 1;
L_0012C098:
    c.r[2].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 65u);  if (t) { goto L_0012C164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0012C110; } }
    c.budget -= 1;
L_0012C0B0:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 321u);  if (t) { goto L_0012C164; } }
    st64((c.r[29].w[0] + 616u), c.r[22].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];  if (t) { goto L_0012C110; } }
L_0012C0C8:
    c.r[3].d[0] = c.r[17].d[0] & 640ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0012C0E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C164; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 128ull;  if (t) { goto L_0012C174; } }
L_0012C0E8:
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 769u);  if (t) { goto L_0012C104; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    set32(c.r[2], 0u - 769u);
    c.budget -= 4;
L_0012C104:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] | 192ull;
    c.budget -= 3;
L_0012C110:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
L_0012C11C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012C140; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0012C15C; } }
L_0012C140:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C150u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0009(c, 193u, depth + 1u); else { c.pc = 0x001271F8u; return; } if (c.pc != 0x0012C150u) [[unlikely]] return; }
L_0012C150:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0012C164; } }
L_0012C15C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C048u | kUnwind; return; } goto L_0012C048; }
L_0012C164:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 129u);  if (t) { goto L_0012C170; } }
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 1;
L_0012C170:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 1;
L_0012C174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] & 512ull;  if (t) { goto L_0012C21C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] - 1u);  goto L_0012C1C0; }
    goto L_0012C184;
L_0012C180:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0012C184:
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0012C324; } }
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 1;
L_0012C198:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000A(c, 171u, depth + 1u); else { c.pc = 0x00129AC8u; return; } if (c.pc != 0x0012C1A4u) [[unlikely]] return; }
L_0012C1A4:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[3].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C198u | kUnwind; return; } goto L_0012C198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 608u)));  if (t) { goto L_0012C324; } }
    c.budget -= 1;
L_0012C1C0:
    set32(c.r[2], 0u + 101u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { goto L_0012C200; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012C200; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1F0u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 171u, depth + 1u); else { c.pc = 0x00129AC8u; return; } if (c.pc != 0x0012C1F0u) [[unlikely]] return; }
L_0012C1F0:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 4;
L_0012C200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C214u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_000A(c, 171u, depth + 1u); else { c.pc = 0x00129AC8u; return; } if (c.pc != 0x0012C214u) [[unlikely]] return; }
L_0012C214:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    c.budget -= 2;
L_0012C21C:
    c.r[2].d[0] = c.r[17].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B714u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 296u, depth); }
    c.r[3].d[0] = c.r[17].d[0] & 768ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012C250; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 616u));
    st32((c.r[29].w[0] + 624u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[22].d[0] - c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull - c.r[7].d[0];  if (t) { goto L_0012C274; } }
    c.budget -= 1;
L_0012C250:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 624u)));  if (t) { goto L_0012C2A4; } }
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C268u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0008(c, 172u, depth + 1u); else { c.pc = 0x00121A88u; return; } if (c.pc != 0x0012C268u) [[unlikely]] return; }
L_0012C268:
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.r[6].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.budget -= 3;
L_0012C274:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[29].w[0] + 585u);  if (t) { goto L_0012C2A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[3], c.r[29].w[0] + 584u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 22600u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2A0u); st32((c.r[29].w[0] + 624u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0012C2A0u) [[unlikely]] return; }
L_0012C2A0:
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 1;
L_0012C2A4:
    set32(c.r[2], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 169u, depth + 1u); else { c.pc = 0x00121A48u; return; } if (c.pc != 0x0012C2B4u) [[unlikely]] return; }
L_0012C2B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (t) { goto L_0012C2D0; } }
    c.r[2].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_0012C2E8; }
L_0012C2D0:
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    st64((c.r[2].w[0]), c.r[4].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 8u);  if (t) { goto L_0012C300; } }
    c.budget -= 1;
L_0012C2E8:
    set32(c.r[23], c.r[23].w[0] + 8u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2F8u); st128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011D080u; return; } if (c.pc != 0x0012C2F8u) [[unlikely]] return; }
L_0012C2F8:
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[8]);
    c.budget -= 2;
L_0012C300:
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 608u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B710u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 295u, depth); } }
L_0012C310:
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_0012C314:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_0012C324; } }
L_0012C320:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.budget -= 1;
L_0012C324:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 680u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 696u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 704u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 712u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 720u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 728u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 736u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 744u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_0012C358:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 94u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0012C378; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0012C37C; } }
L_0012C378:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C37C:
    set32(c.r[7], 0u + 255u);
    set32(c.r[2], c.r[4].w[0] + 255u);
    c.budget -= 3;
L_0012C388:
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C388u | kUnwind; return; } goto L_0012C388; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0012C450; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[10], 0u + 45u);
    set32(c.r[8], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[9], 0u + 93u);
    c.budget -= 5;
L_0012C3C0:
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0012C3C4:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 2;
L_0012C3CC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[10].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0012C400; } }
    c.r[2].d[0] = c.r[7].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C3F0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] - 1u);  if (t) { goto L_0012C450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3C0u | kUnwind; return; } goto L_0012C3C0; } }
L_0012C3F0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[9].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012C450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012C448; } }
L_0012C400:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[9].d[0]) { set32(c.r[6], 0u + 45u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3C0u | kUnwind; return; } goto L_0012C3C0; }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0012C420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 45u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3C0u | kUnwind; return; } goto L_0012C3C0; } }
L_0012C420:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C420u | kUnwind; return; } goto L_0012C420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3CCu | kUnwind; return; } goto L_0012C3CC; } }
    c.budget -= 1;
L_0012C448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C3C4u | kUnwind; return; } goto L_0012C3C4; } }
L_0012C450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012C458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[8], ld32((c.r[2].w[0] - 9520u)));
    set32(c.r[2], 0u + 520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C498u); st32((c.r[29].w[0]), c.r[7].w[0]);  if (depth < kMaxDepth) unit_000A(c, 180u, depth + 1u); else { c.pc = 0x00129D50u; return; } if (c.pc != 0x0012C498u) [[unlikely]] return; }
L_0012C498:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0012C4B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], 0u + 520u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4F0u); st32((c.r[29].w[0]), c.r[8].w[0]);  if (depth < kMaxDepth) unit_000A(c, 180u, depth + 1u); else { c.pc = 0x00129D50u; return; } if (c.pc != 0x0012C4F0u) [[unlikely]] return; }
L_0012C4F0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0012C508:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 4040u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C538u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0003(c, 34u, depth + 1u); else { c.pc = 0x0010C1E8u; return; } if (c.pc != 0x0012C538u) [[unlikely]] return; }
L_0012C538:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0012C554; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[3].w[0]);  goto L_0012C554; }
L_0012C554:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 56u)));  goto L_0012C598; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9520u)));
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
L_0012C598:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0012C5AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5A8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 342u, depth + 1u); else { c.pc = 0x001233C0u; return; } if (c.pc != 0x0012C5A8u) [[unlikely]] return; }
L_0012C5A8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0012C5AC:
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_0012C618; }
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012C664; } }
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_0012C610; }
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 64u);  if (t) { goto L_0012C5F4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_0012C5F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C5ECu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0008(c, 352u, depth + 1u); else { c.pc = 0x00123570u; return; } if (c.pc != 0x0012C5ECu) [[unlikely]] return; }
L_0012C5EC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_0012C5F4:
    set32(c.r[2], 0u - 37u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_0012C610:
    c.r[2].d[0] = c.r[4].d[0] | 8ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0012C618:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0012C62C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 400u, depth + 1u); else { c.pc = 0x00123FF8u; return; } if (c.pc != 0x0012C628u) [[unlikely]] return; }
L_0012C628:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_0012C62C:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_0012C650; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012C660; } }
    c.budget -= 1;
L_0012C650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012C65C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0012C65C:
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 1;
L_0012C660:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C664:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C678:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012C6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6B8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0012C6B8u) [[unlikely]] return; }
L_0012C6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0012C6E4; } }
L_0012C6C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C6C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C6C8u | kUnwind; return; } goto L_0012C6C8; } }
L_0012C6E4:
    set32(c.r[16], c.r[17].w[0] + 8000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 2305ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0012C6FCu) [[unlikely]] return; }
L_0012C6FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C6C0u | kUnwind; return; } goto L_0012C6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0012C73C; } }
L_0012C718:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C720:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C720u | kUnwind; return; } goto L_0012C720; } }
L_0012C73C:
    set32(c.r[16], c.r[17].w[0] + 8040u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 2306ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C754u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0012C754u) [[unlikely]] return; }
L_0012C754:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C718u | kUnwind; return; } goto L_0012C718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0012C794; } }
L_0012C770:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C778:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C778u | kUnwind; return; } goto L_0012C778; } }
L_0012C794:
    set32(c.r[16], c.r[17].w[0] + 8080u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 2307ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0012C7ACu) [[unlikely]] return; }
L_0012C7AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C770u | kUnwind; return; } goto L_0012C770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0012C7EC; } }
L_0012C7C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C7D0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C7D0u | kUnwind; return; } goto L_0012C7D0; } }
L_0012C7EC:
    set32(c.r[16], c.r[17].w[0] + 8120u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 2308ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C804u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0012C804u) [[unlikely]] return; }
L_0012C804:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C7C8u | kUnwind; return; } goto L_0012C7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0012C844; } }
L_0012C820:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C828:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C828u | kUnwind; return; } goto L_0012C828; } }
L_0012C844:
    set32(c.r[16], c.r[17].w[0] + 8160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 2309ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C85Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0012C85Cu) [[unlikely]] return; }
L_0012C85C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C820u | kUnwind; return; } goto L_0012C820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C878u);  if (depth < kMaxDepth) unit_000B(c, 75u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0012C878u) [[unlikely]] return; }
L_0012C878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012C8C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C894u); set32(c.r[4], c.r[4].w[0] + 23720u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0012C894u) [[unlikely]] return; }
L_0012C894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23760u);
    c.r[8].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0012C8B0u) [[unlikely]] return; }
L_0012C8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C8CC; } }
L_0012C8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8C0u); set32(c.r[4], c.r[4].w[0] + 23696u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012C8C0u) [[unlikely]] return; }
L_0012C8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C8CC; } }
L_0012C8C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012C8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C8E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[2].w[0] + 8256u);
    st32((c.r[2].w[0] + 8256u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[3].w[0] + 8000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C924u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0012C924u) [[unlikely]] return; }
L_0012C924:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0012C93C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C938u); set32(c.r[4], c.r[4].w[0] + 23808u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012C938u) [[unlikely]] return; }
L_0012C938:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[2].w[0] + 8256u);
    st32((c.r[2].w[0] + 8256u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[3].w[0] + 8040u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C994u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0012C994u) [[unlikely]] return; }
L_0012C994:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0012C9AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9A8u); set32(c.r[4], c.r[4].w[0] + 23840u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012C9A8u) [[unlikely]] return; }
L_0012C9A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[2].w[0] + 8256u);
    st32((c.r[2].w[0] + 8256u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[3].w[0] + 8080u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0012CA04u) [[unlikely]] return; }
L_0012CA04:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0012CA1C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA18u); set32(c.r[4], c.r[4].w[0] + 23872u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012CA18u) [[unlikely]] return; }
L_0012CA18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012CA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[2].w[0] + 8256u);
    st32((c.r[2].w[0] + 8256u), c.r[4].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[3].w[0] + 8120u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA78u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0012CA78u) [[unlikely]] return; }
L_0012CA78:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0012CA90; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA8Cu); set32(c.r[4], c.r[4].w[0] + 23912u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012CA8Cu) [[unlikely]] return; }
L_0012CA8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012CA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8160u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[16].w[0] + 8256u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CADCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0012CADCu) [[unlikely]] return; }
L_0012CADC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] + 8256u)));  if (t) { goto L_0012CAF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CAF0u); set32(c.r[4], c.r[4].w[0] + 23952u);  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0012C678u; return; } if (c.pc != 0x0012CAF0u) [[unlikely]] return; }
L_0012CAF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012CAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25680u);  c.pc = t; return; }
L_0012CB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 8384u);  c.pc = t; return; }
L_0012CB30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB48u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 296u, depth + 1u); else { c.pc = 0x0011ECC8u; return; } if (c.pc != 0x0012CB48u) [[unlikely]] return; }
L_0012CB48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] << 32;  if (t) { goto L_0012CB80; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 45u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 43u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 42u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 41u));
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.budget -= 11;
L_0012CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB88u); c.r[4].d[0] = c.r[4].d[0] >> 32;  if (depth < kMaxDepth) unit_0010(c, 12u, depth + 1u); else { c.pc = 0x00140170u; return; } if (c.pc != 0x0012CB88u) [[unlikely]] return; }
L_0012CB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB90u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0012CB90u) [[unlikely]] return; }
L_0012CB90:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_0012CBAC; } }
L_0012CBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBA8u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x0012CBA8u) [[unlikely]] return; }
L_0012CBA8:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_0012CBAC:
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CBA0u | kUnwind; return; } goto L_0012CBA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBD4u); c.r[5].d[0] = c.r[2].d[0] | 17284ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0012CBD4u) [[unlikely]] return; }
L_0012CBD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBE8u); c.r[5].d[0] = c.r[2].d[0] | 31264ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0012CBE8u) [[unlikely]] return; }
L_0012CBE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[1].w[0] + 25652u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBFCu); st8((c.r[1].w[0] + 25657u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00305FF0u; return; } if (c.pc != 0x0012CBFCu) [[unlikely]] return; }
L_0012CBFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC0Cu); set32(c.r[4], c.r[4].w[0] - 18086u);  if (depth < kMaxDepth) unit_0020(c, 134u, depth + 1u); else { c.pc = 0x00181AF0u; return; } if (c.pc != 0x0012CC0Cu) [[unlikely]] return; }
L_0012CC0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] - 19526u);
    set32(c.r[5], c.r[5].w[0] - 19046u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC28u); set32(c.r[6], c.r[6].w[0] - 18566u);  if (depth < kMaxDepth) unit_00A6(c, 49u, depth + 1u); else { c.pc = 0x003988C0u; return; } if (c.pc != 0x0012CC28u) [[unlikely]] return; }
L_0012CC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC58u);  if (depth < kMaxDepth) unit_0015(c, 42u, depth + 1u); else { c.pc = 0x00155CE0u; return; } if (c.pc != 0x0012CC58u) [[unlikely]] return; }
L_0012CC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC60u);  if (depth < kMaxDepth) unit_004C(c, 130u, depth + 1u); else { c.pc = 0x00231340u; return; } if (c.pc != 0x0012CC60u) [[unlikely]] return; }
L_0012CC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC68u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012CC68u) [[unlikely]] return; }
L_0012CC68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012CC7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC7Cu);  if (depth < kMaxDepth) unit_0051(c, 95u, depth + 1u); else { c.pc = 0x00244A80u; return; } if (c.pc != 0x0012CC7Cu) [[unlikely]] return; }
L_0012CC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012CC90:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 24000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0012CCB0:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_0012CCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_0012CCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0012CCFC; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 86u);  if (t) { goto L_0012CD9C; } }
L_0012CCFC:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4200u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0012CD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 90u);  if (t) { goto L_0012CD4C; } }
L_0012CD40:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 3;
L_0012CD4C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0012CD60; } }
    set32(c.r[2], c.r[16].w[0] + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0012CDC4; } }
L_0012CD60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0012CD94; } }
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD74u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00201AE0u; return; } if (c.pc != 0x0012CD74u) [[unlikely]] return; }
L_0012CD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD7Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x0012CD7Cu) [[unlikely]] return; }
L_0012CD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012CD90; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0012CDC4; } }
L_0012CD90:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_0012CD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012CDC8; } }
L_0012CD9C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], 0u + 90u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    if (c.r[8].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 10;
L_0012CDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0012CDC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012CDE0:
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0012CDF4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CE1C; } }
L_0012CDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].d[0] = 0ull | 44058ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0012CE44; } }
L_0012CE1C:
    set32(c.r[4], c.r[4].w[0] - 86u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 294u);
    c.budget -= 10;
L_0012CE44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012CE50:
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0012CE64; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CE8C; } }
L_0012CE64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].d[0] = 0ull | 44080ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0012CEB4; } }
L_0012CE8C:
    set32(c.r[4], c.r[4].w[0] - 86u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 316u);
    c.budget -= 10;
L_0012CEB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012CEC0:
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0012CED4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CEFC; } }
L_0012CED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].d[0] = 0ull | 43780ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0012CF24; } }
L_0012CEFC:
    set32(c.r[4], c.r[4].w[0] - 86u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 10;
L_0012CF24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012CF30:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012CF54; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012CF50; } }
    breakpoint(c, 0x0012CF4Cu);
    c.budget -= 1;
L_0012CF50:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0012CF54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0012CF64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_0012CF78; } }
L_0012CF64:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012CF74; } }
    breakpoint(c, 0x0012CF70u);
    c.budget -= 1;
L_0012CF74:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0012CF78:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CDE0u | kUnwind; return; } goto L_0012CDE0; }
L_0012CF80:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012CFA4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012CFA0; } }
    breakpoint(c, 0x0012CF9Cu);
    c.budget -= 1;
L_0012CFA0:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0012CFA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0012CFB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_0012CFC8; } }
L_0012CFB4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012CFC4; } }
    breakpoint(c, 0x0012CFC0u);
    c.budget -= 1;
L_0012CFC4:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0012CFC8:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CE50u | kUnwind; return; } goto L_0012CE50; }
L_0012CFD0:
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0012CFE4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D010; } }
L_0012CFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4279u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0012D03C; } }
L_0012D010:
    set32(c.r[4], c.r[4].w[0] - 86u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25974u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
L_0012D03C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D074; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] - 86u);  if (t) { goto L_0012D0E0; } }
L_0012D074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D07Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0012D160u; return; } if (c.pc != 0x0012D07Cu) [[unlikely]] return; }
L_0012D07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_0012D090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D148; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0012D090:
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4279u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D148; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 19ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012D148; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012D14C; } }
    set32(c.r[4], c.r[16].w[0] - 86u);
    c.budget -= 1;
L_0012D0E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25974u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D148; } }
L_0012D114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + 26051u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D148; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 19ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012D148; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0012D148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0012D14C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012D1D4; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 76u);  if (t) { goto L_0012D1CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D1C4; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 69u);  if (t) { goto L_0012D1BC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D1B4; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D1DC; } }
L_0012D1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_0012D1E4; } }
L_0012D1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_0012D1E4; } }
L_0012D1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 50u);  if (t) { goto L_0012D1E4; } }
L_0012D1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 51u);  if (t) { goto L_0012D1E4; } }
L_0012D1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 9u);  if (t) { goto L_0012D1E4; } }
L_0012D1D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0012D1E4; } }
L_0012D1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012D1F8; } }
L_0012D1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1ECu);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0012D1ECu) [[unlikely]] return; }
L_0012D1EC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0012D1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D200:
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012D290; } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 80u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 76u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 58u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 77u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 78u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 72u);  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D28C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D290; } }
L_0012D28C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012D290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2C4u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0012D2C4u) [[unlikely]] return; }
L_0012D2C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0012D2E4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0012D2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012D2EC; } }
L_0012D2E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0012D2EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D328; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] - 86u);  if (t) { goto L_0012D348; } }
L_0012D328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0012D330u) [[unlikely]] return; }
L_0012D330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012D3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012D3B0; } }
L_0012D348:
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D360u); set32(c.r[17], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0012D360u) [[unlikely]] return; }
L_0012D360:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 294u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012D3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D378u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0012D378u) [[unlikely]] return; }
L_0012D378:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1103u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D3A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D390u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0012D390u) [[unlikely]] return; }
L_0012D390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 346u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012D3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D3AC; } }
L_0012D3A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012D3B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012D3D8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0012D460; } }
L_0012D3D8:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4200u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0012D41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 90u);  if (t) { goto L_0012D428; } }
L_0012D41C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 3;
L_0012D428:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0012D438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 3u);  if (t) { goto L_0012D444; } }
L_0012D438:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_0012D448; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0012D444:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_0012D448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D450u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00201AE0u; return; } if (c.pc != 0x0012D450u) [[unlikely]] return; }
L_0012D450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D458u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x0012D458u) [[unlikely]] return; }
L_0012D458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012D490; } }
L_0012D460:
    set32(c.r[4], c.r[4].w[0] - 86u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25974u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
L_0012D490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D4A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 5;
L_0012D4B4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0012D4C4u) [[unlikely]] return; }
L_0012D4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012D508; } }
L_0012D4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0012D4D4u) [[unlikely]] return; }
L_0012D4D4:
    set32(c.r[4], c.r[16].w[0] - 86u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 294u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D504u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0012D504u) [[unlikely]] return; }
L_0012D504:
    st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012D508:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D4B4u | kUnwind; return; } goto L_0012D4B4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D530:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D5EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 29504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012D558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0012D5EC; } }
L_0012D560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0012D5EC; } }
L_0012D568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0012D5EC; } }
L_0012D570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0012D5EC; } }
L_0012D578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0012D5EC; } }
L_0012D580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0012D5EC; } }
L_0012D588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0012D5EC; } }
L_0012D590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0012D5EC; } }
L_0012D598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0012D5EC; } }
L_0012D5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0012D5EC; } }
L_0012D5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0012D5EC; } }
L_0012D5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0012D5EC; } }
L_0012D5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_0012D5EC; } }
L_0012D5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_0012D5EC; } }
L_0012D5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012D5EC; } }
L_0012D5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012D5EC; } }
L_0012D5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0012D5EC; } }
L_0012D5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0012D5EC; } }
L_0012D5E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D5EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D600:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] - 8384u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[6].w[0]) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    set32(c.r[5], c.r[29].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 16u), c.f[0]);  if (t) { goto L_0012D634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D63C; } }
L_0012D634:
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 2;
L_0012D63C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D690; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0012D690; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0012D690; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0012D690; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0012D698; } }
L_0012D690:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 2;
L_0012D698:
    set32(c.r[3], c.r[3].w[0] - 30u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012D6D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 29584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012D6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012D6D0; } }
L_0012D6CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D6F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0012D6F4u) [[unlikely]] return; }
L_0012D6F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D700u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0012D700u) [[unlikely]] return; }
L_0012D700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D714u); st8((c.r[1].w[0] + 17281u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000B(c, 69u, depth + 1u); else { c.pc = 0x0012C9C0u; return; } if (c.pc != 0x0012D714u) [[unlikely]] return; }
L_0012D714:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D720u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0012D720u) [[unlikely]] return; }
L_0012D720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 17282u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D740:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[5], 0u + 512u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[7], 0u + 2u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[8], 0u + 30u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D778u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0068(c, 203u, depth + 1u); else { c.pc = 0x002A3150u; return; } if (c.pc != 0x0012D778u) [[unlikely]] return; }
L_0012D778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 22048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D788u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0012D788u) [[unlikely]] return; }
L_0012D788:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D79Cu); st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012D79Cu) [[unlikely]] return; }
L_0012D79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7ACu); set32(c.r[4], c.r[4].w[0] + 29616u);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0012E330u; return; } if (c.pc != 0x0012D7ACu) [[unlikely]] return; }
L_0012D7AC:
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0012D7C4u) [[unlikely]] return; }
L_0012D7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7CCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x0012D7CCu) [[unlikely]] return; }
L_0012D7CC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 138u, depth + 1u); else { c.pc = 0x00149120u; return; } if (c.pc != 0x0012D7DCu) [[unlikely]] return; }
L_0012D7DC:
    set32(c.r[17], c.r[29].w[0] + 148u);
    set32(c.r[16], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 15280u);
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D808u); set32(c.r[6], c.r[2].w[0] + 15280u);  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x0012D808u) [[unlikely]] return; }
L_0012D808:
    set32(c.r[8], c.r[29].w[0] + 116u);
    c.r[3].d[0] = 0ull & 3ull;
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 25u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 272u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0]));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[18], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D878u); set32(c.r[19], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012D878u) [[unlikely]] return; }
L_0012D878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012D88C; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D88Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0012D88Cu) [[unlikely]] return; }
L_0012D88C:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0012D8A8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0012D8A8; } }
    set32(c.r[19], 0u + 460u);
    c.budget -= 1;
L_0012D8A8:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = 0u;
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D8D8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012D8D8u) [[unlikely]] return; }
L_0012D8D8:
    c.f[0] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012D8F4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012D910; } }
L_0012D8F4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0012D910:
    fpu_div(c, 2u, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.f[0] = c.r[18].w[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012D93C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012D958; } }
L_0012D93C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0012D958:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[3], 0u + 12289u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[2]);
    st32((c.r[5].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D984u); st64((c.r[2].w[0] + 248u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0012D984u) [[unlikely]] return; }
L_0012D984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D98Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 225u, depth + 1u); else { c.pc = 0x002A34E0u; return; } if (c.pc != 0x0012D98Cu) [[unlikely]] return; }
L_0012D98C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D998u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 131u, depth + 1u); else { c.pc = 0x00149030u; return; } if (c.pc != 0x0012D998u) [[unlikely]] return; }
L_0012D998:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0012D9A4u) [[unlikely]] return; }
L_0012D9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9ACu); set32(c.r[4], ld32((c.r[29].w[0] + 220u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012D9ACu) [[unlikely]] return; }
L_0012D9AC:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0012D9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9F8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0012D9F8u) [[unlikely]] return; }
L_0012D9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA10u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0012DA10u) [[unlikely]] return; }
L_0012DA10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA24u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DA24u) [[unlikely]] return; }
L_0012DA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA2Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DA2Cu) [[unlikely]] return; }
L_0012DA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012DA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA3Cu);  if (depth < kMaxDepth) unit_000B(c, 157u, depth + 1u); else { c.pc = 0x0012D740u; return; } if (c.pc != 0x0012DA3Cu) [[unlikely]] return; }
L_0012DA3C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA48u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DA48u) [[unlikely]] return; }
L_0012DA48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DA60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012DAFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DAAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DAAC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DAACu) [[unlikely]] return; }
L_0012DAAC:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DAD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DAD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DAD4u) [[unlikely]] return; }
L_0012DAD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAE4u); st32((c.r[17].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0012DAE4u) [[unlikely]] return; }
L_0012DAE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012DB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012DAFCu) [[unlikely]] return; }
L_0012DAFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012DB00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012DB68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0012DB50u) [[unlikely]] return; }
L_0012DB50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012DB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012DB68u) [[unlikely]] return; }
L_0012DB68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012DB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DB80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB9Cu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x0012DB9Cu) [[unlikely]] return; }
L_0012DB9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0012DBFC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBC4u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DBC4u) [[unlikely]] return; }
L_0012DBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DD20u; return; } if (c.pc != 0x0012DBCCu) [[unlikely]] return; }
L_0012DBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBD4u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DBD4u) [[unlikely]] return; }
L_0012DBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012DBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 225u, depth + 1u); else { c.pc = 0x0012DDE0u; return; } if (c.pc != 0x0012DBE4u) [[unlikely]] return; }
L_0012DBE4:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DBF0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DBF0u) [[unlikely]] return; }
L_0012DBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DCC0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0012DBFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0012DC54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DC24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DC24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DC24u) [[unlikely]] return; }
L_0012DC24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC30u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000B(c, 203u, depth + 1u); else { c.pc = 0x0012DCD0u; return; } if (c.pc != 0x0012DC30u) [[unlikely]] return; }
L_0012DC30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012DCBC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DC4Cu) [[unlikely]] return; }
L_0012DC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DCBC; } }
L_0012DC54:
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0012DCBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC68u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0012DC68u) [[unlikely]] return; }
L_0012DC68:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012DC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC7Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0012DC7Cu) [[unlikely]] return; }
L_0012DC7C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012DC80:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012DCBC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DCB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012DCB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DCB0u) [[unlikely]] return; }
L_0012DCB0:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCBCu); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0068(c, 226u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x0012DCBCu) [[unlikely]] return; }
L_0012DCBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012DCC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCE0u);  if (depth < kMaxDepth) unit_002A(c, 47u, depth + 1u); else { c.pc = 0x001A8E00u; return; } if (c.pc != 0x0012DCE0u) [[unlikely]] return; }
L_0012DCE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCF4u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DCF4u) [[unlikely]] return; }
L_0012DCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCFCu); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DCFCu) [[unlikely]] return; }
L_0012DCFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012DD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 411u, depth + 1u); else { c.pc = 0x00137180u; return; } if (c.pc != 0x0012DD0Cu) [[unlikely]] return; }
L_0012DD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD14u); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DD14u) [[unlikely]] return; }
L_0012DD14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD3Cu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DD3Cu) [[unlikely]] return; }
L_0012DD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD44u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DD44u) [[unlikely]] return; }
L_0012DD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0012DD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 262u, depth + 1u); else { c.pc = 0x0015A630u; return; } if (c.pc != 0x0012DD54u) [[unlikely]] return; }
L_0012DD54:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0012DD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DD60u) [[unlikely]] return; }
L_0012DD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0012DD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 74u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x0012DD70u) [[unlikely]] return; }
L_0012DD70:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0012DD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012DD7Cu) [[unlikely]] return; }
L_0012DD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012DD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD8Cu);  if (depth < kMaxDepth) unit_000F(c, 56u, depth + 1u); else { c.pc = 0x0013C6A0u; return; } if (c.pc != 0x0012DD8Cu) [[unlikely]] return; }
L_0012DD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD94u);  if (depth < kMaxDepth) unit_000B(c, 91u, depth + 1u); else { c.pc = 0x0012CC40u; return; } if (c.pc != 0x0012DD94u) [[unlikely]] return; }
L_0012DD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DD9Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0012DD9Cu) [[unlikely]] return; }
L_0012DD9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 21770ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDACu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0020(c, 137u, depth + 1u); else { c.pc = 0x00181BA0u; return; } if (c.pc != 0x0012DDACu) [[unlikely]] return; }
L_0012DDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDB4u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00243280u; return; } if (c.pc != 0x0012DDB4u) [[unlikely]] return; }
L_0012DDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDBCu);  if (depth < kMaxDepth) unit_0068(c, 245u, depth + 1u); else { c.pc = 0x002A37F0u; return; } if (c.pc != 0x0012DDBCu) [[unlikely]] return; }
L_0012DDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDC4u);  if (depth < kMaxDepth) unit_0068(c, 287u, depth + 1u); else { c.pc = 0x002A3EB0u; return; } if (c.pc != 0x0012DDC4u) [[unlikely]] return; }
L_0012DDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDCCu);  if (depth < kMaxDepth) unit_0069(c, 22u, depth + 1u); else { c.pc = 0x002A42B0u; return; } if (c.pc != 0x0012DDCCu) [[unlikely]] return; }
L_0012DDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDD4u); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012DDD4u) [[unlikely]] return; }
L_0012DDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0012DDF4u) [[unlikely]] return; }
L_0012DDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 22112u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE08u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0012DE08u) [[unlikely]] return; }
L_0012DE08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17272u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012DE24; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0012DE24:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 29760u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0012DE48u) [[unlikely]] return; }
L_0012DE48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012DF00; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 29792u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012DE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEA0u);  if (depth < kMaxDepth) unit_000B(c, 245u, depth + 1u); else { c.pc = 0x0012DF50u; return; } if (c.pc != 0x0012DEA0u) [[unlikely]] return; }
L_0012DEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_0012DF04; } }
L_0012DEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEB0u);  if (depth < kMaxDepth) unit_000B(c, 256u, depth + 1u); else { c.pc = 0x0012E080u; return; } if (c.pc != 0x0012DEB0u) [[unlikely]] return; }
L_0012DEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DF00; } }
L_0012DEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 263u, depth + 1u); else { c.pc = 0x0012E110u; return; } if (c.pc != 0x0012DEC0u) [[unlikely]] return; }
L_0012DEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DF00; } }
L_0012DEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DED0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 263u, depth + 1u); else { c.pc = 0x0012E110u; return; } if (c.pc != 0x0012DED0u) [[unlikely]] return; }
L_0012DED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DF00; } }
L_0012DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEE0u);  if (depth < kMaxDepth) unit_000B(c, 274u, depth + 1u); else { c.pc = 0x0012E1F0u; return; } if (c.pc != 0x0012DEE0u) [[unlikely]] return; }
L_0012DEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DF00; } }
L_0012DEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEF0u);  if (depth < kMaxDepth) unit_000B(c, 282u, depth + 1u); else { c.pc = 0x0012E2B0u; return; } if (c.pc != 0x0012DEF0u) [[unlikely]] return; }
L_0012DEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DF00; } }
L_0012DEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF00u);  if (depth < kMaxDepth) unit_000B(c, 278u, depth + 1u); else { c.pc = 0x0012E250u; return; } if (c.pc != 0x0012DF00u) [[unlikely]] return; }
L_0012DF00:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0012DF04:
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0012DF38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 29760u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0012DF38u) [[unlikely]] return; }
L_0012DF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DF50:
    set32(c.r[29], c.r[29].w[0] - 2464u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 2448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0012DF68u) [[unlikely]] return; }
L_0012DF68:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2448u);
    c.budget -= 2;
L_0012DF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF78u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0012DF78u) [[unlikely]] return; }
L_0012DF78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 2448u);  if (t) { goto L_0012DF98; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF90u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0012DF90u) [[unlikely]] return; }
L_0012DF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0012DFA0; } }
L_0012DF98:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0012DFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0012DFDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = 0ull | 43780ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[6], 0u + 368u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFDCu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0012DFDCu) [[unlikely]] return; }
L_0012DFDC:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].sd[0] < 162ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 2448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DF70u | kUnwind; return; } goto L_0012DF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFF8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0012DFF8u) [[unlikely]] return; }
L_0012DFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17272u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012E018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E014u);  if (depth < kMaxDepth) unit_0088(c, 532u, depth + 1u); else { c.pc = 0x003233F0u; return; } if (c.pc != 0x0012E014u) [[unlikely]] return; }
L_0012E014:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E018:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0012E01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 43788ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - 29956u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 8u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E050u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0012E050u) [[unlikely]] return; }
L_0012E050:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E01Cu | kUnwind; return; } goto L_0012E01C; } }
    set32(c.r[4], c.r[29].w[0] + 2448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E06Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0012E06Cu) [[unlikely]] return; }
L_0012E06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2464u);  c.pc = t; return; }
L_0012E080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E094u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0012E094u) [[unlikely]] return; }
L_0012E094:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0012E0A0u) [[unlikely]] return; }
L_0012E0A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_0012E0C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0C0u); set32(c.r[5], c.r[5].w[0] - 18054u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0012E0C0u) [[unlikely]] return; }
L_0012E0C0:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_0012E0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0012E0CCu) [[unlikely]] return; }
L_0012E0CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 16u);  if (t) { goto L_0012E0F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0ECu); set32(c.r[5], c.r[5].w[0] - 17028u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0012E0ECu) [[unlikely]] return; }
L_0012E0EC:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_0012E0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0012E0F8u) [[unlikely]] return; }
L_0012E0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E130u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0012E130u) [[unlikely]] return; }
L_0012E130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E144u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E144u) [[unlikely]] return; }
L_0012E144:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0012E150u) [[unlikely]] return; }
L_0012E150:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E164u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x0012E164u) [[unlikely]] return; }
L_0012E164:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012E19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E174u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012E174u) [[unlikely]] return; }
L_0012E174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E190; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E190u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0012E190u) [[unlikely]] return; }
L_0012E190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31128u), c.r[2].w[0]);  if (t) { goto L_0012E1C8; } }
L_0012E19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1A4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0012E1A4u) [[unlikely]] return; }
L_0012E1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E1C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0012E1C0u) [[unlikely]] return; }
L_0012E1C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31136u), c.r[2].w[0]);
    c.budget -= 2;
L_0012E1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1D0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E1D0u) [[unlikely]] return; }
L_0012E1D0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0012E1DCu) [[unlikely]] return; }
L_0012E1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E1F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E21Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E21Cu) [[unlikely]] return; }
L_0012E21C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E228u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 87u, depth + 1u); else { c.pc = 0x002093F0u; return; } if (c.pc != 0x0012E228u) [[unlikely]] return; }
L_0012E228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E230u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E230u) [[unlikely]] return; }
L_0012E230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E27Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E27Cu) [[unlikely]] return; }
L_0012E27C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E288u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 206u, depth + 1u); else { c.pc = 0x0020A210u; return; } if (c.pc != 0x0012E288u) [[unlikely]] return; }
L_0012E288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E290u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E290u) [[unlikely]] return; }
L_0012E290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E2B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2DCu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E2DCu) [[unlikely]] return; }
L_0012E2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0012E2E4u) [[unlikely]] return; }
L_0012E2E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] + 31104u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31112u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31104u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E308u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0012E308u) [[unlikely]] return; }
L_0012E308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E310u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0012E310u) [[unlikely]] return; }
L_0012E310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
L_0012E34C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E358u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 153u, depth + 1u); else { c.pc = 0x00146990u; return; } if (c.pc != 0x0012E358u) [[unlikely]] return; }
L_0012E358:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E34Cu | kUnwind; return; } goto L_0012E34C; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0012E36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 169u, depth + 1u); else { c.pc = 0x00146B40u; return; } if (c.pc != 0x0012E374u) [[unlikely]] return; }
L_0012E374:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E36Cu | kUnwind; return; } goto L_0012E36C; } }
    set32(c.r[3], c.r[2].w[0] + 2047u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[2], 0u - 2048u);
    c.r[16].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x0012E3A0u) [[unlikely]] return; }
L_0012E3A0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 163u, depth + 1u); else { c.pc = 0x00146A90u; return; } if (c.pc != 0x0012E3B4u) [[unlikely]] return; }
L_0012E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 173u, depth + 1u); else { c.pc = 0x00146BC0u; return; } if (c.pc != 0x0012E3BCu) [[unlikely]] return; }
L_0012E3BC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012E428; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E410u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 210u, depth + 1u); else { c.pc = 0x002A3250u; return; } if (c.pc != 0x0012E410u) [[unlikely]] return; }
L_0012E410:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012E42C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012E428u) [[unlikely]] return; }
L_0012E428:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012E42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0012E454u) [[unlikely]] return; }
L_0012E454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22016u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012E4D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0012E4C0u) [[unlikely]] return; }
L_0012E4C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012E4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012E4D8u) [[unlikely]] return; }
L_0012E4D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012E4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0012E5B8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 29824u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012E530:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E540u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E540u) [[unlikely]] return; }
L_0012E540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012E5BC; } }
L_0012E548:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E558u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E558u) [[unlikely]] return; }
L_0012E558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E5B8; } }
L_0012E560:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E570u) [[unlikely]] return; }
L_0012E570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E5B8; } }
L_0012E578:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E588u) [[unlikely]] return; }
L_0012E588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E5B8; } }
L_0012E590:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E5A0u) [[unlikely]] return; }
L_0012E5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E5B8; } }
L_0012E5A8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E5B8u) [[unlikely]] return; }
L_0012E5B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012E5BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0012E5E0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 404u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0012C000u < 16384u) { entry = entries_000B[(t - 0x0012C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0012E600:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0012E610:
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0012E630:
    set32(c.r[3], 0u + 4u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0012E640:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0012E650:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0012E660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));  c.pc = t; return; }
L_0012E680:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0012E690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012E70C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E70Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0012E70Cu) [[unlikely]] return; }
L_0012E70C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21600u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012E740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012E77C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21600u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0012E778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E778u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012E778u) [[unlikely]] return; }
L_0012E778:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012E77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E834u); c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0012E834u) [[unlikely]] return; }
L_0012E834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 21632u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0] + 8u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 24u), 0u);
    st32((c.r[20].w[0] + 28u), c.r[5].w[0]);
    st8((c.r[20].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[20].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012E8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012E8E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0012E8D0u) [[unlikely]] return; }
L_0012E8D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012E8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012E8E8u) [[unlikely]] return; }
L_0012E8E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012E8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012E938; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0012E928; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0012E938; } }
L_0012E928:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E938u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E938u) [[unlikely]] return; }
L_0012E938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012E960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0012EA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0012E9A0u) [[unlikely]] return; }
L_0012E9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EA24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012EA08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9ECu); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E9ECu) [[unlikely]] return; }
L_0012E9EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EA00u) [[unlikely]] return; }
L_0012EA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012EB48; } }
L_0012EA08:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA1Cu); set32(c.r[5], 0u + 403u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EA1Cu) [[unlikely]] return; }
L_0012EA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EB44; } }
L_0012EA24:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012EA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0012EA38u) [[unlikely]] return; }
L_0012EA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EA7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA60u); set32(c.r[5], 0u + 401u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EA60u) [[unlikely]] return; }
L_0012EA60:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EA74u) [[unlikely]] return; }
L_0012EA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EB44; } }
L_0012EA7C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012EA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA88u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x0012EA88u) [[unlikely]] return; }
L_0012EA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012EAB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EAACu) [[unlikely]] return; }
L_0012EAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EB44; } }
L_0012EAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EABCu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x0012EABCu) [[unlikely]] return; }
L_0012EABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EAE8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EAE0u) [[unlikely]] return; }
L_0012EAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EB44; } }
L_0012EAE8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EAFCu) [[unlikely]] return; }
L_0012EAFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EB44; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EB30; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB30u); set32(c.r[5], 0u + 402u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EB30u) [[unlikely]] return; }
L_0012EB30:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012EB44u) [[unlikely]] return; }
L_0012EB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012EB48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012EB60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB7Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0012EB7Cu) [[unlikely]] return; }
L_0012EB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012EB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[5].w[0]);  c.pc = t; return; }
L_0012EBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBBCu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x0012EBBCu) [[unlikely]] return; }
L_0012EBBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21664u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012EBF0:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0012EC4C; } }
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EC34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012EC2C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_0012EC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012ECB4; } }
L_0012EC34:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0012ECB0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0012ECB4; } }
L_0012EC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012ECB0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012EC90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EC88; } }
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 1;
L_0012EC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012ECB4; } }
L_0012EC90:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0012ECB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0012ECB4; } }
L_0012ECB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012ECB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012ECC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECD8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0012ECD8u) [[unlikely]] return; }
L_0012ECD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012ED00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012ED48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012ED30u) [[unlikely]] return; }
L_0012ED30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012ED4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012ED48u) [[unlikely]] return; }
L_0012ED48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012ED4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012ED60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 402u);  if (t) { goto L_0012ED84; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012ED84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED84u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0012ED84u) [[unlikely]] return; }
L_0012ED84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012ED90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EDACu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x0012EDACu) [[unlikely]] return; }
L_0012EDAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21728u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012EDE0:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0012EE40; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EE28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012EE20; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_0012EE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EEB0; } }
L_0012EE28:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0012EEAC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0012EEB0; } }
L_0012EE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EEAC; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012EE84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012EE7C; } }
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 1;
L_0012EE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EEB0; } }
L_0012EE84:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EEB0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0012EEB0; } }
L_0012EEAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012EEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012EEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EED8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012ED90u; return; } if (c.pc != 0x0012EED8u) [[unlikely]] return; }
L_0012EED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21760u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012EF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012EF48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012EF30u) [[unlikely]] return; }
L_0012EF30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012EF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012EF48u) [[unlikely]] return; }
L_0012EF48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012EF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012EF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 402u);  if (t) { goto L_0012EF84; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012EF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF84u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0012EF84u) [[unlikely]] return; }
L_0012EF84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012EF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 8352u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 2u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFB4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012ED90u; return; } if (c.pc != 0x0012EFB4u) [[unlikely]] return; }
L_0012EFB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21792u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012EFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 383u, depth + 1u); else { c.pc = 0x0012EDE0u; return; } if (c.pc != 0x0012EFF4u) [[unlikely]] return; }
L_0012EFF4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0012F00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F010; } }
L_0012F00C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0012F010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F03Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x0012F03Cu) [[unlikely]] return; }
L_0012F03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F064; } }
    breakpoint(c, 0x0012F060u);
    c.budget -= 1;
L_0012F064:
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F080; } }
    breakpoint(c, 0x0012F07Cu);
    c.budget -= 1;
L_0012F080:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012F09C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0012F09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012F0F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F0E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012F0E0u) [[unlikely]] return; }
L_0012F0E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012F0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012F0F8u) [[unlikely]] return; }
L_0012F0F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012F0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F110:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0012F16C; } }
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012F144; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012F148; } }
L_0012F144:
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0012F148:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F15C; } }
    breakpoint(c, 0x0012F158u);
    c.budget -= 1;
L_0012F15C:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0012F2E8; } }
L_0012F16C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F1C4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), 0u);  if (t) { goto L_0012F1A0; } }
L_0012F19C:
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_0012F1A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F1B4; } }
    breakpoint(c, 0x0012F1B0u);
    c.budget -= 1;
L_0012F1B4:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0012F2E8; } }
L_0012F1C4:
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0012F254; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0012F220; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012F214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012F230; } }
L_0012F214:
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012F230; } }
L_0012F220:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_0012F230:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F244; } }
    breakpoint(c, 0x0012F240u);
    c.budget -= 1;
L_0012F244:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0012F2E8; } }
L_0012F254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F2E4; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012F294; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012F2C0; } }
L_0012F294:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012F2C0; } }
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_0012F2C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0012F2D4; } }
    breakpoint(c, 0x0012F2D0u);
    c.budget -= 1;
L_0012F2D4:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0012F2E8; } }
L_0012F2E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012F2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 370u, depth + 1u); else { c.pc = 0x0012EB90u; return; } if (c.pc != 0x0012F304u) [[unlikely]] return; }
L_0012F304:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012F328; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);  if (t) { goto L_0012F320; } }
    breakpoint(c, 0x0012F31Cu);
    c.budget -= 1;
L_0012F320:
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_0012F328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0012F414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F390u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0012F390u) [[unlikely]] return; }
L_0012F390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F414; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012F3F8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3DCu); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F3DCu) [[unlikely]] return; }
L_0012F3DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F3F0u) [[unlikely]] return; }
L_0012F3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0012F56C; } }
L_0012F3F8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F40Cu); set32(c.r[5], 0u + 403u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F40Cu) [[unlikely]] return; }
L_0012F40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F568; } }
L_0012F414:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0012F470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F428u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0012F428u) [[unlikely]] return; }
L_0012F428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F46C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F450u); set32(c.r[5], 0u + 401u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F450u) [[unlikely]] return; }
L_0012F450:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F464u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F464u) [[unlikely]] return; }
L_0012F464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F568; } }
L_0012F46C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0012F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F478u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x0012F478u) [[unlikely]] return; }
L_0012F478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0012F4A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F49Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F49Cu) [[unlikely]] return; }
L_0012F49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F568; } }
L_0012F4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4ACu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x0012F4ACu) [[unlikely]] return; }
L_0012F4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F4D8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F4D0u) [[unlikely]] return; }
L_0012F4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F568; } }
L_0012F4D8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F4ECu) [[unlikely]] return; }
L_0012F4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012F568; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F554; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0012F534; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F52Cu); set32(c.r[5], 0u + 437u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F52Cu) [[unlikely]] return; }
L_0012F52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0012F558; } }
L_0012F534:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0012F554; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F554u); set32(c.r[5], 0u + 402u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F554u) [[unlikely]] return; }
L_0012F554:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0012F558:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F568u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F568u) [[unlikely]] return; }
L_0012F568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0012F56C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5C0u); c.r[16].d[0] = c.r[11].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 345u, depth + 1u); else { c.pc = 0x0012E800u; return; } if (c.pc != 0x0012F5C0u) [[unlikely]] return; }
L_0012F5C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21888u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[17].w[0]);
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));
    st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F610:
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_0012F630:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0012F644; } }
    breakpoint(c, 0x0012F640u);
    c.budget -= 1;
L_0012F644:
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0012F664; } }
    breakpoint(c, 0x0012F660u);
    c.budget -= 1;
L_0012F664:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  c.pc = t; return; }
L_0012F670:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_0012F6D0; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 49u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F6B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F6B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F800; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F738; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 49u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F718; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F800; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F718:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0012F800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F738:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0012F790; } }
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F778; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F778:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0012F800; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F7F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F7D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F800; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F7D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0012F800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0012F800; } }
L_0012F7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F81C; } }
L_0012F800:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 7;
L_0012F81C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F844u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0012F844u) [[unlikely]] return; }
L_0012F844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 21920u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 34u));
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0012F934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0012F8B0u) [[unlikely]] return; }
L_0012F8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F934; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012F918; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8FCu); set32(c.r[5], 0u + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F8FCu) [[unlikely]] return; }
L_0012F8FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F910u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F910u) [[unlikely]] return; }
L_0012F910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012FAB8; } }
L_0012F918:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F92Cu); set32(c.r[5], 0u + 403u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F92Cu) [[unlikely]] return; }
L_0012F92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012F934:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 35u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012F990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0012F948u) [[unlikely]] return; }
L_0012F948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F98C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F970u); set32(c.r[5], 0u + 401u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F970u) [[unlikely]] return; }
L_0012F970:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F984u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F984u) [[unlikely]] return; }
L_0012F984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012F98C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012F990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F998u);  if (depth < kMaxDepth) unit_000F(c, 317u, depth + 1u); else { c.pc = 0x0013F0F0u; return; } if (c.pc != 0x0012F998u) [[unlikely]] return; }
L_0012F998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012F9C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F9BCu) [[unlikely]] return; }
L_0012F9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012F9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9CCu);  if (depth < kMaxDepth) unit_000F(c, 318u, depth + 1u); else { c.pc = 0x0013F100u; return; } if (c.pc != 0x0012F9CCu) [[unlikely]] return; }
L_0012F9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F9F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F9F0u) [[unlikely]] return; }
L_0012F9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012F9F8:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_0012FA2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FA24u) [[unlikely]] return; }
L_0012FA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012FA2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FA58; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FA50u) [[unlikely]] return; }
L_0012FA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FAB4; } }
L_0012FA58:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FA6Cu) [[unlikely]] return; }
L_0012FA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FAB4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012FAA0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAA0u); set32(c.r[5], 0u + 402u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FAA0u) [[unlikely]] return; }
L_0012FAA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FAB4u) [[unlikely]] return; }
L_0012FAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012FAB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FB28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21920u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FB10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB10u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FB10u) [[unlikely]] return; }
L_0012FB10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FB28u) [[unlikely]] return; }
L_0012FB28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FB88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB70u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FB70u) [[unlikely]] return; }
L_0012FB70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FB88u) [[unlikely]] return; }
L_0012FB88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FBF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FBE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBE0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FBE0u) [[unlikely]] return; }
L_0012FBE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FBFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FBF8u) [[unlikely]] return; }
L_0012FBF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FC68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21792u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FC50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FC50u) [[unlikely]] return; }
L_0012FC50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FC6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FC68u) [[unlikely]] return; }
L_0012FC68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FCD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21760u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FCC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCC0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FCC0u) [[unlikely]] return; }
L_0012FCC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FCDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FCD8u) [[unlikely]] return; }
L_0012FCD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FD48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 21696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FD30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FD30u) [[unlikely]] return; }
L_0012FD30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FD4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FD48u) [[unlikely]] return; }
L_0012FD48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FD60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012FD7C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 830ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0012FD9C; } }
L_0012FD7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] - 8592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD90u); set32(c.r[5], c.r[5].w[0] - 22792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0012FD90u) [[unlikely]] return; }
L_0012FD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 8592u);  if (t) { goto L_0012FDAC; } }
L_0012FD9C:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8336u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_0012FDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012FDC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDE0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0012FDE0u) [[unlikely]] return; }
L_0012FDE0:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[16].w[0]), 0u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_0012FE04; } }
    c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0012FE14; } }
L_0012FE04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 253ll ? 1ull : 0ull;  if (t) { goto L_0012FE1C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012FE1C; } }
L_0012FE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012FE20; } }
L_0012FE1C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0012FE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE70u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0012FE70u) [[unlikely]] return; }
L_0012FE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE78u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x0012FE78u) [[unlikely]] return; }
L_0012FE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21552u);
    set32(c.r[2], c.r[2].w[0] - 21464u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012FE9C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0012FE9C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 24u);
    set32(c.r[8], c.r[8].w[0] - 8528u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEBCu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0012FEBCu) [[unlikely]] return; }
L_0012FEBC:
    st32((c.r[19].w[0] + 68u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012FEF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FF70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21552u);
    set32(c.r[2], c.r[2].w[0] - 21464u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0012FF40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 21664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF40u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 347u, depth + 1u); else { c.pc = 0x0012E8A0u; return; } if (c.pc != 0x0012FF40u) [[unlikely]] return; }
L_0012FF40:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x0012FF4Cu) [[unlikely]] return; }
L_0012FF4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0012FF58u) [[unlikely]] return; }
L_0012FF58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012FF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0012FF70u) [[unlikely]] return; }
L_0012FF70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012FF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FF90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { st32((c.r[4].w[0] + 60u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } goto L_0012E600; }
L_0012FFA0:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 60u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5E0u | kUnwind; return; } goto L_0012E5E0; }
L_0012FFB0:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 60u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E610u | kUnwind; return; } goto L_0012E610; }
L_0012FFC0:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 60u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E630u | kUnwind; return; } goto L_0012E630; }
L_0012FFD0:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 60u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } goto L_0012E640; }
L_0012FFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_000C(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_000C(c, 4u, depth); } }
    [[clang::musttail]] return unit_000C(c, 2u, depth);
}

}
