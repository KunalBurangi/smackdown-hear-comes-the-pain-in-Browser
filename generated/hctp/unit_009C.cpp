#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009C[4096] = {
    1, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0,
    49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0,
    97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0,
    129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290,
    0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304,
    0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353,
    0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367,
    0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0,
    0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494,
    0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0,
    0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00370000;
    case 2u: goto L_00370004;
    case 3u: goto L_00370010;
    case 4u: goto L_00370018;
    case 5u: goto L_0037001C;
    case 6u: goto L_00370030;
    case 7u: goto L_00370058;
    case 8u: goto L_0037007C;
    case 9u: goto L_00370084;
    case 10u: goto L_0037008C;
    case 11u: goto L_00370094;
    case 12u: goto L_0037009C;
    case 13u: goto L_003700A4;
    case 14u: goto L_003700AC;
    case 15u: goto L_003700B4;
    case 16u: goto L_003700C4;
    case 17u: goto L_0037019C;
    case 18u: goto L_003701C8;
    case 19u: goto L_00370220;
    case 20u: goto L_00370284;
    case 21u: goto L_00370304;
    case 22u: goto L_0037036C;
    case 23u: goto L_00370398;
    case 24u: goto L_00370414;
    case 25u: goto L_00370420;
    case 26u: goto L_00370610;
    case 27u: goto L_00370630;
    case 28u: goto L_00370658;
    case 29u: goto L_00370660;
    case 30u: goto L_00370668;
    case 31u: goto L_00370670;
    case 32u: goto L_00370678;
    case 33u: goto L_00370680;
    case 34u: goto L_00370688;
    case 35u: goto L_00370690;
    case 36u: goto L_00370698;
    case 37u: goto L_003706A0;
    case 38u: goto L_003706A8;
    case 39u: goto L_003706B0;
    case 40u: goto L_003706B8;
    case 41u: goto L_003706C0;
    case 42u: goto L_003706C8;
    case 43u: goto L_003706D0;
    case 44u: goto L_003706D8;
    case 45u: goto L_003706E0;
    case 46u: goto L_003706E8;
    case 47u: goto L_003706F0;
    case 48u: goto L_003706F8;
    case 49u: goto L_00370700;
    case 50u: goto L_00370708;
    case 51u: goto L_00370710;
    case 52u: goto L_00370718;
    case 53u: goto L_00370720;
    case 54u: goto L_00370728;
    case 55u: goto L_00370730;
    case 56u: goto L_00370738;
    case 57u: goto L_00370740;
    case 58u: goto L_00370748;
    case 59u: goto L_00370750;
    case 60u: goto L_00370758;
    case 61u: goto L_00370760;
    case 62u: goto L_00370768;
    case 63u: goto L_00370770;
    case 64u: goto L_00370778;
    case 65u: goto L_00370780;
    case 66u: goto L_00370788;
    case 67u: goto L_00370790;
    case 68u: goto L_00370798;
    case 69u: goto L_003707A0;
    case 70u: goto L_003707A8;
    case 71u: goto L_003707B0;
    case 72u: goto L_003707B8;
    case 73u: goto L_003707C0;
    case 74u: goto L_003707C8;
    case 75u: goto L_003707D0;
    case 76u: goto L_003707D8;
    case 77u: goto L_003707E0;
    case 78u: goto L_003707E8;
    case 79u: goto L_003707F0;
    case 80u: goto L_003707F8;
    case 81u: goto L_00370800;
    case 82u: goto L_00370808;
    case 83u: goto L_00370810;
    case 84u: goto L_00370818;
    case 85u: goto L_00370820;
    case 86u: goto L_00370828;
    case 87u: goto L_00370830;
    case 88u: goto L_00370838;
    case 89u: goto L_00370840;
    case 90u: goto L_00370848;
    case 91u: goto L_00370850;
    case 92u: goto L_00370858;
    case 93u: goto L_00370860;
    case 94u: goto L_00370868;
    case 95u: goto L_00370870;
    case 96u: goto L_00370878;
    case 97u: goto L_00370880;
    case 98u: goto L_00370888;
    case 99u: goto L_00370890;
    case 100u: goto L_00370898;
    case 101u: goto L_003708A0;
    case 102u: goto L_003708A8;
    case 103u: goto L_003708B0;
    case 104u: goto L_003708B8;
    case 105u: goto L_003708C0;
    case 106u: goto L_003708C8;
    case 107u: goto L_003708D0;
    case 108u: goto L_003708D8;
    case 109u: goto L_003708E0;
    case 110u: goto L_003708E8;
    case 111u: goto L_003708F0;
    case 112u: goto L_003708F8;
    case 113u: goto L_00370900;
    case 114u: goto L_00370908;
    case 115u: goto L_00370910;
    case 116u: goto L_00370918;
    case 117u: goto L_00370920;
    case 118u: goto L_00370928;
    case 119u: goto L_00370930;
    case 120u: goto L_00370938;
    case 121u: goto L_00370940;
    case 122u: goto L_00370948;
    case 123u: goto L_00370950;
    case 124u: goto L_00370958;
    case 125u: goto L_00370960;
    case 126u: goto L_00370968;
    case 127u: goto L_00370970;
    case 128u: goto L_00370978;
    case 129u: goto L_00370980;
    case 130u: goto L_00370988;
    case 131u: goto L_00370990;
    case 132u: goto L_00370998;
    case 133u: goto L_003709A0;
    case 134u: goto L_003709A8;
    case 135u: goto L_003709B0;
    case 136u: goto L_003709B8;
    case 137u: goto L_003709C0;
    case 138u: goto L_003709C8;
    case 139u: goto L_003709D0;
    case 140u: goto L_003709D8;
    case 141u: goto L_003709E0;
    case 142u: goto L_003709E8;
    case 143u: goto L_003709F0;
    case 144u: goto L_003709F8;
    case 145u: goto L_00370A00;
    case 146u: goto L_00370A08;
    case 147u: goto L_00370A10;
    case 148u: goto L_00370A18;
    case 149u: goto L_00370A20;
    case 150u: goto L_00370A28;
    case 151u: goto L_00370A2C;
    case 152u: goto L_00370A40;
    case 153u: goto L_00370A60;
    case 154u: goto L_00370A9C;
    case 155u: goto L_00370AF0;
    case 156u: goto L_00370B30;
    case 157u: goto L_00370B40;
    case 158u: goto L_00370B80;
    case 159u: goto L_00370BA0;
    case 160u: goto L_00370BC0;
    case 161u: goto L_00370BE0;
    case 162u: goto L_00370C08;
    case 163u: goto L_00370C18;
    case 164u: goto L_00370C28;
    case 165u: goto L_00370C34;
    case 166u: goto L_00370C44;
    case 167u: goto L_00370C80;
    case 168u: goto L_00370CBC;
    case 169u: goto L_00370CCC;
    case 170u: goto L_00370CE0;
    case 171u: goto L_00370D00;
    case 172u: goto L_00370D10;
    case 173u: goto L_00370D28;
    case 174u: goto L_00370D40;
    case 175u: goto L_00370D70;
    case 176u: goto L_00370D90;
    case 177u: goto L_00370DA8;
    case 178u: goto L_00370DB4;
    case 179u: goto L_00370E0C;
    case 180u: goto L_00370E14;
    case 181u: goto L_00370E24;
    case 182u: goto L_00370E60;
    case 183u: goto L_00370EA8;
    case 184u: goto L_00370EC8;
    case 185u: goto L_00370EE0;
    case 186u: goto L_00370F00;
    case 187u: goto L_00370F38;
    case 188u: goto L_00370F90;
    case 189u: goto L_00370FF4;
    case 190u: goto L_00371054;
    case 191u: goto L_003710B0;
    case 192u: goto L_00371140;
    case 193u: goto L_00371154;
    case 194u: goto L_003711A0;
    case 195u: goto L_00371210;
    case 196u: goto L_00371224;
    case 197u: goto L_00371238;
    case 198u: goto L_00371274;
    case 199u: goto L_00371284;
    case 200u: goto L_003712A0;
    case 201u: goto L_00371430;
    case 202u: goto L_00371440;
    case 203u: goto L_00371450;
    case 204u: goto L_003714C0;
    case 205u: goto L_003714F0;
    case 206u: goto L_00371510;
    case 207u: goto L_00371520;
    case 208u: goto L_00371530;
    case 209u: goto L_00371540;
    case 210u: goto L_00371550;
    case 211u: goto L_00371560;
    case 212u: goto L_00371570;
    case 213u: goto L_00371580;
    case 214u: goto L_00371590;
    case 215u: goto L_003715B0;
    case 216u: goto L_003715E0;
    case 217u: goto L_003716D0;
    case 218u: goto L_00371704;
    case 219u: goto L_00371714;
    case 220u: goto L_00371724;
    case 221u: goto L_00371734;
    case 222u: goto L_00371780;
    case 223u: goto L_003717C8;
    case 224u: goto L_003717F4;
    case 225u: goto L_00371800;
    case 226u: goto L_00371840;
    case 227u: goto L_00371890;
    case 228u: goto L_003718A8;
    case 229u: goto L_003718C4;
    case 230u: goto L_003718D8;
    case 231u: goto L_003718E0;
    case 232u: goto L_00371908;
    case 233u: goto L_00371930;
    case 234u: goto L_00371938;
    case 235u: goto L_00371950;
    case 236u: goto L_003719A4;
    case 237u: goto L_003719B4;
    case 238u: goto L_003719C0;
    case 239u: goto L_003719CC;
    case 240u: goto L_003719E4;
    case 241u: goto L_00371A00;
    case 242u: goto L_00371A10;
    case 243u: goto L_00371A28;
    case 244u: goto L_00371A4C;
    case 245u: goto L_00371A6C;
    case 246u: goto L_00371AA4;
    case 247u: goto L_00371AB4;
    case 248u: goto L_00371ACC;
    case 249u: goto L_00371AF0;
    case 250u: goto L_00371B28;
    case 251u: goto L_00371B60;
    case 252u: goto L_00371B7C;
    case 253u: goto L_00371B90;
    case 254u: goto L_00371BAC;
    case 255u: goto L_00371BCC;
    case 256u: goto L_00371C20;
    case 257u: goto L_00371C2C;
    case 258u: goto L_00371C40;
    case 259u: goto L_00371C74;
    case 260u: goto L_00371C80;
    case 261u: goto L_00371CB4;
    case 262u: goto L_00371CE0;
    case 263u: goto L_00371D14;
    case 264u: goto L_00371D34;
    case 265u: goto L_00371D48;
    case 266u: goto L_00371D50;
    case 267u: goto L_00371D60;
    case 268u: goto L_00371D6C;
    case 269u: goto L_00371D80;
    case 270u: goto L_00371D88;
    case 271u: goto L_00371DA0;
    case 272u: goto L_00371DBC;
    case 273u: goto L_00371DD4;
    case 274u: goto L_00371DEC;
    case 275u: goto L_00371E00;
    case 276u: goto L_00371E1C;
    case 277u: goto L_00371E30;
    case 278u: goto L_00371E4C;
    case 279u: goto L_00371E54;
    case 280u: goto L_00371E6C;
    case 281u: goto L_00371EB0;
    case 282u: goto L_00371EE0;
    case 283u: goto L_00371EEC;
    case 284u: goto L_00371F38;
    case 285u: goto L_00371F44;
    case 286u: goto L_00371F50;
    case 287u: goto L_00371F90;
    case 288u: goto L_00371F98;
    case 289u: goto L_00371FE4;
    case 290u: goto L_00371FFC;
    case 291u: goto L_00372008;
    case 292u: goto L_00372010;
    case 293u: goto L_00372020;
    case 294u: goto L_0037202C;
    case 295u: goto L_00372050;
    case 296u: goto L_00372074;
    case 297u: goto L_003720B4;
    case 298u: goto L_003720DC;
    case 299u: goto L_00372104;
    case 300u: goto L_0037212C;
    case 301u: goto L_00372154;
    case 302u: goto L_00372164;
    case 303u: goto L_00372170;
    case 304u: goto L_0037217C;
    case 305u: goto L_00372194;
    case 306u: goto L_003721B0;
    case 307u: goto L_003721E4;
    case 308u: goto L_00372250;
    case 309u: goto L_003722E8;
    case 310u: goto L_00372360;
    case 311u: goto L_0037236C;
    case 312u: goto L_003723AC;
    case 313u: goto L_00372424;
    case 314u: goto L_00372434;
    case 315u: goto L_00372444;
    case 316u: goto L_0037246C;
    case 317u: goto L_0037248C;
    case 318u: goto L_003724B4;
    case 319u: goto L_003724CC;
    case 320u: goto L_00372524;
    case 321u: goto L_003725AC;
    case 322u: goto L_003725BC;
    case 323u: goto L_003725CC;
    case 324u: goto L_003725F4;
    case 325u: goto L_00372614;
    case 326u: goto L_00372668;
    case 327u: goto L_0037267C;
    case 328u: goto L_003726C0;
    case 329u: goto L_003726E0;
    case 330u: goto L_003726E8;
    case 331u: goto L_00372704;
    case 332u: goto L_00372718;
    case 333u: goto L_00372728;
    case 334u: goto L_00372738;
    case 335u: goto L_00372748;
    case 336u: goto L_0037275C;
    case 337u: goto L_00372764;
    case 338u: goto L_00372778;
    case 339u: goto L_00372788;
    case 340u: goto L_00372794;
    case 341u: goto L_003727A4;
    case 342u: goto L_003727B0;
    case 343u: goto L_003727C0;
    case 344u: goto L_003727D0;
    case 345u: goto L_003727E4;
    case 346u: goto L_00372800;
    case 347u: goto L_0037280C;
    case 348u: goto L_00372844;
    case 349u: goto L_00372880;
    case 350u: goto L_003728A4;
    case 351u: goto L_003728C8;
    case 352u: goto L_003728EC;
    case 353u: goto L_003728FC;
    case 354u: goto L_0037290C;
    case 355u: goto L_0037291C;
    case 356u: goto L_0037292C;
    case 357u: goto L_00372950;
    case 358u: goto L_00372978;
    case 359u: goto L_003729A0;
    case 360u: goto L_003729C4;
    case 361u: goto L_003729CC;
    case 362u: goto L_003729E0;
    case 363u: goto L_003729F4;
    case 364u: goto L_00372A2C;
    case 365u: goto L_00372A50;
    case 366u: goto L_00372A74;
    case 367u: goto L_00372A7C;
    case 368u: goto L_00372A90;
    case 369u: goto L_00372A98;
    case 370u: goto L_00372AB8;
    case 371u: goto L_00372AF0;
    case 372u: goto L_00372B10;
    case 373u: goto L_00372B3C;
    case 374u: goto L_00372B50;
    case 375u: goto L_00372B7C;
    case 376u: goto L_00372B90;
    case 377u: goto L_00372BAC;
    case 378u: goto L_00372BC8;
    case 379u: goto L_00372BDC;
    case 380u: goto L_00372BE4;
    case 381u: goto L_00372BF4;
    case 382u: goto L_00372C00;
    case 383u: goto L_00372C20;
    case 384u: goto L_00372C48;
    case 385u: goto L_00372C64;
    case 386u: goto L_00372C74;
    case 387u: goto L_00372C8C;
    case 388u: goto L_00372C98;
    case 389u: goto L_00372CA4;
    case 390u: goto L_00372CBC;
    case 391u: goto L_00372CD0;
    case 392u: goto L_00372CE4;
    case 393u: goto L_00372CFC;
    case 394u: goto L_00372D10;
    case 395u: goto L_00372D24;
    case 396u: goto L_00372D3C;
    case 397u: goto L_00372D50;
    case 398u: goto L_00372D64;
    case 399u: goto L_00372D7C;
    case 400u: goto L_00372D90;
    case 401u: goto L_00372DC4;
    case 402u: goto L_00372DE0;
    case 403u: goto L_00372E54;
    case 404u: goto L_00372E68;
    case 405u: goto L_00372E84;
    case 406u: goto L_00372E98;
    case 407u: goto L_00372EA4;
    case 408u: goto L_00372EC0;
    case 409u: goto L_00372EF4;
    case 410u: goto L_00372F04;
    case 411u: goto L_00372F3C;
    case 412u: goto L_00372F50;
    case 413u: goto L_00372F58;
    case 414u: goto L_00372F70;
    case 415u: goto L_00372FA0;
    case 416u: goto L_00372FB4;
    case 417u: goto L_00372FD0;
    case 418u: goto L_00372FEC;
    case 419u: goto L_00372FF4;
    case 420u: goto L_00373020;
    case 421u: goto L_00373050;
    case 422u: goto L_00373060;
    case 423u: goto L_00373074;
    case 424u: goto L_003730E8;
    case 425u: goto L_00373140;
    case 426u: goto L_00373160;
    case 427u: goto L_00373180;
    case 428u: goto L_003731A0;
    case 429u: goto L_003731D0;
    case 430u: goto L_003731F8;
    case 431u: goto L_00373224;
    case 432u: goto L_00373248;
    case 433u: goto L_0037326C;
    case 434u: goto L_00373290;
    case 435u: goto L_003732D0;
    case 436u: goto L_003732DC;
    case 437u: goto L_00373318;
    case 438u: goto L_00373340;
    case 439u: goto L_0037338C;
    case 440u: goto L_0037339C;
    case 441u: goto L_003733AC;
    case 442u: goto L_003733B8;
    case 443u: goto L_003733DC;
    case 444u: goto L_00373408;
    case 445u: goto L_00373414;
    case 446u: goto L_00373448;
    case 447u: goto L_00373458;
    case 448u: goto L_00373460;
    case 449u: goto L_0037347C;
    case 450u: goto L_00373490;
    case 451u: goto L_003734A0;
    case 452u: goto L_003734EC;
    case 453u: goto L_00373508;
    case 454u: goto L_00373524;
    case 455u: goto L_00373570;
    case 456u: goto L_0037359C;
    case 457u: goto L_003735D0;
    case 458u: goto L_00373620;
    case 459u: goto L_00373648;
    case 460u: goto L_00373684;
    case 461u: goto L_003736AC;
    case 462u: goto L_003736D4;
    case 463u: goto L_003736FC;
    case 464u: goto L_00373724;
    case 465u: goto L_0037374C;
    case 466u: goto L_0037375C;
    case 467u: goto L_00373768;
    case 468u: goto L_00373774;
    case 469u: goto L_0037378C;
    case 470u: goto L_003737B0;
    case 471u: goto L_003737C0;
    case 472u: goto L_003737DC;
    case 473u: goto L_003737E4;
    case 474u: goto L_00373800;
    case 475u: goto L_00373814;
    case 476u: goto L_00373824;
    case 477u: goto L_00373834;
    case 478u: goto L_00373844;
    case 479u: goto L_00373858;
    case 480u: goto L_00373860;
    case 481u: goto L_0037386C;
    case 482u: goto L_00373878;
    case 483u: goto L_003738A0;
    case 484u: goto L_003738B0;
    case 485u: goto L_003738DC;
    case 486u: goto L_00373900;
    case 487u: goto L_00373924;
    case 488u: goto L_00373940;
    case 489u: goto L_00373954;
    case 490u: goto L_00373964;
    case 491u: goto L_00373974;
    case 492u: goto L_00373984;
    case 493u: goto L_003739EC;
    case 494u: goto L_003739FC;
    case 495u: goto L_00373A10;
    case 496u: goto L_00373A20;
    case 497u: goto L_00373A30;
    case 498u: goto L_00373A40;
    case 499u: goto L_00373AB0;
    case 500u: goto L_00373AE0;
    case 501u: goto L_00373AF0;
    case 502u: goto L_00373B04;
    case 503u: goto L_00373B0C;
    case 504u: goto L_00373B14;
    case 505u: goto L_00373B28;
    case 506u: goto L_00373B58;
    case 507u: goto L_00373B70;
    case 508u: goto L_00373B9C;
    case 509u: goto L_00373BB0;
    case 510u: goto L_00373BDC;
    case 511u: goto L_00373BF0;
    case 512u: goto L_00373C18;
    case 513u: goto L_00373C34;
    case 514u: goto L_00373C4C;
    case 515u: goto L_00373C58;
    case 516u: goto L_00373C64;
    case 517u: goto L_00373C7C;
    case 518u: goto L_00373C90;
    case 519u: goto L_00373CA4;
    case 520u: goto L_00373CBC;
    case 521u: goto L_00373CD0;
    case 522u: goto L_00373CE4;
    case 523u: goto L_00373CFC;
    case 524u: goto L_00373D10;
    case 525u: goto L_00373D24;
    case 526u: goto L_00373D3C;
    case 527u: goto L_00373D50;
    case 528u: goto L_00373DB0;
    case 529u: goto L_00373DC4;
    case 530u: goto L_00373E3C;
    case 531u: goto L_00373E50;
    case 532u: goto L_00373EC4;
    case 533u: goto L_00373F9C;
    default: bad_entry(c, 0x00370000u); return;
    }
L_00370000:
    set32(c.r[2], 0u + 47u);
    c.budget -= 1;
L_00370004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_00370010; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 1;
L_00370010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037001C; } }
L_00370018:
    set32(c.r[2], 0u + 63u);
    c.budget -= 1;
L_0037001C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370030:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00370418; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4832u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00370058:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00370414; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 111u);  if (t) { goto L_00370418; } }
L_00370084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 112u);  if (t) { goto L_00370418; } }
L_0037008C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 2u);  if (t) { goto L_00370418; } }
L_00370094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370418; } }
L_0037009C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 51u);  if (t) { goto L_00370418; } }
L_003700A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_00370418; } }
L_003700AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 109u);  if (t) { goto L_00370418; } }
L_003700B4:
    set32(c.r[2], 0u + 110u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00370418; } }
L_003700C4:
    set32(c.r[8], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; set32(c.r[2], c.r[6].w[0] + 52u);  if (t) { goto L_00370194; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[6].w[0] + 31u);  if (t) { goto L_0037018C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00370100; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 25u);  if (t) { goto L_003700F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_003700F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370100:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00370180; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_0037016C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00370158; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00370144; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00370130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370188; } }
L_00370130:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 15u);  if (t) { goto L_0037013C; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_0037013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370144:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 19u);  if (t) { goto L_00370150; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00370150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370158:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 120u);  if (t) { goto L_00370164; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 1;
L_00370164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037016C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + 124u);  if (t) { goto L_00370178; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_00370178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[7].w[0] + 118u);  if (t) { goto L_00370418; } }
L_00370188:
    set32(c.r[2], c.r[6].w[0] + 31u);
    c.budget -= 1;
L_0037018C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037019C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 41u);  if (t) { goto L_003701C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 56u);  if (t) { goto L_003701B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_003701B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_003701C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_003701C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 65u);  if (t) { goto L_00370218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_00370204; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003701F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_003701F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_003701FC; } }
    set32(c.r[2], c.r[6].w[0] + 70u);
    c.budget -= 1;
L_003701FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370204:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 67u);  if (t) { goto L_00370210; } }
    set32(c.r[2], c.r[6].w[0] + 60u);
    c.budget -= 1;
L_00370210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370220:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 80u);  if (t) { goto L_0037027C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00370250; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 59u);  if (t) { goto L_00370248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_00370248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370250:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00370260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_00370418; } }
L_00370260:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00370270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 82u);  if (t) { goto L_00370274; } }
L_00370270:
    set32(c.r[2], 0u + 83u);
    c.budget -= 1;
L_00370274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037027C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003702CC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003702A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_003702A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003702B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_00370418; } }
L_003702B0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_003702C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 79u);  if (t) { goto L_003702C4; } }
L_003702C0:
    set32(c.r[2], 0u + 75u);
    c.budget -= 1;
L_003702C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_003702CC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003702DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 75u);  if (t) { goto L_00370418; } }
L_003702DC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_003702EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 76u);  if (t) { goto L_00370418; } }
L_003702EC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_003702FC; } }
    set32(c.r[2], 0u + 78u);
    c.budget -= 1;
L_003702FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370304:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 95u);  if (t) { goto L_00370364; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 90u);  if (t) { goto L_0037035C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 93u);  if (t) { goto L_00370354; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 84u);  if (t) { goto L_0037034C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 88u);  if (t) { goto L_00370344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_00370344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037034C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037035C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_0037036C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 103u);  if (t) { goto L_00370390; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 98u);  if (t) { goto L_00370388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_00370388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370398:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003703E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003703D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] + 115u);  if (t) { goto L_003703D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + 8u);  if (t) { goto L_003703C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370414; } }
L_003703C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_003703D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_003703D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 6u);  if (t) { goto L_00370418; } }
L_003703E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003703F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_00370418; } }
L_003703F0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00370400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 113u);  if (t) { goto L_00370418; } }
L_00370400:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 114u);  if (t) { goto L_00370414; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370418; } }
L_00370414:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00370418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370420:
    c.r[2].d[0] = c.r[4].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 52ll ? 1ull : 0ull;  if (t) { goto L_0037043C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003705F4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037043C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 46ll ? 1ull : 0ull;  if (t) { goto L_00370454; } }
    c.r[2].d[0] = c.r[4].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003705E8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 41ll ? 1ull : 0ull;  if (t) { goto L_0037046C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003705DC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037046C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_00370484; } }
    c.r[2].d[0] = c.r[4].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003705D0; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 1;
L_00370484:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003705CC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 70ll ? 1ull : 0ull;  if (t) { goto L_003704A8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705CC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 1;
L_003704A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_003704C0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003705C4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_003704C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_003704D8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705C0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_003704D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 94u);  if (t) { goto L_003704F0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705C0; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 1;
L_003704F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003705C0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00370514; } }
    c.r[2].d[0] = c.r[4].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705C0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 59u);  if (t) { goto L_0037052C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 88ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705C0; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 1;
L_0037052C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003705C0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 121ll ? 1ull : 0ull;  if (t) { goto L_00370550; } }
    c.r[2].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003705B8; } }
    c.r[2].d[0] = c.r[4].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_00370568; } }
    c.r[2].d[0] = c.r[4].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705B4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_00370580; } }
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705B4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_00370598; } }
    c.r[2].d[0] = c.r[4].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705B4; } }
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_00370598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370600; } }
    c.r[2].d[0] = c.r[4].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003705B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003705FC; } }
L_003705B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003705B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
L_003705C0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_003705C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
L_003705CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003705D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003705DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003705E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003705F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370600; } }
L_003705FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00370600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00370630:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(129ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00370A2C; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] - 4720u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00370658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16640u);  if (t) { goto L_00370A2C; } }
L_00370660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16640u);  if (t) { goto L_00370A2C; } }
L_00370668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370A2C; } }
L_00370670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);  if (t) { goto L_00370A2C; } }
L_00370678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_00370A2C; } }
L_00370680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_00370A2C; } }
L_00370688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00370A2C; } }
L_00370690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 256u);  if (t) { goto L_00370A2C; } }
L_00370698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_00370A2C; } }
L_003706A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370A2C; } }
L_003706A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2176u);  if (t) { goto L_00370A2C; } }
L_003706B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2080u);  if (t) { goto L_00370A2C; } }
L_003706B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2052u);  if (t) { goto L_00370A2C; } }
L_003706C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2064u);  if (t) { goto L_00370A2C; } }
L_003706C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2112u);  if (t) { goto L_00370A2C; } }
L_003706D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2056u);  if (t) { goto L_00370A2C; } }
L_003706D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_003706E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_003706E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_003706F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_003706F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_003707A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8448u);  if (t) { goto L_00370A2C; } }
L_003707A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_003707B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8448u);  if (t) { goto L_00370A2C; } }
L_003707B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003707C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3072u);  if (t) { goto L_00370A2C; } }
L_003707C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2560u);  if (t) { goto L_00370A2C; } }
L_003707D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_003707D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_003707E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_003707E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_003707F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_003707F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_00370828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2304u);  if (t) { goto L_00370A2C; } }
L_00370830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_00370838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8448u);  if (t) { goto L_00370A2C; } }
L_00370870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_003708A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18434u);  if (t) { goto L_00370A2C; } }
L_003708A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6146u);  if (t) { goto L_00370A2C; } }
L_003708B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6146u);  if (t) { goto L_00370A2C; } }
L_003708B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6146u);  if (t) { goto L_00370A2C; } }
L_003708C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003708C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2176u);  if (t) { goto L_00370A2C; } }
L_003708D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2052u);  if (t) { goto L_00370A2C; } }
L_003708D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2112u);  if (t) { goto L_00370A2C; } }
L_003708E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2056u);  if (t) { goto L_00370A2C; } }
L_003708E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003708F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2304u);  if (t) { goto L_00370A2C; } }
L_003708F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8448u);  if (t) { goto L_00370A2C; } }
L_00370908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8448u);  if (t) { goto L_00370A2C; } }
L_00370918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6146u);  if (t) { goto L_00370A2C; } }
L_00370930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6400u);  if (t) { goto L_00370A2C; } }
L_00370938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9216u);  if (t) { goto L_00370A2C; } }
L_00370948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8704u);  if (t) { goto L_00370A2C; } }
L_00370950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8194u);  if (t) { goto L_00370A2C; } }
L_00370980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_003709A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 32770ull;  if (t) { goto L_00370A2C; } }
L_003709A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 32770ull;  if (t) { goto L_00370A2C; } }
L_003709B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 32770ull;  if (t) { goto L_00370A2C; } }
L_003709B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33024ull;  if (t) { goto L_00370A2C; } }
L_003709C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003709C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003709D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2050u);  if (t) { goto L_00370A2C; } }
L_003709D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00370A2C; } }
L_003709E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00370A2C; } }
L_003709E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00370A2C; } }
L_003709F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_003709F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8200u);  if (t) { goto L_00370A2C; } }
L_00370A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8320u);  if (t) { goto L_00370A2C; } }
L_00370A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8196u);  if (t) { goto L_00370A2C; } }
L_00370A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8256u);  if (t) { goto L_00370A2C; } }
L_00370A28:
    set32(c.r[2], 0u + 8200u);
    c.budget -= 1;
L_00370A2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370A40:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  c.pc = t; return; }
L_00370A60:
    set32(c.r[3], c.r[5].w[0] - 115u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00370B1C; } }
    set32(c.r[7], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_00370A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370B1C; } }
L_00370A84:
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[9].w[0] - 115u);
    c.budget -= 6;
L_00370A9C:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00370AC8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00370AC8; } }
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00370AC8; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00370AC8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[9].w[0] - 115u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370A9Cu | kUnwind; return; } goto L_00370A9C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_00370B1C; } }
    set32(c.r[8], c.r[4].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[9].w[0] << 1);
    c.budget -= 3;
L_00370AF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] + 246u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 246u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00370B0C; } }
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_00370B0C:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[9].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370AF0u | kUnwind; return; } goto L_00370AF0; } }
L_00370B1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370B30:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_00370B5C; } }
L_00370B40:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00370B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370B6C; } }
L_00370B58:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00370B5C:
    c.r[3].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370B40u | kUnwind; return; } goto L_00370B40; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00370B6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 4200u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370BA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x00370BA0u) [[unlikely]] return; }
L_00370BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370BAC; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00370BAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00370BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00370BFC; } }
L_00370BE0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370BE0u | kUnwind; return; } goto L_00370BE0; } }
L_00370BFC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00370C08u) [[unlikely]] return; }
L_00370C08:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00370C18u) [[unlikely]] return; }
L_00370C18:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x00370C28u) [[unlikely]] return; }
L_00370C28:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00370C58; } }
L_00370C34:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00370C44u) [[unlikely]] return; }
L_00370C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 4u);  if (t) { goto L_00370C68; } }
L_00370C54:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00370C58:
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C34u | kUnwind; return; } goto L_00370C34; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00370C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00370C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00370C94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370CCC; } }
L_00370C94:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 50u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;  if (t) { goto L_00370CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00370CCC; } }
L_00370CAC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00370CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CBCu);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00370CBCu) [[unlikely]] return; }
L_00370CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370CCC; } }
L_00370CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CCCu);  if (depth < kMaxDepth) unit_0081(c, 193u, depth + 1u); else { c.pc = 0x00306310u; return; } if (c.pc != 0x00370CCCu) [[unlikely]] return; }
L_00370CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 672u);  if (t) { goto L_00370D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00370D00u) [[unlikely]] return; }
L_00370D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 176u, depth + 1u); else { c.pc = 0x00370D90u; return; } if (c.pc != 0x00370D10u) [[unlikely]] return; }
L_00370D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 632u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370D28u) [[unlikely]] return; }
L_00370D28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 632u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00370D70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00370D70; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370D70u) [[unlikely]] return; }
L_00370D70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 632u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0016(c, 15u, depth + 1u); else { c.pc = 0x001585A0u; return; } if (c.pc != 0x00370DA8u) [[unlikely]] return; }
L_00370DA8:
    set32(c.r[4], c.r[17].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DB4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00370DB4u) [[unlikely]] return; }
L_00370DB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31920u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31968u);
    set32(c.r[4], c.r[4].w[0] + 3104u);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[17].w[0] + 592u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    st32((c.r[1].w[0] - 632u), c.r[17].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 608u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 186u, depth + 1u); else { c.pc = 0x00370F00u; return; } if (c.pc != 0x00370E0Cu) [[unlikely]] return; }
L_00370E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00370E34; } }
L_00370E14:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E24u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C04E0u; return; } if (c.pc != 0x00370E24u) [[unlikely]] return; }
L_00370E24:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 648u), c.r[2].w[0]);
    c.budget -= 4;
L_00370E34:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370E14u | kUnwind; return; } goto L_00370E14; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00370E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00370EE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31920u);
    set32(c.r[2], c.r[2].w[0] + 31968u);
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 576u);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EA8u); st32((c.r[1].w[0] - 632u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00370EA8u) [[unlikely]] return; }
L_00370EA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00370ECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EC8u); st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 131u, depth + 1u); else { c.pc = 0x00157770u; return; } if (c.pc != 0x00370EC8u) [[unlikely]] return; }
L_00370EC8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00370ECC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00370EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00370EE0u) [[unlikely]] return; }
L_00370EE0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00370EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00370F00:
    st32((c.r[4].w[0] + 624u), 0u);
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 628u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 560u), c.r[2].w[0]);  if (t) { goto L_00371124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4192u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00370F38:
    st32((c.r[4].w[0] + 592u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 596u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    st32((c.r[4].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 608u);
    st32((c.r[4].w[0] + 604u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);  if (t) { goto L_00370F68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4096u));
    st32((c.r[4].w[0] + 608u), c.f[0]);
    c.budget -= 3;
L_00370F68:
    st32((c.r[4].w[0] + 644u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    st32((c.r[4].w[0] + 632u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    st32((c.r[4].w[0] + 636u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4112u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 640u), c.f[0]);  if (t) { goto L_00371124; } }
L_00370F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.f[2] = 0u;
    st32((c.r[4].w[0] + 592u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 596u), c.f[2]);
    st32((c.r[4].w[0] + 600u), c.f[1]);
    set32(c.r[2], c.r[4].w[0] + 608u);
    st32((c.r[4].w[0] + 604u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    st32((c.r[4].w[0] + 644u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 4120u));
    st32((c.r[4].w[0] + 636u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4128u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 640u), c.f[0]);  if (t) { goto L_00371124; } }
L_00370FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 592u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 596u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    st32((c.r[4].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[7], 0u + 2u);
    st32((c.r[4].w[0] + 604u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 608u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 612u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    st32((c.r[4].w[0] + 616u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st32((c.r[4].w[0] + 620u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 644u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 4128u));
    st32((c.r[4].w[0] + 628u), c.f[0]);
    st32((c.r[4].w[0] + 632u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 636u), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 640u), c.r[2].w[0]);  if (t) { goto L_00371124; } }
L_00371054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 592u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    st32((c.r[4].w[0] + 596u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    st32((c.r[4].w[0] + 604u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 608u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 612u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[4].w[0] + 616u), c.f[0]);
    st32((c.r[4].w[0] + 620u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 644u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 4120u));
    st32((c.r[4].w[0] + 628u), c.f[0]);
    st32((c.r[4].w[0] + 632u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 640u), c.r[8].w[0]);  if (t) { goto L_00371124; } }
L_003710B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = 0u;
    st32((c.r[4].w[0] + 560u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 592u), c.f[3]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 596u), c.f[2]);
    st32((c.r[4].w[0] + 600u), c.f[1]);
    set32(c.r[2], c.r[4].w[0] + 608u);
    st32((c.r[4].w[0] + 604u), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 4096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 608u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 644u), 0u);
    st32((c.r[4].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    st32((c.r[4].w[0] + 636u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4112u));
    st32((c.r[4].w[0] + 640u), c.f[0]);
    c.budget -= 29;
L_00371124:
    st32((c.r[4].w[0] + 668u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00371140:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 200u, depth + 1u); else { c.pc = 0x003712A0u; return; } if (c.pc != 0x00371154u) [[unlikely]] return; }
L_00371154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28324u)));
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[5].w[0]) & ~15u, c.vu0.vf[3]);  if (t) { goto L_003711A0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003711A0u); set32(c.r[6], ld32((c.r[2].w[0] + 648u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003711A0u) [[unlikely]] return; }
L_003711A0:
    ld128((c.r[16].w[0] + 592u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[16].w[0] + 496u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 608u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 544u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[16].w[0] + 628u));
    c.f[1] = ld32((c.r[16].w[0] + 548u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 548u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003711DC; } }
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.budget -= 1;
L_003711DC:
    ld128((c.r[16].w[0] + 544u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = c.r[2].w[0];
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371210u); st32((c.r[29].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 48u, depth + 1u); else { c.pc = 0x00144FA0u; return; } if (c.pc != 0x00371210u) [[unlikely]] return; }
L_00371210:
    c.f[0] = ld32((c.r[16].w[0] + 548u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371224u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0000(c, 376u, depth + 1u); else { c.pc = 0x00103D88u; return; } if (c.pc != 0x00371224u) [[unlikely]] return; }
L_00371224:
    c.f[0] = ld32((c.r[16].w[0] + 544u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371238u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0000(c, 373u, depth + 1u); else { c.pc = 0x00103CE0u; return; } if (c.pc != 0x00371238u) [[unlikely]] return; }
L_00371238:
    set32(c.r[3], c.r[16].w[0] + 496u);
    set32(c.r[2], c.r[29].w[0] + 160u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 624u));
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 504u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371274u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371274u) [[unlikely]] return; }
L_00371274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371284u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00371284u) [[unlikely]] return; }
L_00371284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003712A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 1536u)));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003712E8; } }
    c.f[1] = ld32((c.r[4].w[0] + 624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 624u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 632u));
    c.f[0] = ld32((c.r[4].w[0] + 624u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003712E8; } }
    st32((c.r[4].w[0] + 624u), c.f[1]);
    c.budget -= 1;
L_003712E8:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037132C; } }
    c.f[1] = ld32((c.r[4].w[0] + 624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 624u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 632u));
    c.f[0] = ld32((c.r[4].w[0] + 624u));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0037132C; } }
    st32((c.r[4].w[0] + 624u), c.f[1]);
    c.budget -= 1;
L_0037132C:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003713A4; } }
    c.f[1] = ld32((c.r[1].w[0] - 4136u));
    c.f[2] = ld32((c.r[4].w[0] + 628u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4144u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037136C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00371388; } }
L_0037136C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4152u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00371388; } }
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 2;
L_00371388:
    st32((c.r[4].w[0] + 628u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 640u));
    c.f[0] = ld32((c.r[4].w[0] + 628u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003713A4; } }
    st32((c.r[4].w[0] + 628u), c.f[1]);
    c.budget -= 1;
L_003713A4:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037141C; } }
    c.f[1] = ld32((c.r[1].w[0] - 4136u));
    c.f[2] = ld32((c.r[4].w[0] + 628u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4144u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003713E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00371400; } }
L_003713E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 4152u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00371400; } }
    c.f[0] = ld32((c.r[1].w[0] - 4104u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 2;
L_00371400:
    st32((c.r[4].w[0] + 628u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 636u));
    c.f[0] = ld32((c.r[4].w[0] + 628u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037141C; } }
    st32((c.r[4].w[0] + 628u), c.f[1]);
    c.budget -= 1;
L_0037141C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00371430:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 576u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00371140u | kUnwind; return; } goto L_00371140; }
L_00371440:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 576u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00370E60u | kUnwind; return; } goto L_00370E60; }
L_00371450:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_00371470; } }
    set32(c.r[2], 0u + 500u);
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003714B0; } }
L_00371470:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00371488; } }
    set32(c.r[2], 0u + 1000u);
    set32(c.r[3], 0u + 300u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003714B0; } }
L_00371488:
    c.r[1].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003714A4; } }
    set32(c.r[2], 0u + 1500u);
    set32(c.r[3], 0u + 800u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003714B0; } }
L_003714A4:
    set32(c.r[2], 0u + 2000u);
    set32(c.r[3], 0u + 1000u);
    if (c.r[5].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_003714B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003714C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = 0u;
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 12;
L_003714F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003715A0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00371510:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003715A8; } }
L_00371520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_00371590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003715A4; } }
L_003715A0:
    c.f[21] = 0u;
    c.budget -= 1;
L_003715A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003715A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003715B0u) [[unlikely]] return; }
L_003715B0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003715C0; } }
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_003715C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003715D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003715F0; } }
L_003715D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003715E0u) [[unlikely]] return; }
L_003715E0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003715F0; } }
    c.f[20] = fp::add(c.f[20], c.f[21]);
    c.budget -= 1;
L_003715F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003714F0u | kUnwind; return; } goto L_003714F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[3], c.r[17].w[0] >> 1);  if (t) { goto L_00371614; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037162C; } }
L_00371614:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0037162C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[1].w[0] - 4040u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00371674; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00371690; } }
L_00371674:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 10u);
    c.budget -= 7;
L_00371690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0037169C; } }
    breakpoint(c, 0x00371698u);
    c.budget -= 1;
L_0037169C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003716D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371704u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00371704u) [[unlikely]] return; }
L_00371704:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371714u); c.r[21].d[0] = ld16((c.r[1].w[0] - 25464u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00371714u) [[unlikely]] return; }
L_00371714:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371724u); c.r[23].d[0] = ld8((c.r[1].w[0] - 25576u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00371724u) [[unlikely]] return; }
L_00371724:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371734u); set32(c.r[20], ld32((c.r[1].w[0] - 25584u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00371734u) [[unlikely]] return; }
L_00371734:
    c.r[4].d[0] = c.r[21].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 40076ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 25u)));
    c.budget -= 16;
    { const bool t = c.r[22].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00371778; } }
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_00371778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003717C0; } }
L_00371780:
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003717BC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_003717BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0]; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003717B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003717D8; } }
L_003717B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003717D8; } }
L_003717BC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003717C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717C8u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_008D(c, 238u, depth + 1u); else { c.pc = 0x00336B70u; return; } if (c.pc != 0x003717C8u) [[unlikely]] return; }
L_003717C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371780u | kUnwind; return; } goto L_00371780; } }
L_003717D8:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003717EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00371860; } }
L_003717EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003717F4u) [[unlikely]] return; }
L_003717F4:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 356u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371800u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 203u, depth + 1u); else { c.pc = 0x00371450u; return; } if (c.pc != 0x00371800u) [[unlikely]] return; }
L_00371800:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[23].d[0] & 255ull;  if (t) { goto L_00371818; } }
    set32(c.r[17], c.r[17].w[0] + 500u);
    c.budget -= 1;
L_00371818:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00371838; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00371834; } }
    set32(c.r[17], c.r[17].w[0] + 500u);
    c.budget -= 1;
L_00371834:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00371838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371840u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 204u, depth + 1u); else { c.pc = 0x003714C0u; return; } if (c.pc != 0x00371840u) [[unlikely]] return; }
L_00371840:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0037185C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_0037185C; } }
L_00371858:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_0037185C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00371860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00371890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 38u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x003718A8u) [[unlikely]] return; }
L_003718A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32560u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718C4u); st32((c.r[16].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003718C4u) [[unlikely]] return; }
L_003718C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718D8u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003718D8u) [[unlikely]] return; }
L_003718D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718E0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x003718E0u) [[unlikely]] return; }
L_003718E0:
    set32(c.r[2], 0u + 13439u);
    set32(c.r[3], 0u + 13312u);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 3928u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371908u); c.r[6].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x00371908u) [[unlikely]] return; }
L_00371908:
    set32(c.r[2], 0u + 13939u);
    set32(c.r[3], 0u + 13440u);
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63620000u);
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 3912u);
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371930u); c.r[6].d[0] = c.r[2].d[0] | 27764ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x00371930u) [[unlikely]] return; }
L_00371930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371938u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00371938u) [[unlikely]] return; }
L_00371938:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00371950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003719E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32560u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);  if (t) { goto L_003719AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003719A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003719A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003719A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003719A4u) [[unlikely]] return; }
L_003719A4:
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 2;
L_003719AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719B4u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x003719B4u) [[unlikely]] return; }
L_003719B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63620000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719C0u); c.r[4].d[0] = c.r[2].d[0] | 27764ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x003719C0u) [[unlikely]] return; }
L_003719C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x003719CCu) [[unlikely]] return; }
L_003719CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003719E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003719E4u) [[unlikely]] return; }
L_003719E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003719E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00371A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00371A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A28u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 262u, depth + 1u); else { c.pc = 0x00371CE0u; return; } if (c.pc != 0x00371A28u) [[unlikely]] return; }
L_00371A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371A4Cu) [[unlikely]] return; }
L_00371A4C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371BB8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371A6Cu) [[unlikely]] return; }
L_00371A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371ADC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371AA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371AA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AA4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371AA4u) [[unlikely]] return; }
L_00371AA4:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AB4u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371AB4u) [[unlikely]] return; }
L_00371AB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371AD0; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371ACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 281u, depth + 1u); else { c.pc = 0x00371EB0u; return; } if (c.pc != 0x00371ACCu) [[unlikely]] return; }
L_00371ACC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00371AD0:
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00371CC0; } }
L_00371ADC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371AF0u) [[unlikely]] return; }
L_00371AF0:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 280u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371B28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371B28; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371B28u) [[unlikely]] return; }
L_00371B28:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00371B88; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00371B58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00371CC4; } }
L_00371B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B60u); set32(c.r[4], 0u + 252u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371B60u) [[unlikely]] return; }
L_00371B60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371B80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B7Cu); set32(c.r[7], 0u + 608u);  if (depth < kMaxDepth) unit_009C(c, 434u, depth + 1u); else { c.pc = 0x00373290u; return; } if (c.pc != 0x00371B7Cu) [[unlikely]] return; }
L_00371B7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00371B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_00371CC0; } }
L_00371B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B90u); set32(c.r[4], 0u + 596u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371B90u) [[unlikely]] return; }
L_00371B90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371BB0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371BACu); set32(c.r[7], 0u + 609u);  if (depth < kMaxDepth) unit_009D(c, 16u, depth + 1u); else { c.pc = 0x003741F0u; return; } if (c.pc != 0x00371BACu) [[unlikely]] return; }
L_00371BAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00371BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[4].w[0]);  if (t) { goto L_00371CC0; } }
L_00371BB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371BCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371BCCu) [[unlikely]] return; }
L_00371BCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00371C48; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00371C48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371CC0; } }
L_00371C00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00371C24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00371C20; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371C20u) [[unlikely]] return; }
L_00371C20:
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_00371C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C2Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371C2Cu) [[unlikely]] return; }
L_00371C2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x00371C40u) [[unlikely]] return; }
L_00371C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371CC0; } }
L_00371C48:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371C78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371C74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371C74; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371C74u) [[unlikely]] return; }
L_00371C74:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_00371C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C80u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371C80u) [[unlikely]] return; }
L_00371C80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371CB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00371CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00371CAC; } }
L_00371CA4:
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_00371CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CB4u);  if (depth < kMaxDepth) unit_009C(c, 281u, depth + 1u); else { c.pc = 0x00371EB0u; return; } if (c.pc != 0x00371CB4u) [[unlikely]] return; }
L_00371CB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00371CB8:
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 2;
L_00371CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00371CC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00371CE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D14u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00371D14u) [[unlikely]] return; }
L_00371D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00371D20; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00371D20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00371E88; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00371D34u) [[unlikely]] return; }
L_00371D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371E84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D48u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00371D48u) [[unlikely]] return; }
L_00371D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00371D50u) [[unlikely]] return; }
L_00371D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D60u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00371D60u) [[unlikely]] return; }
L_00371D60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00371D6Cu) [[unlikely]] return; }
L_00371D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371E84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63620000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D80u); c.r[4].d[0] = c.r[2].d[0] | 27764ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00371D80u) [[unlikely]] return; }
L_00371D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00371D88u) [[unlikely]] return; }
L_00371D88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371E84; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00371E7C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00371DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00371DBCu) [[unlikely]] return; }
L_00371DBC:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DD4u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00371DD4u) [[unlikely]] return; }
L_00371DD4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00371E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DECu);  if (depth < kMaxDepth) unit_0089(c, 45u, depth + 1u); else { c.pc = 0x00324580u; return; } if (c.pc != 0x00371DECu) [[unlikely]] return; }
L_00371DEC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E00u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00371E00u) [[unlikely]] return; }
L_00371E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00371E34; } }
L_00371E08:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00371E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E1Cu);  if (depth < kMaxDepth) unit_0089(c, 45u, depth + 1u); else { c.pc = 0x00324580u; return; } if (c.pc != 0x00371E1Cu) [[unlikely]] return; }
L_00371E1C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E30u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00371E30u) [[unlikely]] return; }
L_00371E30:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00371E34:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371DA0u | kUnwind; return; } goto L_00371DA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00371E4Cu) [[unlikely]] return; }
L_00371E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E54u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371E54u) [[unlikely]] return; }
L_00371E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371E6C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009C(c, 281u, depth + 1u); else { c.pc = 0x00371EB0u; return; } if (c.pc != 0x00371E6Cu) [[unlikely]] return; }
L_00371E6C:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00371E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00371E8C; } }
L_00371E84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00371E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00371E8C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00371EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371EE0u); set32(c.r[5], c.r[17].w[0] + 76u);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x00371EE0u) [[unlikely]] return; }
L_00371EE0:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371EECu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00371EECu) [[unlikely]] return; }
L_00371EEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 32384u);
    set32(c.r[2], c.r[2].w[0] + 32472u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 164u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32532u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[18].w[0]);
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F38u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00371F38u) [[unlikely]] return; }
L_00371F38:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F44u); st32((c.r[17].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00371F44u) [[unlikely]] return; }
L_00371F44:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F50u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00371F50u) [[unlikely]] return; }
L_00371F50:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[18].w[0]) & ~15u, c.r[4]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[4]);
    st32((c.r[17].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 256u), 0u);
    st32((c.r[17].w[0] + 268u), 0u);
    st8((c.r[17].w[0] + 264u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 240u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 276u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F90u); st32((c.r[17].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00371F90u) [[unlikely]] return; }
L_00371F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F98u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00371F98u) [[unlikely]] return; }
L_00371F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00371FE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] - 3776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 12u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 65u);
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] - 3984u);
    set32(c.r[9], c.r[9].w[0] - 3952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 3784u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FE4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x00371FE4u) [[unlikely]] return; }
L_00371FE4:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371FFCu) [[unlikely]] return; }
L_00371FFC:
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372008u); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00372008u) [[unlikely]] return; }
L_00372008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372010u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00372010u) [[unlikely]] return; }
L_00372010:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372020u) [[unlikely]] return; }
L_00372020:
    set32(c.r[4], c.r[17].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037202Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0037202Cu) [[unlikely]] return; }
L_0037202C:
    st8((c.r[17].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00372050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00372194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 2;
L_00372074:
    set32(c.r[2], c.r[2].w[0] + 32384u);
    set32(c.r[3], c.r[3].w[0] + 32472u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32532u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003720B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003720B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003720B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003720B4u) [[unlikely]] return; }
L_003720B4:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003720DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003720DC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003720DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003720DCu) [[unlikely]] return; }
L_003720DC:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00372104; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00372104; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372104u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372104u) [[unlikely]] return; }
L_00372104:
    st32((c.r[17].w[0] + 200u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037212C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037212C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037212Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037212Cu) [[unlikely]] return; }
L_0037212C:
    st32((c.r[17].w[0] + 276u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00372154; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00372154; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372154u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372154u) [[unlikely]] return; }
L_00372154:
    set32(c.r[4], c.r[17].w[0] + 164u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372164u); st32((c.r[17].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00372164u) [[unlikely]] return; }
L_00372164:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372170u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00372170u) [[unlikely]] return; }
L_00372170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037217Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0037217Cu) [[unlikely]] return; }
L_0037217C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00372198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372194u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00372194u) [[unlikely]] return; }
L_00372194:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00372198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003721B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003721E4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_009C(c, 376u, depth + 1u); else { c.pc = 0x00372B90u; return; } if (c.pc != 0x003721E4u) [[unlikely]] return; }
L_003721E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037268C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037268C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.f[0] = ld32((c.r[1].w[0] - 3776u));
    set32(c.r[5], ld32((c.r[20].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 3136u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3776u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    set32(c.r[2], ld32((c.r[20].w[0] + 200u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 444u)));
    c.budget -= 22;
L_00372250:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372250u | kUnwind; return; } goto L_00372250; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[2], c.r[2].w[0] + 3184u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 3176u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[5].w[0]), c.r[4].d[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    ld128((c.r[20].w[0] + 240u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 272u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[20].w[0] + 240u);  if (t) { goto L_003722E0; } }
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], 0u + 255u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003722DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003722DC:
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_003722E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003722E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003722E8u) [[unlikely]] return; }
L_003722E8:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], 0u + 3u);
    c.f[1] = c.r[4].w[0];
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[5]);
    c.f[0] = ld32((c.r[1].w[0] - 3776u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3776u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[19].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 25;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003724A4; } }
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 20u), c.f[1]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 5;
L_00372360:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037236Cu); set32(c.r[4], ld32((c.r[2].w[0] + 160u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0037236Cu) [[unlikely]] return; }
L_0037236C:
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[20] = ld32((c.r[3].w[0] + 168u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003723ACu); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003723ACu) [[unlikely]] return; }
L_003723AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0037244C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037244C; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 352u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    st32((c.r[18].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    c.f[12] = c.r[3].w[0];
    st32((c.r[18].w[0] + 272u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 276u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    st32((c.r[18].w[0] + 284u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372424u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372424u) [[unlikely]] return; }
L_00372424:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372434u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372434u) [[unlikely]] return; }
L_00372434:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372444u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372444u) [[unlikely]] return; }
L_00372444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00372490; } }
L_0037244C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037246Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037246Cu) [[unlikely]] return; }
L_0037246C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037248Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037248Cu) [[unlikely]] return; }
L_0037248C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00372490:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372360u | kUnwind; return; } goto L_00372360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00372690; } }
L_003724A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037268C; } }
    c.f[21] = ld32((c.r[29].w[0] + 116u));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003724B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003724CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0088(c, 529u, depth + 1u); else { c.pc = 0x00323390u; return; } if (c.pc != 0x003724CCu) [[unlikely]] return; }
L_003724CC:
    c.f[1] = c.r[17].w[0];
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[22] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[22];
    c.f[23] = fp::add(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.f[23];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372524u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372524u) [[unlikely]] return; }
L_00372524:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003725D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);  if (t) { goto L_003725D4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[1].w[0] - 3776u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3792u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 3792u));
    st32((c.r[18].w[0] + 272u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 3792u));
    st32((c.r[18].w[0] + 276u), c.f[0]);
    st32((c.r[18].w[0] + 280u), 0u);
    st32((c.r[18].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003725ACu); c.f[13] = c.f[23];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003725ACu) [[unlikely]] return; }
L_003725AC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003725BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003725BCu) [[unlikely]] return; }
L_003725BC:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003725CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003725CCu) [[unlikely]] return; }
L_003725CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00372618; } }
L_003725D4:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003725F4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003725F4u) [[unlikely]] return; }
L_003725F4:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372614u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372614u) [[unlikely]] return; }
L_00372614:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00372618:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0037267C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0037267C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43440000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = c.f[21];
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372668u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372668u) [[unlikely]] return; }
L_00372668:
    set32(c.r[4], ld32((c.r[20].w[0] + 200u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037267Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037267Cu) [[unlikely]] return; }
L_0037267C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003724B4u | kUnwind; return; } goto L_003724B4; } }
L_0037268C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00372690:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003726C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x003726E0u) [[unlikely]] return; }
L_003726E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726E8u); set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x003726E8u) [[unlikely]] return; }
L_003726E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00372748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372704u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00372704u) [[unlikely]] return; }
L_00372704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00372718; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372718u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00372718u) [[unlikely]] return; }
L_00372718:
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372728u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00372728u) [[unlikely]] return; }
L_00372728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372738u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00372738u) [[unlikely]] return; }
L_00372738:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372748u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00372748u) [[unlikely]] return; }
L_00372748:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037275Cu); set32(c.r[5], 0u + 157u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037275Cu) [[unlikely]] return; }
L_0037275C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372764u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00372764u) [[unlikely]] return; }
L_00372764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00372778; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372778u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00372778u) [[unlikely]] return; }
L_00372778:
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372788u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00372788u) [[unlikely]] return; }
L_00372788:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372794u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_0087(c, 71u, depth + 1u); else { c.pc = 0x0031C7A0u; return; } if (c.pc != 0x00372794u) [[unlikely]] return; }
L_00372794:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003727A4u); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x003727A4u) [[unlikely]] return; }
L_003727A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003727B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 70u, depth + 1u); else { c.pc = 0x0031C790u; return; } if (c.pc != 0x003727B0u) [[unlikely]] return; }
L_003727B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003727C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003727C0u) [[unlikely]] return; }
L_003727C0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003727D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003727D0u) [[unlikely]] return; }
L_003727D0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003727E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003727E4u) [[unlikely]] return; }
L_003727E4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00372800u) [[unlikely]] return; }
L_00372800:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037280Cu); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0037280Cu) [[unlikely]] return; }
L_0037280C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372844; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4032u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 118u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372844u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 150u, depth + 1u); else { c.pc = 0x00375570u; return; } if (c.pc != 0x00372844u) [[unlikely]] return; }
L_00372844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4032u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00372874; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003728AC; } }
L_00372874:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372880u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00372880u) [[unlikely]] return; }
L_00372880:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 276u)));
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 9u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003728A4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x003728A4u) [[unlikely]] return; }
L_003728A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 52u)));  if (t) { goto L_003728CC; } }
L_003728AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 276u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 118u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003728C8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x003728C8u) [[unlikely]] return; }
L_003728C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 1;
L_003728CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00372924; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 276u)));
    st32((c.r[2].w[0] + 52u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003728ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003728ECu) [[unlikely]] return; }
L_003728EC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003728FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003728FCu) [[unlikely]] return; }
L_003728FC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037290Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037290Cu) [[unlikely]] return; }
L_0037290C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037291Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037291Cu) [[unlikely]] return; }
L_0037291C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037292C; } }
L_00372924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037292Cu);  if (depth < kMaxDepth) unit_009C(c, 374u, depth + 1u); else { c.pc = 0x00372B50u; return; } if (c.pc != 0x0037292Cu) [[unlikely]] return; }
L_0037292C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00372950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003729BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372978u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372978u) [[unlikely]] return; }
L_00372978:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003729A0u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_009C(c, 372u, depth + 1u); else { c.pc = 0x00372B10u; return; } if (c.pc != 0x003729A0u) [[unlikely]] return; }
L_003729A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003729B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00372A34; } }
L_003729B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00372A34; } }
L_003729BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003729C4u);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x003729C4u) [[unlikely]] return; }
L_003729C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003729CCu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x003729CCu) [[unlikely]] return; }
L_003729CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003729E0u); set32(c.r[5], 0u + 158u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003729E0u) [[unlikely]] return; }
L_003729E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003729F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003729F4u) [[unlikely]] return; }
L_003729F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A2Cu); st32((c.r[7].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 372u, depth + 1u); else { c.pc = 0x00372B10u; return; } if (c.pc != 0x00372A2Cu) [[unlikely]] return; }
L_00372A2C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00372A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00372AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A74u);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00372A74u) [[unlikely]] return; }
L_00372A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00372A7Cu) [[unlikely]] return; }
L_00372A7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A90u); set32(c.r[5], 0u + 158u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372A90u) [[unlikely]] return; }
L_00372A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 372u, depth + 1u); else { c.pc = 0x00372B10u; return; } if (c.pc != 0x00372A98u) [[unlikely]] return; }
L_00372A98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00372B00; } }
L_00372AA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372AB8u) [[unlikely]] return; }
L_00372AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 72u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AF0u); st32((c.r[7].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 372u, depth + 1u); else { c.pc = 0x00372B10u; return; } if (c.pc != 0x00372AF0u) [[unlikely]] return; }
L_00372AF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 4;
L_00372B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3200u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 164u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B3Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00372B3Cu) [[unlikely]] return; }
L_00372B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00372B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3232u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 164u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B7Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00372B7Cu) [[unlikely]] return; }
L_00372B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00372B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372BACu); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00372BACu) [[unlikely]] return; }
L_00372BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00372BB8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00372BB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00372C14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372BC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00372BC8u) [[unlikely]] return; }
L_00372BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372BDCu); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00372BDCu) [[unlikely]] return; }
L_00372BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372BE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00372BE4u) [[unlikely]] return; }
L_00372BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372BF4u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00372BF4u) [[unlikely]] return; }
L_00372BF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00372C00u) [[unlikely]] return; }
L_00372C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00372C14; } }
L_00372C10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00372C14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00372C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C48u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00372C48u) [[unlikely]] return; }
L_00372C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00372C54; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00372C54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00372CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C64u);  if (depth < kMaxDepth) unit_009C(c, 376u, depth + 1u); else { c.pc = 0x00372B90u; return; } if (c.pc != 0x00372C64u) [[unlikely]] return; }
L_00372C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00372CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00372C74u) [[unlikely]] return; }
L_00372C74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00372CA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C8Cu); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00372C8Cu) [[unlikely]] return; }
L_00372C8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00372C98u) [[unlikely]] return; }
L_00372C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00372CA4u) [[unlikely]] return; }
L_00372CA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00372CA8:
    st32((c.r[17].w[0] + 200u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372CBCu) [[unlikely]] return; }
L_00372CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00372CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 425u, depth + 1u); else { c.pc = 0x00373140u; return; } if (c.pc != 0x00372CE4u) [[unlikely]] return; }
L_00372CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372CFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372CFCu) [[unlikely]] return; }
L_00372CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 425u, depth + 1u); else { c.pc = 0x00373140u; return; } if (c.pc != 0x00372D24u) [[unlikely]] return; }
L_00372D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372D3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372D3Cu) [[unlikely]] return; }
L_00372D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 425u, depth + 1u); else { c.pc = 0x00373140u; return; } if (c.pc != 0x00372D64u) [[unlikely]] return; }
L_00372D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372D7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372D7Cu) [[unlikely]] return; }
L_00372D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00372F88; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00372EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DC4u);  if (depth < kMaxDepth) unit_009C(c, 427u, depth + 1u); else { c.pc = 0x00373180u; return; } if (c.pc != 0x00372DC4u) [[unlikely]] return; }
L_00372DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372F88; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372DE0u) [[unlikely]] return; }
L_00372DE0:
    set32(c.r[3], 0u + 275u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], ld32((c.r[16].w[0] + 72u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + 148u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 100u), c.f[1]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00372E70; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372E54u) [[unlikely]] return; }
L_00372E54:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372E68u) [[unlikely]] return; }
L_00372E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00372E9C; } }
L_00372E70:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E84u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372E84u) [[unlikely]] return; }
L_00372E84:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E98u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372E98u) [[unlikely]] return; }
L_00372E98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00372E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EA4u);  if (depth < kMaxDepth) unit_009C(c, 374u, depth + 1u); else { c.pc = 0x00372B50u; return; } if (c.pc != 0x00372EA4u) [[unlikely]] return; }
L_00372EA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00372F88; } }
L_00372EB0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00372EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EC0u);  if (depth < kMaxDepth) unit_009C(c, 426u, depth + 1u); else { c.pc = 0x00373160u; return; } if (c.pc != 0x00372EC0u) [[unlikely]] return; }
L_00372EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372F88; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[3].w[0]);  if (t) { goto L_00372F88; } }
L_00372EE0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00372F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EF4u);  if (depth < kMaxDepth) unit_009C(c, 426u, depth + 1u); else { c.pc = 0x00373160u; return; } if (c.pc != 0x00372EF4u) [[unlikely]] return; }
L_00372EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00372F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F04u);  if (depth < kMaxDepth) unit_009C(c, 427u, depth + 1u); else { c.pc = 0x00373180u; return; } if (c.pc != 0x00372F04u) [[unlikely]] return; }
L_00372F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372F88; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + 76u);
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 9u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F3Cu); set32(c.r[5], ld32((c.r[16].w[0] + 280u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372F3Cu) [[unlikely]] return; }
L_00372F3C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372F50u) [[unlikely]] return; }
L_00372F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 374u, depth + 1u); else { c.pc = 0x00372B50u; return; } if (c.pc != 0x00372F58u) [[unlikely]] return; }
L_00372F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00372F8C; } }
L_00372F60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00372F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F70u);  if (depth < kMaxDepth) unit_009C(c, 427u, depth + 1u); else { c.pc = 0x00373180u; return; } if (c.pc != 0x00372F70u) [[unlikely]] return; }
L_00372F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372F88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 284u), 0u);
    c.budget -= 4;
L_00372F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00372F8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x00372FB4u) [[unlikely]] return; }
L_00372FB4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00372FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00372FECu) [[unlikely]] return; }
L_00372FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00373008; } }
L_00372FF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00373008:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372FF4u | kUnwind; return; } goto L_00372FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373020u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373020u) [[unlikely]] return; }
L_00373020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00373050; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00373034; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00373034:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373050u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00373050u) [[unlikely]] return; }
L_00373050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00373074u) [[unlikely]] return; }
L_00373074:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 264u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003730AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 268u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 208u);  if (t) { goto L_003730E0; } }
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003730DC; } }
L_003730AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 268u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003730DC; } }
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003730DC:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 1;
L_003730E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003730E8u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003730E8u) [[unlikely]] return; }
L_003730E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373124; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373120; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 57u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373124; } }
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00373124; } }
L_00373120:
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 1;
L_00373124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373140:
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00373154; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00373154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00373160:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00373174; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00373174:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00373180:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 196u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00373190; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00373190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003731A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003731D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003731D0u) [[unlikely]] return; }
L_003731D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037326C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4032u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003731F8u) [[unlikely]] return; }
L_003731F8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00373218; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00373250; } }
L_00373218:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373224u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00373224u) [[unlikely]] return; }
L_00373224:
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 9u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373248u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x00373248u) [[unlikely]] return; }
L_00373248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00373270; } }
L_00373250:
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 118u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037326Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x0037326Cu) [[unlikely]] return; }
L_0037326C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00373270:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00373290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003732D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x003732D0u) [[unlikely]] return; }
L_003732D0:
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003732DCu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x003732DCu) [[unlikely]] return; }
L_003732DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32208u);
    set32(c.r[3], c.r[3].w[0] + 32296u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32356u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373318u); st32((c.r[19].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00373318u) [[unlikely]] return; }
L_00373318:
    st32((c.r[19].w[0] + 172u), 0u);
    set32(c.r[4], 0u + 124u);
    st32((c.r[19].w[0] + 180u), 0u);
    st32((c.r[19].w[0] + 184u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 232u), 0u);
    st32((c.r[19].w[0] + 236u), 0u);
    st32((c.r[19].w[0] + 240u), 0u);
    st32((c.r[19].w[0] + 244u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373340u); st32((c.r[19].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373340u) [[unlikely]] return; }
L_00373340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0037338C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[14] = ld32((c.r[1].w[0] - 3776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[4].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[8], c.r[8].w[0] - 3984u);
    set32(c.r[9], c.r[9].w[0] - 3952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 3784u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037338Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0037338Cu) [[unlikely]] return; }
L_0037338C:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037339Cu); set32(c.r[5], 0u + 72u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0037339Cu) [[unlikely]] return; }
L_0037339C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003733ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003733ACu) [[unlikely]] return; }
L_003733AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003733B8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 192u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003733B8u | kUnwind; return; } goto L_003733B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733DCu); set32(c.r[4], ld32((c.r[19].w[0] + 184u)));  if (depth < kMaxDepth) unit_0088(c, 560u, depth + 1u); else { c.pc = 0x00323760u; return; } if (c.pc != 0x003733DCu) [[unlikely]] return; }
L_003733DC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 188u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00373400; } }
    set32(c.r[2], 0u + 10u);
    st32((c.r[19].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 2;
L_00373400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 188u)));  if (t) { goto L_00373588; } }
L_00373408:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373414u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 562u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x00373414u) [[unlikely]] return; }
L_00373414:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00373424; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_00373424:
    set32(c.r[3], ld32((c.r[19].w[0] + 184u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0037343C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_00373500; } }
L_0037343C:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373448u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 557u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x00373448u) [[unlikely]] return; }
L_00373448:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373458u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 553u, depth + 1u); else { c.pc = 0x003235F0u; return; } if (c.pc != 0x00373458u) [[unlikely]] return; }
L_00373458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373460u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373460u) [[unlikely]] return; }
L_00373460:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003734F0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037347Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 553u, depth + 1u); else { c.pc = 0x003235F0u; return; } if (c.pc != 0x0037347Cu) [[unlikely]] return; }
L_0037347C:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373490u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 553u, depth + 1u); else { c.pc = 0x003235F0u; return; } if (c.pc != 0x00373490u) [[unlikely]] return; }
L_00373490:
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 557u, depth + 1u); else { c.pc = 0x003236C0u; return; } if (c.pc != 0x003734A0u) [[unlikely]] return; }
L_003734A0:
    c.f[1] = c.r[17].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 188u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734ECu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009D(c, 232u, depth + 1u); else { c.pc = 0x003764A0u; return; } if (c.pc != 0x003734ECu) [[unlikely]] return; }
L_003734EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003734F0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 192u), c.r[16].w[0]);  if (t) { goto L_00373580; } }
L_00373500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373508u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373508u) [[unlikely]] return; }
L_00373508:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00373574; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373524u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 553u, depth + 1u); else { c.pc = 0x003235F0u; return; } if (c.pc != 0x00373524u) [[unlikely]] return; }
L_00373524:
    c.f[1] = c.r[17].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 188u)));
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373570u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009D(c, 232u, depth + 1u); else { c.pc = 0x003764A0u; return; } if (c.pc != 0x00373570u) [[unlikely]] return; }
L_00373570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00373574:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[16].w[0]);
    c.budget -= 3;
L_00373580:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 188u)));
    c.budget -= 2;
L_00373588:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373408u | kUnwind; return; } goto L_00373408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037359Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0037359Cu) [[unlikely]] return; }
L_0037359C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003735D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0037378C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 32208u);
    set32(c.r[3], c.r[3].w[0] + 32296u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32356u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00373650; } }
L_00373620:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 192u);  if (t) { goto L_00373648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373648; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373648u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373648u) [[unlikely]] return; }
L_00373648:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00373650:
    set32(c.r[2], ld32((c.r[18].w[0] + 188u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373620u | kUnwind; return; } goto L_00373620; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373684; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373684; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373684u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373684u) [[unlikely]] return; }
L_00373684:
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003736ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003736ACu) [[unlikely]] return; }
L_003736AC:
    st32((c.r[18].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736D4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003736D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003736D4u) [[unlikely]] return; }
L_003736D4:
    st32((c.r[18].w[0] + 172u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003736FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003736FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003736FCu) [[unlikely]] return; }
L_003736FC:
    st32((c.r[18].w[0] + 180u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 244u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373724; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373724u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373724u) [[unlikely]] return; }
L_00373724:
    st32((c.r[18].w[0] + 244u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037374C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037374C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037374Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037374Cu) [[unlikely]] return; }
L_0037374C:
    set32(c.r[4], c.r[18].w[0] + 136u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037375Cu); st32((c.r[18].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0037375Cu) [[unlikely]] return; }
L_0037375C:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00373768u) [[unlikely]] return; }
L_00373768:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00373774u) [[unlikely]] return; }
L_00373774:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00373790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037378Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0037378Cu) [[unlikely]] return; }
L_0037378C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00373790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003737B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003737C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003737DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x003737DCu) [[unlikely]] return; }
L_003737DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003737E4u); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x003737E4u) [[unlikely]] return; }
L_003737E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_00373844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373800u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373800u) [[unlikely]] return; }
L_00373800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00373814; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373814u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00373814u) [[unlikely]] return; }
L_00373814:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373824u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00373824u) [[unlikely]] return; }
L_00373824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373834u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00373834u) [[unlikely]] return; }
L_00373834:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373844u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00373844u) [[unlikely]] return; }
L_00373844:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373858u); set32(c.r[5], 0u + 157u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373858u) [[unlikely]] return; }
L_00373858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373860u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 509u, depth + 1u); else { c.pc = 0x00373BB0u; return; } if (c.pc != 0x00373860u) [[unlikely]] return; }
L_00373860:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037386Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0037386Cu) [[unlikely]] return; }
L_0037386C:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373878u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373878u) [[unlikely]] return; }
L_00373878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003738A0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 184u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], 0u + 118u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003738A0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 150u, depth + 1u); else { c.pc = 0x00375570u; return; } if (c.pc != 0x003738A0u) [[unlikely]] return; }
L_003738A0:
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003738B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 562u, depth + 1u); else { c.pc = 0x003237A0u; return; } if (c.pc != 0x003738B0u) [[unlikely]] return; }
L_003738B0:
    set32(c.r[7], ld32((c.r[17].w[0] + 184u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003738D0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00373908; } }
L_003738D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003738DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x003738DCu) [[unlikely]] return; }
L_003738DC:
    set32(c.r[7], ld32((c.r[17].w[0] + 184u)));
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373900u); set32(c.r[9], c.r[2].w[0] + 9u);  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x00373900u) [[unlikely]] return; }
L_00373900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 232u)));  if (t) { goto L_00373928; } }
L_00373908:
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[8], 0u + 118u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373924u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 211u, depth + 1u); else { c.pc = 0x003761E0u; return; } if (c.pc != 0x00373924u) [[unlikely]] return; }
L_00373924:
    set32(c.r[3], ld32((c.r[17].w[0] + 232u)));
    c.budget -= 1;
L_00373928:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00373ABC; } }
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373940u); set32(c.r[16], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373940u) [[unlikely]] return; }
L_00373940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00373954; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373954u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00373954u) [[unlikely]] return; }
L_00373954:
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373964u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00373964u) [[unlikely]] return; }
L_00373964:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373974u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00373974u) [[unlikely]] return; }
L_00373974:
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373984u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00373984u) [[unlikely]] return; }
L_00373984:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = ld32((c.r[1].w[0] - 3800u));
    set32(c.r[7], ld32((c.r[17].w[0] + 244u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[1].w[0] - 3800u));
    st32((c.r[7].w[0] + 116u), c.f[1]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003739ECu); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003739ECu) [[unlikely]] return; }
L_003739EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[4], 0u + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003739FCu); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003739FCu) [[unlikely]] return; }
L_003739FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00373A10; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A10u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00373A10u) [[unlikely]] return; }
L_00373A10:
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A20u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00373A20u) [[unlikely]] return; }
L_00373A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A30u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00373A30u) [[unlikely]] return; }
L_00373A30:
    set32(c.r[4], ld32((c.r[17].w[0] + 248u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A40u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00373A40u) [[unlikely]] return; }
L_00373A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[2] = ld32((c.r[1].w[0] - 3800u));
    set32(c.r[7], ld32((c.r[17].w[0] + 248u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], 0u + 395u);
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[7].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[1].w[0] - 3800u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[7].w[0] + 116u), c.f[2]);
    st32((c.r[7].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 124u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    st32((c.r[2].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    st32((c.r[2].w[0] + 108u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373AB0u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373AB0u) [[unlikely]] return; }
L_00373AB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00373ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00373AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00373AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00373B04u) [[unlikely]] return; }
L_00373B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x00373B0Cu) [[unlikely]] return; }
L_00373B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B14u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00373B14u) [[unlikely]] return; }
L_00373B14:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B28u); set32(c.r[5], 0u + 158u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373B28u) [[unlikely]] return; }
L_00373B28:
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00373B50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373B4C; } }
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 248u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00373B4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00373B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B58u);  if (depth < kMaxDepth) unit_009C(c, 507u, depth + 1u); else { c.pc = 0x00373B70u; return; } if (c.pc != 0x00373B58u) [[unlikely]] return; }
L_00373B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3264u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 136u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B9Cu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00373B9Cu) [[unlikely]] return; }
L_00373B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00373BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3296u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 136u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373BDCu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00373BDCu) [[unlikely]] return; }
L_00373BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00373BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C18u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00373C18u) [[unlikely]] return; }
L_00373C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00373C24; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00373C24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00373C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C34u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00373C34u) [[unlikely]] return; }
L_00373C34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00373C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x73720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C4Cu); c.r[4].d[0] = c.r[2].d[0] | 25955ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00373C4Cu) [[unlikely]] return; }
L_00373C4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00373C58u) [[unlikely]] return; }
L_00373C58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C64u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00373C64u) [[unlikely]] return; }
L_00373C64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00373C68:
    st32((c.r[17].w[0] + 172u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373C7Cu) [[unlikely]] return; }
L_00373C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00373C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 14u, depth + 1u); else { c.pc = 0x003741B0u; return; } if (c.pc != 0x00373CA4u) [[unlikely]] return; }
L_00373CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373CBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373CBCu) [[unlikely]] return; }
L_00373CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 14u, depth + 1u); else { c.pc = 0x003741B0u; return; } if (c.pc != 0x00373CE4u) [[unlikely]] return; }
L_00373CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373CFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373CFCu) [[unlikely]] return; }
L_00373CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 14u, depth + 1u); else { c.pc = 0x003741B0u; return; } if (c.pc != 0x00373D24u) [[unlikely]] return; }
L_00373D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373D3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373D3Cu) [[unlikely]] return; }
L_00373D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00373D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00373D7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_009D(c, 3u, depth); } }
L_00373D7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));  if (t) { goto L_00373EA8; } }
    c.r[4].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373E14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_00373E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DB0u); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00373DB0u) [[unlikely]] return; }
L_00373DB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DC4u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373DC4u) [[unlikely]] return; }
L_00373DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 244u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
L_00373E14:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 1;
L_00373E18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373E3Cu); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00373E3Cu) [[unlikely]] return; }
L_00373E3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 248u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373E50u); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373E50u) [[unlikely]] return; }
L_00373E50:
    set32(c.r[4], 0u + 395u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 248u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
L_00373EA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00373F88; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00373F20; } }
L_00373EC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00373ED8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00373EFC; } }
L_00373ED8:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.f[0] = ld32((c.r[1].w[0] - 3808u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.f[0]);  if (t) { goto L_00373F1C; } }
L_00373EFC:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.f[0] = ld32((c.r[1].w[0] - 3816u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_00373F1C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00373F20:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373EC4u | kUnwind; return; } goto L_00373EC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 624u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[1].w[0] - 624u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 624u)));
    c.r[3].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[1].w[0] - 624u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00373F88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_009D(c, 2u, depth); } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00373FF8; } }
L_00373F9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00373FB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00373FD4; } }
L_00373FB0:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.f[0] = ld32((c.r[1].w[0] - 3824u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.f[0]);  if (t) { goto L_00373FF4; } }
L_00373FD4:
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.f[0] = ld32((c.r[1].w[0] - 3832u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_00373FF4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00373FF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 188u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_009D(c, 1u, depth);
}

}
