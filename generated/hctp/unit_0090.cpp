#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0090[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
    3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0,
    0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0,
    0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328,
    0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0,
    346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0,
    360, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371,
    0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0,
    0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398,
    0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0,
    0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0,
    0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0,
    0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487,
    0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0,
    0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0,
    0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563,
};

void unit_0090(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00340000;
    case 2u: goto L_00340068;
    case 3u: goto L_00340080;
    case 4u: goto L_00340088;
    case 5u: goto L_00340098;
    case 6u: goto L_003400C0;
    case 7u: goto L_003400F0;
    case 8u: goto L_00340100;
    case 9u: goto L_0034010C;
    case 10u: goto L_00340124;
    case 11u: goto L_0034012C;
    case 12u: goto L_0034013C;
    case 13u: goto L_0034014C;
    case 14u: goto L_00340160;
    case 15u: goto L_003401E8;
    case 16u: goto L_00340230;
    case 17u: goto L_003402BC;
    case 18u: goto L_00340300;
    case 19u: goto L_00340388;
    case 20u: goto L_003403C0;
    case 21u: goto L_00340444;
    case 22u: goto L_00340480;
    case 23u: goto L_003404C0;
    case 24u: goto L_00340500;
    case 25u: goto L_0034051C;
    case 26u: goto L_00340540;
    case 27u: goto L_00340558;
    case 28u: goto L_00340560;
    case 29u: goto L_00340570;
    case 30u: goto L_00340580;
    case 31u: goto L_003405B0;
    case 32u: goto L_003405C0;
    case 33u: goto L_003405CC;
    case 34u: goto L_003405E4;
    case 35u: goto L_003405EC;
    case 36u: goto L_003405FC;
    case 37u: goto L_0034060C;
    case 38u: goto L_00340620;
    case 39u: goto L_00340660;
    case 40u: goto L_003406A0;
    case 41u: goto L_003406BC;
    case 42u: goto L_003406E0;
    case 43u: goto L_003406F8;
    case 44u: goto L_00340700;
    case 45u: goto L_00340710;
    case 46u: goto L_00340720;
    case 47u: goto L_00340750;
    case 48u: goto L_00340760;
    case 49u: goto L_0034076C;
    case 50u: goto L_00340784;
    case 51u: goto L_0034078C;
    case 52u: goto L_0034079C;
    case 53u: goto L_003407AC;
    case 54u: goto L_003407C0;
    case 55u: goto L_00340848;
    case 56u: goto L_00340880;
    case 57u: goto L_003408C8;
    case 58u: goto L_003408E0;
    case 59u: goto L_00340900;
    case 60u: goto L_00340948;
    case 61u: goto L_00340960;
    case 62u: goto L_00340980;
    case 63u: goto L_003409C8;
    case 64u: goto L_003409E0;
    case 65u: goto L_00340A00;
    case 66u: goto L_00340A48;
    case 67u: goto L_00340A60;
    case 68u: goto L_00340A80;
    case 69u: goto L_00340AC8;
    case 70u: goto L_00340AE0;
    case 71u: goto L_00340B00;
    case 72u: goto L_00340B48;
    case 73u: goto L_00340B60;
    case 74u: goto L_00340B80;
    case 75u: goto L_00340BC8;
    case 76u: goto L_00340BE0;
    case 77u: goto L_00340C00;
    case 78u: goto L_00340C48;
    case 79u: goto L_00340C60;
    case 80u: goto L_00340C80;
    case 81u: goto L_00340CC8;
    case 82u: goto L_00340CE0;
    case 83u: goto L_00340D00;
    case 84u: goto L_00340D48;
    case 85u: goto L_00340D60;
    case 86u: goto L_00340D80;
    case 87u: goto L_00340DC8;
    case 88u: goto L_00340DE0;
    case 89u: goto L_00340E00;
    case 90u: goto L_00340E48;
    case 91u: goto L_00340E60;
    case 92u: goto L_00340E80;
    case 93u: goto L_00340EC8;
    case 94u: goto L_00340EE0;
    case 95u: goto L_00340F00;
    case 96u: goto L_00340F48;
    case 97u: goto L_00340F60;
    case 98u: goto L_00340F80;
    case 99u: goto L_00340FC8;
    case 100u: goto L_00340FE0;
    case 101u: goto L_00341000;
    case 102u: goto L_00341048;
    case 103u: goto L_00341060;
    case 104u: goto L_00341080;
    case 105u: goto L_003410C8;
    case 106u: goto L_003410E0;
    case 107u: goto L_00341100;
    case 108u: goto L_00341148;
    case 109u: goto L_00341160;
    case 110u: goto L_00341180;
    case 111u: goto L_003411C8;
    case 112u: goto L_003411E0;
    case 113u: goto L_00341200;
    case 114u: goto L_00341210;
    case 115u: goto L_00341220;
    case 116u: goto L_00341230;
    case 117u: goto L_00341240;
    case 118u: goto L_00341250;
    case 119u: goto L_00341260;
    case 120u: goto L_00341270;
    case 121u: goto L_00341280;
    case 122u: goto L_00341290;
    case 123u: goto L_003412A0;
    case 124u: goto L_003412B0;
    case 125u: goto L_003412C0;
    case 126u: goto L_003412D0;
    case 127u: goto L_003412E0;
    case 128u: goto L_003412F0;
    case 129u: goto L_00341300;
    case 130u: goto L_00341310;
    case 131u: goto L_00341320;
    case 132u: goto L_00341330;
    case 133u: goto L_00341340;
    case 134u: goto L_00341350;
    case 135u: goto L_00341360;
    case 136u: goto L_00341370;
    case 137u: goto L_00341380;
    case 138u: goto L_00341390;
    case 139u: goto L_003413A0;
    case 140u: goto L_003413B0;
    case 141u: goto L_003413C0;
    case 142u: goto L_003413D0;
    case 143u: goto L_003413E0;
    case 144u: goto L_003413F0;
    case 145u: goto L_00341400;
    case 146u: goto L_00341410;
    case 147u: goto L_00341420;
    case 148u: goto L_00341430;
    case 149u: goto L_00341440;
    case 150u: goto L_00341450;
    case 151u: goto L_00341460;
    case 152u: goto L_00341470;
    case 153u: goto L_00341480;
    case 154u: goto L_00341490;
    case 155u: goto L_003414A0;
    case 156u: goto L_003414B0;
    case 157u: goto L_003414C0;
    case 158u: goto L_003414D0;
    case 159u: goto L_003414E0;
    case 160u: goto L_003414F0;
    case 161u: goto L_00341500;
    case 162u: goto L_00341514;
    case 163u: goto L_00341528;
    case 164u: goto L_00341530;
    case 165u: goto L_00341540;
    case 166u: goto L_0034155C;
    case 167u: goto L_00341580;
    case 168u: goto L_00341598;
    case 169u: goto L_003415D0;
    case 170u: goto L_00341600;
    case 171u: goto L_00341618;
    case 172u: goto L_00341630;
    case 173u: goto L_00341640;
    case 174u: goto L_00341650;
    case 175u: goto L_0034168C;
    case 176u: goto L_003416A8;
    case 177u: goto L_003416E0;
    case 178u: goto L_003416F0;
    case 179u: goto L_003416FC;
    case 180u: goto L_0034171C;
    case 181u: goto L_00341748;
    case 182u: goto L_0034175C;
    case 183u: goto L_00341770;
    case 184u: goto L_0034177C;
    case 185u: goto L_0034179C;
    case 186u: goto L_003417D0;
    case 187u: goto L_003417FC;
    case 188u: goto L_00341810;
    case 189u: goto L_00341824;
    case 190u: goto L_00341830;
    case 191u: goto L_00341858;
    case 192u: goto L_0034186C;
    case 193u: goto L_003418AC;
    case 194u: goto L_003418C0;
    case 195u: goto L_003418D4;
    case 196u: goto L_003418E0;
    case 197u: goto L_00341900;
    case 198u: goto L_00341930;
    case 199u: goto L_0034195C;
    case 200u: goto L_00341970;
    case 201u: goto L_00341984;
    case 202u: goto L_00341990;
    case 203u: goto L_003419B0;
    case 204u: goto L_003419E0;
    case 205u: goto L_003419E8;
    case 206u: goto L_003419FC;
    case 207u: goto L_00341A18;
    case 208u: goto L_00341A34;
    case 209u: goto L_00341A3C;
    case 210u: goto L_00341A50;
    case 211u: goto L_00341A6C;
    case 212u: goto L_00341A80;
    case 213u: goto L_00341AA0;
    case 214u: goto L_00341AB0;
    case 215u: goto L_00341AB8;
    case 216u: goto L_00341ACC;
    case 217u: goto L_00341AE0;
    case 218u: goto L_00341B08;
    case 219u: goto L_00341B1C;
    case 220u: goto L_00341B44;
    case 221u: goto L_00341BA0;
    case 222u: goto L_00341BB0;
    case 223u: goto L_00341BD0;
    case 224u: goto L_00341BD8;
    case 225u: goto L_00341BEC;
    case 226u: goto L_00341BF8;
    case 227u: goto L_00341C00;
    case 228u: goto L_00341C20;
    case 229u: goto L_00341C6C;
    case 230u: goto L_00341C94;
    case 231u: goto L_00341CB4;
    case 232u: goto L_00341CC0;
    case 233u: goto L_00341CD8;
    case 234u: goto L_00341CF0;
    case 235u: goto L_00341D28;
    case 236u: goto L_00341D54;
    case 237u: goto L_00341D6C;
    case 238u: goto L_00341D88;
    case 239u: goto L_00341D94;
    case 240u: goto L_00341DA8;
    case 241u: goto L_00341DB0;
    case 242u: goto L_00341DEC;
    case 243u: goto L_00341E04;
    case 244u: goto L_00341E0C;
    case 245u: goto L_00341E14;
    case 246u: goto L_00341E1C;
    case 247u: goto L_00341E30;
    case 248u: goto L_00341E64;
    case 249u: goto L_00341E78;
    case 250u: goto L_00341E84;
    case 251u: goto L_00341E94;
    case 252u: goto L_00341EB0;
    case 253u: goto L_00341EDC;
    case 254u: goto L_00341EEC;
    case 255u: goto L_00341EFC;
    case 256u: goto L_00341F18;
    case 257u: goto L_00341F24;
    case 258u: goto L_00341F2C;
    case 259u: goto L_00341F48;
    case 260u: goto L_00341F54;
    case 261u: goto L_00341F68;
    case 262u: goto L_00341F80;
    case 263u: goto L_00341FA4;
    case 264u: goto L_00341FB8;
    case 265u: goto L_00341FC4;
    case 266u: goto L_00341FD0;
    case 267u: goto L_00341FD8;
    case 268u: goto L_00341FE8;
    case 269u: goto L_00341FF0;
    case 270u: goto L_00341FF8;
    case 271u: goto L_00342008;
    case 272u: goto L_00342018;
    case 273u: goto L_00342028;
    case 274u: goto L_00342034;
    case 275u: goto L_0034203C;
    case 276u: goto L_0034206C;
    case 277u: goto L_00342074;
    case 278u: goto L_00342090;
    case 279u: goto L_003420AC;
    case 280u: goto L_003420BC;
    case 281u: goto L_003420D0;
    case 282u: goto L_003420E4;
    case 283u: goto L_00342100;
    case 284u: goto L_00342124;
    case 285u: goto L_00342130;
    case 286u: goto L_00342150;
    case 287u: goto L_0034216C;
    case 288u: goto L_00342178;
    case 289u: goto L_0034218C;
    case 290u: goto L_003421A0;
    case 291u: goto L_003421B0;
    case 292u: goto L_003421C0;
    case 293u: goto L_003421D8;
    case 294u: goto L_003421E8;
    case 295u: goto L_00342200;
    case 296u: goto L_00342210;
    case 297u: goto L_0034222C;
    case 298u: goto L_00342240;
    case 299u: goto L_0034224C;
    case 300u: goto L_00342260;
    case 301u: goto L_00342290;
    case 302u: goto L_003422DC;
    case 303u: goto L_00342308;
    case 304u: goto L_00342338;
    case 305u: goto L_00342344;
    case 306u: goto L_0034234C;
    case 307u: goto L_00342354;
    case 308u: goto L_0034235C;
    case 309u: goto L_00342364;
    case 310u: goto L_00342370;
    case 311u: goto L_0034237C;
    case 312u: goto L_00342398;
    case 313u: goto L_003423A4;
    case 314u: goto L_003423BC;
    case 315u: goto L_003423E0;
    case 316u: goto L_003423F0;
    case 317u: goto L_00342424;
    case 318u: goto L_00342434;
    case 319u: goto L_00342448;
    case 320u: goto L_00342454;
    case 321u: goto L_00342460;
    case 322u: goto L_003424A8;
    case 323u: goto L_0034250C;
    case 324u: goto L_0034251C;
    case 325u: goto L_0034253C;
    case 326u: goto L_00342558;
    case 327u: goto L_00342564;
    case 328u: goto L_0034257C;
    case 329u: goto L_00342584;
    case 330u: goto L_003425A0;
    case 331u: goto L_003425C0;
    case 332u: goto L_003425D4;
    case 333u: goto L_003425E8;
    case 334u: goto L_00342618;
    case 335u: goto L_0034262C;
    case 336u: goto L_00342648;
    case 337u: goto L_00342650;
    case 338u: goto L_00342658;
    case 339u: goto L_00342670;
    case 340u: goto L_00342678;
    case 341u: goto L_00342694;
    case 342u: goto L_003426BC;
    case 343u: goto L_003426C4;
    case 344u: goto L_003426DC;
    case 345u: goto L_003426F8;
    case 346u: goto L_00342700;
    case 347u: goto L_00342718;
    case 348u: goto L_0034272C;
    case 349u: goto L_00342738;
    case 350u: goto L_00342748;
    case 351u: goto L_00342750;
    case 352u: goto L_0034277C;
    case 353u: goto L_003427A8;
    case 354u: goto L_003427B8;
    case 355u: goto L_003427C0;
    case 356u: goto L_003427D0;
    case 357u: goto L_003427D8;
    case 358u: goto L_003427E8;
    case 359u: goto L_003427F0;
    case 360u: goto L_00342800;
    case 361u: goto L_00342808;
    case 362u: goto L_00342818;
    case 363u: goto L_00342820;
    case 364u: goto L_00342830;
    case 365u: goto L_00342850;
    case 366u: goto L_003428A0;
    case 367u: goto L_003428B0;
    case 368u: goto L_003428C4;
    case 369u: goto L_003428D0;
    case 370u: goto L_003428EC;
    case 371u: goto L_003428FC;
    case 372u: goto L_00342910;
    case 373u: goto L_0034291C;
    case 374u: goto L_00342930;
    case 375u: goto L_00342940;
    case 376u: goto L_0034296C;
    case 377u: goto L_00342990;
    case 378u: goto L_003429CC;
    case 379u: goto L_003429DC;
    case 380u: goto L_003429EC;
    case 381u: goto L_00342A00;
    case 382u: goto L_00342A14;
    case 383u: goto L_00342A28;
    case 384u: goto L_00342A34;
    case 385u: goto L_00342A48;
    case 386u: goto L_00342A60;
    case 387u: goto L_00342A88;
    case 388u: goto L_00342AA4;
    case 389u: goto L_00342AB0;
    case 390u: goto L_00342AC4;
    case 391u: goto L_00342ADC;
    case 392u: goto L_00342AF8;
    case 393u: goto L_00342B04;
    case 394u: goto L_00342B18;
    case 395u: goto L_00342B34;
    case 396u: goto L_00342B4C;
    case 397u: goto L_00342B68;
    case 398u: goto L_00342B7C;
    case 399u: goto L_00342B88;
    case 400u: goto L_00342B9C;
    case 401u: goto L_00342BC0;
    case 402u: goto L_00342BF4;
    case 403u: goto L_00342C0C;
    case 404u: goto L_00342C28;
    case 405u: goto L_00342C3C;
    case 406u: goto L_00342C48;
    case 407u: goto L_00342C5C;
    case 408u: goto L_00342C80;
    case 409u: goto L_00342CB0;
    case 410u: goto L_00342CC4;
    case 411u: goto L_00342CD0;
    case 412u: goto L_00342CE4;
    case 413u: goto L_00342D10;
    case 414u: goto L_00342D40;
    case 415u: goto L_00342D5C;
    case 416u: goto L_00342D68;
    case 417u: goto L_00342D7C;
    case 418u: goto L_00342DA0;
    case 419u: goto L_00342DD0;
    case 420u: goto L_00342DE4;
    case 421u: goto L_00342DF0;
    case 422u: goto L_00342E04;
    case 423u: goto L_00342E30;
    case 424u: goto L_00342E68;
    case 425u: goto L_00342E8C;
    case 426u: goto L_00342EA4;
    case 427u: goto L_00342EBC;
    case 428u: goto L_00342EE8;
    case 429u: goto L_00342F24;
    case 430u: goto L_00342F58;
    case 431u: goto L_00342F90;
    case 432u: goto L_00342FA4;
    case 433u: goto L_00342FD4;
    case 434u: goto L_00342FF0;
    case 435u: goto L_00343044;
    case 436u: goto L_00343050;
    case 437u: goto L_0034305C;
    case 438u: goto L_00343074;
    case 439u: goto L_00343090;
    case 440u: goto L_003430B8;
    case 441u: goto L_003430C0;
    case 442u: goto L_003430D0;
    case 443u: goto L_003430E0;
    case 444u: goto L_003430F0;
    case 445u: goto L_00343120;
    case 446u: goto L_00343140;
    case 447u: goto L_0034315C;
    case 448u: goto L_00343170;
    case 449u: goto L_00343178;
    case 450u: goto L_0034318C;
    case 451u: goto L_0034319C;
    case 452u: goto L_003431BC;
    case 453u: goto L_003431C8;
    case 454u: goto L_003431D0;
    case 455u: goto L_003431D8;
    case 456u: goto L_003431E4;
    case 457u: goto L_003431F8;
    case 458u: goto L_00343204;
    case 459u: goto L_00343210;
    case 460u: goto L_00343220;
    case 461u: goto L_00343240;
    case 462u: goto L_00343254;
    case 463u: goto L_00343270;
    case 464u: goto L_00343290;
    case 465u: goto L_003432A4;
    case 466u: goto L_003432C0;
    case 467u: goto L_003432F0;
    case 468u: goto L_0034332C;
    case 469u: goto L_00343344;
    case 470u: goto L_0034335C;
    case 471u: goto L_00343380;
    case 472u: goto L_003433A8;
    case 473u: goto L_003433B0;
    case 474u: goto L_003433C0;
    case 475u: goto L_003433D0;
    case 476u: goto L_003433E0;
    case 477u: goto L_00343410;
    case 478u: goto L_00343430;
    case 479u: goto L_00343458;
    case 480u: goto L_00343470;
    case 481u: goto L_003434BC;
    case 482u: goto L_003434EC;
    case 483u: goto L_00343508;
    case 484u: goto L_0034351C;
    case 485u: goto L_00343550;
    case 486u: goto L_00343568;
    case 487u: goto L_0034357C;
    case 488u: goto L_00343588;
    case 489u: goto L_003435A0;
    case 490u: goto L_003435D0;
    case 491u: goto L_003435E8;
    case 492u: goto L_0034360C;
    case 493u: goto L_00343654;
    case 494u: goto L_00343680;
    case 495u: goto L_003436C8;
    case 496u: goto L_003436FC;
    case 497u: goto L_0034371C;
    case 498u: goto L_00343744;
    case 499u: goto L_0034376C;
    case 500u: goto L_0034378C;
    case 501u: goto L_0034379C;
    case 502u: goto L_003437D0;
    case 503u: goto L_003437F0;
    case 504u: goto L_00343818;
    case 505u: goto L_00343828;
    case 506u: goto L_00343864;
    case 507u: goto L_00343878;
    case 508u: goto L_00343890;
    case 509u: goto L_0034389C;
    case 510u: goto L_003438C0;
    case 511u: goto L_003438E0;
    case 512u: goto L_003438F8;
    case 513u: goto L_00343910;
    case 514u: goto L_00343928;
    case 515u: goto L_00343938;
    case 516u: goto L_0034394C;
    case 517u: goto L_00343970;
    case 518u: goto L_00343980;
    case 519u: goto L_00343990;
    case 520u: goto L_003439A8;
    case 521u: goto L_003439BC;
    case 522u: goto L_003439D0;
    case 523u: goto L_003439E0;
    case 524u: goto L_003439EC;
    case 525u: goto L_003439F4;
    case 526u: goto L_00343A50;
    case 527u: goto L_00343A58;
    case 528u: goto L_00343A78;
    case 529u: goto L_00343AE4;
    case 530u: goto L_00343B10;
    case 531u: goto L_00343B54;
    case 532u: goto L_00343B70;
    case 533u: goto L_00343B8C;
    case 534u: goto L_00343B98;
    case 535u: goto L_00343BB0;
    case 536u: goto L_00343BD0;
    case 537u: goto L_00343C24;
    case 538u: goto L_00343C34;
    case 539u: goto L_00343C70;
    case 540u: goto L_00343C80;
    case 541u: goto L_00343CC0;
    case 542u: goto L_00343CD8;
    case 543u: goto L_00343CE8;
    case 544u: goto L_00343D14;
    case 545u: goto L_00343D2C;
    case 546u: goto L_00343D3C;
    case 547u: goto L_00343D4C;
    case 548u: goto L_00343D60;
    case 549u: goto L_00343DD4;
    case 550u: goto L_00343DF4;
    case 551u: goto L_00343E14;
    case 552u: goto L_00343E30;
    case 553u: goto L_00343E58;
    case 554u: goto L_00343EA0;
    case 555u: goto L_00343ED8;
    case 556u: goto L_00343EF4;
    case 557u: goto L_00343F10;
    case 558u: goto L_00343F40;
    case 559u: goto L_00343F58;
    case 560u: goto L_00343F70;
    case 561u: goto L_00343FC0;
    case 562u: goto L_00343FD0;
    case 563u: goto L_00343FFC;
    default: bad_entry(c, 0x00340000u); return;
    }
L_00340000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034000C; } }
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0034000C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340020; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00340020; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00340020:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0034003C; } }
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034003C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0034003C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340090; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00340090; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 22u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340068u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00340068u) [[unlikely]] return; }
L_00340068:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340078; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_00340078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340080u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00340080u) [[unlikely]] return; }
L_00340080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340088u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x00340088u) [[unlikely]] return; }
L_00340088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0034009C; } }
L_00340090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340098u);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x00340098u) [[unlikely]] return; }
L_00340098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0034009C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003400C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340144; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003400F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003400F0u) [[unlikely]] return; }
L_003400F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034014C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340100u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00340100u) [[unlikely]] return; }
L_00340100:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034010Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0034010Cu) [[unlikely]] return; }
L_0034010C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034011C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0034011C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340124u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00340124u) [[unlikely]] return; }
L_00340124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034012Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0034012Cu) [[unlikely]] return; }
L_0034012C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034014C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034013Cu);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0034013Cu) [[unlikely]] return; }
L_0034013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00340150; } }
L_00340144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034014Cu);  if (depth < kMaxDepth) unit_009A(c, 428u, depth + 1u); else { c.pc = 0x0036BC20u; return; } if (c.pc != 0x0034014Cu) [[unlikely]] return; }
L_0034014C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00340150:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340160:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 151u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 148u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], 0u + 152u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 617u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[6], c.r[6].w[0] - 1696u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[7], 0u + 5u);
    c.f[13] = c.f[12];
    set32(c.r[8], 0u + 626u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[9], 0u + 830u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[11], c.r[11].w[0] - 1648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003401E8u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x003401E8u) [[unlikely]] return; }
L_003401E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24768u);
    set32(c.r[3], c.r[3].w[0] + 24856u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24916u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00340230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 151u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 148u);
    set32(c.r[5], 0u + 617u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 1616u);
    set32(c.r[2], 0u + 152u);
    set32(c.r[7], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[8], 0u + 627u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[9], 0u + 830u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[11], c.r[11].w[0] - 1592u);
    c.f[14] = c.r[2].w[0];
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[15] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003402BCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x003402BCu) [[unlikely]] return; }
L_003402BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24592u);
    set32(c.r[3], c.r[3].w[0] + 24680u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24740u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00340300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[8], 0u + 830u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[3], 0u + 147u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[2], 0u + 148u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    if (c.r[5].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[5], 0u + 618u);
    c.f[15] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] - 1568u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.f[16] = c.r[2].w[0];
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340388u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x00340388u) [[unlikely]] return; }
L_00340388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 24416u);
    set32(c.r[2], c.r[2].w[0] + 24504u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24564u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003403C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[8], 0u + 830u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], 0u + 147u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[5], 0u + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[15] = c.r[3].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    set32(c.r[5], 0u + 633u);
    c.f[16] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 1504u);
    c.f[13] = c.f[12];
    set32(c.r[7], 0u + 3u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340444u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x00340444u) [[unlikely]] return; }
L_00340444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 24240u);
    set32(c.r[2], c.r[2].w[0] + 24328u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24388u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00340480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[9], 0u + 132u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1472u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 614u);
    set32(c.r[8], 0u + 131u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003404C0u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x003404C0u) [[unlikely]] return; }
L_003404C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 24064u);
    set32(c.r[2], c.r[2].w[0] + 24152u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24212u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034051Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034051Cu) [[unlikely]] return; }
L_0034051C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00340568; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340540u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00340540u) [[unlikely]] return; }
L_00340540:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00340550; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_00340550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340558u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00340558u) [[unlikely]] return; }
L_00340558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340560u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x00340560u) [[unlikely]] return; }
L_00340560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00340574; } }
L_00340568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340570u);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x00340570u) [[unlikely]] return; }
L_00340570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00340574:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00340604; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003405B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003405B0u) [[unlikely]] return; }
L_003405B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0034060C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003405C0u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003405C0u) [[unlikely]] return; }
L_003405C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003405CCu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003405CCu) [[unlikely]] return; }
L_003405CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003405DC; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_003405DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003405E4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003405E4u) [[unlikely]] return; }
L_003405E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003405ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x003405ECu) [[unlikely]] return; }
L_003405EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034060C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003405FCu);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x003405FCu) [[unlikely]] return; }
L_003405FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00340610; } }
L_00340604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034060Cu);  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x0034060Cu) [[unlikely]] return; }
L_0034060C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00340610:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[9], 0u + 132u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1440u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 614u);
    set32(c.r[8], 0u + 131u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340660u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x00340660u) [[unlikely]] return; }
L_00340660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23888u);
    set32(c.r[2], c.r[2].w[0] + 23976u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 24036u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003406A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003406BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003406BCu) [[unlikely]] return; }
L_003406BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00340708; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003406E0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003406E0u) [[unlikely]] return; }
L_003406E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003406F0; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_003406F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003406F8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x003406F8u) [[unlikely]] return; }
L_003406F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340700u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x00340700u) [[unlikely]] return; }
L_00340700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00340714; } }
L_00340708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340710u);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x00340710u) [[unlikely]] return; }
L_00340710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00340714:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00340720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003407A4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00340750u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00340750u) [[unlikely]] return; }
L_00340750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003407AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340760u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00340760u) [[unlikely]] return; }
L_00340760:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034076Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0034076Cu) [[unlikely]] return; }
L_0034076C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034077C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0034077C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340784u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x00340784u) [[unlikely]] return; }
L_00340784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034078Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0034078Cu) [[unlikely]] return; }
L_0034078C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003407AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034079Cu);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0034079Cu) [[unlikely]] return; }
L_0034079C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003407B0; } }
L_003407A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003407ACu);  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x003407ACu) [[unlikely]] return; }
L_003407AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003407B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003407C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], 0u + 147u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[5], 0u + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.f[14] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[15] = c.r[3].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[5], 0u + 614u);
    c.f[16] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] - 1408u);
    c.f[13] = c.f[12];
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], 0u + 660u);
    set32(c.r[9], 0u + 830u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] - 1312u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340848u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x00340848u) [[unlikely]] return; }
L_00340848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 23712u);
    set32(c.r[2], c.r[2].w[0] + 23800u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23860u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00340880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003408E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23712u);
    set32(c.r[3], c.r[3].w[0] + 23800u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23860u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003408C8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x003408C8u) [[unlikely]] return; }
L_003408C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003408E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003408E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003408E0u) [[unlikely]] return; }
L_003408E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003408E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23888u);
    set32(c.r[3], c.r[3].w[0] + 23976u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24036u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340948u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x00340948u) [[unlikely]] return; }
L_00340948:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340960u) [[unlikely]] return; }
L_00340960:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003409E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24064u);
    set32(c.r[3], c.r[3].w[0] + 24152u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24212u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003409C8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x003409C8u) [[unlikely]] return; }
L_003409C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003409E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003409E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003409E0u) [[unlikely]] return; }
L_003409E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003409E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340A60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24240u);
    set32(c.r[3], c.r[3].w[0] + 24328u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24388u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340A48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340A48u) [[unlikely]] return; }
L_00340A48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340A60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340A60u) [[unlikely]] return; }
L_00340A60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340A64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340AE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24416u);
    set32(c.r[3], c.r[3].w[0] + 24504u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24564u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340AC8u) [[unlikely]] return; }
L_00340AC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340AE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340AE0u) [[unlikely]] return; }
L_00340AE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24592u);
    set32(c.r[3], c.r[3].w[0] + 24680u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24740u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340B48u) [[unlikely]] return; }
L_00340B48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340B64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340B60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340B60u) [[unlikely]] return; }
L_00340B60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340BE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24768u);
    set32(c.r[3], c.r[3].w[0] + 24856u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24916u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340BC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340BC8u) [[unlikely]] return; }
L_00340BC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340BE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340BE0u) [[unlikely]] return; }
L_00340BE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24944u);
    set32(c.r[3], c.r[3].w[0] + 25032u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25092u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340C48u) [[unlikely]] return; }
L_00340C48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340C60u) [[unlikely]] return; }
L_00340C60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340CE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25120u);
    set32(c.r[3], c.r[3].w[0] + 25208u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25268u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340CC8u) [[unlikely]] return; }
L_00340CC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340CE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340CE0u) [[unlikely]] return; }
L_00340CE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25296u);
    set32(c.r[3], c.r[3].w[0] + 25384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25444u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340D48u) [[unlikely]] return; }
L_00340D48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340D60u) [[unlikely]] return; }
L_00340D60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340D64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340DE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25472u);
    set32(c.r[3], c.r[3].w[0] + 25560u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25620u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340DC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340DC8u) [[unlikely]] return; }
L_00340DC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340DE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340DE0u) [[unlikely]] return; }
L_00340DE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25648u);
    set32(c.r[3], c.r[3].w[0] + 25736u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25796u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340E48u) [[unlikely]] return; }
L_00340E48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340E60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340E60u) [[unlikely]] return; }
L_00340E60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25824u);
    set32(c.r[3], c.r[3].w[0] + 25912u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25972u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340EC8u) [[unlikely]] return; }
L_00340EC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340EE0u) [[unlikely]] return; }
L_00340EE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26000u);
    set32(c.r[3], c.r[3].w[0] + 26088u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26148u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340F48u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340F48u) [[unlikely]] return; }
L_00340F48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340F60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340F60u) [[unlikely]] return; }
L_00340F60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00340F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00340FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26176u);
    set32(c.r[3], c.r[3].w[0] + 26264u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26324u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340FC8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 66u, depth + 1u); else { c.pc = 0x0036CA30u; return; } if (c.pc != 0x00340FC8u) [[unlikely]] return; }
L_00340FC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00340FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00340FE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00340FE0u) [[unlikely]] return; }
L_00340FE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00340FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00341060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26352u);
    set32(c.r[3], c.r[3].w[0] + 26440u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26500u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341048u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x00341048u) [[unlikely]] return; }
L_00341048:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00341064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00341060u) [[unlikely]] return; }
L_00341060:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00341064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003410E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26528u);
    set32(c.r[3], c.r[3].w[0] + 26616u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26676u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410C8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x003410C8u) [[unlikely]] return; }
L_003410C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003410E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003410E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003410E0u) [[unlikely]] return; }
L_003410E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003410E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00341160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26704u);
    set32(c.r[3], c.r[3].w[0] + 26792u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26852u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341148u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x00341148u) [[unlikely]] return; }
L_00341148:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00341164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00341160u) [[unlikely]] return; }
L_00341160:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00341164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003411E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26880u);
    set32(c.r[3], c.r[3].w[0] + 26968u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27028u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003411C8u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 232u, depth + 1u); else { c.pc = 0x0033E630u; return; } if (c.pc != 0x003411C8u) [[unlikely]] return; }
L_003411C8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003411E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003411E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003411E0u) [[unlikely]] return; }
L_003411E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003411E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341200:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E630u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 232u, depth); }
L_00341210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E630u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 232u, depth); }
L_00341220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341180u | kUnwind; return; } goto L_00341180; }
L_00341230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341180u | kUnwind; return; } goto L_00341180; }
L_00341240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341100u | kUnwind; return; } goto L_00341100; }
L_00341250:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341100u | kUnwind; return; } goto L_00341100; }
L_00341260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341080u | kUnwind; return; } goto L_00341080; }
L_00341270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341080u | kUnwind; return; } goto L_00341080; }
L_00341280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341000u | kUnwind; return; } goto L_00341000; }
L_00341290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00341000u | kUnwind; return; } goto L_00341000; }
L_003412A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340F80u | kUnwind; return; } goto L_00340F80; }
L_003412B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340F80u | kUnwind; return; } goto L_00340F80; }
L_003412C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340F00u | kUnwind; return; } goto L_00340F00; }
L_003412D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340F00u | kUnwind; return; } goto L_00340F00; }
L_003412E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340E80u | kUnwind; return; } goto L_00340E80; }
L_003412F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340E80u | kUnwind; return; } goto L_00340E80; }
L_00341300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340E00u | kUnwind; return; } goto L_00340E00; }
L_00341310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340E00u | kUnwind; return; } goto L_00340E00; }
L_00341320:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340D80u | kUnwind; return; } goto L_00340D80; }
L_00341330:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340D80u | kUnwind; return; } goto L_00340D80; }
L_00341340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340D00u | kUnwind; return; } goto L_00340D00; }
L_00341350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340D00u | kUnwind; return; } goto L_00340D00; }
L_00341360:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340C80u | kUnwind; return; } goto L_00340C80; }
L_00341370:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340C80u | kUnwind; return; } goto L_00340C80; }
L_00341380:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340C00u | kUnwind; return; } goto L_00340C00; }
L_00341390:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340C00u | kUnwind; return; } goto L_00340C00; }
L_003413A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340B80u | kUnwind; return; } goto L_00340B80; }
L_003413B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340B80u | kUnwind; return; } goto L_00340B80; }
L_003413C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340B00u | kUnwind; return; } goto L_00340B00; }
L_003413D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340B00u | kUnwind; return; } goto L_00340B00; }
L_003413E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340A80u | kUnwind; return; } goto L_00340A80; }
L_003413F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340A80u | kUnwind; return; } goto L_00340A80; }
L_00341400:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340A00u | kUnwind; return; } goto L_00340A00; }
L_00341410:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340A00u | kUnwind; return; } goto L_00340A00; }
L_00341420:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340980u | kUnwind; return; } goto L_00340980; }
L_00341430:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340980u | kUnwind; return; } goto L_00340980; }
L_00341440:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA60u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 278u, depth); }
L_00341450:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EA10u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 275u, depth); }
L_00341460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340900u | kUnwind; return; } goto L_00340900; }
L_00341470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EB50u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 286u, depth); }
L_00341480:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340900u | kUnwind; return; } goto L_00340900; }
L_00341490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  [[clang::musttail]] return unit_009A(c, 411u, depth); }
L_003414A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  [[clang::musttail]] return unit_009A(c, 409u, depth); }
L_003414B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  [[clang::musttail]] return unit_009A(c, 405u, depth); }
L_003414C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  [[clang::musttail]] return unit_009A(c, 400u, depth); }
L_003414D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340880u | kUnwind; return; } goto L_00340880; }
L_003414E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  [[clang::musttail]] return unit_009A(c, 420u, depth); }
L_003414F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00340880u | kUnwind; return; } goto L_00340880; }
L_00341500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341514u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00341514u) [[unlikely]] return; }
L_00341514:
    c.r[1].d[0] = 0ull | 35856ull;
    set32(c.r[5], 0u + 4128u);
    set32(c.r[17], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00341528u) [[unlikely]] return; }
L_00341528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341530u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00341530u) [[unlikely]] return; }
L_00341530:
    c.r[1].d[0] = 0ull | 39984ull;
    set32(c.r[5], 0u + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341540u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00341540u) [[unlikely]] return; }
L_00341540:
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 4107u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], 0u + 118u);
    st8((c.r[17].w[0] + 4105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034155Cu); st32((c.r[17].w[0] + 4116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0034155Cu) [[unlikely]] return; }
L_0034155C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] - 25580u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 34u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341598u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00341598u) [[unlikely]] return; }
L_00341598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 27232u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003415D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00341618; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341600u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00341600u) [[unlikely]] return; }
L_00341600:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0034161C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341618u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00341618u) [[unlikely]] return; }
L_00341618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0034161C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00341640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00341650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341674; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
L_00341674:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00341728; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034168Cu); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0034168Cu) [[unlikely]] return; }
L_0034168C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003416BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003416A8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003416A8u) [[unlikely]] return; }
L_003416A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25568u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003416E8; } }
L_003416BC:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003416E0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003416E0u) [[unlikely]] return; }
L_003416E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00341A70; } }
L_003416E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003416F0u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x003416F0u) [[unlikely]] return; }
L_003416F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003416FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 392u, depth + 1u); else { c.pc = 0x003972E0u; return; } if (c.pc != 0x003416FCu) [[unlikely]] return; }
L_003416FC:
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034171Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0034171Cu) [[unlikely]] return; }
L_0034171C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00341728:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003417DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341748u) [[unlikely]] return; }
L_00341748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034175Cu); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0034175Cu) [[unlikely]] return; }
L_0034175C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00341790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341770u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x00341770u) [[unlikely]] return; }
L_00341770:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034177Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 392u, depth + 1u); else { c.pc = 0x003972E0u; return; } if (c.pc != 0x0034177Cu) [[unlikely]] return; }
L_0034177C:
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
L_00341790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034179Cu); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0034179Cu) [[unlikely]] return; }
L_0034179C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003417D0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x003417D0u) [[unlikely]] return; }
L_003417D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_003417DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0034188C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003417FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003417FCu) [[unlikely]] return; }
L_003417FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341810u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00341810u) [[unlikely]] return; }
L_00341810:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00341860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341824u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x00341824u) [[unlikely]] return; }
L_00341824:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341830u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 392u, depth + 1u); else { c.pc = 0x003972E0u; return; } if (c.pc != 0x00341830u) [[unlikely]] return; }
L_00341830:
    set32(c.r[2], 0u + 10u);
    set32(c.r[6], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341858u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00341858u) [[unlikely]] return; }
L_00341858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A6C; } }
L_00341860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034186Cu); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0034186Cu) [[unlikely]] return; }
L_0034186C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0034188C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0034193C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003418ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003418ACu) [[unlikely]] return; }
L_003418AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003418C0u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003418C0u) [[unlikely]] return; }
L_003418C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003418F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003418D4u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x003418D4u) [[unlikely]] return; }
L_003418D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003418E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 403u, depth + 1u); else { c.pc = 0x00397430u; return; } if (c.pc != 0x003418E0u) [[unlikely]] return; }
L_003418E0:
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
L_003418F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341900u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00341900u) [[unlikely]] return; }
L_00341900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341930u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00341930u) [[unlikely]] return; }
L_00341930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0034193C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_003419D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034195Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034195Cu) [[unlikely]] return; }
L_0034195C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341970u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00341970u) [[unlikely]] return; }
L_00341970:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003419A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341984u);  if (depth < kMaxDepth) unit_00A5(c, 382u, depth + 1u); else { c.pc = 0x00397200u; return; } if (c.pc != 0x00341984u) [[unlikely]] return; }
L_00341984:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 403u, depth + 1u); else { c.pc = 0x00397430u; return; } if (c.pc != 0x00341990u) [[unlikely]] return; }
L_00341990:
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
L_003419A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419B0u); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x003419B0u) [[unlikely]] return; }
L_003419B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_003419D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_00341A24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419E0u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x003419E0u) [[unlikely]] return; }
L_003419E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419E8u); set32(c.r[4], 0u + 1696u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003419E8u) [[unlikely]] return; }
L_003419E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003419FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003419FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 363u, depth + 1u); else { c.pc = 0x00346D20u; return; } if (c.pc != 0x003419FCu) [[unlikely]] return; }
L_003419FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341A18u) [[unlikely]] return; }
L_00341A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
L_00341A24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00341A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A34u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00341A34u) [[unlikely]] return; }
L_00341A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A3Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341A3Cu) [[unlikely]] return; }
L_00341A3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 136u, depth + 1u); else { c.pc = 0x0025CED0u; return; } if (c.pc != 0x00341A50u) [[unlikely]] return; }
L_00341A50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00341A6C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341A6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341A6Cu) [[unlikely]] return; }
L_00341A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00341A70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00341A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 1264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[2].w[0]));  c.pc = t; return; }
L_00341AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341AB0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341AB0u) [[unlikely]] return; }
L_00341AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341AB8u); set32(c.r[4], 0u + 304u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341AB8u) [[unlikely]] return; }
L_00341AB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00341ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341ACCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 217u, depth + 1u); else { c.pc = 0x00341AE0u; return; } if (c.pc != 0x00341ACCu) [[unlikely]] return; }
L_00341ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00341AE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B08u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00341B08u) [[unlikely]] return; }
L_00341B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 27408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B1Cu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00341B1Cu) [[unlikely]] return; }
L_00341B1C:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 24u), c.r[17].w[0]);  if (t) { goto L_00341BB8; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341B44u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00341B44u) [[unlikely]] return; }
L_00341B44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43600000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 96u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 212u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BA0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341BA0u) [[unlikely]] return; }
L_00341BA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BB0u); set32(c.r[4], c.r[16].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341BB0u) [[unlikely]] return; }
L_00341BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00341C04; } }
L_00341BB8:
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BD0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341BD0u) [[unlikely]] return; }
L_00341BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BD8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341BD8u) [[unlikely]] return; }
L_00341BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00341BEC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BECu); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0069(c, 35u, depth + 1u); else { c.pc = 0x002A44A0u; return; } if (c.pc != 0x00341BECu) [[unlikely]] return; }
L_00341BEC:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341BF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x00341BF8u) [[unlikely]] return; }
L_00341BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341C00u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341C00u) [[unlikely]] return; }
L_00341C00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00341C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00341C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00341CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27408u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341C6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341C6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341C6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341C6Cu) [[unlikely]] return; }
L_00341C6C:
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341C94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341C94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341C94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341C94u) [[unlikely]] return; }
L_00341C94:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_00341CB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CB4u); st32((c.r[17].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00341CB4u) [[unlikely]] return; }
L_00341CB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00341CC0u) [[unlikely]] return; }
L_00341CC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00341CDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00341CD8u) [[unlikely]] return; }
L_00341CD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00341CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00341CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00341E8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341DB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341D28u) [[unlikely]] return; }
L_00341D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341F68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341D54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341D54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341D54u) [[unlikely]] return; }
L_00341D54:
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D6Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341D6Cu) [[unlikely]] return; }
L_00341D6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 1568u);  if (t) { goto L_00341D8C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341D88u) [[unlikely]] return; }
L_00341D88:
    set32(c.r[4], 0u + 1568u);
    c.budget -= 1;
L_00341D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341D94u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341D94u) [[unlikely]] return; }
L_00341D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341DA8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341DA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 262u, depth + 1u); else { c.pc = 0x00341F80u; return; } if (c.pc != 0x00341DA8u) [[unlikely]] return; }
L_00341DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341DB0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341DB0u) [[unlikely]] return; }
L_00341DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00341F6C; } }
L_00341DB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341DECu); set32(c.r[4], c.r[16].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341DECu) [[unlikely]] return; }
L_00341DEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E04u);  if (depth < kMaxDepth) unit_00A1(c, 369u, depth + 1u); else { c.pc = 0x003873B0u; return; } if (c.pc != 0x00341E04u) [[unlikely]] return; }
L_00341E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E0Cu);  if (depth < kMaxDepth) unit_00A1(c, 392u, depth + 1u); else { c.pc = 0x00387580u; return; } if (c.pc != 0x00341E0Cu) [[unlikely]] return; }
L_00341E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E14u);  if (depth < kMaxDepth) unit_0090(c, 471u, depth + 1u); else { c.pc = 0x00343380u; return; } if (c.pc != 0x00341E14u) [[unlikely]] return; }
L_00341E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E1Cu);  if (depth < kMaxDepth) unit_0097(c, 161u, depth + 1u); else { c.pc = 0x0035DD10u; return; } if (c.pc != 0x00341E1Cu) [[unlikely]] return; }
L_00341E1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E30u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341E30u) [[unlikely]] return; }
L_00341E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00341E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00341E5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00341E48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], 0u + 3u);  if (t) { goto L_00341E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_00341E5C; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_00341E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E64u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341E64u) [[unlikely]] return; }
L_00341E64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341E78; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 301u, depth + 1u); else { c.pc = 0x00386CE0u; return; } if (c.pc != 0x00341E78u) [[unlikely]] return; }
L_00341E78:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E84u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00341E84u) [[unlikely]] return; }
L_00341E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341F68; } }
L_00341E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341E94u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x00341E94u) [[unlikely]] return; }
L_00341E94:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00341EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EB0u);  if (depth < kMaxDepth) unit_00A1(c, 414u, depth + 1u); else { c.pc = 0x003876D0u; return; } if (c.pc != 0x00341EB0u) [[unlikely]] return; }
L_00341EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341F68; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00341EBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00341F08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EDCu);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00341EDCu) [[unlikely]] return; }
L_00341EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EECu);  if (depth < kMaxDepth) unit_004F(c, 127u, depth + 1u); else { c.pc = 0x0023DDB0u; return; } if (c.pc != 0x00341EECu) [[unlikely]] return; }
L_00341EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341EFCu); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0068(c, 226u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x00341EFCu) [[unlikely]] return; }
L_00341EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00341F68; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00341F08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F18u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002D98E0u; return; } if (c.pc != 0x00341F18u) [[unlikely]] return; }
L_00341F18:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F24u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 180u, depth + 1u); else { c.pc = 0x002D9860u; return; } if (c.pc != 0x00341F24u) [[unlikely]] return; }
L_00341F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F2Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x00341F2Cu) [[unlikely]] return; }
L_00341F2C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00341F4C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00341F48u) [[unlikely]] return; }
L_00341F48:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00341F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341F54u) [[unlikely]] return; }
L_00341F54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00341F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341F68u);  if (depth < kMaxDepth) unit_0021(c, 346u, depth + 1u); else { c.pc = 0x00186E50u; return; } if (c.pc != 0x00341F68u) [[unlikely]] return; }
L_00341F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00341F6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00341F80:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FA4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00341FA4u) [[unlikely]] return; }
L_00341FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[18].w[0] + 432u);
    set32(c.r[2], c.r[2].w[0] + 27360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FB8u); st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00341FB8u) [[unlikely]] return; }
L_00341FB8:
    set32(c.r[4], c.r[18].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00341FC4u) [[unlikely]] return; }
L_00341FC4:
    set32(c.r[4], c.r[18].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FD0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0090(c, 519u, depth + 1u); else { c.pc = 0x00343990u; return; } if (c.pc != 0x00341FD0u) [[unlikely]] return; }
L_00341FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FD8u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x00341FD8u) [[unlikely]] return; }
L_00341FD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FE8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x00341FE8u) [[unlikely]] return; }
L_00341FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FF0u);  if (depth < kMaxDepth) unit_00A1(c, 453u, depth + 1u); else { c.pc = 0x00387B50u; return; } if (c.pc != 0x00341FF0u) [[unlikely]] return; }
L_00341FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00341FF8u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00341FF8u) [[unlikely]] return; }
L_00341FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342008u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 351u, depth + 1u); else { c.pc = 0x00387190u; return; } if (c.pc != 0x00342008u) [[unlikely]] return; }
L_00342008:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342018u); st32((c.r[1].w[0] - 13136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342018u) [[unlikely]] return; }
L_00342018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342028u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 360u, depth + 1u); else { c.pc = 0x003872A0u; return; } if (c.pc != 0x00342028u) [[unlikely]] return; }
L_00342028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342034u); st32((c.r[1].w[0] - 13128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 348u, depth + 1u); else { c.pc = 0x00377730u; return; } if (c.pc != 0x00342034u) [[unlikely]] return; }
L_00342034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034203Cu);  if (depth < kMaxDepth) unit_00A1(c, 494u, depth + 1u); else { c.pc = 0x00387F50u; return; } if (c.pc != 0x0034203Cu) [[unlikely]] return; }
L_0034203C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[1].w[0] - 760u)));  if (t) { goto L_00342058; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 20u);  if (t) { goto L_00342208; } }
L_00342058:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] - 1552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034206Cu); set32(c.r[6], 0u + 404u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0034206Cu) [[unlikely]] return; }
L_0034206C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 420u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003420B4; } }
    goto L_00342078;
L_00342074:
    c.budget -= 1;
L_00342078:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003420B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342090u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00342090u) [[unlikely]] return; }
L_00342090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[1].d[0] = c.r[1].d[0] | 12100ull;
    set32(c.r[5], c.r[5].w[0] - 1136u);
    set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420ACu); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003420ACu) [[unlikely]] return; }
L_003420AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003420D0; } }
L_003420B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420BCu); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003420BCu) [[unlikely]] return; }
L_003420BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420D0u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003420D0u) [[unlikely]] return; }
L_003420D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003420E4u); set32(c.r[6], c.r[18].w[0] + 40u);  if (depth < kMaxDepth) unit_0033(c, 82u, depth + 1u); else { c.pc = 0x001CD1D0u; return; } if (c.pc != 0x003420E4u) [[unlikely]] return; }
L_003420E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_003420F8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_003420F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342100u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00342100u) [[unlikely]] return; }
L_00342100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00342114; } }
L_00342110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00342114:
    set32(c.r[4], c.r[2].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342124u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00342124u) [[unlikely]] return; }
L_00342124:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 420u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342130u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00342130u) [[unlikely]] return; }
L_00342130:
    st32((c.r[18].w[0] + 1552u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00342198; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], 0u + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342150u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342150u) [[unlikely]] return; }
L_00342150:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00342190; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034216Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 489u, depth + 1u); else { c.pc = 0x003435A0u; return; } if (c.pc != 0x0034216Cu) [[unlikely]] return; }
L_0034216C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342178u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00343980u; return; } if (c.pc != 0x00342178u) [[unlikely]] return; }
L_00342178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034218Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 245u, depth + 1u); else { c.pc = 0x00352640u; return; } if (c.pc != 0x0034218Cu) [[unlikely]] return; }
L_0034218C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[17].w[0]);  if (t) { goto L_003421E8; } }
L_00342198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421A0u); set32(c.r[16], 0u + 9200u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003421A0u) [[unlikely]] return; }
L_003421A0:
    st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x003421B0u) [[unlikely]] return; }
L_003421B0:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421C0u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003421C0u) [[unlikely]] return; }
L_003421C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003421D8; } }
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 34u, depth + 1u); else { c.pc = 0x003542A0u; return; } if (c.pc != 0x003421D8u) [[unlikely]] return; }
L_003421D8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003421E8u); set32(c.r[4], ld32((c.r[1].w[0] - 736u)));  if (depth < kMaxDepth) unit_0097(c, 170u, depth + 1u); else { c.pc = 0x0035DDD0u; return; } if (c.pc != 0x003421E8u) [[unlikely]] return; }
L_003421E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 9392u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342200u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00342200u) [[unlikely]] return; }
L_00342200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00342270; } }
L_00342208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342210u); set32(c.r[5], 0u + 404u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00342210u) [[unlikely]] return; }
L_00342210:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 412u), c.r[3].w[0]);
    set32(c.r[4], 0u + 608u);
    st16((c.r[18].w[0] + 416u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034222Cu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0034222Cu) [[unlikely]] return; }
L_0034222C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342240u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342240u) [[unlikely]] return; }
L_00342240:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034224Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x0034224Cu) [[unlikely]] return; }
L_0034224C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342260u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 51u, depth + 1u); else { c.pc = 0x003445F0u; return; } if (c.pc != 0x00342260u) [[unlikely]] return; }
L_00342260:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342264:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00342270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_00342290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003423BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27360u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003422DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003422DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003422DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003422DCu) [[unlikely]] return; }
L_003422DC:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13136u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00342308; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00342308; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00342308u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00342308u) [[unlikely]] return; }
L_00342308:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13136u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 13128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00342338; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00342338; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00342338u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00342338u) [[unlikely]] return; }
L_00342338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342344u); st32((c.r[1].w[0] - 13128u), 0u);  if (depth < kMaxDepth) unit_0090(c, 476u, depth + 1u); else { c.pc = 0x003433E0u; return; } if (c.pc != 0x00342344u) [[unlikely]] return; }
L_00342344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034234Cu);  if (depth < kMaxDepth) unit_0090(c, 444u, depth + 1u); else { c.pc = 0x003430F0u; return; } if (c.pc != 0x0034234Cu) [[unlikely]] return; }
L_0034234C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342354u);  if (depth < kMaxDepth) unit_0051(c, 182u, depth + 1u); else { c.pc = 0x00245770u; return; } if (c.pc != 0x00342354u) [[unlikely]] return; }
L_00342354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034235Cu);  if (depth < kMaxDepth) unit_009D(c, 352u, depth + 1u); else { c.pc = 0x00377790u; return; } if (c.pc != 0x0034235Cu) [[unlikely]] return; }
L_0034235C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342364u);  if (depth < kMaxDepth) unit_00A1(c, 499u, depth + 1u); else { c.pc = 0x00387FB0u; return; } if (c.pc != 0x00342364u) [[unlikely]] return; }
L_00342364:
    set32(c.r[4], c.r[17].w[0] + 736u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342370u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0090(c, 530u, depth + 1u); else { c.pc = 0x00343B10u; return; } if (c.pc != 0x00342370u) [[unlikely]] return; }
L_00342370:
    set32(c.r[4], c.r[17].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034237Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0034237Cu) [[unlikely]] return; }
L_0034237C:
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00342398; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342398u); st32((c.r[17].w[0] + 608u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00342398u) [[unlikely]] return; }
L_00342398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003423A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x003423A4u) [[unlikely]] return; }
L_003423A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003423C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003423BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003423BCu) [[unlikely]] return; }
L_003423BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003423C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003423E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003423F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034243C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00342424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00342424u) [[unlikely]] return; }
L_00342424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 330u, depth + 1u); else { c.pc = 0x003425A0u; return; } if (c.pc != 0x00342434u) [[unlikely]] return; }
L_00342434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00342588; } }
L_0034243C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x00342448u) [[unlikely]] return; }
L_00342448:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342454u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x00342454u) [[unlikely]] return; }
L_00342454:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342460u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x00342460u) [[unlikely]] return; }
L_00342460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[18], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[17], ld32((c.r[1].w[0] + 1424u)));
    c.f[1] = c.r[18].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[17].w[0];
    st32((c.r[16].w[0] + 592u), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003424A8u); st32((c.r[16].w[0] + 596u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003424A8u) [[unlikely]] return; }
L_003424A8:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], c.r[16].w[0] + 432u);
    st32((c.r[16].w[0] + 480u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0] + 484u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 488u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 700u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034250Cu); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034250Cu) [[unlikely]] return; }
L_0034250C:
    set32(c.r[25], ld32((c.r[16].w[0] + 608u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034251Cu); set32(c.r[4], c.r[16].w[0] + 432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034251Cu) [[unlikely]] return; }
L_0034251C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 720u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342584; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034253Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0034253Cu) [[unlikely]] return; }
L_0034253C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 304u);  if (t) { goto L_0034255C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00342558u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00342558u) [[unlikely]] return; }
L_00342558:
    set32(c.r[4], 0u + 304u);
    c.budget -= 1;
L_0034255C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342564u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342564u) [[unlikely]] return; }
L_00342564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034257C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034257Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 217u, depth + 1u); else { c.pc = 0x00341AE0u; return; } if (c.pc != 0x0034257Cu) [[unlikely]] return; }
L_0034257C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342584u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00342584u) [[unlikely]] return; }
L_00342584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00342588:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003425A0:
    set32(c.r[29], c.r[29].w[0] - 688u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003425C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x003425C0u) [[unlikely]] return; }
L_003425C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003425D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003425D4u) [[unlikely]] return; }
L_003425D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003425E8u); c.r[18].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003425E8u) [[unlikely]] return; }
L_003425E8:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00342680; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 652u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342758; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 656u)));
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342618u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 423u, depth + 1u); else { c.pc = 0x00342E30u; return; } if (c.pc != 0x00342618u) [[unlikely]] return; }
L_00342618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034262Cu); st32((c.r[29].w[0] + 684u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0034262Cu) [[unlikely]] return; }
L_0034262C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00342648; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00342648u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00342648u) [[unlikely]] return; }
L_00342648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342650u);  if (depth < kMaxDepth) unit_00A1(c, 435u, depth + 1u); else { c.pc = 0x00387920u; return; } if (c.pc != 0x00342650u) [[unlikely]] return; }
L_00342650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342658u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342658u) [[unlikely]] return; }
L_00342658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00342670; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342670u); set32(c.r[7], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0069(c, 366u, depth + 1u); else { c.pc = 0x002A7A20u; return; } if (c.pc != 0x00342670u) [[unlikely]] return; }
L_00342670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342678u); set32(c.r[4], ld32((c.r[29].w[0] + 684u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00342678u) [[unlikely]] return; }
L_00342678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00342834; } }
L_00342680:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00342758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342694u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_009B(c, 392u, depth + 1u); else { c.pc = 0x0036F290u; return; } if (c.pc != 0x00342694u) [[unlikely]] return; }
L_00342694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342758; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1113u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00342758; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1108u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003426BCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0090(c, 423u, depth + 1u); else { c.pc = 0x00342E30u; return; } if (c.pc != 0x003426BCu) [[unlikely]] return; }
L_003426BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003426C4u); c.r[17].d[0] = ld16((c.r[29].w[0] + 116u));  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x003426C4u) [[unlikely]] return; }
L_003426C4:
    st16((c.r[2].w[0] + 266u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003426DCu); st32((c.r[29].w[0] + 680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003426DCu) [[unlikely]] return; }
L_003426DC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003426F8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003426F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003426F8u) [[unlikely]] return; }
L_003426F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342700u);  if (depth < kMaxDepth) unit_00A1(c, 435u, depth + 1u); else { c.pc = 0x00387920u; return; } if (c.pc != 0x00342700u) [[unlikely]] return; }
L_00342700:
    set32(c.r[5], ld32((c.r[16].w[0] + 1108u)));
    c.r[2].d[0] = c.r[5].sd[0] < 7220ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00342720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342718u);  if (depth < kMaxDepth) unit_00A7(c, 54u, depth + 1u); else { c.pc = 0x0039D180u; return; } if (c.pc != 0x00342718u) [[unlikely]] return; }
L_00342718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0034273C; } }
L_00342720:
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034272Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 102u, depth + 1u); else { c.pc = 0x0039DBA0u; return; } if (c.pc != 0x0034272Cu) [[unlikely]] return; }
L_0034272C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 54u, depth + 1u); else { c.pc = 0x0039D180u; return; } if (c.pc != 0x00342738u) [[unlikely]] return; }
L_00342738:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0034273C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342748u); st8((c.r[1].w[0] + 25657u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 415u, depth + 1u); else { c.pc = 0x0039BD80u; return; } if (c.pc != 0x00342748u) [[unlikely]] return; }
L_00342748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342750u); set32(c.r[4], ld32((c.r[29].w[0] + 680u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00342750u) [[unlikely]] return; }
L_00342750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_00342758:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034277C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034277C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034277Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034277Cu) [[unlikely]] return; }
L_0034277C:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00342830; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 9728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003427A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427B8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 365u, depth + 1u); else { c.pc = 0x00342850u; return; } if (c.pc != 0x003427B8u) [[unlikely]] return; }
L_003427B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_003427C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427D0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 377u, depth + 1u); else { c.pc = 0x00342990u; return; } if (c.pc != 0x003427D0u) [[unlikely]] return; }
L_003427D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_003427D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003427E8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 401u, depth + 1u); else { c.pc = 0x00342BC0u; return; } if (c.pc != 0x003427E8u) [[unlikely]] return; }
L_003427E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_003427F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342800u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 408u, depth + 1u); else { c.pc = 0x00342C80u; return; } if (c.pc != 0x00342800u) [[unlikely]] return; }
L_00342800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_00342808:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342818u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 413u, depth + 1u); else { c.pc = 0x00342D10u; return; } if (c.pc != 0x00342818u) [[unlikely]] return; }
L_00342818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00342830; } }
L_00342820:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342830u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 418u, depth + 1u); else { c.pc = 0x00342DA0u; return; } if (c.pc != 0x00342830u) [[unlikely]] return; }
L_00342830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00342834:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 688u);  c.pc = t; return; }
L_00342850:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342948; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003428A8; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 1248u);
    set32(c.r[4], c.r[17].w[0] + 688u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428A0u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x003428A0u) [[unlikely]] return; }
L_003428A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00342970; } }
L_003428A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428B0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003428B0u) [[unlikely]] return; }
L_003428B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428C4u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003428C4u) [[unlikely]] return; }
L_003428C4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 420u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428D0u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x003428D0u) [[unlikely]] return; }
L_003428D0:
    st32((c.r[17].w[0] + 1552u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428ECu); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0051(c, 207u, depth + 1u); else { c.pc = 0x00245C40u; return; } if (c.pc != 0x003428ECu) [[unlikely]] return; }
L_003428EC:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003428FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003428FCu) [[unlikely]] return; }
L_003428FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342910u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342910u) [[unlikely]] return; }
L_00342910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034291Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x0034291Cu) [[unlikely]] return; }
L_0034291C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342930u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 55u, depth + 1u); else { c.pc = 0x00394740u; return; } if (c.pc != 0x00342930u) [[unlikely]] return; }
L_00342930:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342934:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342940u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00342940u) [[unlikely]] return; }
L_00342940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034296C; } }
L_00342948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 1216u);
    set32(c.r[4], c.r[17].w[0] + 688u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034296Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0034296Cu) [[unlikely]] return; }
L_0034296C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00342970:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00342990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342B58; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_00342A58; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 420u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003429CCu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003429CCu) [[unlikely]] return; }
L_003429CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003429DCu); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003429DCu) [[unlikely]] return; }
L_003429DC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 420u));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 228u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003429ECu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003429ECu) [[unlikely]] return; }
L_003429EC:
    st16((c.r[2].w[0] + 184u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 420u));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 230u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A00u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00342A00u) [[unlikely]] return; }
L_00342A00:
    st16((c.r[2].w[0] + 186u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], 0u + 608u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A14u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342A14u) [[unlikely]] return; }
L_00342A14:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342A28u) [[unlikely]] return; }
L_00342A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A34u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x00342A34u) [[unlikely]] return; }
L_00342A34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A48u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 51u, depth + 1u); else { c.pc = 0x003445F0u; return; } if (c.pc != 0x00342A48u) [[unlikely]] return; }
L_00342A48:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342A4C:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00342BA8; } }
L_00342A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A60u);  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x00342A60u) [[unlikely]] return; }
L_00342A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00342B24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_00342AD0; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342A88u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342A88u) [[unlikely]] return; }
L_00342A88:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00342AC8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342AA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 489u, depth + 1u); else { c.pc = 0x003435A0u; return; } if (c.pc != 0x00342AA4u) [[unlikely]] return; }
L_00342AA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342AB0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00343980u; return; } if (c.pc != 0x00342AB0u) [[unlikely]] return; }
L_00342AB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342AC4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 290u, depth + 1u); else { c.pc = 0x00396520u; return; } if (c.pc != 0x00342AC4u) [[unlikely]] return; }
L_00342AC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  if (t) { goto L_00342BA8; } }
L_00342AD0:
    set32(c.r[4], 0u + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342ADCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342ADCu) [[unlikely]] return; }
L_00342ADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00342B1C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 489u, depth + 1u); else { c.pc = 0x003435A0u; return; } if (c.pc != 0x00342AF8u) [[unlikely]] return; }
L_00342AF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B04u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00343980u; return; } if (c.pc != 0x00342B04u) [[unlikely]] return; }
L_00342B04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B18u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 245u, depth + 1u); else { c.pc = 0x00352640u; return; } if (c.pc != 0x00342B18u) [[unlikely]] return; }
L_00342B18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[18].w[0]);  if (t) { goto L_00342BA8; } }
L_00342B24:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B34u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342B34u) [[unlikely]] return; }
L_00342B34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 20u);  if (t) { goto L_00342B50; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 34u, depth + 1u); else { c.pc = 0x003542A0u; return; } if (c.pc != 0x00342B4Cu) [[unlikely]] return; }
L_00342B4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00342BA8; } }
L_00342B58:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B68u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342B68u) [[unlikely]] return; }
L_00342B68:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342B7Cu) [[unlikely]] return; }
L_00342B7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B88u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x00342B88u) [[unlikely]] return; }
L_00342B88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342B9Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 51u, depth + 1u); else { c.pc = 0x003445F0u; return; } if (c.pc != 0x00342B9Cu) [[unlikely]] return; }
L_00342B9C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342BA0:
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00342BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00342C18; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], 0u + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342BF4u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342BF4u) [[unlikely]] return; }
L_00342BF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 20u);  if (t) { goto L_00342C10; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0095(c, 34u, depth + 1u); else { c.pc = 0x003542A0u; return; } if (c.pc != 0x00342C0Cu) [[unlikely]] return; }
L_00342C0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00342C64; } }
L_00342C18:
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C28u); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342C28u) [[unlikely]] return; }
L_00342C28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C3Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342C3Cu) [[unlikely]] return; }
L_00342C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C48u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x00342C48u) [[unlikely]] return; }
L_00342C48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342C5Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 55u, depth + 1u); else { c.pc = 0x00394740u; return; } if (c.pc != 0x00342C5Cu) [[unlikely]] return; }
L_00342C5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342C60:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_00342C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CB0u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342CB0u) [[unlikely]] return; }
L_00342CB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342CC4u) [[unlikely]] return; }
L_00342CC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CD0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x00342CD0u) [[unlikely]] return; }
L_00342CD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342CE4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 55u, depth + 1u); else { c.pc = 0x00394740u; return; } if (c.pc != 0x00342CE4u) [[unlikely]] return; }
L_00342CE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342CE8:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D40u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342D40u) [[unlikely]] return; }
L_00342D40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00342D80; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 489u, depth + 1u); else { c.pc = 0x003435A0u; return; } if (c.pc != 0x00342D5Cu) [[unlikely]] return; }
L_00342D5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D68u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 518u, depth + 1u); else { c.pc = 0x00343980u; return; } if (c.pc != 0x00342D68u) [[unlikely]] return; }
L_00342D68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342D7Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 290u, depth + 1u); else { c.pc = 0x00396520u; return; } if (c.pc != 0x00342D7Cu) [[unlikely]] return; }
L_00342D7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342D80:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] - 760u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342DD0u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00342DD0u) [[unlikely]] return; }
L_00342DD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00342E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342DE4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 478u, depth + 1u); else { c.pc = 0x00343430u; return; } if (c.pc != 0x00342DE4u) [[unlikely]] return; }
L_00342DE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342DF0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 517u, depth + 1u); else { c.pc = 0x00343970u; return; } if (c.pc != 0x00342DF0u) [[unlikely]] return; }
L_00342DF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342E04u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 55u, depth + 1u); else { c.pc = 0x00394740u; return; } if (c.pc != 0x00342E04u) [[unlikely]] return; }
L_00342E04:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342E08:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00342E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] - 1552u);
    set32(c.r[5], c.r[19].w[0] + 20u);
    set32(c.r[6], 0u + 404u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342E68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00342E68u) [[unlikely]] return; }
L_00342E68:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 420u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00342E9C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00342E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342E8Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00342E8Cu) [[unlikely]] return; }
L_00342E8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 12100ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_00342EA8; } }
L_00342E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342EA4u); set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00342EA4u) [[unlikely]] return; }
L_00342EA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00342EA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342EBCu); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00342EBCu) [[unlikely]] return; }
L_00342EBC:
    st16((c.r[16].w[0] + 234u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 390u));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 350u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 391u));
    st8((c.r[16].w[0] + 351u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 387u));
    st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 25500u);
    c.budget -= 11;
L_00342EE8:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00342EE8u | kUnwind; return; } goto L_00342EE8; } }
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = ld8((c.r[19].w[0] + 420u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342F24u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x00342F24u) [[unlikely]] return; }
L_00342F24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00342F50; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 420u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 9200u);  if (t) { goto L_00342F4C; } }
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_00342F4C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00342F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342F58u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00342F58u) [[unlikely]] return; }
L_00342F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 42u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 25559u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00342F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342FA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00342FA4u) [[unlikely]] return; }
L_00342FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 27344u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 9688u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00342FD4u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00342FD4u) [[unlikely]] return; }
L_00342FD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00342FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00343074; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 36u);
    set32(c.r[3], c.r[3].w[0] + 27344u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00343050; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00343054; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00343050; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00343044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343044u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00343044u) [[unlikely]] return; }
L_00343044:
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 3;
L_00343050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00343054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034305Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0034305Cu) [[unlikely]] return; }
L_0034305C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00343078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00343074u) [[unlikely]] return; }
L_00343074:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00343078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 768u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003430E0; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003430B8u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003430B8u) [[unlikely]] return; }
L_003430B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003430C0u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003430C0u) [[unlikely]] return; }
L_003430C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003430D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003430D0u);  if (depth < kMaxDepth) unit_0090(c, 431u, depth + 1u); else { c.pc = 0x00342F90u; return; } if (c.pc != 0x003430D0u) [[unlikely]] return; }
L_003430D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003430E0u); st32((c.r[1].w[0] - 768u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003430E0u) [[unlikely]] return; }
L_003430E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003430F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 768u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00343120; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00343120; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343120u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343120u) [[unlikely]] return; }
L_00343120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 768u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00343140:
    set32(c.r[29], c.r[29].w[0] - 2272u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034315Cu); set32(c.r[4], c.r[29].w[0] + 2248u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0034315Cu) [[unlikely]] return; }
L_0034315C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343170u); st32((c.r[29].w[0] + 2268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00343170u) [[unlikely]] return; }
L_00343170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343178u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00343178u) [[unlikely]] return; }
L_00343178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0034318C; } }
    set32(c.r[5], c.r[29].w[0] + 2248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034318Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0034318Cu) [[unlikely]] return; }
L_0034318C:
    st32((c.r[29].w[0] + 2264u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034319Cu); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x0034319Cu) [[unlikely]] return; }
L_0034319C:
    set32(c.r[3], 0u + 16193u);
    set32(c.r[2], 0u + 16320u);
    st16((c.r[29].w[0] + 2260u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st16((c.r[29].w[0] + 2262u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2260u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431BCu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x003431BCu) [[unlikely]] return; }
L_003431BC:
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431C8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x003431C8u) [[unlikely]] return; }
L_003431C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431D0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x003431D0u) [[unlikely]] return; }
L_003431D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431D8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x003431D8u) [[unlikely]] return; }
L_003431D8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x003431E4u) [[unlikely]] return; }
L_003431E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 2264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003431F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003431F8u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x003431F8u) [[unlikely]] return; }
L_003431F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 2268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343204u); st32((c.r[29].w[0] + 2264u), 0u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00343204u) [[unlikely]] return; }
L_00343204:
    set32(c.r[4], c.r[29].w[0] + 2248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343210u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00343210u) [[unlikely]] return; }
L_00343210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2272u);  c.pc = t; return; }
L_00343220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0034325C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343240u); set32(c.r[4], 0u + 136u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00343240u) [[unlikely]] return; }
L_00343240:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00343258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343254u);  if (depth < kMaxDepth) unit_0051(c, 59u, depth + 1u); else { c.pc = 0x00244660u; return; } if (c.pc != 0x00343254u) [[unlikely]] return; }
L_00343254:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00343258:
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 1;
L_0034325C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003432AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343290u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00343290u) [[unlikely]] return; }
L_00343290:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_003432A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003432A4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003432A4u) [[unlikely]] return; }
L_003432A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003432A8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_003432AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003432C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27328u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_003432F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034335C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27328u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034332C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034332Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0034332Cu) [[unlikely]] return; }
L_0034332C:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00343348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343344u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00343344u) [[unlikely]] return; }
L_00343344:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00343348:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0034335C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034335Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0034335Cu) [[unlikely]] return; }
L_0034335C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003433D0; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433A8u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003433A8u) [[unlikely]] return; }
L_003433A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433B0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003433B0u) [[unlikely]] return; }
L_003433B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003433C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433C0u);  if (depth < kMaxDepth) unit_0090(c, 466u, depth + 1u); else { c.pc = 0x003432C0u; return; } if (c.pc != 0x003433C0u) [[unlikely]] return; }
L_003433C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003433D0u); st32((c.r[1].w[0] - 760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003433D0u) [[unlikely]] return; }
L_003433D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003433E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 760u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00343410; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00343410; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343410u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343410u) [[unlikely]] return; }
L_00343410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 760u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00343430:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00343458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343458u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00343458u) [[unlikely]] return; }
L_00343458:
    st32((c.r[17].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343470u); st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00343470u) [[unlikely]] return; }
L_00343470:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00343558; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0034357C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0034357C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003434F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_003434AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_00343580; } }
L_003434AC:
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003434BCu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x003434BCu) [[unlikely]] return; }
L_003434BC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 1184u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003434ECu); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x003434ECu) [[unlikely]] return; }
L_003434EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034357C; } }
L_003434F4:
    set32(c.r[2], 0u + 12u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343508u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00343508u) [[unlikely]] return; }
L_00343508:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1152u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
L_0034351C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034351Cu | kUnwind; return; } goto L_0034351C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343550u); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00343550u) [[unlikely]] return; }
L_00343550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034357C; } }
L_00343558:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343568u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00343568u) [[unlikely]] return; }
L_00343568:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034357Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0034357Cu) [[unlikely]] return; }
L_0034357C:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_00343580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343588u); set32(c.r[16], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00343588u) [[unlikely]] return; }
L_00343588:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003435A0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003435D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003435D0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x003435D0u) [[unlikely]] return; }
L_003435D0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003435E8u); st32((c.r[29].w[0] + 492u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003435E8u) [[unlikely]] return; }
L_003435E8:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0034385C; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 9664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00340000u < 16384u) { entry = entries_0090[(t - 0x00340000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034360C:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00343648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 464u);
    set32(c.r[3], c.r[3].w[0] - 1056u);
    set32(c.r[2], 0u + 3u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[16].w[0]) & ~15u, c.r[4]);
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_00343648:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[5].w[0] - 1024u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
L_00343654:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343654u | kUnwind; return; } goto L_00343654; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[16], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_00343680:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_003436BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 368u);
    set32(c.r[3], c.r[3].w[0] - 960u);
    set32(c.r[2], 0u + 4u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_003436BC:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 928u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
L_003436C8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003436C8u | kUnwind; return; } goto L_003436C8; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[2], 0u + 5u);
    set32(c.r[16], c.r[29].w[0] + 320u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_003436FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] - 880u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_0034371C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[3].w[0] - 864u);
    set32(c.r[2], 0u + 3u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[16].w[0]) & ~15u, c.r[4]);
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_00343744:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[3].w[0] - 832u);
    set32(c.r[2], 0u + 3u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[16].w[0]) & ~15u, c.r[4]);
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_0034376C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] - 800u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_0034378C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 784u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
L_0034379C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034379Cu | kUnwind; return; } goto L_0034379C; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[2], 0u + 5u);
    set32(c.r[16], c.r[29].w[0] + 176u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_003437D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 736u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[16].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_003437F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] - 720u);
    set32(c.r[2], 0u + 4u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_00343818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 688u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00343828:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00343828u | kUnwind; return; } goto L_00343828; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[2], 0u + 7u);
    set32(c.r[16], c.r[29].w[0] + 64u);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0034386C; } }
L_0034385C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343864u); set32(c.r[4], ld32((c.r[29].w[0] + 492u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00343864u) [[unlikely]] return; }
L_00343864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003438A0; } }
L_0034386C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343878u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00343878u) [[unlikely]] return; }
L_00343878:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343890u); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00343890u) [[unlikely]] return; }
L_00343890:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034389Cu); set32(c.r[4], ld32((c.r[29].w[0] + 492u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0034389Cu) [[unlikely]] return; }
L_0034389C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003438A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003438C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003438E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 390u, depth + 1u); else { c.pc = 0x0036F200u; return; } if (c.pc != 0x003438E0u) [[unlikely]] return; }
L_003438E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00343900; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003438F8u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_009B(c, 396u, depth + 1u); else { c.pc = 0x0036F8D0u; return; } if (c.pc != 0x003438F8u) [[unlikely]] return; }
L_003438F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00343914; } }
L_00343900:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343910u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_009B(c, 396u, depth + 1u); else { c.pc = 0x0036F8D0u; return; } if (c.pc != 0x00343910u) [[unlikely]] return; }
L_00343910:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00343914:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00343928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343928u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00343928u) [[unlikely]] return; }
L_00343928:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343938u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00343938u) [[unlikely]] return; }
L_00343938:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034394Cu); set32(c.r[5], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0034394Cu) [[unlikely]] return; }
L_0034394C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00343980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_00343990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003439A8u) [[unlikely]] return; }
L_003439A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 27312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439BCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003439BCu) [[unlikely]] return; }
L_003439BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439D0u); set32(c.r[4], 0u + 730u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003439D0u) [[unlikely]] return; }
L_003439D0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439E0u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_0018(c, 107u, depth + 1u); else { c.pc = 0x00163050u; return; } if (c.pc != 0x003439E0u) [[unlikely]] return; }
L_003439E0:
    set32(c.r[4], c.r[16].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003439ECu) [[unlikely]] return; }
L_003439EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003439F4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003439F4u) [[unlikely]] return; }
L_003439F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BF0000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 320u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 292u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 296u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343A50u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343A50u) [[unlikely]] return; }
L_00343A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343A58u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00343A58u) [[unlikely]] return; }
L_00343A58:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 816u), 0u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343A78u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00343A78u) [[unlikely]] return; }
L_00343A78:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 17u);
    c.r[6].d[0] = ld64((c.r[6].w[0] + 48u));
    set32(c.r[2], c.r[29].w[0] + 56u);
    st64((c.r[29].w[0] + 56u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 800u), c.r[6].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[5].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 51u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 704u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343AE4u); st32((c.r[16].w[0] + 708u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00343AE4u) [[unlikely]] return; }
L_00343AE4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 592u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00343B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00343BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    set32(c.r[2], c.r[2].w[0] + 27312u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00343B54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B54u); st32((c.r[17].w[0] + 720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00343B54u) [[unlikely]] return; }
L_00343B54:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00343B70; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B70u); st32((c.r[17].w[0] + 448u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00343B70u) [[unlikely]] return; }
L_00343B70:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00343B8C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B8Cu); st32((c.r[17].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00343B8Cu) [[unlikely]] return; }
L_00343B8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00343B98u) [[unlikely]] return; }
L_00343B98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00343BB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00343BB0u) [[unlikely]] return; }
L_00343BB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00343BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 816u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00343E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], 0u + 265u);
    set32(c.r[25], ld32((c.r[17].w[0] + 192u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 9600u));
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = 0u;
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C24u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343C24u) [[unlikely]] return; }
L_00343C24:
    set32(c.r[25], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C34u); set32(c.r[4], c.r[17].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343C34u) [[unlikely]] return; }
L_00343C34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], 0u + 277u);
    set32(c.r[25], ld32((c.r[17].w[0] + 192u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 9600u));
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C70u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343C70u) [[unlikely]] return; }
L_00343C70:
    set32(c.r[25], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343C80u); set32(c.r[4], c.r[17].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343C80u) [[unlikely]] return; }
L_00343C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[2], 0u + 265u);
    st32((c.r[17].w[0] + 560u), c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 564u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 568u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = ld32((c.r[1].w[0] - 9600u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343CC0u); set32(c.r[4], c.r[17].w[0] + 544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343CC0u) [[unlikely]] return; }
L_00343CC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.f[14] = ld32((c.r[1].w[0] - 9608u));
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343CD8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00343CD8u) [[unlikely]] return; }
L_00343CD8:
    set32(c.r[25], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343CE8u); set32(c.r[4], c.r[17].w[0] + 544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343CE8u) [[unlikely]] return; }
L_00343CE8:
    set32(c.r[25], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[3], 0u + 491u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.f[14] = ld32((c.r[1].w[0] - 9600u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D14u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343D14u) [[unlikely]] return; }
L_00343D14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.f[14] = ld32((c.r[1].w[0] - 9616u));
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D2Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00343D2Cu) [[unlikely]] return; }
L_00343D2C:
    set32(c.r[25], ld32((c.r[17].w[0] + 720u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D3Cu); set32(c.r[4], c.r[17].w[0] + 544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343D3Cu) [[unlikely]] return; }
L_00343D3C:
    set32(c.r[25], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D4Cu); set32(c.r[4], c.r[17].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343D4Cu) [[unlikely]] return; }
L_00343D4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343D60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00343D60u) [[unlikely]] return; }
L_00343D60:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43BF0000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[6], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[3].w[0];
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9624u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9624u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 816u)));
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] - 9600u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343DD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343DD4u) [[unlikely]] return; }
L_00343DD4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343DF4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343DF4u) [[unlikely]] return; }
L_00343DF4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343E14u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343E14u) [[unlikely]] return; }
L_00343E14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343E30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343E58u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00343E58u) [[unlikely]] return; }
L_00343E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27280u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00343EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00343EF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343ED8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 12u));  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x00343ED8u) [[unlikely]] return; }
L_00343ED8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00343EF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00343EF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00343EF4u) [[unlikely]] return; }
L_00343EF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00343F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00343F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343F40u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00343F40u) [[unlikely]] return; }
L_00343F40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00343F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00343F58u) [[unlikely]] return; }
L_00343F58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00343F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00343F70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00343FAC; } }
    st8((c.r[6].w[0] + 432u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 398u));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00343FAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00343FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));  c.pc = t; return; }
L_00343FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00343FFCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00343FFCu) [[unlikely]] return; }
L_00343FFC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0091(c, 1u, depth);
}

}
