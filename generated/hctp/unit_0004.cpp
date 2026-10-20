#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0004[4096] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0,
    137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 272,
    273, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    322, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0,
    0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353,
    354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    478, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
};

void unit_0004(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00110000;
    case 2u: goto L_00110010;
    case 3u: goto L_00110014;
    case 4u: goto L_00110048;
    case 5u: goto L_00110070;
    case 6u: goto L_0011007C;
    case 7u: goto L_00110094;
    case 8u: goto L_001100B8;
    case 9u: goto L_001100F0;
    case 10u: goto L_0011013C;
    case 11u: goto L_0011014C;
    case 12u: goto L_00110154;
    case 13u: goto L_0011016C;
    case 14u: goto L_0011017C;
    case 15u: goto L_0011018C;
    case 16u: goto L_00110194;
    case 17u: goto L_001101C8;
    case 18u: goto L_00110200;
    case 19u: goto L_0011020C;
    case 20u: goto L_00110224;
    case 21u: goto L_00110248;
    case 22u: goto L_00110288;
    case 23u: goto L_001102B4;
    case 24u: goto L_001102F0;
    case 25u: goto L_0011032C;
    case 26u: goto L_00110368;
    case 27u: goto L_00110378;
    case 28u: goto L_00110380;
    case 29u: goto L_00110394;
    case 30u: goto L_001103A4;
    case 31u: goto L_001103BC;
    case 32u: goto L_001103CC;
    case 33u: goto L_001103D4;
    case 34u: goto L_00110400;
    case 35u: goto L_0011040C;
    case 36u: goto L_00110410;
    case 37u: goto L_00110440;
    case 38u: goto L_0011044C;
    case 39u: goto L_00110464;
    case 40u: goto L_00110488;
    case 41u: goto L_001104C8;
    case 42u: goto L_001104F4;
    case 43u: goto L_00110524;
    case 44u: goto L_00110560;
    case 45u: goto L_00110588;
    case 46u: goto L_00110594;
    case 47u: goto L_001105C4;
    case 48u: goto L_001105D4;
    case 49u: goto L_001105DC;
    case 50u: goto L_001105EC;
    case 51u: goto L_001105FC;
    case 52u: goto L_00110614;
    case 53u: goto L_00110624;
    case 54u: goto L_0011062C;
    case 55u: goto L_00110660;
    case 56u: goto L_001106A0;
    case 57u: goto L_001106AC;
    case 58u: goto L_001106C4;
    case 59u: goto L_001106E8;
    case 60u: goto L_00110728;
    case 61u: goto L_00110754;
    case 62u: goto L_00110790;
    case 63u: goto L_001107CC;
    case 64u: goto L_00110818;
    case 65u: goto L_00110830;
    case 66u: goto L_00110880;
    case 67u: goto L_00110890;
    case 68u: goto L_00110898;
    case 69u: goto L_001108AC;
    case 70u: goto L_001108BC;
    case 71u: goto L_001108D4;
    case 72u: goto L_001108E4;
    case 73u: goto L_001108EC;
    case 74u: goto L_00110920;
    case 75u: goto L_00110960;
    case 76u: goto L_0011096C;
    case 77u: goto L_00110988;
    case 78u: goto L_001109A4;
    case 79u: goto L_001109EC;
    case 80u: goto L_00110A10;
    case 81u: goto L_00110A50;
    case 82u: goto L_00110AB8;
    case 83u: goto L_00110B0C;
    case 84u: goto L_00110B78;
    case 85u: goto L_00110BC8;
    case 86u: goto L_00110BEC;
    case 87u: goto L_00110C14;
    case 88u: goto L_00110C24;
    case 89u: goto L_00110C2C;
    case 90u: goto L_00110C40;
    case 91u: goto L_00110C50;
    case 92u: goto L_00110C60;
    case 93u: goto L_00110C68;
    case 94u: goto L_00110C8C;
    case 95u: goto L_00110C98;
    case 96u: goto L_00110CA4;
    case 97u: goto L_00110CE0;
    case 98u: goto L_00110CEC;
    case 99u: goto L_00110D04;
    case 100u: goto L_00110D20;
    case 101u: goto L_00110D40;
    case 102u: goto L_00110D64;
    case 103u: goto L_00110D90;
    case 104u: goto L_00110DBC;
    case 105u: goto L_00110DF0;
    case 106u: goto L_00110E00;
    case 107u: goto L_00110E08;
    case 108u: goto L_00110E1C;
    case 109u: goto L_00110E2C;
    case 110u: goto L_00110E3C;
    case 111u: goto L_00110E44;
    case 112u: goto L_00110E78;
    case 113u: goto L_00110EB8;
    case 114u: goto L_00110ED0;
    case 115u: goto L_00110EF8;
    case 116u: goto L_00110F5C;
    case 117u: goto L_00110F98;
    case 118u: goto L_00110FA8;
    case 119u: goto L_00110FB0;
    case 120u: goto L_00110FC4;
    case 121u: goto L_00110FD4;
    case 122u: goto L_00110FE4;
    case 123u: goto L_00110FEC;
    case 124u: goto L_00111020;
    case 125u: goto L_00111030;
    case 126u: goto L_0011103C;
    case 127u: goto L_00111040;
    case 128u: goto L_00111080;
    case 129u: goto L_00111098;
    case 130u: goto L_001110B8;
    case 131u: goto L_001110C0;
    case 132u: goto L_00111100;
    case 133u: goto L_0011112C;
    case 134u: goto L_00111140;
    case 135u: goto L_00111168;
    case 136u: goto L_00111178;
    case 137u: goto L_00111180;
    case 138u: goto L_00111194;
    case 139u: goto L_001111A4;
    case 140u: goto L_001111B4;
    case 141u: goto L_001111BC;
    case 142u: goto L_001111C0;
    case 143u: goto L_001111F0;
    case 144u: goto L_00111200;
    case 145u: goto L_00111210;
    case 146u: goto L_00111258;
    case 147u: goto L_00111270;
    case 148u: goto L_00111290;
    case 149u: goto L_001112F8;
    case 150u: goto L_00111338;
    case 151u: goto L_00111358;
    case 152u: goto L_001113B0;
    case 153u: goto L_001113D0;
    case 154u: goto L_001113F8;
    case 155u: goto L_00111408;
    case 156u: goto L_00111410;
    case 157u: goto L_00111424;
    case 158u: goto L_00111434;
    case 159u: goto L_0011143C;
    case 160u: goto L_00111444;
    case 161u: goto L_0011144C;
    case 162u: goto L_00111480;
    case 163u: goto L_001114AC;
    case 164u: goto L_001114C4;
    case 165u: goto L_001114E0;
    case 166u: goto L_0011152C;
    case 167u: goto L_0011153C;
    case 168u: goto L_00111544;
    case 169u: goto L_00111558;
    case 170u: goto L_00111568;
    case 171u: goto L_00111578;
    case 172u: goto L_00111580;
    case 173u: goto L_001115A0;
    case 174u: goto L_001115B0;
    case 175u: goto L_001115C0;
    case 176u: goto L_001115E0;
    case 177u: goto L_001115F8;
    case 178u: goto L_00111600;
    case 179u: goto L_00111608;
    case 180u: goto L_00111624;
    case 181u: goto L_00111638;
    case 182u: goto L_0011163C;
    case 183u: goto L_0011164C;
    case 184u: goto L_0011166C;
    case 185u: goto L_00111688;
    case 186u: goto L_001116B0;
    case 187u: goto L_001116BC;
    case 188u: goto L_001116D4;
    case 189u: goto L_001116F8;
    case 190u: goto L_0011171C;
    case 191u: goto L_00111768;
    case 192u: goto L_00111778;
    case 193u: goto L_00111780;
    case 194u: goto L_00111798;
    case 195u: goto L_001117A8;
    case 196u: goto L_001117B8;
    case 197u: goto L_001117C0;
    case 198u: goto L_001117F0;
    case 199u: goto L_00111818;
    case 200u: goto L_00111824;
    case 201u: goto L_0011183C;
    case 202u: goto L_00111840;
    case 203u: goto L_00111860;
    case 204u: goto L_00111880;
    case 205u: goto L_00111888;
    case 206u: goto L_001118C0;
    case 207u: goto L_001118D4;
    case 208u: goto L_001118E4;
    case 209u: goto L_001118EC;
    case 210u: goto L_00111900;
    case 211u: goto L_00111910;
    case 212u: goto L_00111920;
    case 213u: goto L_00111928;
    case 214u: goto L_00111940;
    case 215u: goto L_00111948;
    case 216u: goto L_00111980;
    case 217u: goto L_00111988;
    case 218u: goto L_001119A0;
    case 219u: goto L_001119C0;
    case 220u: goto L_00111A00;
    case 221u: goto L_00111A28;
    case 222u: goto L_00111A64;
    case 223u: goto L_00111A74;
    case 224u: goto L_00111A7C;
    case 225u: goto L_00111A90;
    case 226u: goto L_00111AA0;
    case 227u: goto L_00111AB0;
    case 228u: goto L_00111AB8;
    case 229u: goto L_00111AC0;
    case 230u: goto L_00111AE8;
    case 231u: goto L_00111B30;
    case 232u: goto L_00111B48;
    case 233u: goto L_00111B68;
    case 234u: goto L_00111C54;
    case 235u: goto L_00111C74;
    case 236u: goto L_00111C9C;
    case 237u: goto L_00111CAC;
    case 238u: goto L_00111CB4;
    case 239u: goto L_00111CC8;
    case 240u: goto L_00111CD8;
    case 241u: goto L_00111CE8;
    case 242u: goto L_00111CF0;
    case 243u: goto L_00111D00;
    case 244u: goto L_00111D28;
    case 245u: goto L_00111D64;
    case 246u: goto L_00111D7C;
    case 247u: goto L_00111DA0;
    case 248u: goto L_00111E00;
    case 249u: goto L_00111E3C;
    case 250u: goto L_00111E4C;
    case 251u: goto L_00111E70;
    case 252u: goto L_00111E98;
    case 253u: goto L_00111EA8;
    case 254u: goto L_00111EB0;
    case 255u: goto L_00111EC4;
    case 256u: goto L_00111ED4;
    case 257u: goto L_00111EE4;
    case 258u: goto L_00111EEC;
    case 259u: goto L_00111F18;
    case 260u: goto L_00111F28;
    case 261u: goto L_00111F38;
    case 262u: goto L_00111F74;
    case 263u: goto L_00111F8C;
    case 264u: goto L_00111FB0;
    case 265u: goto L_00112014;
    case 266u: goto L_0011203C;
    case 267u: goto L_00112040;
    case 268u: goto L_00112050;
    case 269u: goto L_00112060;
    case 270u: goto L_00112068;
    case 271u: goto L_00112078;
    case 272u: goto L_0011207C;
    case 273u: goto L_00112080;
    case 274u: goto L_0011208C;
    case 275u: goto L_0011209C;
    case 276u: goto L_001120A4;
    case 277u: goto L_001120C0;
    case 278u: goto L_001120D0;
    case 279u: goto L_00112100;
    case 280u: goto L_00112120;
    case 281u: goto L_00112138;
    case 282u: goto L_00112140;
    case 283u: goto L_00112158;
    case 284u: goto L_00112180;
    case 285u: goto L_001121B0;
    case 286u: goto L_001121C0;
    case 287u: goto L_001121F0;
    case 288u: goto L_00112210;
    case 289u: goto L_0011226C;
    case 290u: goto L_00112280;
    case 291u: goto L_0011228C;
    case 292u: goto L_001122B4;
    case 293u: goto L_001122C0;
    case 294u: goto L_001122C4;
    case 295u: goto L_001122CC;
    case 296u: goto L_001122E0;
    case 297u: goto L_001122F0;
    case 298u: goto L_00112300;
    case 299u: goto L_00112308;
    case 300u: goto L_00112340;
    case 301u: goto L_00112350;
    case 302u: goto L_00112360;
    case 303u: goto L_00112398;
    case 304u: goto L_001123A4;
    case 305u: goto L_001123BC;
    case 306u: goto L_001123E0;
    case 307u: goto L_00112420;
    case 308u: goto L_0011243C;
    case 309u: goto L_0011244C;
    case 310u: goto L_00112488;
    case 311u: goto L_001124C4;
    case 312u: goto L_00112500;
    case 313u: goto L_00112510;
    case 314u: goto L_00112518;
    case 315u: goto L_0011252C;
    case 316u: goto L_0011253C;
    case 317u: goto L_00112554;
    case 318u: goto L_00112564;
    case 319u: goto L_0011256C;
    case 320u: goto L_00112598;
    case 321u: goto L_001125E4;
    case 322u: goto L_00112600;
    case 323u: goto L_00112604;
    case 324u: goto L_00112620;
    case 325u: goto L_0011263C;
    case 326u: goto L_00112674;
    case 327u: goto L_00112698;
    case 328u: goto L_001126F8;
    case 329u: goto L_00112720;
    case 330u: goto L_00112748;
    case 331u: goto L_00112758;
    case 332u: goto L_00112760;
    case 333u: goto L_00112774;
    case 334u: goto L_00112784;
    case 335u: goto L_00112794;
    case 336u: goto L_0011279C;
    case 337u: goto L_001127D0;
    case 338u: goto L_0011280C;
    case 339u: goto L_00112824;
    case 340u: goto L_0011283C;
    case 341u: goto L_00112840;
    case 342u: goto L_00112848;
    case 343u: goto L_00112880;
    case 344u: goto L_001128A8;
    case 345u: goto L_001128C0;
    case 346u: goto L_001128F4;
    case 347u: goto L_00112900;
    case 348u: goto L_00112930;
    case 349u: goto L_00112940;
    case 350u: goto L_00112948;
    case 351u: goto L_0011295C;
    case 352u: goto L_0011296C;
    case 353u: goto L_0011297C;
    case 354u: goto L_00112980;
    case 355u: goto L_00112984;
    case 356u: goto L_001129B0;
    case 357u: goto L_001129F4;
    case 358u: goto L_00112A0C;
    case 359u: goto L_00112A38;
    case 360u: goto L_00112A9C;
    case 361u: goto L_00112AB8;
    case 362u: goto L_00112AC0;
    case 363u: goto L_00112AF4;
    case 364u: goto L_00112B04;
    case 365u: goto L_00112B0C;
    case 366u: goto L_00112B20;
    case 367u: goto L_00112B30;
    case 368u: goto L_00112B40;
    case 369u: goto L_00112B48;
    case 370u: goto L_00112B78;
    case 371u: goto L_00112B90;
    case 372u: goto L_00112B98;
    case 373u: goto L_00112BCC;
    case 374u: goto L_00112C00;
    case 375u: goto L_00112C54;
    case 376u: goto L_00112C70;
    case 377u: goto L_00112CD4;
    case 378u: goto L_00112CF0;
    case 379u: goto L_00112D4C;
    case 380u: goto L_00112D68;
    case 381u: goto L_00112D78;
    case 382u: goto L_00112D88;
    case 383u: goto L_00112DD8;
    case 384u: goto L_00112E5C;
    case 385u: goto L_00112E78;
    case 386u: goto L_00112EC8;
    case 387u: goto L_00112EE8;
    case 388u: goto L_00112F38;
    case 389u: goto L_00112F58;
    case 390u: goto L_00112FA8;
    case 391u: goto L_00112FC8;
    case 392u: goto L_00113024;
    case 393u: goto L_0011303C;
    case 394u: goto L_00113040;
    case 395u: goto L_00113048;
    case 396u: goto L_00113080;
    case 397u: goto L_001130A4;
    case 398u: goto L_001130C0;
    case 399u: goto L_001130C8;
    case 400u: goto L_001130F0;
    case 401u: goto L_00113104;
    case 402u: goto L_00113140;
    case 403u: goto L_00113148;
    case 404u: goto L_00113180;
    case 405u: goto L_00113188;
    case 406u: goto L_001131C8;
    case 407u: goto L_00113204;
    case 408u: goto L_0011321C;
    case 409u: goto L_00113230;
    case 410u: goto L_00113258;
    case 411u: goto L_00113280;
    case 412u: goto L_00113290;
    case 413u: goto L_001132C8;
    case 414u: goto L_001132D8;
    case 415u: goto L_00113324;
    case 416u: goto L_00113388;
    case 417u: goto L_00113418;
    case 418u: goto L_00113454;
    case 419u: goto L_00113498;
    case 420u: goto L_001134D0;
    case 421u: goto L_001134E0;
    case 422u: goto L_0011352C;
    case 423u: goto L_00113590;
    case 424u: goto L_00113620;
    case 425u: goto L_0011365C;
    case 426u: goto L_001136A0;
    case 427u: goto L_001136B8;
    case 428u: goto L_001136C8;
    case 429u: goto L_0011370C;
    case 430u: goto L_00113730;
    case 431u: goto L_00113744;
    case 432u: goto L_00113754;
    case 433u: goto L_0011377C;
    case 434u: goto L_001137B0;
    case 435u: goto L_001137D0;
    case 436u: goto L_001137E8;
    case 437u: goto L_001137F8;
    case 438u: goto L_0011383C;
    case 439u: goto L_00113840;
    case 440u: goto L_00113860;
    case 441u: goto L_00113870;
    case 442u: goto L_00113880;
    case 443u: goto L_00113890;
    case 444u: goto L_001138A0;
    case 445u: goto L_001138D8;
    case 446u: goto L_001138E8;
    case 447u: goto L_00113910;
    case 448u: goto L_00113948;
    case 449u: goto L_001139B0;
    case 450u: goto L_00113A40;
    case 451u: goto L_00113A84;
    case 452u: goto L_00113AC8;
    case 453u: goto L_00113ADC;
    case 454u: goto L_00113AE8;
    case 455u: goto L_00113AF8;
    case 456u: goto L_00113B08;
    case 457u: goto L_00113B38;
    case 458u: goto L_00113B48;
    case 459u: goto L_00113B74;
    case 460u: goto L_00113B88;
    case 461u: goto L_00113BB8;
    case 462u: goto L_00113C10;
    case 463u: goto L_00113C20;
    case 464u: goto L_00113C30;
    case 465u: goto L_00113C4C;
    case 466u: goto L_00113C58;
    case 467u: goto L_00113C80;
    case 468u: goto L_00113CD0;
    case 469u: goto L_00113D48;
    case 470u: goto L_00113D6C;
    case 471u: goto L_00113DF4;
    case 472u: goto L_00113E28;
    case 473u: goto L_00113E3C;
    case 474u: goto L_00113E44;
    case 475u: goto L_00113E50;
    case 476u: goto L_00113E78;
    case 477u: goto L_00113EF4;
    case 478u: goto L_00113F00;
    case 479u: goto L_00113F0C;
    case 480u: goto L_00113F1C;
    case 481u: goto L_00113F28;
    case 482u: goto L_00113F38;
    case 483u: goto L_00113F44;
    case 484u: goto L_00113F68;
    case 485u: goto L_00113F78;
    case 486u: goto L_00113F90;
    case 487u: goto L_00113FA0;
    case 488u: goto L_00113FB8;
    case 489u: goto L_00113FC8;
    case 490u: goto L_00113FF0;
    default: bad_entry(c, 0x00110000u); return;
    }
L_00110000:
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110010u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x00110010u) [[unlikely]] return; }
L_00110010:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00110014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00110048:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] - 15808u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110070u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00110070u) [[unlikely]] return; }
L_00110070:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011007Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0011007Cu) [[unlikely]] return; }
L_0011007C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011009C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110094u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110094u) [[unlikely]] return; }
L_00110094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001101A4; } }
L_0011009C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001100B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001100C0; }
L_001100B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001100B8u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001100B8u) [[unlikely]] return; }
L_001100B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001101A4; } }
L_001100C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 10432u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001100F0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001100F0u) [[unlikely]] return; }
L_001100F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[20].w[0] - 15808u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] - 12672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9920u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011013Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011013Cu) [[unlikely]] return; }
L_0011013C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0011015C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011014Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011014Cu) [[unlikely]] return; }
L_0011014C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110154u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110154u) [[unlikely]] return; }
L_00110154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001101A4; } }
L_0011015C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011016Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0011016Cu) [[unlikely]] return; }
L_0011016C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00110184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011017Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011017Cu) [[unlikely]] return; }
L_0011017C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001101A4; } }
L_00110184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011018Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011018Cu) [[unlikely]] return; }
L_0011018C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110194u) [[unlikely]] return; }
L_00110194:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_001101A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001101C8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[21].w[0] - 15808u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110200u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00110200u) [[unlikely]] return; }
L_00110200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011020Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0011020Cu) [[unlikely]] return; }
L_0011020C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011022C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110224u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110224u) [[unlikely]] return; }
L_00110224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001103D8; } }
L_0011022C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00110240; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00110250; } }
L_00110240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110248u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110248u) [[unlikely]] return; }
L_00110248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001103D8; } }
L_00110250:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 10432u);
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 20u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110288u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00110288u) [[unlikely]] return; }
L_00110288:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] - 15808u), c.r[18].w[0]);  if (t) { goto L_00110334; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001102B4u); set32(c.r[4], ld32((c.r[20].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001102B4u) [[unlikely]] return; }
L_001102B4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] - 23368u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001102E8; } }
    set32(c.r[3], ld32((c.r[21].w[0] - 15808u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] - 23368u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 15808u), c.r[2].w[0]);  if (t) { goto L_00110324; } }
    c.budget -= 1;
L_001102E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001102F0:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00110324; } }
    set32(c.r[3], c.r[7].w[0] - 23368u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001102F0u | kUnwind; return; } goto L_001102F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00110324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011032Cu); set32(c.r[4], ld32((c.r[20].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011032Cu) [[unlikely]] return; }
L_0011032C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 12672u);  if (t) { goto L_00110340; } }
L_00110334:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[16].w[0] - 12672u);
    c.budget -= 3;
L_00110340:
    set32(c.r[4], c.r[22].w[0] - 9920u);
    set32(c.r[7], c.r[21].w[0] - 15808u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 28u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110368u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00110368u) [[unlikely]] return; }
L_00110368:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00110388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110378u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110378u) [[unlikely]] return; }
L_00110378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110380u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110380u) [[unlikely]] return; }
L_00110380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001103D8; } }
L_00110388:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110394u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110394u) [[unlikely]] return; }
L_00110394:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_001103AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001103A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001103A4u) [[unlikely]] return; }
L_001103A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001103D8; } }
L_001103AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001103C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001103BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001103BCu) [[unlikely]] return; }
L_001103BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001103D8; } }
L_001103C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001103CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001103CCu) [[unlikely]] return; }
L_001103CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001103D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001103D4u) [[unlikely]] return; }
L_001103D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001103D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00110400:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 3;
L_0011040C:
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00110410:
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[20].w[0] - 15808u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110440u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00110440u) [[unlikely]] return; }
L_00110440:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011044Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0011044Cu) [[unlikely]] return; }
L_0011044C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011046C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110464u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110464u) [[unlikely]] return; }
L_00110464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00110630; } }
L_0011046C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00110480; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00110490; }
L_00110480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110488u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110488u) [[unlikely]] return; }
L_00110488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00110630; } }
L_00110490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 10432u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001104C8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001104C8u) [[unlikely]] return; }
L_001104C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] - 15808u), c.r[18].w[0]);  if (t) { goto L_00110568; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001104F4u); set32(c.r[4], ld32((c.r[16].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001104F4u) [[unlikely]] return; }
L_001104F4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] - 23368u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00110520; } }
    set32(c.r[3], ld32((c.r[20].w[0] - 15808u)));
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] - 23368u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] - 15808u), c.r[2].w[0]);  if (t) { goto L_00110558; } }
L_00110520:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00110524:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00110558; } }
    set32(c.r[3], c.r[7].w[0] - 23368u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00110524u | kUnwind; return; } goto L_00110524; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00110558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110560u); set32(c.r[4], ld32((c.r[16].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x00110560u) [[unlikely]] return; }
L_00110560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00110570; } }
L_00110568:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 2;
L_00110570:
    c.r[2].d[0] = c.r[19].d[0] & c.r[21].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011058C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110588u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00110588u) [[unlikely]] return; }
L_00110588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011058C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110594u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00110594u) [[unlikely]] return; }
L_00110594:
    set32(c.r[16], c.r[30].w[0] - 12672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[20].w[0] - 15808u);
    set32(c.r[4], c.r[2].w[0] - 9920u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001105C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001105C4u) [[unlikely]] return; }
L_001105C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[21].d[0] | c.r[16].d[0];  if (t) { goto L_001105E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001105D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001105D4u) [[unlikely]] return; }
L_001105D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001105DCu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001105DCu) [[unlikely]] return; }
L_001105DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110630; } }
L_001105E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001105ECu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001105ECu) [[unlikely]] return; }
L_001105EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_00110604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001105FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001105FCu) [[unlikely]] return; }
L_001105FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110630; } }
L_00110604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011061C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110614u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110614u) [[unlikely]] return; }
L_00110614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00110630; } }
L_0011061C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110624u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00110624u) [[unlikely]] return; }
L_00110624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011062Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011062Cu) [[unlikely]] return; }
L_0011062C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00110630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00110660:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[23].w[0] - 15808u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001106A0u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x001106A0u) [[unlikely]] return; }
L_001106A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001106ACu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001106ACu) [[unlikely]] return; }
L_001106AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001106CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001106C4u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001106C4u) [[unlikely]] return; }
L_001106C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001108F0; } }
L_001106CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001106E0; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001106F0; }
L_001106E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001106E8u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001106E8u) [[unlikely]] return; }
L_001106E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001108F0; } }
L_001106F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 10432u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110728u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00110728u) [[unlikely]] return; }
L_00110728:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[23].w[0] - 15808u), c.r[20].w[0]);  if (t) { goto L_001107D4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110754u); set32(c.r[4], ld32((c.r[19].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00110754u) [[unlikely]] return; }
L_00110754:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] - 23368u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[17].d[0] & 15ull;  if (t) { goto L_00110788; } }
    set32(c.r[3], ld32((c.r[23].w[0] - 15808u)));
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] - 23368u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] - 15808u), c.r[2].w[0]);  if (t) { goto L_001107C4; } }
    c.budget -= 1;
L_00110788:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00110790:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_001107C4; } }
    set32(c.r[3], c.r[7].w[0] - 23368u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00110790u | kUnwind; return; } goto L_00110790; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001107C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001107CCu); set32(c.r[4], ld32((c.r[19].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x001107CCu) [[unlikely]] return; }
L_001107CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001107DC; } }
L_001107D4:
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_001107DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] >> 4);  if (t) { goto L_001107EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001107F8; } }
L_001107EC:
    set32(c.r[3], c.r[17].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_001107F8:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[22].d[0] & c.r[19].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[21].d[0];  if (t) { goto L_00110818; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110818u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00110818u) [[unlikely]] return; }
L_00110818:
    c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00110850; } }
    set32(c.r[6], c.r[18].w[0] + 28u);
    c.budget -= 2;
L_00110830:
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00110830u | kUnwind; return; } goto L_00110830; } }
L_00110850:
    set32(c.r[16], c.r[30].w[0] - 12672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] - 9920u);
    set32(c.r[7], c.r[23].w[0] - 15808u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110880u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00110880u) [[unlikely]] return; }
L_00110880:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110890u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110890u) [[unlikely]] return; }
L_00110890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110898u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110898u) [[unlikely]] return; }
L_00110898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001108F0; } }
L_001108A0:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001108ACu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001108ACu) [[unlikely]] return; }
L_001108AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] & 32768ull;  if (t) { goto L_001108C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001108BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001108BCu) [[unlikely]] return; }
L_001108BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001108F0; } }
L_001108C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001108DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001108D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001108D4u) [[unlikely]] return; }
L_001108D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001108F0; } }
L_001108DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001108E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001108E4u) [[unlikely]] return; }
L_001108E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001108ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001108ECu) [[unlikely]] return; }
L_001108EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001108F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00110920:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110960u); set32(c.r[19], c.r[22].w[0] - 15808u);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00110960u) [[unlikely]] return; }
L_00110960:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011096Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0011096Cu) [[unlikely]] return; }
L_0011096C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[20].w[0] - 15864u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00110988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110988u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00110988u) [[unlikely]] return; }
L_00110988:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011099C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 1044u), 0u);  goto L_001109AC; }
L_0011099C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001109A4u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001109A4u) [[unlikely]] return; }
L_001109A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00110C6C; } }
L_001109AC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 1048u), 0u);  if (t) { goto L_00110A58; } }
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001109D4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[21].d[0]) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  goto L_001109E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00110AC0; } }
L_001109D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00110A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00110AC0; } }
L_001109E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001109ECu); set32(c.r[4], ld32((c.r[16].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001109ECu) [[unlikely]] return; }
L_001109EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] - 23368u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_00110A2C; } }
    set32(c.r[3], c.r[5].w[0] - 23368u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00110A10:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_00110A28; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00110A10u | kUnwind; return; } goto L_00110A10; }
L_00110A28:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_00110A2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[20].w[0] - 15864u)));  if (t) { goto L_00110A40; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 15864u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00110A48; } }
L_00110A40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00110A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110A50u); set32(c.r[4], ld32((c.r[16].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x00110A50u) [[unlikely]] return; }
L_00110A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00110AB0; } }
L_00110A58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], 0u + 1088u);
    set32(c.r[2], ld32((c.r[4].w[0] - 23240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12592u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00110AB0; } }
L_00110A88:
    set32(c.r[5], 0u + 1088u);
    set32(c.r[2], ld32((c.r[4].w[0] - 23240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12592u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[18].w[0]), c.r[3].d[0]);
    c.budget -= 10;
L_00110AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110AB8u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110AB8u) [[unlikely]] return; }
L_00110AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00110C6C; } }
L_00110AC0:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00110AE0; } }
    st32((c.r[19].w[0] + 1052u), 0u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00110BAC; } }
L_00110AE0:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[3], 0u + 1024u);
    c.r[2].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 1052u), c.r[3].w[0]);  if (t) { goto L_00110B68; } }
    set32(c.r[2], c.r[6].w[0] + 1024u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_00110B0C:
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[5], (c.r[6].w[0] + 15u));
    ldr(c.r[5], (c.r[6].w[0] + 8u));
    ldl(c.r[7], (c.r[6].w[0] + 23u));
    ldr(c.r[7], (c.r[6].w[0] + 16u));
    ldl(c.r[8], (c.r[6].w[0] + 31u));
    ldr(c.r[8], (c.r[6].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[5], (c.r[4].w[0] + 15u));
    sdr(c.r[5], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00110B0Cu | kUnwind; return; } goto L_00110B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00110BB0; } }
L_00110B68:
    set32(c.r[2], c.r[6].w[0] + 1024u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_00110B78:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00110B78u | kUnwind; return; } goto L_00110B78; } }
L_00110BAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00110BB0:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110BC8u); set32(c.r[20], c.r[17].w[0] - 12672u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00110BC8u) [[unlikely]] return; }
L_00110BC8:
    set32(c.r[16], c.r[22].w[0] - 15808u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110BECu); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00110BECu) [[unlikely]] return; }
L_00110BEC:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C14u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00110C14u) [[unlikely]] return; }
L_00110C14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00110C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110C24u) [[unlikely]] return; }
L_00110C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C2Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110C2Cu) [[unlikely]] return; }
L_00110C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110C6C; } }
L_00110C34:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C40u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110C40u) [[unlikely]] return; }
L_00110C40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00110C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110C50u) [[unlikely]] return; }
L_00110C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110C6C; } }
L_00110C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00110C60u) [[unlikely]] return; }
L_00110C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110C68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110C68u) [[unlikely]] return; }
L_00110C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00110C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
L_00110C8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00110C98:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.budget -= 3;
L_00110CA4:
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110CE0u); set32(c.r[17], c.r[22].w[0] - 15808u);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00110CE0u) [[unlikely]] return; }
L_00110CE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110CECu); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00110CECu) [[unlikely]] return; }
L_00110CEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00110D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110D04u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00110D04u) [[unlikely]] return; }
L_00110D04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00110D18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_00110D28; } }
L_00110D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110D20u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110D20u) [[unlikely]] return; }
L_00110D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00110E48; } }
L_00110D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_00110D38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00110D48; } }
L_00110D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110D40u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110D40u) [[unlikely]] return; }
L_00110D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_00110E48; } }
L_00110D48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00110D58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1052u), 0u);  if (t) { goto L_00110D64; } }
L_00110D58:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110D64u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00110D64u) [[unlikely]] return; }
L_00110D64:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[22].w[0] - 15808u);
    st32((c.r[17].w[0] + 1052u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110D90u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00110D90u) [[unlikely]] return; }
L_00110D90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 1048u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1056u);
    st32((c.r[17].w[0] + 1044u), c.r[23].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110DBCu); st32((c.r[17].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00110DBCu) [[unlikely]] return; }
L_00110DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[17], c.r[2].w[0] - 12672u);
    set32(c.r[4], c.r[4].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110DF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00110DF0u) [[unlikely]] return; }
L_00110DF0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00110E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110E00u) [[unlikely]] return; }
L_00110E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E08u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110E08u) [[unlikely]] return; }
L_00110E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110E48; } }
L_00110E10:
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E1Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110E1Cu) [[unlikely]] return; }
L_00110E1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00110E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110E2Cu) [[unlikely]] return; }
L_00110E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110E48; } }
L_00110E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00110E3Cu) [[unlikely]] return; }
L_00110E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110E44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110E44u) [[unlikely]] return; }
L_00110E44:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00110E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00110E78:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110EB8u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00110EB8u) [[unlikely]] return; }
L_00110EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00110ED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110ED0u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00110ED0u) [[unlikely]] return; }
L_00110ED0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00110ED4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00110F24; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_00110EF8:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_00110F30; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00110EF8u | kUnwind; return; } goto L_00110EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00110F34; } }
L_00110F24:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00110F30:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00110F34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00110F44; } }
    st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    c.budget -= 2;
L_00110F44:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110F5Cu); set32(c.r[20], c.r[20].w[0] - 12672u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00110F5Cu) [[unlikely]] return; }
L_00110F5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[23].w[0] - 15808u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110F98u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00110F98u) [[unlikely]] return; }
L_00110F98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00110FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110FA8u) [[unlikely]] return; }
L_00110FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FB0u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110FB0u) [[unlikely]] return; }
L_00110FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110FF0; } }
L_00110FB8:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FC4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00110FC4u) [[unlikely]] return; }
L_00110FC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00110FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110FD4u) [[unlikely]] return; }
L_00110FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00110FF0; } }
L_00110FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00110FE4u) [[unlikely]] return; }
L_00110FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00110FECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00110FECu) [[unlikely]] return; }
L_00110FEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00110FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00111020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111030u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x00111030u) [[unlikely]] return; }
L_00111030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011103C:
    c.budget -= 1;
L_00111040:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111080u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111080u) [[unlikely]] return; }
L_00111080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0011109C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111098u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00111098u) [[unlikely]] return; }
L_00111098:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0011109C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001110EC; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_001110B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001110C0:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_001110F8; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001110C0u | kUnwind; return; } goto L_001110C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001110FC; } }
L_001110EC:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_001110F8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_001110FC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_00111110; }
    goto L_00111104;
L_00111100:
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 1;
L_00111104:
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_00111110:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] - 12672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011112Cu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011112Cu) [[unlikely]] return; }
L_0011112C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_00111140:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    set32(c.r[7], c.r[23].w[0] - 15808u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111168u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00111168u) [[unlikely]] return; }
L_00111168:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00111188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111178u) [[unlikely]] return; }
L_00111178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111180u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111180u) [[unlikely]] return; }
L_00111180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001111C0; } }
L_00111188:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111194u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111194u) [[unlikely]] return; }
L_00111194:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001111AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001111A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001111A4u) [[unlikely]] return; }
L_001111A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001111C0; } }
L_001111AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001111B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001111B4u) [[unlikely]] return; }
L_001111B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001111BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001111BCu) [[unlikely]] return; }
L_001111BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001111C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001111F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111200u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x00111200u) [[unlikely]] return; }
L_00111200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00111210:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 14u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[19], c.r[23].w[0] - 15808u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111258u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111258u) [[unlikely]] return; }
L_00111258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_00111274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111270u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00111270u) [[unlikely]] return; }
L_00111270:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00111274:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001112BC; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00111290:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_001112C0; } }
    set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00111290u | kUnwind; return; } goto L_00111290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001112C4; } }
L_001112BC:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_001112C0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_001112C4:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_001112CC; }
L_001112CC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_001112DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00111328; } }
L_001112DC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0011131C; } }
    set32(c.r[6], c.r[19].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001112F8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_0011131C; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001112F8u | kUnwind; return; } goto L_001112F8; }
L_0011131C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_00111328; }
L_00111328:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00111340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111338u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111338u) [[unlikely]] return; }
L_00111338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_00111450; } }
L_00111340:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00111380; } }
    set32(c.r[6], c.r[19].w[0] + 2060u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_00111358:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00111358u | kUnwind; return; } goto L_00111358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);  if (t) { goto L_00111390; } }
L_00111380:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);
    c.budget -= 4;
L_00111390:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[16], c.r[23].w[0] - 15808u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001113B0u); set32(c.r[20], c.r[20].w[0] - 12672u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001113B0u) [[unlikely]] return; }
L_001113B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3088u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001113D0u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x001113D0u) [[unlikely]] return; }
L_001113D0:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3088u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001113F8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001113F8u) [[unlikely]] return; }
L_001113F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00111418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111408u) [[unlikely]] return; }
L_00111408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111410u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111410u) [[unlikely]] return; }
L_00111410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111450; } }
L_00111418:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111424u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111424u) [[unlikely]] return; }
L_00111424:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0011143C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111434u) [[unlikely]] return; }
L_00111434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111450; } }
L_0011143C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111444u) [[unlikely]] return; }
L_00111444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011144Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011144Cu) [[unlikely]] return; }
L_0011144C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00111450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00111480:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001114ACu); set32(c.r[16], c.r[19].w[0] - 15808u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001114ACu) [[unlikely]] return; }
L_001114AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_001114C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001114C4u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x001114C4u) [[unlikely]] return; }
L_001114C4:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_001114C8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001114E0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001114E0u) [[unlikely]] return; }
L_001114E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] - 15808u), c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] - 12672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 16u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011152Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011152Cu) [[unlikely]] return; }
L_0011152C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0011154C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011153Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011153Cu) [[unlikely]] return; }
L_0011153C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111544u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111544u) [[unlikely]] return; }
L_00111544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00111584; } }
L_0011154C:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111558u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111558u) [[unlikely]] return; }
L_00111558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00111570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111568u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111568u) [[unlikely]] return; }
L_00111568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00111584; } }
L_00111570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111578u) [[unlikely]] return; }
L_00111578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111580u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111580u) [[unlikely]] return; }
L_00111580:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00111584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001115A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001115B0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x001115B0u) [[unlikely]] return; }
L_001115B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001115C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001115E0u); st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001115E0u) [[unlikely]] return; }
L_001115E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001115F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001115F8u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x001115F8u) [[unlikely]] return; }
L_001115F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111600u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111600u) [[unlikely]] return; }
L_00111600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111608u);  if (depth < kMaxDepth) unit_0003(c, 406u, depth + 1u); else { c.pc = 0x0010F4F8u; return; } if (c.pc != 0x00111608u) [[unlikely]] return; }
L_00111608:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011161C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { goto L_00111670; } }
L_0011161C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111624u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x00111624u) [[unlikely]] return; }
L_00111624:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00111644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111638u); set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111638u) [[unlikely]] return; }
L_00111638:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0011163C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (t) { goto L_00111664; } }
L_00111644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011164Cu); set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011164Cu) [[unlikely]] return; }
L_0011164C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10432u);
    set32(c.r[4], ld32((c.r[16].w[0] - 23224u)));
    set32(c.r[3], c.r[18].w[0] - c.r[3].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 6;
L_00111664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011166Cu);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011166Cu) [[unlikely]] return; }
L_0011166C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00111670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00111688:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] - 15808u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001116B0u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x001116B0u) [[unlikely]] return; }
L_001116B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001116BCu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001116BCu) [[unlikely]] return; }
L_001116BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001116DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001116D4u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001116D4u) [[unlikely]] return; }
L_001116D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001117D0; } }
L_001116DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001116F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00111700; }
L_001116F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001116F8u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001116F8u) [[unlikely]] return; }
L_001116F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001117D0; } }
L_00111700:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011171Cu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011171Cu) [[unlikely]] return; }
L_0011171C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[20].w[0] - 15808u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] - 12672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9920u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111768u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00111768u) [[unlikely]] return; }
L_00111768:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00111788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111778u) [[unlikely]] return; }
L_00111778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111780u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111780u) [[unlikely]] return; }
L_00111780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001117D0; } }
L_00111788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111798u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111798u) [[unlikely]] return; }
L_00111798:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001117B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001117A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001117A8u) [[unlikely]] return; }
L_001117A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001117D0; } }
L_001117B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001117B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001117B8u) [[unlikely]] return; }
L_001117B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001117C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001117C0u) [[unlikely]] return; }
L_001117C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_001117D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001117F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111818u); set32(c.r[18], c.r[19].w[0] - 15808u);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00111818u) [[unlikely]] return; }
L_00111818:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111824u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111824u) [[unlikely]] return; }
L_00111824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00111844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011183Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0011183Cu) [[unlikely]] return; }
L_0011183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011192C; } }
    goto L_00111844;
L_00111840:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00111844:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00111858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00111868; }
L_00111858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111860u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111860u) [[unlikely]] return; }
L_00111860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0011192C; } }
L_00111868:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
L_00111880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111888u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00111888u) [[unlikely]] return; }
L_00111888:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] - 15808u), c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] - 12672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9920u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
L_001118C0:
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001118D4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001118D4u) [[unlikely]] return; }
L_001118D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001118F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001118E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x001118E4u) [[unlikely]] return; }
L_001118E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001118ECu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001118ECu) [[unlikely]] return; }
L_001118EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0011192C; } }
L_001118F4:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111900u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111900u) [[unlikely]] return; }
L_00111900:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00111918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111910u) [[unlikely]] return; }
L_00111910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0011192C; } }
L_00111918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111920u) [[unlikely]] return; }
L_00111920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111928u) [[unlikely]] return; }
L_00111928:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0011192C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_00111940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00111948:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 14;
L_00111980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111988u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111988u) [[unlikely]] return; }
L_00111988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_001119A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001119A0u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x001119A0u) [[unlikely]] return; }
L_001119A0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_001119A4:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001119E8; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_001119C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_001119F4; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001119C0u | kUnwind; return; } goto L_001119C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001119F8; } }
L_001119E8:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_001119F4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_001119F8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_00111A0C; }
L_00111A00:
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_00111A0C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] - 12672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111A28u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00111A28u) [[unlikely]] return; }
L_00111A28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 9920u);
    set32(c.r[7], c.r[23].w[0] - 15808u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111A64u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00111A64u) [[unlikely]] return; }
L_00111A64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00111A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111A74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111A74u) [[unlikely]] return; }
L_00111A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111A7Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111A7Cu) [[unlikely]] return; }
L_00111A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111ABC; } }
L_00111A84:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111A90u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111A90u) [[unlikely]] return; }
L_00111A90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00111AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111AA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111AA0u) [[unlikely]] return; }
L_00111AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111ABC; } }
L_00111AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111AB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111AB0u) [[unlikely]] return; }
L_00111AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111AB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111AB8u) [[unlikely]] return; }
L_00111AB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00111ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_00111AC0:
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00111AE8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[19], c.r[30].w[0] - 15808u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111B30u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111B30u) [[unlikely]] return; }
L_00111B30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_00111B4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111B48u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00111B48u) [[unlikely]] return; }
L_00111B48:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_00111B4C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00111B90; } }
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00111B68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (t) { goto L_00111B9C; } }
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00111B68u | kUnwind; return; } goto L_00111B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00111BA0; } }
L_00111B90:
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00111B9C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00111BA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00111BB0; } }
    st8((c.r[19].w[0] + 1103u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], 0u + 1023u);
    c.budget -= 2;
L_00111BB0:
    ldl(c.r[3], (c.r[16].w[0] + 7u));
    ldr(c.r[3], (c.r[16].w[0]));
    ldl(c.r[4], (c.r[16].w[0] + 15u));
    ldr(c.r[4], (c.r[16].w[0] + 8u));
    ldl(c.r[5], (c.r[16].w[0] + 23u));
    ldr(c.r[5], (c.r[16].w[0] + 16u));
    ldl(c.r[6], (c.r[16].w[0] + 31u));
    ldr(c.r[6], (c.r[16].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 23u));
    sdr(c.r[3], (c.r[19].w[0] + 16u));
    sdl(c.r[4], (c.r[19].w[0] + 31u));
    sdr(c.r[4], (c.r[19].w[0] + 24u));
    sdl(c.r[5], (c.r[19].w[0] + 39u));
    sdr(c.r[5], (c.r[19].w[0] + 32u));
    sdl(c.r[6], (c.r[19].w[0] + 47u));
    sdr(c.r[6], (c.r[19].w[0] + 40u));
    ldl(c.r[3], (c.r[16].w[0] + 39u));
    ldr(c.r[3], (c.r[16].w[0] + 32u));
    ldl(c.r[4], (c.r[16].w[0] + 47u));
    ldr(c.r[4], (c.r[16].w[0] + 40u));
    ldl(c.r[5], (c.r[16].w[0] + 55u));
    ldr(c.r[5], (c.r[16].w[0] + 48u));
    ldl(c.r[6], (c.r[16].w[0] + 63u));
    ldr(c.r[6], (c.r[16].w[0] + 56u));
    sdl(c.r[3], (c.r[19].w[0] + 55u));
    sdr(c.r[3], (c.r[19].w[0] + 48u));
    sdl(c.r[4], (c.r[19].w[0] + 63u));
    sdr(c.r[4], (c.r[19].w[0] + 56u));
    sdl(c.r[5], (c.r[19].w[0] + 71u));
    sdr(c.r[5], (c.r[19].w[0] + 64u));
    sdl(c.r[6], (c.r[19].w[0] + 79u));
    sdr(c.r[6], (c.r[19].w[0] + 72u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] - 15808u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[21], c.r[21].w[0] - 12672u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111C54u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00111C54u) [[unlikely]] return; }
L_00111C54:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111C74u); st32((c.r[19].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00111C74u) [[unlikely]] return; }
L_00111C74:
    set32(c.r[4], c.r[22].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 81u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111C9Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00111C9Cu) [[unlikely]] return; }
L_00111C9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00111CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111CACu) [[unlikely]] return; }
L_00111CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CB4u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111CB4u) [[unlikely]] return; }
L_00111CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111CF4; } }
L_00111CBC:
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CC8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111CC8u) [[unlikely]] return; }
L_00111CC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00111CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111CD8u) [[unlikely]] return; }
L_00111CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111CF4; } }
L_00111CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111CE8u) [[unlikely]] return; }
L_00111CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111CF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111CF0u) [[unlikely]] return; }
L_00111CF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00111CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 3;
L_00111D00:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00111D28:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111D64u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111D64u) [[unlikely]] return; }
L_00111D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00111D80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111D7Cu);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00111D7Cu) [[unlikely]] return; }
L_00111D7C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00111D80:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00111DCC; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00111DA0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00111DD8; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00111DA0u | kUnwind; return; } goto L_00111DA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00111DDC; } }
L_00111DCC:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00111DD8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00111DDC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_00111DE4; }
L_00111DE4:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00111E24; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00111E00:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00111E24; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00111E00u | kUnwind; return; } goto L_00111E00; }
L_00111E24:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_00111E30; }
L_00111E30:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00111E3C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111E4Cu); set32(c.r[16], c.r[22].w[0] - 15808u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00111E4Cu) [[unlikely]] return; }
L_00111E4C:
    set32(c.r[20], c.r[20].w[0] - 12672u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2060u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111E70u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00111E70u) [[unlikely]] return; }
L_00111E70:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111E98u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00111E98u) [[unlikely]] return; }
L_00111E98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00111EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111EA8u) [[unlikely]] return; }
L_00111EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111EB0u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111EB0u) [[unlikely]] return; }
L_00111EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111EF0; } }
L_00111EB8:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111EC4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00111EC4u) [[unlikely]] return; }
L_00111EC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00111EDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111ED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111ED4u) [[unlikely]] return; }
L_00111ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00111EF0; } }
L_00111EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111EE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00111EE4u) [[unlikely]] return; }
L_00111EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111EECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00111EECu) [[unlikely]] return; }
L_00111EEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00111EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00111F18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111F28u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x00111F28u) [[unlikely]] return; }
L_00111F28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00111F38:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 19u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[16], c.r[22].w[0] - 15808u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111F74u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00111F74u) [[unlikely]] return; }
L_00111F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00111F90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00111F8Cu);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00111F8Cu) [[unlikely]] return; }
L_00111F8C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00111F90:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00111FDC; } }
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00111FB0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00111FE8; } }
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00111FB0u | kUnwind; return; } goto L_00111FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00111FEC; } }
L_00111FDC:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00111FE8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00111FEC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_00111FF4; }
L_00111FF4:
    st32((c.r[16].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[19], c.r[19].w[0] - 12672u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112014u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00112014u) [[unlikely]] return; }
L_00112014:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] - 9920u);
    set32(c.r[7], c.r[22].w[0] - 15808u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_0011203C:
    set32(c.r[8], 0u + 1044u);
    c.budget -= 1;
L_00112040:
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112050u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112050u) [[unlikely]] return; }
L_00112050:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00112070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112060u) [[unlikely]] return; }
L_00112060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112068u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112068u) [[unlikely]] return; }
L_00112068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001120A8; } }
L_00112070:
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011207Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0011207Cu) [[unlikely]] return; }
    goto L_0011207C;
L_00112078:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0011207C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00112094; } }
    goto L_00112084;
L_00112080:
    c.budget -= 1;
L_00112084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011208Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011208Cu) [[unlikely]] return; }
L_0011208C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001120A8; } }
L_00112094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011209Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011209Cu) [[unlikely]] return; }
L_0011209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001120A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001120A4u) [[unlikely]] return; }
L_001120A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001120A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 6;
L_001120C0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001120D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
L_00112100:
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[30].w[0] - 15808u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112120u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x00112120u) [[unlikely]] return; }
L_00112120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_0011213C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112138u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00112138u) [[unlikely]] return; }
L_00112138:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0011213C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00112140:
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00112184; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00112158:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00112188; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00112158u | kUnwind; return; } goto L_00112158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0011218C; } }
    goto L_00112184;
L_00112180:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00112184:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_00112188:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0011218C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_00112194; }
L_00112194:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001121D4; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001121B0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_001121D4; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_001121C0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001121B0u | kUnwind; return; } goto L_001121B0; }
L_001121D4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_001121E0; }
L_001121E0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001121F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001121F0u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001121F0u) [[unlikely]] return; }
L_001121F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_0011230C; } }
L_001121F8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00112238; } }
    set32(c.r[6], c.r[18].w[0] + 2060u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_00112210:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00112210u | kUnwind; return; } goto L_00112210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);  if (t) { goto L_00112248; } }
L_00112238:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);
    c.budget -= 4;
L_00112248:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 3084u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] - 15808u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] - 12672u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011226Cu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011226Cu) [[unlikely]] return; }
L_0011226C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_00112280:
    set32(c.r[5], 0u + 3092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011228Cu); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011228Cu) [[unlikely]] return; }
L_0011228C:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3092u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001122B4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001122B4u) [[unlikely]] return; }
L_001122B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001122D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001122C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001122C4u) [[unlikely]] return; }
    goto L_001122C4;
L_001122C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001122C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001122CCu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001122CCu) [[unlikely]] return; }
L_001122CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0011230C; } }
L_001122D4:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001122E0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001122E0u) [[unlikely]] return; }
L_001122E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001122F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001122F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x001122F0u) [[unlikely]] return; }
L_001122F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0011230C; } }
L_001122F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00112300u) [[unlikely]] return; }
L_00112300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112308u) [[unlikely]] return; }
L_00112308:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0011230C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00112340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112350u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0004(c, 112u, depth + 1u); else { c.pc = 0x00110E78u; return; } if (c.pc != 0x00112350u) [[unlikely]] return; }
L_00112350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00112360:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[21].w[0] - 15808u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112398u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 412u, depth + 1u); else { c.pc = 0x0010F580u; return; } if (c.pc != 0x00112398u) [[unlikely]] return; }
L_00112398:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001123A4u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001123A4u) [[unlikely]] return; }
L_001123A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001123C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001123BCu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001123BCu) [[unlikely]] return; }
L_001123BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00112570; } }
L_001123C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001123D8; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001123E8; } }
L_001123D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001123E0u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x001123E0u) [[unlikely]] return; }
L_001123E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00112570; } }
L_001123E8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 10432u);
    st64((c.r[17].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112420u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00112420u) [[unlikely]] return; }
L_00112420:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] - 15808u), c.r[18].w[0]);  if (t) { goto L_001124CC; } }
    goto L_00112440;
L_0011243C:
    st32((c.r[21].w[0] - 15808u), c.r[18].w[0]);
    c.budget -= 1;
L_00112440:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011244Cu); set32(c.r[4], ld32((c.r[20].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011244Cu) [[unlikely]] return; }
L_0011244C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] - 23368u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00112480; } }
    set32(c.r[3], ld32((c.r[21].w[0] - 15808u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] - 23368u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 15808u), c.r[2].w[0]);  if (t) { goto L_001124BC; } }
    c.budget -= 1;
L_00112480:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00112488:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_001124BC; } }
    set32(c.r[3], c.r[7].w[0] - 23368u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00112488u | kUnwind; return; } goto L_00112488; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001124BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001124C4u); set32(c.r[4], ld32((c.r[20].w[0] - 23220u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x001124C4u) [[unlikely]] return; }
L_001124C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 12672u);  if (t) { goto L_001124D8; } }
L_001124CC:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[16].w[0] - 12672u);
    c.budget -= 3;
L_001124D8:
    set32(c.r[4], c.r[22].w[0] - 9920u);
    set32(c.r[7], c.r[21].w[0] - 15808u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112500u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112500u) [[unlikely]] return; }
L_00112500:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00112520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112510u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112510u) [[unlikely]] return; }
L_00112510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112518u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112518u) [[unlikely]] return; }
L_00112518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112570; } }
L_00112520:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011252Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0011252Cu) [[unlikely]] return; }
L_0011252C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_00112544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011253Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011253Cu) [[unlikely]] return; }
L_0011253C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112570; } }
L_00112544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011255C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112554u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112554u) [[unlikely]] return; }
L_00112554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112570; } }
L_0011255C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112564u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00112564u) [[unlikely]] return; }
L_00112564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011256Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011256Cu) [[unlikely]] return; }
L_0011256C:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00112570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00112598:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    set32(c.r[4], 0u + 23u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001125E4u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001125E4u) [[unlikely]] return; }
L_001125E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[2].w[0] - 15808u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00112608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112604u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00112604u) [[unlikely]] return; }
    goto L_00112604;
L_00112600:
    c.budget -= 1;
L_00112604:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00112608:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0011264C; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00112620:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00112650; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 4;
L_0011263C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00112620u | kUnwind; return; } goto L_00112620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00112654; } }
L_0011264C:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00112650:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00112654:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0011265C; }
L_0011265C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_0011266C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011267C; } }
L_0011266C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112674u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112674u) [[unlikely]] return; }
L_00112674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_001127A0; } }
L_0011267C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001126C0; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
L_00112698:
    set32(c.r[2], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00112698u | kUnwind; return; } goto L_00112698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 2064u), c.r[16].w[0]);  if (t) { goto L_001126D0; } }
L_001126C0:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] + 2064u), c.r[16].w[0]);
    c.budget -= 4;
L_001126D0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 2060u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[17].w[0] - 12672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[16], c.r[2].w[0] - 15808u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001126F8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001126F8u) [[unlikely]] return; }
L_001126F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 2072u), c.r[22].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], 0u + 2076u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2068u), c.r[30].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112720u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00112720u) [[unlikely]] return; }
L_00112720:
    set32(c.r[4], c.r[21].w[0] - 9920u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2076u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112748u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112748u) [[unlikely]] return; }
L_00112748:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00112768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112758u) [[unlikely]] return; }
L_00112758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112760u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112760u) [[unlikely]] return; }
L_00112760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001127A0; } }
L_00112768:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112774u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112774u) [[unlikely]] return; }
L_00112774:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0011278C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112784u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112784u) [[unlikely]] return; }
L_00112784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001127A0; } }
L_0011278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112794u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00112794u) [[unlikely]] return; }
L_00112794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011279Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011279Cu) [[unlikely]] return; }
L_0011279C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001127A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001127D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011280Cu); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x0011280Cu) [[unlikely]] return; }
L_0011280C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_00112828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112824u);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00112824u) [[unlikely]] return; }
L_00112824:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00112828:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00112874; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0011283C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_00112840:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00112848:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00112880; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00112848u | kUnwind; return; } goto L_00112848; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00112884; } }
L_00112874:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00112880:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00112884:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0011288C; }
L_0011288C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001128CC; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001128A8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_001128CC; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001128C0:
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001128A8u | kUnwind; return; } goto L_001128A8; }
L_001128CC:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_001128D8; }
L_001128D8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001128F4u); set32(c.r[16], c.r[20].w[0] - 12672u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x001128F4u) [[unlikely]] return; }
L_001128F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
L_00112900:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 9920u);
    set32(c.r[7], c.r[22].w[0] - 15808u);
    set32(c.r[5], 0u + 24u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112930u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112930u) [[unlikely]] return; }
L_00112930:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00112950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112940u) [[unlikely]] return; }
L_00112940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112948u);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112948u) [[unlikely]] return; }
L_00112948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112988; } }
L_00112950:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011295Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x0011295Cu) [[unlikely]] return; }
L_0011295C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00112974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011296Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011296Cu) [[unlikely]] return; }
L_0011296C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112988; } }
L_00112974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011297Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011297Cu) [[unlikely]] return; }
L_0011297C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112984u) [[unlikely]] return; }
    goto L_00112984;
L_00112980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00112984:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00112988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001129B0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[18], c.r[23].w[0] - 15808u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001129F4u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0003(c, 432u, depth + 1u); else { c.pc = 0x0010F9E8u; return; } if (c.pc != 0x001129F4u) [[unlikely]] return; }
L_001129F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23236u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00112A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112A0Cu);  if (depth < kMaxDepth) unit_0003(c, 444u, depth + 1u); else { c.pc = 0x0010FAF0u; return; } if (c.pc != 0x00112A0Cu) [[unlikely]] return; }
L_00112A0C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00112A10:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00112A64; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_00112A38:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00112A74; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00112A38u | kUnwind; return; } goto L_00112A38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00112A78; } }
L_00112A64:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
L_00112A74:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00112A78:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_00112A80; }
L_00112A80:
    set32(c.r[2], 0u + 1023u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[6].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    st32((c.r[18].w[0] + 16u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112A9Cu); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00112A9Cu) [[unlikely]] return; }
L_00112A9C:
    set32(c.r[16], c.r[20].w[0] - 12672u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112AB8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x00112AB8u) [[unlikely]] return; }
L_00112AB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 2;
L_00112AC0:
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] - 9920u);
    set32(c.r[7], c.r[23].w[0] - 15808u);
    set32(c.r[5], 0u + 25u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112AF4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112AF4u) [[unlikely]] return; }
L_00112AF4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00112B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112B04u) [[unlikely]] return; }
L_00112B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B0Cu);  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112B0Cu) [[unlikely]] return; }
L_00112B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112B4C; } }
L_00112B14:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B20u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0003(c, 435u, depth + 1u); else { c.pc = 0x0010FA18u; return; } if (c.pc != 0x00112B20u) [[unlikely]] return; }
L_00112B20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00112B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112B30u) [[unlikely]] return; }
L_00112B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00112B4C; } }
L_00112B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x00112B40u) [[unlikely]] return; }
L_00112B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112B48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x00112B48u) [[unlikely]] return; }
L_00112B48:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00112B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00112B78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00112BB4; } }
L_00112B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00112B98:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00112B98u | kUnwind; return; } goto L_00112B98; } }
L_00112BB4:
    set32(c.r[16], c.r[17].w[0] - 9728u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112BCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x00112BCCu) [[unlikely]] return; }
L_00112BCC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00112BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00112BEC; } }
L_00112BDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00112B90u | kUnwind; return; } goto L_00112B90; } }
    st32((c.r[2].w[0] - 23208u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00112BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23208u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112C5C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[7].w[0] - 9600u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    set32(c.r[7], c.r[7].w[0] - 9600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112C54u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112C54u) [[unlikely]] return; }
L_00112C54:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  if (t) { goto L_00112C60; } }
L_00112C5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00112C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112C70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23208u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 9600u);
    st32((c.r[2].w[0] - 9600u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 12u);
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112CD4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112CD4u) [[unlikely]] return; }
L_00112CD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  if (t) { goto L_00112CE0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00112CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112CF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23208u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112D58; } }
L_00112D14:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[7].w[0] - 9600u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    set32(c.r[7], c.r[7].w[0] - 9600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112D4Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112D4Cu) [[unlikely]] return; }
L_00112D4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  if (t) { goto L_00112D58; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00112D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112D68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112D78u);  if (depth < kMaxDepth) unit_0004(c, 378u, depth + 1u); else { c.pc = 0x00112CF0u; return; } if (c.pc != 0x00112D78u) [[unlikely]] return; }
L_00112D78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00112D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23208u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112E68; } }
L_00112DAC:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[7].w[0] - 9536u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00112E08; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_00112DD8:
    c.r[2].d[0] = c.r[8].sd[0] < 252ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[8].w[0]);  if (t) { goto L_00112E10; } }
    set32(c.r[3], c.r[7].w[0] - 9536u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00112DD8u | kUnwind; return; } goto L_00112DD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 252u);  if (t) { goto L_00112E14; } }
L_00112E08:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_00112E10:
    set32(c.r[2], 0u + 252u);
    c.budget -= 1;
L_00112E14:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { st32((c.r[7].w[0] - 9536u), c.r[5].w[0]);  goto L_00112E2C; }
    set32(c.r[2], c.r[7].w[0] - 9536u);
    set32(c.r[8], 0u + 251u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] - 9536u), c.r[5].w[0]);
    c.budget -= 4;
L_00112E2C:
    set32(c.r[2], c.r[7].w[0] - 9536u);
    set32(c.r[4], c.r[9].w[0] - 9728u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 5u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112E5Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112E5Cu) [[unlikely]] return; }
L_00112E5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  if (t) { goto L_00112E68; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00112E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23208u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112ED8; } }
L_00112E98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112EC8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112EC8u) [[unlikely]] return; }
L_00112EC8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  goto L_00112ED8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_00112ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23208u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112F48; } }
L_00112F08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112F38u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112F38u) [[unlikely]] return; }
L_00112F38:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  goto L_00112F48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_00112F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23208u)));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00112FB8; } }
L_00112F78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00112FA8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00112FA8u) [[unlikely]] return; }
L_00112FA8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  goto L_00112FB8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_00112FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00112FC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23208u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00112FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00113034; } }
L_00112FEC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[7].w[0] - 9600u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    set32(c.r[7], c.r[7].w[0] - 9600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113024u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113024u) [[unlikely]] return; }
L_00113024:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  goto L_00113034; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_00113034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0011303C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00113040:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x00113044u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00113048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] - 23208u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0011306C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001130B4; } }
L_0011306C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[7].w[0] - 9600u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    c.budget -= 5;
L_00113080:
    set32(c.r[7], c.r[7].w[0] - 9600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 9664u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001130A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001130A4u) [[unlikely]] return; }
L_001130A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9664u)));  goto L_001130B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_001130B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001130C0:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 1;
    c.pc = 0x001130C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001130C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] - 23200u)));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_001131AC; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[17].w[0] - 8768u);
    c.budget -= 2;
L_001130F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 6ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113104u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x00113104u) [[unlikely]] return; }
L_00113104:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00113114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001131B0; } }
L_00113114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011317C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] - 23200u), 0u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] - 9280u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 9;
L_00113140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113148u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113148u) [[unlikely]] return; }
L_00113148:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011315C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_001131B0; } }
L_0011315C:
    set32(c.r[7], c.r[17].w[0] - 9280u);
    set32(c.r[6], c.r[3].w[0] - 8728u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001131B0; } }
L_0011317C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00113180:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00113188:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113188u | kUnwind; return; } goto L_00113188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 8768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001130F0u | kUnwind; return; } goto L_001130F0; } }
L_001131AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001131B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001131C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] - 23412u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] - 8728u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113204u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x00113204u) [[unlikely]] return; }
L_00113204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00113234; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] - 23196u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011321Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x0011321Cu) [[unlikely]] return; }
L_0011321C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] - 23196u)));  if (t) { goto L_00113234; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113230u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124C88u; return; } if (c.pc != 0x00113230u) [[unlikely]] return; }
L_00113230:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00113234:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00113258:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 8728u);
    st32((c.r[2].w[0] - 23200u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113280u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00113280u) [[unlikely]] return; }
L_00113280:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113290:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001132C8u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x001132C8u) [[unlikely]] return; }
L_001132C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001132D8u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x001132D8u) [[unlikely]] return; }
L_001132D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001132EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00113470; } }
L_001132EC:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 9280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 9280u), c.r[19].w[0]);  if (t) { goto L_00113420; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011340C; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00113380; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_00113324:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113324u | kUnwind; return; } goto L_00113324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001133BC; } }
L_00113380:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_00113388:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113388u | kUnwind; return; } goto L_00113388; } }
L_001133BC:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 9280u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00113428; } }
L_0011340C:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113418u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00113418u) [[unlikely]] return; }
L_00113418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_00113424; } }
L_00113420:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_00113424:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_00113428:
    set32(c.r[16], c.r[21].w[0] - 9280u);
    set32(c.r[4], c.r[5].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113454u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113454u) [[unlikely]] return; }
L_00113454:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00113468; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00113470; } }
L_00113468:
    set32(c.r[2], ld32((c.r[20].w[0] - 9280u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00113470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00113498:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001134D0u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x001134D0u) [[unlikely]] return; }
L_001134D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001134E0u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x001134E0u) [[unlikely]] return; }
L_001134E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001134F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00113678; } }
L_001134F4:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 9280u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 9280u), c.r[19].w[0]);  if (t) { goto L_00113628; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00113614; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00113588; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_0011352C:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011352Cu | kUnwind; return; } goto L_0011352C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001135C4; } }
L_00113588:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 2;
L_00113590:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113590u | kUnwind; return; } goto L_00113590; } }
L_001135C4:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 9280u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00113630; } }
L_00113614:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113620u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00113620u) [[unlikely]] return; }
L_00113620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0011362C; } }
L_00113628:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0011362C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_00113630:
    set32(c.r[16], c.r[21].w[0] - 9280u);
    set32(c.r[4], c.r[5].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011365Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011365Cu) [[unlikely]] return; }
L_0011365C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00113670; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00113678; } }
L_00113670:
    set32(c.r[2], ld32((c.r[20].w[0] - 9280u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00113678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001136A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001136B8u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x001136B8u) [[unlikely]] return; }
L_001136B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0011371C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001136C8u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x001136C8u) [[unlikely]] return; }
L_001136C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001136DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0011371C; } }
L_001136DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[16].w[0] - 9280u);
    st32((c.r[16].w[0] - 9280u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011370Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011370Cu) [[unlikely]] return; }
L_0011370C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9280u)));  goto L_0011371C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0011371C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00113730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x00113744u) [[unlikely]] return; }
L_00113744:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_001137C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113754u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x00113754u) [[unlikely]] return; }
L_00113754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  goto L_00113768; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_001137C0; } }
L_00113768:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 9272u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011377Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x0011377Cu) [[unlikely]] return; }
L_0011377C:
    set32(c.r[3], c.r[16].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 8768u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001137B0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x001137B0u) [[unlikely]] return; }
L_001137B0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 8u)));  goto L_001137C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_001137C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001137D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001137E8u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x001137E8u) [[unlikely]] return; }
L_001137E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0011384C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001137F8u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x001137F8u) [[unlikely]] return; }
L_001137F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011380C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0011384C; } }
L_0011380C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[16].w[0] - 9280u);
    st32((c.r[16].w[0] - 9280u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011383Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011383Cu) [[unlikely]] return; }
L_0011383C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 9280u)));  goto L_0011384C; }
    goto L_00113844;
L_00113840:
    set32(c.r[2], ld32((c.r[16].w[0] - 9280u)));
    c.budget -= 1;
L_00113844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0011384C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00113860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113870u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 412u, depth + 1u); else { c.pc = 0x00113290u; return; } if (c.pc != 0x00113870u) [[unlikely]] return; }
L_00113870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00113880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113890u);  if (depth < kMaxDepth) unit_0004(c, 412u, depth + 1u); else { c.pc = 0x00113290u; return; } if (c.pc != 0x00113890u) [[unlikely]] return; }
L_00113890:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001138A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001138D8u); st64((c.r[29].w[0] + 96u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x001138D8u) [[unlikely]] return; }
L_001138D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001138E8u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x001138E8u) [[unlikely]] return; }
L_001138E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  goto L_001138FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00113AA0; } }
L_001138FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 9272u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00113910u) [[unlikely]] return; }
L_00113910:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00113A48; } }
    c.r[2].d[0] = c.r[18].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00113A30; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001139A4; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_00113948:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00113948u | kUnwind; return; } goto L_00113948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001139E4; } }
L_001139A4:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_001139B0:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001139B0u | kUnwind; return; } goto L_001139B0; } }
L_001139E4:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    lwl(c.r[9], (c.r[3].w[0] + 27u));
    lwr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    swl(c.r[9], (c.r[4].w[0] + 27u));
    set32(c.r[2], 0u + 252u);
    swr(c.r[9], (c.r[4].w[0] + 24u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 9280u), c.r[2].w[0]);  if (t) { goto L_00113A58; } }
L_00113A30:
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113A40u); c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00113A40u) [[unlikely]] return; }
L_00113A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 8u), c.r[18].w[0]);  if (t) { goto L_00113A54; } }
L_00113A48:
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] - 8u), 0u);
    c.budget -= 3;
L_00113A54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_00113A58:
    set32(c.r[16], c.r[21].w[0] - 9280u);
    set32(c.r[4], c.r[5].w[0] - 8768u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113A84u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113A84u) [[unlikely]] return; }
L_00113A84:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_00113A98; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00113AA0; } }
L_00113A98:
    set32(c.r[2], ld32((c.r[21].w[0] - 9280u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00113AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00113AC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113ADCu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 444u, depth + 1u); else { c.pc = 0x001138A0u; return; } if (c.pc != 0x00113ADCu) [[unlikely]] return; }
L_00113ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00113AE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113AF8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 444u, depth + 1u); else { c.pc = 0x001138A0u; return; } if (c.pc != 0x00113AF8u) [[unlikely]] return; }
L_00113AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113B08:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113B38u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x00113B38u) [[unlikely]] return; }
L_00113B38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113B48u);  if (depth < kMaxDepth) unit_0004(c, 406u, depth + 1u); else { c.pc = 0x001131C8u; return; } if (c.pc != 0x00113B48u) [[unlikely]] return; }
L_00113B48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  goto L_00113B5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00113BEC; } }
L_00113B5C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 9272u);
    set32(c.r[6], 0u + 252u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113B74u); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00113B74u) [[unlikely]] return; }
L_00113B74:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113B88u); set32(c.r[6], 0u + 252u);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00113B88u) [[unlikely]] return; }
L_00113B88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113BB8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113BB8u) [[unlikely]] return; }
L_00113BB8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] - 8u)));  goto L_00113BCC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00113BEC; } }
L_00113BCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_00113BE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_00113BEC; } }
L_00113BE0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00113BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00113C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113C20u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 456u, depth + 1u); else { c.pc = 0x00113B08u; return; } if (c.pc != 0x00113C20u) [[unlikely]] return; }
L_00113C20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113C30:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 15976u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113C4Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 456u, depth + 1u); else { c.pc = 0x00113B08u; return; } if (c.pc != 0x00113C4Cu) [[unlikely]] return; }
L_00113C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113C58:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113C80u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x00113C80u) [[unlikely]] return; }
L_00113C80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_00113C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113D28; } }
L_00113C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00113D14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[17].w[0] - 9280u);
    st32((c.r[17].w[0] - 9280u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 8768u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113CD0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113CD0u) [[unlikely]] return; }
L_00113CD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00113CE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00113D28; } }
L_00113CE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00113CF8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] - 9280u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00113D24; } }
L_00113CF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00113D0C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] - 9280u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00113D24; } }
L_00113D0C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] - 9280u)));  goto L_00113D20; }
L_00113D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_00113D28; } }
L_00113D20:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00113D24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00113D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00113D48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113D6Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 399u, depth + 1u); else { c.pc = 0x001130C8u; return; } if (c.pc != 0x00113D6Cu) [[unlikely]] return; }
L_00113D6C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_00113D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_00113E0C; } }
L_00113D7C:
    set32(c.r[3], c.r[7].w[0] - 9280u);
    st32((c.r[7].w[0] - 9280u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_00113D98; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00113DC8; } }
L_00113D98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00113DB0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00113DC8; } }
L_00113DB0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_00113DC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_00113E0C; } }
L_00113DC4:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00113DC8:
    set32(c.r[7], c.r[7].w[0] - 9280u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] - 8768u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113DF4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x00113DF4u) [[unlikely]] return; }
L_00113DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_00113E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00113E28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 5;
L_00113E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113E44u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 590u, depth + 1u); else { c.pc = 0x0010BEF0u; return; } if (c.pc != 0x00113E44u) [[unlikely]] return; }
L_00113E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113E50u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x00113E50u) [[unlikely]] return; }
L_00113E50:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 8704u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00113E98; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
L_00113E78:
    set32(c.r[3], c.r[10].w[0] - 8704u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00113E78u | kUnwind; return; } goto L_00113E78; }
L_00113E98:
    set32(c.r[6], c.r[10].w[0] - 8704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[5], 0u + 104u);
    c.r[2].d[0] = ld64((c.r[10].w[0] - 8704u));
    set32(c.r[7], 0u + 104u);
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[8], 0u + 68u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[10].w[0] - 8704u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[10].w[0] - 8704u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 104u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113EF4u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x00113EF4u) [[unlikely]] return; }
L_00113EF4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F00u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x00113F00u) [[unlikely]] return; }
L_00113F00:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x00113F0Cu) [[unlikely]] return; }
L_00113F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00113F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F1Cu); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x00113F1Cu) [[unlikely]] return; }
L_00113F1C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F28u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x00113F28u) [[unlikely]] return; }
L_00113F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F38u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x00113F38u) [[unlikely]] return; }
L_00113F38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0010C020u; return; } if (c.pc != 0x00113F44u) [[unlikely]] return; }
L_00113F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00113F50; } }
L_00113F4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00113F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00113F68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113F78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x00113F78u) [[unlikely]] return; }
L_00113F78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113FA0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 7u, depth + 1u); else { c.pc = 0x0010C030u; return; } if (c.pc != 0x00113FA0u) [[unlikely]] return; }
L_00113FA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00113FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00113FB8u);  if (depth < kMaxDepth) unit_0003(c, 21u, depth + 1u); else { c.pc = 0x0010C0A0u; return; } if (c.pc != 0x00113FB8u) [[unlikely]] return; }
L_00113FB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00113FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00113FC8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 15984u);  if (t) { [[clang::musttail]] return unit_0005(c, 2u, depth); } }
    set32(c.r[3], c.r[16].w[0] - 11u);
    c.budget -= 1;
L_00113FF0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    [[clang::musttail]] return unit_0005(c, 1u, depth);
}

}
