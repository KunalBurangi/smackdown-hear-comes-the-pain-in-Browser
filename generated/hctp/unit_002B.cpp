#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52,
    0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0,
    232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0,
    327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0,
    403, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 0,
    0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001AC000;
    case 2u: goto L_001AC008;
    case 3u: goto L_001AC020;
    case 4u: goto L_001AC040;
    case 5u: goto L_001AC050;
    case 6u: goto L_001AC060;
    case 7u: goto L_001AC070;
    case 8u: goto L_001AC080;
    case 9u: goto L_001AC090;
    case 10u: goto L_001AC0A0;
    case 11u: goto L_001AC0B0;
    case 12u: goto L_001AC0C0;
    case 13u: goto L_001AC0D0;
    case 14u: goto L_001AC0E0;
    case 15u: goto L_001AC0F0;
    case 16u: goto L_001AC100;
    case 17u: goto L_001AC110;
    case 18u: goto L_001AC120;
    case 19u: goto L_001AC130;
    case 20u: goto L_001AC148;
    case 21u: goto L_001AC164;
    case 22u: goto L_001AC180;
    case 23u: goto L_001AC1A0;
    case 24u: goto L_001AC1C0;
    case 25u: goto L_001AC1E8;
    case 26u: goto L_001AC200;
    case 27u: goto L_001AC238;
    case 28u: goto L_001AC250;
    case 29u: goto L_001AC270;
    case 30u: goto L_001AC2AC;
    case 31u: goto L_001AC2DC;
    case 32u: goto L_001AC2F4;
    case 33u: goto L_001AC308;
    case 34u: goto L_001AC310;
    case 35u: goto L_001AC31C;
    case 36u: goto L_001AC3C8;
    case 37u: goto L_001AC3F0;
    case 38u: goto L_001AC424;
    case 39u: goto L_001AC454;
    case 40u: goto L_001AC4A0;
    case 41u: goto L_001AC4D4;
    case 42u: goto L_001AC4DC;
    case 43u: goto L_001AC4E4;
    case 44u: goto L_001AC4EC;
    case 45u: goto L_001AC50C;
    case 46u: goto L_001AC52C;
    case 47u: goto L_001AC54C;
    case 48u: goto L_001AC56C;
    case 49u: goto L_001AC658;
    case 50u: goto L_001AC664;
    case 51u: goto L_001AC670;
    case 52u: goto L_001AC67C;
    case 53u: goto L_001AC688;
    case 54u: goto L_001AC694;
    case 55u: goto L_001AC6AC;
    case 56u: goto L_001AC6B4;
    case 57u: goto L_001AC6BC;
    case 58u: goto L_001AC6C8;
    case 59u: goto L_001AC6D0;
    case 60u: goto L_001AC714;
    case 61u: goto L_001AC778;
    case 62u: goto L_001AC7DC;
    case 63u: goto L_001AC810;
    case 64u: goto L_001AC848;
    case 65u: goto L_001AC8AC;
    case 66u: goto L_001AC900;
    case 67u: goto L_001AC920;
    case 68u: goto L_001AC940;
    case 69u: goto L_001AC980;
    case 70u: goto L_001AC9C8;
    case 71u: goto L_001AC9D8;
    case 72u: goto L_001AC9F0;
    case 73u: goto L_001ACA10;
    case 74u: goto L_001ACA2C;
    case 75u: goto L_001ACA40;
    case 76u: goto L_001ACA54;
    case 77u: goto L_001ACA6C;
    case 78u: goto L_001ACA7C;
    case 79u: goto L_001ACA90;
    case 80u: goto L_001ACAB0;
    case 81u: goto L_001ACAC4;
    case 82u: goto L_001ACB00;
    case 83u: goto L_001ACB44;
    case 84u: goto L_001ACB5C;
    case 85u: goto L_001ACB80;
    case 86u: goto L_001ACB9C;
    case 87u: goto L_001ACBA4;
    case 88u: goto L_001ACBB4;
    case 89u: goto L_001ACBBC;
    case 90u: goto L_001ACBD0;
    case 91u: goto L_001ACC08;
    case 92u: goto L_001ACC1C;
    case 93u: goto L_001ACC2C;
    case 94u: goto L_001ACC38;
    case 95u: goto L_001ACC50;
    case 96u: goto L_001ACC9C;
    case 97u: goto L_001ACCBC;
    case 98u: goto L_001ACCE0;
    case 99u: goto L_001ACD1C;
    case 100u: goto L_001ACD40;
    case 101u: goto L_001ACD80;
    case 102u: goto L_001ACDB4;
    case 103u: goto L_001ACDC0;
    case 104u: goto L_001ACDDC;
    case 105u: goto L_001ACDF0;
    case 106u: goto L_001ACE44;
    case 107u: goto L_001ACE80;
    case 108u: goto L_001ACE88;
    case 109u: goto L_001ACEFC;
    case 110u: goto L_001ACF68;
    case 111u: goto L_001ACF98;
    case 112u: goto L_001ACFB4;
    case 113u: goto L_001ACFD8;
    case 114u: goto L_001AD01C;
    case 115u: goto L_001AD030;
    case 116u: goto L_001AD058;
    case 117u: goto L_001AD080;
    case 118u: goto L_001AD09C;
    case 119u: goto L_001AD0A4;
    case 120u: goto L_001AD0B4;
    case 121u: goto L_001AD0BC;
    case 122u: goto L_001AD0D0;
    case 123u: goto L_001AD108;
    case 124u: goto L_001AD120;
    case 125u: goto L_001AD130;
    case 126u: goto L_001AD13C;
    case 127u: goto L_001AD160;
    case 128u: goto L_001AD1AC;
    case 129u: goto L_001AD1CC;
    case 130u: goto L_001AD1F0;
    case 131u: goto L_001AD248;
    case 132u: goto L_001AD26C;
    case 133u: goto L_001AD284;
    case 134u: goto L_001AD2A0;
    case 135u: goto L_001AD308;
    case 136u: goto L_001AD31C;
    case 137u: goto L_001AD330;
    case 138u: goto L_001AD350;
    case 139u: goto L_001AD36C;
    case 140u: goto L_001AD380;
    case 141u: goto L_001AD3CC;
    case 142u: goto L_001AD3F0;
    case 143u: goto L_001AD404;
    case 144u: goto L_001AD414;
    case 145u: goto L_001AD450;
    case 146u: goto L_001AD490;
    case 147u: goto L_001AD4C8;
    case 148u: goto L_001AD4DC;
    case 149u: goto L_001AD504;
    case 150u: goto L_001AD530;
    case 151u: goto L_001AD570;
    case 152u: goto L_001AD590;
    case 153u: goto L_001AD5CC;
    case 154u: goto L_001AD5F0;
    case 155u: goto L_001AD630;
    case 156u: goto L_001AD670;
    case 157u: goto L_001AD690;
    case 158u: goto L_001AD70C;
    case 159u: goto L_001AD730;
    case 160u: goto L_001AD760;
    case 161u: goto L_001AD790;
    case 162u: goto L_001AD7D8;
    case 163u: goto L_001AD7E4;
    case 164u: goto L_001AD800;
    case 165u: goto L_001AD838;
    case 166u: goto L_001AD850;
    case 167u: goto L_001AD874;
    case 168u: goto L_001AD8CC;
    case 169u: goto L_001AD8E4;
    case 170u: goto L_001AD8F8;
    case 171u: goto L_001AD908;
    case 172u: goto L_001AD944;
    case 173u: goto L_001AD958;
    case 174u: goto L_001AD980;
    case 175u: goto L_001AD9B0;
    case 176u: goto L_001AD9D0;
    case 177u: goto L_001ADA24;
    case 178u: goto L_001ADA3C;
    case 179u: goto L_001ADA54;
    case 180u: goto L_001ADA6C;
    case 181u: goto L_001ADA90;
    case 182u: goto L_001ADAB0;
    case 183u: goto L_001ADAC0;
    case 184u: goto L_001ADAE0;
    case 185u: goto L_001ADAF0;
    case 186u: goto L_001ADB14;
    case 187u: goto L_001ADB40;
    case 188u: goto L_001ADB54;
    case 189u: goto L_001ADB5C;
    case 190u: goto L_001ADB70;
    case 191u: goto L_001ADB78;
    case 192u: goto L_001ADB8C;
    case 193u: goto L_001ADB94;
    case 194u: goto L_001ADBA8;
    case 195u: goto L_001ADBB0;
    case 196u: goto L_001ADBC4;
    case 197u: goto L_001ADBCC;
    case 198u: goto L_001ADBE0;
    case 199u: goto L_001ADBFC;
    case 200u: goto L_001ADC04;
    case 201u: goto L_001ADC24;
    case 202u: goto L_001ADC38;
    case 203u: goto L_001ADC50;
    case 204u: goto L_001ADC88;
    case 205u: goto L_001ADC9C;
    case 206u: goto L_001ADCA4;
    case 207u: goto L_001ADCB8;
    case 208u: goto L_001ADCC0;
    case 209u: goto L_001ADCD4;
    case 210u: goto L_001ADCDC;
    case 211u: goto L_001ADCF0;
    case 212u: goto L_001ADCF8;
    case 213u: goto L_001ADD0C;
    case 214u: goto L_001ADD14;
    case 215u: goto L_001ADD28;
    case 216u: goto L_001ADD30;
    case 217u: goto L_001ADD4C;
    case 218u: goto L_001ADD5C;
    case 219u: goto L_001ADD70;
    case 220u: goto L_001ADD80;
    case 221u: goto L_001ADDA8;
    case 222u: goto L_001ADDB0;
    case 223u: goto L_001ADDB8;
    case 224u: goto L_001ADDC0;
    case 225u: goto L_001ADDC8;
    case 226u: goto L_001ADDD0;
    case 227u: goto L_001ADDD8;
    case 228u: goto L_001ADDE0;
    case 229u: goto L_001ADDE8;
    case 230u: goto L_001ADDF0;
    case 231u: goto L_001ADDF8;
    case 232u: goto L_001ADE00;
    case 233u: goto L_001ADE08;
    case 234u: goto L_001ADE10;
    case 235u: goto L_001ADE3C;
    case 236u: goto L_001ADE54;
    case 237u: goto L_001ADE5C;
    case 238u: goto L_001ADE74;
    case 239u: goto L_001ADE7C;
    case 240u: goto L_001ADE94;
    case 241u: goto L_001ADE9C;
    case 242u: goto L_001ADEB4;
    case 243u: goto L_001ADEBC;
    case 244u: goto L_001ADED4;
    case 245u: goto L_001ADEDC;
    case 246u: goto L_001ADEF4;
    case 247u: goto L_001ADF10;
    case 248u: goto L_001ADF30;
    case 249u: goto L_001ADF44;
    case 250u: goto L_001ADF60;
    case 251u: goto L_001ADF70;
    case 252u: goto L_001ADF80;
    case 253u: goto L_001ADFA0;
    case 254u: goto L_001ADFB0;
    case 255u: goto L_001AE038;
    case 256u: goto L_001AE05C;
    case 257u: goto L_001AE070;
    case 258u: goto L_001AE080;
    case 259u: goto L_001AE0A0;
    case 260u: goto L_001AE0BC;
    case 261u: goto L_001AE0E0;
    case 262u: goto L_001AE0F0;
    case 263u: goto L_001AE110;
    case 264u: goto L_001AE124;
    case 265u: goto L_001AE12C;
    case 266u: goto L_001AE13C;
    case 267u: goto L_001AE180;
    case 268u: goto L_001AE188;
    case 269u: goto L_001AE194;
    case 270u: goto L_001AE1A4;
    case 271u: goto L_001AE1B0;
    case 272u: goto L_001AE210;
    case 273u: goto L_001AE260;
    case 274u: goto L_001AE274;
    case 275u: goto L_001AE2A8;
    case 276u: goto L_001AE2B0;
    case 277u: goto L_001AE2B8;
    case 278u: goto L_001AE2C0;
    case 279u: goto L_001AE2D0;
    case 280u: goto L_001AE2F0;
    case 281u: goto L_001AE348;
    case 282u: goto L_001AE35C;
    case 283u: goto L_001AE374;
    case 284u: goto L_001AE390;
    case 285u: goto L_001AE3A0;
    case 286u: goto L_001AE3B8;
    case 287u: goto L_001AE3C4;
    case 288u: goto L_001AE3DC;
    case 289u: goto L_001AE3F8;
    case 290u: goto L_001AE420;
    case 291u: goto L_001AE43C;
    case 292u: goto L_001AE44C;
    case 293u: goto L_001AE468;
    case 294u: goto L_001AE470;
    case 295u: goto L_001AE480;
    case 296u: goto L_001AE494;
    case 297u: goto L_001AE4B0;
    case 298u: goto L_001AE4C0;
    case 299u: goto L_001AE4C8;
    case 300u: goto L_001AE4E0;
    case 301u: goto L_001AE500;
    case 302u: goto L_001AE51C;
    case 303u: goto L_001AE524;
    case 304u: goto L_001AE538;
    case 305u: goto L_001AE548;
    case 306u: goto L_001AE558;
    case 307u: goto L_001AE560;
    case 308u: goto L_001AE570;
    case 309u: goto L_001AE584;
    case 310u: goto L_001AE594;
    case 311u: goto L_001AE5A8;
    case 312u: goto L_001AE5C0;
    case 313u: goto L_001AE5F0;
    case 314u: goto L_001AE620;
    case 315u: goto L_001AE650;
    case 316u: goto L_001AE680;
    case 317u: goto L_001AE6B0;
    case 318u: goto L_001AE6C0;
    case 319u: goto L_001AE6D0;
    case 320u: goto L_001AE708;
    case 321u: goto L_001AE724;
    case 322u: goto L_001AE750;
    case 323u: goto L_001AE760;
    case 324u: goto L_001AE768;
    case 325u: goto L_001AE770;
    case 326u: goto L_001AE778;
    case 327u: goto L_001AE780;
    case 328u: goto L_001AE79C;
    case 329u: goto L_001AE7C8;
    case 330u: goto L_001AE7F4;
    case 331u: goto L_001AE810;
    case 332u: goto L_001AE820;
    case 333u: goto L_001AE830;
    case 334u: goto L_001AE838;
    case 335u: goto L_001AE850;
    case 336u: goto L_001AE860;
    case 337u: goto L_001AE868;
    case 338u: goto L_001AE880;
    case 339u: goto L_001AE890;
    case 340u: goto L_001AE8AC;
    case 341u: goto L_001AE8B4;
    case 342u: goto L_001AE8BC;
    case 343u: goto L_001AE8C4;
    case 344u: goto L_001AE8E0;
    case 345u: goto L_001AE8F0;
    case 346u: goto L_001AE900;
    case 347u: goto L_001AE910;
    case 348u: goto L_001AE93C;
    case 349u: goto L_001AE9C0;
    case 350u: goto L_001AE9D0;
    case 351u: goto L_001AE9EC;
    case 352u: goto L_001AEA00;
    case 353u: goto L_001AEA08;
    case 354u: goto L_001AEA28;
    case 355u: goto L_001AEA3C;
    case 356u: goto L_001AEA78;
    case 357u: goto L_001AEA8C;
    case 358u: goto L_001AEAA0;
    case 359u: goto L_001AEADC;
    case 360u: goto L_001AEB10;
    case 361u: goto L_001AEB2C;
    case 362u: goto L_001AEB68;
    case 363u: goto L_001AEB7C;
    case 364u: goto L_001AEB98;
    case 365u: goto L_001AEBF4;
    case 366u: goto L_001AEC0C;
    case 367u: goto L_001AEC44;
    case 368u: goto L_001AEC4C;
    case 369u: goto L_001AEC64;
    case 370u: goto L_001AECB0;
    case 371u: goto L_001AECC8;
    case 372u: goto L_001AECF8;
    case 373u: goto L_001AED1C;
    case 374u: goto L_001AED34;
    case 375u: goto L_001AED90;
    case 376u: goto L_001AEDBC;
    case 377u: goto L_001AEDF0;
    case 378u: goto L_001AEE10;
    case 379u: goto L_001AEE20;
    case 380u: goto L_001AEE30;
    case 381u: goto L_001AEE4C;
    case 382u: goto L_001AEE54;
    case 383u: goto L_001AEEFC;
    case 384u: goto L_001AEF20;
    case 385u: goto L_001AEF28;
    case 386u: goto L_001AEF30;
    case 387u: goto L_001AEF38;
    case 388u: goto L_001AEF54;
    case 389u: goto L_001AEF5C;
    case 390u: goto L_001AEF64;
    case 391u: goto L_001AEF6C;
    case 392u: goto L_001AEF88;
    case 393u: goto L_001AEFA4;
    case 394u: goto L_001AEFC0;
    case 395u: goto L_001AEFDC;
    case 396u: goto L_001AEFE4;
    case 397u: goto L_001AEFEC;
    case 398u: goto L_001AEFF4;
    case 399u: goto L_001AF010;
    case 400u: goto L_001AF02C;
    case 401u: goto L_001AF048;
    case 402u: goto L_001AF064;
    case 403u: goto L_001AF080;
    case 404u: goto L_001AF088;
    case 405u: goto L_001AF090;
    case 406u: goto L_001AF098;
    case 407u: goto L_001AF0B4;
    case 408u: goto L_001AF0D0;
    case 409u: goto L_001AF0D8;
    case 410u: goto L_001AF0E0;
    case 411u: goto L_001AF0E8;
    case 412u: goto L_001AF104;
    case 413u: goto L_001AF10C;
    case 414u: goto L_001AF114;
    case 415u: goto L_001AF11C;
    case 416u: goto L_001AF138;
    case 417u: goto L_001AF154;
    case 418u: goto L_001AF170;
    case 419u: goto L_001AF18C;
    case 420u: goto L_001AF194;
    case 421u: goto L_001AF19C;
    case 422u: goto L_001AF1A4;
    case 423u: goto L_001AF1C0;
    case 424u: goto L_001AF1DC;
    case 425u: goto L_001AF1F8;
    case 426u: goto L_001AF214;
    case 427u: goto L_001AF230;
    case 428u: goto L_001AF238;
    case 429u: goto L_001AF240;
    case 430u: goto L_001AF248;
    case 431u: goto L_001AF264;
    case 432u: goto L_001AF280;
    case 433u: goto L_001AF29C;
    case 434u: goto L_001AF2B8;
    case 435u: goto L_001AF2C0;
    case 436u: goto L_001AF2C8;
    case 437u: goto L_001AF2D0;
    case 438u: goto L_001AF2EC;
    case 439u: goto L_001AF2F4;
    case 440u: goto L_001AF308;
    case 441u: goto L_001AF334;
    case 442u: goto L_001AF350;
    case 443u: goto L_001AF36C;
    case 444u: goto L_001AF374;
    case 445u: goto L_001AF390;
    case 446u: goto L_001AF3AC;
    case 447u: goto L_001AF3B4;
    case 448u: goto L_001AF3D0;
    case 449u: goto L_001AF3EC;
    case 450u: goto L_001AF3F4;
    case 451u: goto L_001AF410;
    case 452u: goto L_001AF42C;
    case 453u: goto L_001AF434;
    case 454u: goto L_001AF450;
    case 455u: goto L_001AF46C;
    case 456u: goto L_001AF474;
    case 457u: goto L_001AF490;
    case 458u: goto L_001AF4B0;
    case 459u: goto L_001AF4CC;
    case 460u: goto L_001AF4EC;
    case 461u: goto L_001AF508;
    case 462u: goto L_001AF524;
    case 463u: goto L_001AF540;
    case 464u: goto L_001AF54C;
    case 465u: goto L_001AF560;
    case 466u: goto L_001AF58C;
    case 467u: goto L_001AF5E4;
    case 468u: goto L_001AF614;
    case 469u: goto L_001AF628;
    case 470u: goto L_001AF63C;
    case 471u: goto L_001AF648;
    case 472u: goto L_001AF66C;
    case 473u: goto L_001AF694;
    case 474u: goto L_001AF6C4;
    case 475u: goto L_001AF708;
    case 476u: goto L_001AF714;
    case 477u: goto L_001AF724;
    case 478u: goto L_001AF8E4;
    case 479u: goto L_001AF914;
    case 480u: goto L_001AF954;
    case 481u: goto L_001AF964;
    case 482u: goto L_001AFA70;
    case 483u: goto L_001AFAA0;
    case 484u: goto L_001AFAE0;
    case 485u: goto L_001AFAF8;
    case 486u: goto L_001AFBF0;
    case 487u: goto L_001AFC20;
    case 488u: goto L_001AFC60;
    case 489u: goto L_001AFC70;
    case 490u: goto L_001AFE1C;
    case 491u: goto L_001AFE4C;
    case 492u: goto L_001AFE8C;
    case 493u: goto L_001AFF88;
    case 494u: goto L_001AFFB8;
    case 495u: goto L_001AFFF8;
    default: bad_entry(c, 0x001AC000u); return;
    }
L_001AC000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC008u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 310u, depth + 1u); else { c.pc = 0x00196D20u; return; } if (c.pc != 0x001AC008u) [[unlikely]] return; }
L_001AC008:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AC024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AC020u) [[unlikely]] return; }
L_001AC020:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AC024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AC040:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABFC0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 379u, depth); }
L_001AC050:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABFC0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 379u, depth); }
L_001AC060:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CD20u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 118u, depth); }
L_001AC070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CD20u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 118u, depth); }
L_001AC080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABF40u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 376u, depth); }
L_001AC090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABF40u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 376u, depth); }
L_001AC0A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABEC0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 373u, depth); }
L_001AC0B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABEC0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 373u, depth); }
L_001AC0C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABE40u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 370u, depth); }
L_001AC0D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABE40u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 370u, depth); }
L_001AC0E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB960u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 334u, depth); }
L_001AC0F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB9E0u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 338u, depth); }
L_001AC100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001874F0u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 418u, depth); }
L_001AC110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001874F0u | kUnwind; return; } [[clang::musttail]] return unit_0021(c, 418u, depth); }
L_001AC120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC130u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001AC130u) [[unlikely]] return; }
L_001AC130:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC148u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001AC148u) [[unlikely]] return; }
L_001AC148:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 34u));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_001AC154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC164u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001AC164u) [[unlikely]] return; }
L_001AC164:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 13ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001AC170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC180u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001AC180u) [[unlikely]] return; }
L_001AC180:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 60ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001AC18C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AC1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 15696u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1C0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 52u, depth + 1u); else { c.pc = 0x00148880u; return; } if (c.pc != 0x001AC1C0u) [[unlikely]] return; }
L_001AC1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 10416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] + 26400u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1E8u); st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002B(c, 40u, depth + 1u); else { c.pc = 0x001AC4A0u; return; } if (c.pc != 0x001AC1E8u) [[unlikely]] return; }
L_001AC1E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AC250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC238u); st32((c.r[1].w[0] + 26400u), 0u);  if (depth < kMaxDepth) unit_0012(c, 59u, depth + 1u); else { c.pc = 0x00148930u; return; } if (c.pc != 0x001AC238u) [[unlikely]] return; }
L_001AC238:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AC254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AC250u) [[unlikely]] return; }
L_001AC250:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AC254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AC270:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2ACu); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AC2ACu) [[unlikely]] return; }
L_001AC2AC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20430000u);
    c.r[2].d[0] = c.r[2].d[0] | 16720ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_001AC2C8; } }
    set32(c.r[19], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001AC2C8:
    set32(c.r[2], 0u + 24u);
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2DCu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001AC2DCu) [[unlikely]] return; }
L_001AC2DC:
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[21].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2F4u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001AC2F4u) [[unlikely]] return; }
L_001AC2F4:
    st32((c.r[21].w[0] + 108u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001AC3AC; } }
L_001AC308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC310u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001AC310u) [[unlikely]] return; }
L_001AC310:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC31Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001AC31Cu) [[unlikely]] return; }
L_001AC31C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 254u);  if (t) { goto L_001AC358; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] << 3);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001AC3A8; } }
L_001AC358:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AC374; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[21].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_001AC3A8; } }
L_001AC374:
    set32(c.r[3], 0u + 253u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AC3A8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] << 3);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_001AC3A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AC3AC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC308u | kUnwind; return; } goto L_001AC308; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3C8u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AC3C8u) [[unlikely]] return; }
L_001AC3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001AC3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001AC48C; } }
L_001AC410:
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[16], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001AC440; } }
L_001AC424:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001AC438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[6].w[0] + 2u));  if (t) { goto L_001AC44C; } }
L_001AC438:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 2;
L_001AC440:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC424u | kUnwind; return; } goto L_001AC424; } }
L_001AC44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC454u);  if (depth < kMaxDepth) unit_002B(c, 349u, depth + 1u); else { c.pc = 0x001AE9C0u; return; } if (c.pc != 0x001AC454u) [[unlikely]] return; }
L_001AC454:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AC484; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AC488; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001AC484; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001AC484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001AC488; } }
L_001AC484:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AC488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001AC48C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC4A0:
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 15744u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AC4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_001AC6C8; } }
L_001AC4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_001AC6C8; } }
L_001AC4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_001AC6C8; } }
L_001AC4EC:
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[3], 0u + 20u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], 0u + 21u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC50C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], 0u + 20u);
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[5].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC52C:
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], 0u + 20u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC54C:
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[3], 0u + 20u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], 0u + 21u);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC56C:
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.r[1].d[0] = c.r[3].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001AC580; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001AC580:
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], 0u + 35u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AC614; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_001AC60C; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_001AC604; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_001AC5FC; } }
    set32(c.r[3], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 10u);  if (t) { goto L_001AC5F4; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_001AC5EC; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001AC5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001AC620; } }
L_001AC5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC614:
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_001AC624; } }
L_001AC620:
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_001AC624:
    set32(c.r[3], 0u + 18u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] - 30u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AC6A0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15712u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AC658:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC664:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC670:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC67C:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC688:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC694:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC6A0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AC6C8; } }
L_001AC6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_001AC6C8; } }
L_001AC6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_001AC6C8; } }
L_001AC6BC:
    st32((c.r[4].w[0] + 68u), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_001AC6C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AC6D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001AC70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC7E4; } }
L_001AC70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC714u);  if (depth < kMaxDepth) unit_002B(c, 37u, depth + 1u); else { c.pc = 0x001AC3F0u; return; } if (c.pc != 0x001AC714u) [[unlikely]] return; }
L_001AC714:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001AC738; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC73C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_001AC744; } }
L_001AC738:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AC73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001AC7E8; } }
L_001AC744:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001AC75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC7E4; } }
L_001AC75C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_001AC7B0; } }
L_001AC778:
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001AC7AC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC79C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC7B8; } }
L_001AC79C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001AC7AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC7B8; } }
L_001AC7AC:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_001AC7B0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], c.r[4].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC778u | kUnwind; return; } goto L_001AC778; } }
L_001AC7B8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_001AC7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC7E4; } }
L_001AC7CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7DCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001AC7DCu) [[unlikely]] return; }
L_001AC7DC:
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001AC7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001AC7E8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AC810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001AC840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC904; } }
L_001AC840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC848u);  if (depth < kMaxDepth) unit_002B(c, 37u, depth + 1u); else { c.pc = 0x001AC3F0u; return; } if (c.pc != 0x001AC848u) [[unlikely]] return; }
L_001AC848:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 5u);  if (t) { goto L_001AC858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC904; } }
L_001AC858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AC874; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AC874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC904; } }
L_001AC874:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_001AC890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC904; } }
L_001AC890:
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_001AC8D4; } }
L_001AC8AC:
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001AC8D0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC8DC; } }
L_001AC8D0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_001AC8D4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC8ACu | kUnwind; return; } goto L_001AC8AC; } }
L_001AC8DC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_001AC8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AC904; } }
L_001AC8F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC900u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001AC900u) [[unlikely]] return; }
L_001AC900:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AC904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AC920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 15808u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC940u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x001AC940u) [[unlikely]] return; }
L_001AC940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 10432u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[1].w[0] + 26408u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AC9F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 10432u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26408u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AC9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9C8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AC9C8u) [[unlikely]] return; }
L_001AC9C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9D8u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x001AC9D8u) [[unlikely]] return; }
L_001AC9D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AC9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AC9F0u) [[unlikely]] return; }
L_001AC9F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AC9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA2Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001ACA2Cu) [[unlikely]] return; }
L_001ACA2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA40u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACA40u) [[unlikely]] return; }
L_001ACA40:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA54u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001ACA54u) [[unlikely]] return; }
L_001ACA54:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA6Cu); set32(c.r[6], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001ACA6Cu) [[unlikely]] return; }
L_001ACA6C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA7Cu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACA7Cu) [[unlikely]] return; }
L_001ACA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ACA90:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));  c.pc = t; return; }
L_001ACAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 102u, depth + 1u); else { c.pc = 0x001B0F80u; return; } if (c.pc != 0x001ACAC4u) [[unlikely]] return; }
L_001ACAC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10496u);
    set32(c.r[3], c.r[3].w[0] - 10456u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] + 26416u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ACB5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 10496u);
    set32(c.r[2], c.r[2].w[0] - 10456u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB44u); st32((c.r[1].w[0] + 26416u), 0u);  if (depth < kMaxDepth) unit_002C(c, 105u, depth + 1u); else { c.pc = 0x001B0FF0u; return; } if (c.pc != 0x001ACB44u) [[unlikely]] return; }
L_001ACB44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ACB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ACB5Cu) [[unlikely]] return; }
L_001ACB5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ACB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB9Cu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACB9Cu) [[unlikely]] return; }
L_001ACB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBA4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001ACBA4u) [[unlikely]] return; }
L_001ACBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001ACBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 90u, depth + 1u); else { c.pc = 0x001ACBD0u; return; } if (c.pc != 0x001ACBB4u) [[unlikely]] return; }
L_001ACBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBBCu); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACBBCu) [[unlikely]] return; }
L_001ACBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACBD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10520u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC08u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACC08u) [[unlikely]] return; }
L_001ACC08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[1].w[0] + 26424u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC1Cu); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001ACC1Cu) [[unlikely]] return; }
L_001ACC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ACC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001ACC2Cu) [[unlikely]] return; }
L_001ACC2C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC38u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001ACC38u) [[unlikely]] return; }
L_001ACC38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ACC50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ACCBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10520u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001ACCA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ACC9C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC9Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACC9Cu) [[unlikely]] return; }
L_001ACC9C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001ACCA0:
    st32((c.r[17].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[1].w[0] + 26424u), 0u);  if (t) { goto L_001ACCBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ACCBCu) [[unlikely]] return; }
L_001ACCBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ACD2C; } }
L_001ACD00:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ACD28; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACD1Cu) [[unlikely]] return; }
L_001ACD1C:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001ACD2C; } }
L_001ACD28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ACD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ACD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 1000ll ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 4u), 0u);  if (t) { goto L_001ACD88; } }
    c.r[1].d[0] = c.r[5].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 2000ll ? 1ull : 0ull;  if (t) { goto L_001ACD8C; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] - 1000u);  if (t) { goto L_001ACDB4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD80u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ACD80u) [[unlikely]] return; }
L_001ACD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001ACDB8; } }
L_001ACD88:
    c.r[3].d[0] = c.r[5].sd[0] < 2000ll ? 1ull : 0ull;
    c.budget -= 1;
L_001ACD8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 3000ll ? 1ull : 0ull;  if (t) { goto L_001ACDB4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ACDB4; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] - 1960u);  if (t) { goto L_001ACDB4; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDB4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ACDB4u) [[unlikely]] return; }
L_001ACDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001ACDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ACDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ACDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDDCu);  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0EC0u; return; } if (c.pc != 0x001ACDDCu) [[unlikely]] return; }
L_001ACDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ACDF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31496u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACE4C; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACE44u) [[unlikely]] return; }
L_001ACE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001AD05C; } }
L_001ACE4C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_001ACE80; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26424u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACE80; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE80u); set32(c.r[5], 0u + 300u);  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0EC0u; return; } if (c.pc != 0x001ACE80u) [[unlikely]] return; }
L_001ACE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE88u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ACE88u) [[unlikely]] return; }
L_001ACE88:
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31456u)));
    c.r[1].d[0] = c.r[4].sd[0] < 3601ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD058; } }
    set32(c.r[3], 0u + 2700u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 26408u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26432u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001ACF2C; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_001ACEFC:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ACF28; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 26432u), c.r[3].w[0]);  if (t) { goto L_001ACF38; } }
L_001ACF28:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001ACF2C:
    c.r[3].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACEFCu | kUnwind; return; } goto L_001ACEFC; } }
L_001ACF38:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001ACF50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 26432u), 0u);  if (t) { goto L_001AD058; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001ACF50:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001ACF60; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 2;
L_001ACF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF68u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001ACF68u) [[unlikely]] return; }
L_001ACF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001ACF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001ACF7C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ACF7C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 386u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF98u); if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001ACF98u) [[unlikely]] return; }
L_001ACF98:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_001AD000; } }
L_001ACFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFB4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001ACFB4u) [[unlikely]] return; }
L_001ACFB4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_001AD000; } }
L_001ACFC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_001AD000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFD8u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x001ACFD8u) [[unlikely]] return; }
L_001ACFD8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_001ACFEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001ACFF0; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_001ACFEC:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ACFF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];  if (t) { goto L_001AD000; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_001AD000:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AD024; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD01Cu); set32(c.r[5], 0u + 86u);  if (depth < kMaxDepth) unit_002B(c, 79u, depth + 1u); else { c.pc = 0x001ACA90u; return; } if (c.pc != 0x001AD01Cu) [[unlikely]] return; }
L_001AD01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_001AD034; } }
L_001AD024:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 79u, depth + 1u); else { c.pc = 0x001ACA90u; return; } if (c.pc != 0x001AD030u) [[unlikely]] return; }
L_001AD030:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_001AD034:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD058u); set32(c.r[5], c.r[2].w[0] + 1000u);  if (depth < kMaxDepth) unit_002B(c, 100u, depth + 1u); else { c.pc = 0x001ACD40u; return; } if (c.pc != 0x001AD058u) [[unlikely]] return; }
L_001AD058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001AD05C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AD080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD09Cu); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AD09Cu) [[unlikely]] return; }
L_001AD09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0A4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AD0A4u) [[unlikely]] return; }
L_001AD0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AD0B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 122u, depth + 1u); else { c.pc = 0x001AD0D0u; return; } if (c.pc != 0x001AD0B4u) [[unlikely]] return; }
L_001AD0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0BCu); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AD0BCu) [[unlikely]] return; }
L_001AD0BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10536u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD108u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AD108u) [[unlikely]] return; }
L_001AD108:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD120u); st32((c.r[1].w[0] + 26440u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AD120u) [[unlikely]] return; }
L_001AD120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AD130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD130u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001AD130u) [[unlikely]] return; }
L_001AD130:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD13Cu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001AD13Cu) [[unlikely]] return; }
L_001AD13C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AD160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AD1CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 10536u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_001AD1B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD1AC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD1ACu) [[unlikely]] return; }
L_001AD1AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001AD1B0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[1].w[0] + 26440u), 0u);  if (t) { goto L_001AD1CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AD1CCu) [[unlikely]] return; }
L_001AD1CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AD1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26440u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD294; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD294; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AD294; } }
    c.r[3].d[0] = c.r[5].sd[0] < 702ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 705ll ? 1ull : 0ull;  if (t) { goto L_001AD294; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD294; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD248u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD248u) [[unlikely]] return; }
L_001AD248:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AD294; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26440u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD26Cu); set32(c.r[5], 0u + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD26Cu) [[unlikely]] return; }
L_001AD26C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001AD294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD284u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001AD284u) [[unlikely]] return; }
L_001AD284:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26440u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_001AD294:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AD2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].sd[0] < 700ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[16].w[0]);  if (t) { goto L_001AD330; } }
    c.r[1].d[0] = c.r[16].sd[0] < 800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD330; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD330; } }
    c.r[2].d[0] = c.r[16].sd[0] < 702ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 705ll ? 1ull : 0ull;  if (t) { goto L_001AD308; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD308; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001AD308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD308u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001AD308u) [[unlikely]] return; }
L_001AD308:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD31Cu); set32(c.r[5], 0u + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD31Cu) [[unlikely]] return; }
L_001AD31C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[16].w[0] - 700u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD330u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001AD330u) [[unlikely]] return; }
L_001AD330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AD350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD36Cu);  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0EC0u; return; } if (c.pc != 0x001AD36Cu) [[unlikely]] return; }
L_001AD36C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AD380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 10552u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001AD3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_001AD3BC; } }
L_001AD3B8:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001AD3BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 26448u), c.r[18].w[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 4;
L_001AD3CC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 52u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001AD3F0u) [[unlikely]] return; }
L_001AD3F0:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_001AD418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD404u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AD404u) [[unlikely]] return; }
L_001AD404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AD414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD414u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001AD414u) [[unlikely]] return; }
L_001AD414:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001AD418:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD3CCu | kUnwind; return; } goto L_001AD3CC; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AD450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AD504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 10552u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26448u), 0u);
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 7;
L_001AD490:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD4C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD4C8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD4C8u) [[unlikely]] return; }
L_001AD4C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4DCu); st32((c.r[19].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001AD4DCu) [[unlikely]] return; }
L_001AD4DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD490u | kUnwind; return; } goto L_001AD490; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001AD508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD504u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AD504u) [[unlikely]] return; }
L_001AD504:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001AD508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AD530:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AD574; } }
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD570u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x001AD570u) [[unlikely]] return; }
L_001AD570:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001AD574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD590:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AD5D4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5CCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_002C(c, 78u, depth + 1u); else { c.pc = 0x001B0D70u; return; } if (c.pc != 0x001AD5CCu) [[unlikely]] return; }
L_001AD5CC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AD5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD5F0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AD628; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 6;
L_001AD628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD630:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AD678; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD670u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x001AD670u) [[unlikely]] return; }
L_001AD670:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_001AD678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD690:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_001AD714; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_001AD6E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AD718; } }
L_001AD6E4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001AD6FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001AD718; } }
L_001AD6FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD70Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x001AD70Cu) [[unlikely]] return; }
L_001AD70C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001AD714:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AD718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AD730:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001AD780; } }
    st32((c.r[6].w[0] + 12u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_001AD760:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD760u | kUnwind; return; } goto L_001AD760; } }
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_001AD780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD790:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AD7E4; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD7D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD7D8u) [[unlikely]] return; }
L_001AD7D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD7E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 159u, depth + 1u); else { c.pc = 0x001AD730u; return; } if (c.pc != 0x001AD7E4u) [[unlikely]] return; }
L_001AD7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AD800:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001AD838; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD838u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD838u) [[unlikely]] return; }
L_001AD838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AD850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD968; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AD874:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] + 26448u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AD958; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AD958; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AD910; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD958; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD8CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD8CCu) [[unlikely]] return; }
L_001AD8CC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AD958; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD8E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 157u, depth + 1u); else { c.pc = 0x001AD690u; return; } if (c.pc != 0x001AD8E4u) [[unlikely]] return; }
L_001AD8E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AD958; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD8F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 159u, depth + 1u); else { c.pc = 0x001AD730u; return; } if (c.pc != 0x001AD8F8u) [[unlikely]] return; }
L_001AD8F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD908u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD590u; return; } if (c.pc != 0x001AD908u) [[unlikely]] return; }
L_001AD908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001AD95C; } }
L_001AD910:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AD958; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD958; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD958; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD944u) [[unlikely]] return; }
L_001AD944:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AD958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD958u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_002C(c, 78u, depth + 1u); else { c.pc = 0x001B0D70u; return; } if (c.pc != 0x001AD958u) [[unlikely]] return; }
L_001AD958:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AD95C:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD874u | kUnwind; return; } goto L_001AD874; } }
L_001AD968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AD980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10568u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26456u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9B0u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_002B(c, 185u, depth + 1u); else { c.pc = 0x001ADAF0u; return; } if (c.pc != 0x001AD9B0u) [[unlikely]] return; }
L_001AD9B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD9D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ADA6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 10568u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26456u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADA24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADA24; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ADA24u) [[unlikely]] return; }
L_001ADA24:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_001ADA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA3Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 46u, depth + 1u); else { c.pc = 0x002E47A0u; return; } if (c.pc != 0x001ADA3Cu) [[unlikely]] return; }
L_001ADA3C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_001ADA40:
    set32(c.r[4], 0u + 260u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADA54u) [[unlikely]] return; }
L_001ADA54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001ADA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001ADA6Cu) [[unlikely]] return; }
L_001ADA6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001ADA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ADA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADAB0u);  if (depth < kMaxDepth) unit_002B(c, 185u, depth + 1u); else { c.pc = 0x001ADAF0u; return; } if (c.pc != 0x001ADAB0u) [[unlikely]] return; }
L_001ADAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ADAC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADAE0u);  if (depth < kMaxDepth) unit_002B(c, 248u, depth + 1u); else { c.pc = 0x001ADF30u; return; } if (c.pc != 0x001ADAE0u) [[unlikely]] return; }
L_001ADAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ADAF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB14u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ADB14u) [[unlikely]] return; }
L_001ADB14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - 30u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ADBE8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15920u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ADB40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB54u); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADB54u) [[unlikely]] return; }
L_001ADB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADB5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB70u); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADB70u) [[unlikely]] return; }
L_001ADB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADB78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB8Cu); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADB8Cu) [[unlikely]] return; }
L_001ADB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADB94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBA8u); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADBA8u) [[unlikely]] return; }
L_001ADBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADBB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBC4u); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADBC4u) [[unlikely]] return; }
L_001ADBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADBCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBE0u); set32(c.r[6], 0u + 112u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADBE0u) [[unlikely]] return; }
L_001ADBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADBFC; } }
L_001ADBE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ADBFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADBFCu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001ADBFCu) [[unlikely]] return; }
L_001ADBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC04u);  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001ADC04u) [[unlikely]] return; }
L_001ADC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD54; } }
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_001ADC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001ADC24u) [[unlikely]] return; }
L_001ADC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADC38; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x001ADC38u) [[unlikely]] return; }
L_001ADC38:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_001ADC3C:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC50u); set32(c.r[5], 0u + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ADC50u) [[unlikely]] return; }
L_001ADC50:
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < 36ll ? 1ull : 0ull;  if (t) { goto L_001ADD38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 30u);  if (t) { goto L_001ADD38; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ADE08; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ADC88:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC9Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADC9Cu) [[unlikely]] return; }
L_001ADC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADCA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCB8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADCB8u) [[unlikely]] return; }
L_001ADCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADCC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCD4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADCD4u) [[unlikely]] return; }
L_001ADCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADCDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCF0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADCF0u) [[unlikely]] return; }
L_001ADCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADCF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD0Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADD0Cu) [[unlikely]] return; }
L_001ADD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADD14:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD28u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADD28u) [[unlikely]] return; }
L_001ADD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD30u); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_00AB(c, 261u, depth + 1u); else { c.pc = 0x003ADEF0u; return; } if (c.pc != 0x001ADD30u) [[unlikely]] return; }
L_001ADD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADD38:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD4Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001ADD4Cu) [[unlikely]] return; }
L_001ADD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD5Cu); st32((c.r[18].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ADD5Cu) [[unlikely]] return; }
L_001ADD5C:
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 301u);  if (t) { goto L_001ADD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD70u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADD70u) [[unlikely]] return; }
L_001ADD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD80u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ADD80u) [[unlikely]] return; }
L_001ADD80:
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001ADE08; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ADDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDB0u); set32(c.r[4], 0u + 310u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADDB0u) [[unlikely]] return; }
L_001ADDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDC0u); set32(c.r[4], 0u + 311u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADDC0u) [[unlikely]] return; }
L_001ADDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDD0u); set32(c.r[4], 0u + 312u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADDD0u) [[unlikely]] return; }
L_001ADDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDE0u); set32(c.r[4], 0u + 313u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADDE0u) [[unlikely]] return; }
L_001ADDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDF0u); set32(c.r[4], 0u + 314u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADDF0u) [[unlikely]] return; }
L_001ADDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADE08; } }
L_001ADDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE00u); set32(c.r[4], 0u + 315u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x001ADE00u) [[unlikely]] return; }
L_001ADE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE08u); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_00AB(c, 261u, depth + 1u); else { c.pc = 0x003ADEF0u; return; } if (c.pc != 0x001ADE08u) [[unlikely]] return; }
L_001ADE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE10u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ADE10u) [[unlikely]] return; }
L_001ADE10:
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_001ADEFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ADE3C:
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE54u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADE54u) [[unlikely]] return; }
L_001ADE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001ADF14; } }
L_001ADE5C:
    set32(c.r[5], 0u + 25u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADE74u) [[unlikely]] return; }
L_001ADE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF10; } }
L_001ADE7C:
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADE94u) [[unlikely]] return; }
L_001ADE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF10; } }
L_001ADE9C:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADEB4u) [[unlikely]] return; }
L_001ADEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF10; } }
L_001ADEBC:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADED4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADED4u) [[unlikely]] return; }
L_001ADED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF10; } }
L_001ADEDC:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 259u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADEF4u) [[unlikely]] return; }
L_001ADEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF10; } }
L_001ADEFC:
    set32(c.r[4], 0u + 261u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 338u, depth + 1u); else { c.pc = 0x002E2DB0u; return; } if (c.pc != 0x001ADF10u) [[unlikely]] return; }
L_001ADF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ADF14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ADF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001ADF44u) [[unlikely]] return; }
L_001ADF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADF68; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_001ADF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF60u);  if (depth < kMaxDepth) unit_002C(c, 95u, depth + 1u); else { c.pc = 0x001B0EC0u; return; } if (c.pc != 0x001ADF60u) [[unlikely]] return; }
L_001ADF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001ADF74; } }
L_001ADF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF70u);  if (depth < kMaxDepth) unit_00AB(c, 269u, depth + 1u); else { c.pc = 0x003ADFD0u; return; } if (c.pc != 0x001ADF70u) [[unlikely]] return; }
L_001ADF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001ADF74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ADF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ADFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADFA0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001ADFA0u) [[unlikely]] return; }
L_001ADFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ADFB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AE02C; } }
    set32(c.r[2], 0u + 303u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 3u);  if (t) { goto L_001AE024; } }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 2u);  if (t) { goto L_001AE01C; } }
    set32(c.r[2], 0u + 301u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 1u);  if (t) { goto L_001AE014; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001AE00C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_001AE030; } }
L_001AE00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE030; } }
L_001AE014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE030; } }
L_001AE01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE030; } }
L_001AE024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE030; } }
L_001AE02C:
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_001AE030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE038u);  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001AE038u) [[unlikely]] return; }
L_001AE038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE078; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE080; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE05Cu); set32(c.r[5], 0u + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE05Cu) [[unlikely]] return; }
L_001AE05C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE070u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 90u, depth + 1u); else { c.pc = 0x001B0E50u; return; } if (c.pc != 0x001AE070u) [[unlikely]] return; }
L_001AE070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001AE084; } }
L_001AE078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE080u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0079(c, 38u, depth + 1u); else { c.pc = 0x002E4660u; return; } if (c.pc != 0x001AE080u) [[unlikely]] return; }
L_001AE080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001AE084:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AE0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001AE0BCu) [[unlikely]] return; }
L_001AE0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_001AE0E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE0F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0E0u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE0E0u) [[unlikely]] return; }
L_001AE0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001AE0F4; } }
L_001AE0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0F0u);  if (depth < kMaxDepth) unit_0079(c, 46u, depth + 1u); else { c.pc = 0x002E47A0u; return; } if (c.pc != 0x001AE0F0u) [[unlikely]] return; }
L_001AE0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001AE0F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AE110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_001AE124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE12Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x001AE12Cu) [[unlikely]] return; }
L_001AE12C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE13Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x001AE13Cu) [[unlikely]] return; }
L_001AE13C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 6640u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE124u | kUnwind; return; } goto L_001AE124; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AE180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE188u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x001AE188u) [[unlikely]] return; }
L_001AE188:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE194u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x001AE194u) [[unlikely]] return; }
L_001AE194:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1A4u); set32(c.r[17], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x001AE1A4u) [[unlikely]] return; }
L_001AE1A4:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x001AE1B0u) [[unlikely]] return; }
L_001AE1B0:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[4].w[0] + 6640u);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < 100ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE180u | kUnwind; return; } goto L_001AE180; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AE210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26464u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[1].w[0] + 26464u), c.r[3].w[0]);  if (t) { goto L_001AE238; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001AE23C; } }
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 1;
L_001AE238:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_001AE23C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 6640u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 6576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001AE260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 241u, depth + 1u); else { c.pc = 0x0013E290u; return; } if (c.pc != 0x001AE274u) [[unlikely]] return; }
L_001AE274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 10592u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26472u), c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2A8u); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002B(c, 263u, depth + 1u); else { c.pc = 0x001AE110u; return; } if (c.pc != 0x001AE2A8u) [[unlikely]] return; }
L_001AE2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2B0u);  if (depth < kMaxDepth) unit_0078(c, 161u, depth + 1u); else { c.pc = 0x002E1AC0u; return; } if (c.pc != 0x001AE2B0u) [[unlikely]] return; }
L_001AE2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2B8u);  if (depth < kMaxDepth) unit_0078(c, 327u, depth + 1u); else { c.pc = 0x002E2CC0u; return; } if (c.pc != 0x001AE2B8u) [[unlikely]] return; }
L_001AE2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2C0u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE2C0u) [[unlikely]] return; }
L_001AE2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AE2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2D0u);  if (depth < kMaxDepth) unit_002B(c, 23u, depth + 1u); else { c.pc = 0x001AC1A0u; return; } if (c.pc != 0x001AE2D0u) [[unlikely]] return; }
L_001AE2D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001AE374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 10592u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] + 26472u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE348; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE348u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE348u) [[unlikely]] return; }
L_001AE348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE35Cu); st32((c.r[1].w[0] + 26400u), 0u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E2D0u; return; } if (c.pc != 0x001AE35Cu) [[unlikely]] return; }
L_001AE35C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001AE378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001AE374u) [[unlikely]] return; }
L_001AE374:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001AE378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AE390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3B8u); set32(c.r[16], ld32((c.r[1].w[0] + 3840u)));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001AE3B8u) [[unlikely]] return; }
L_001AE3B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 97u, depth + 1u); else { c.pc = 0x0012CCB0u; return; } if (c.pc != 0x001AE3C4u) [[unlikely]] return; }
L_001AE3C4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 56u);  if (t) { goto L_001AE400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE3DCu) [[unlikely]] return; }
L_001AE3DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AE468; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3F8u); set32(c.r[6], c.r[6].w[0] + 15944u);  if (depth < kMaxDepth) unit_002B(c, 80u, depth + 1u); else { c.pc = 0x001ACAB0u; return; } if (c.pc != 0x001AE3F8u) [[unlikely]] return; }
L_001AE3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE468; } }
L_001AE400:
    c.r[2].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_001AE444; } }
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AE444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE420u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE420u) [[unlikely]] return; }
L_001AE420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AE468; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE43Cu); set32(c.r[6], c.r[6].w[0] + 15952u);  if (depth < kMaxDepth) unit_002B(c, 80u, depth + 1u); else { c.pc = 0x001ACAB0u; return; } if (c.pc != 0x001AE43Cu) [[unlikely]] return; }
L_001AE43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE468; } }
L_001AE444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE44Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE44Cu) [[unlikely]] return; }
L_001AE44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AE468; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE468u); set32(c.r[6], c.r[6].w[0] + 15968u);  if (depth < kMaxDepth) unit_002B(c, 80u, depth + 1u); else { c.pc = 0x001ACAB0u; return; } if (c.pc != 0x001AE468u) [[unlikely]] return; }
L_001AE468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE470u);  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001AE470u) [[unlikely]] return; }
L_001AE470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_001AE494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE480u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE480u) [[unlikely]] return; }
L_001AE480:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE494u);  if (depth < kMaxDepth) unit_002B(c, 67u, depth + 1u); else { c.pc = 0x001AC920u; return; } if (c.pc != 0x001AE494u) [[unlikely]] return; }
L_001AE494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4C0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 465u, depth + 1u); else { c.pc = 0x001AF560u; return; } if (c.pc != 0x001AE4C0u) [[unlikely]] return; }
L_001AE4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4C8u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE4C8u) [[unlikely]] return; }
L_001AE4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE4E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4E0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 140u, depth + 1u); else { c.pc = 0x001AD380u; return; } if (c.pc != 0x001AE4E0u) [[unlikely]] return; }
L_001AE4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8900u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AE508; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD590u; return; } if (c.pc != 0x001AE500u) [[unlikely]] return; }
L_001AE500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE51C; } }
L_001AE508:
    set32(c.r[6], c.r[2].w[0] + 39u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE51Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_002B(c, 150u, depth + 1u); else { c.pc = 0x001AD530u; return; } if (c.pc != 0x001AE51Cu) [[unlikely]] return; }
L_001AE51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE524u);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x001AE524u) [[unlikely]] return; }
L_001AE524:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AE5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE538u);  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001AE538u) [[unlikely]] return; }
L_001AE538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 12u);  if (t) { goto L_001AE558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE548u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE548u) [[unlikely]] return; }
L_001AE548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AE558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE558u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002B(c, 90u, depth + 1u); else { c.pc = 0x001ACBD0u; return; } if (c.pc != 0x001AE558u) [[unlikely]] return; }
L_001AE558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE560u);  if (depth < kMaxDepth) unit_002B(c, 18u, depth + 1u); else { c.pc = 0x001AC120u; return; } if (c.pc != 0x001AE560u) [[unlikely]] return; }
L_001AE560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_001AE58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE570u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE570u) [[unlikely]] return; }
L_001AE570:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_001AE5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE584u);  if (depth < kMaxDepth) unit_002B(c, 174u, depth + 1u); else { c.pc = 0x001AD980u; return; } if (c.pc != 0x001AE584u) [[unlikely]] return; }
L_001AE584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001AE5AC; } }
L_001AE58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE594u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001AE594u) [[unlikely]] return; }
L_001AE594:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_001AE5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5A8u);  if (depth < kMaxDepth) unit_002B(c, 174u, depth + 1u); else { c.pc = 0x001AD980u; return; } if (c.pc != 0x001AE5A8u) [[unlikely]] return; }
L_001AE5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001AE5AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26448u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE5F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE5F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE5F0u) [[unlikely]] return; }
L_001AE5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26448u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26416u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE620; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE620; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE620u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE620u) [[unlikely]] return; }
L_001AE620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26416u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE650; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE650; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE650u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE650u) [[unlikely]] return; }
L_001AE650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26456u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE680; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE680u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE680u) [[unlikely]] return; }
L_001AE680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26456u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26408u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE6B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE6B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE6B0u) [[unlikely]] return; }
L_001AE6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6C0u); st32((c.r[1].w[0] + 26408u), 0u);  if (depth < kMaxDepth) unit_002C(c, 23u, depth + 1u); else { c.pc = 0x001B0420u; return; } if (c.pc != 0x001AE6C0u) [[unlikely]] return; }
L_001AE6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 26480u);
    set32(c.r[5], c.r[5].w[0] + 26496u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE708u); set32(c.r[6], 0u + 144u);  if (depth < kMaxDepth) unit_0009(c, 44u, depth + 1u); else { c.pc = 0x00124DD0u; return; } if (c.pc != 0x001AE708u) [[unlikely]] return; }
L_001AE708:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26624u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26628u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE724u); st32((c.r[1].w[0] + 26632u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0016(c, 32u, depth + 1u); else { c.pc = 0x00158800u; return; } if (c.pc != 0x001AE724u) [[unlikely]] return; }
L_001AE724:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26636u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AE750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE760u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0078(c, 170u, depth + 1u); else { c.pc = 0x002E1B40u; return; } if (c.pc != 0x001AE760u) [[unlikely]] return; }
L_001AE760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE768u);  if (depth < kMaxDepth) unit_002B(c, 166u, depth + 1u); else { c.pc = 0x001AD850u; return; } if (c.pc != 0x001AE768u) [[unlikely]] return; }
L_001AE768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE770u);  if (depth < kMaxDepth) unit_002B(c, 252u, depth + 1u); else { c.pc = 0x001ADF80u; return; } if (c.pc != 0x001AE770u) [[unlikely]] return; }
L_001AE770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE778u);  if (depth < kMaxDepth) unit_002B(c, 105u, depth + 1u); else { c.pc = 0x001ACDF0u; return; } if (c.pc != 0x001AE778u) [[unlikely]] return; }
L_001AE778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE780u);  if (depth < kMaxDepth) unit_002B(c, 130u, depth + 1u); else { c.pc = 0x001AD1F0u; return; } if (c.pc != 0x001AE780u) [[unlikely]] return; }
L_001AE780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AE800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE79Cu); set32(c.r[16], ld32((c.r[1].w[0] + 26448u)));  if (depth < kMaxDepth) unit_002B(c, 98u, depth + 1u); else { c.pc = 0x001ACCE0u; return; } if (c.pc != 0x001AE79Cu) [[unlikely]] return; }
L_001AE79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE7D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AE800; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6704u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE800; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7C8u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001AE7C8u) [[unlikely]] return; }
L_001AE7C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 6704u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AE800; } }
L_001AE7D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AE800; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6704u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE800; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7F4u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_002B(c, 164u, depth + 1u); else { c.pc = 0x001AD800u; return; } if (c.pc != 0x001AE7F4u) [[unlikely]] return; }
L_001AE7F4:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st8((c.r[1].w[0] + 6704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001AE800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE830u);  if (depth < kMaxDepth) unit_0016(c, 124u, depth + 1u); else { c.pc = 0x00159270u; return; } if (c.pc != 0x001AE830u) [[unlikely]] return; }
L_001AE830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE838u);  if (depth < kMaxDepth) unit_0079(c, 42u, depth + 1u); else { c.pc = 0x002E4740u; return; } if (c.pc != 0x001AE838u) [[unlikely]] return; }
L_001AE838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE860u);  if (depth < kMaxDepth) unit_0016(c, 127u, depth + 1u); else { c.pc = 0x001592C0u; return; } if (c.pc != 0x001AE860u) [[unlikely]] return; }
L_001AE860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE868u);  if (depth < kMaxDepth) unit_0079(c, 44u, depth + 1u); else { c.pc = 0x002E4770u; return; } if (c.pc != 0x001AE868u) [[unlikely]] return; }
L_001AE868:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE880:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0079(c, 34u, depth); }
L_001AE890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001AE8ACu) [[unlikely]] return; }
L_001AE8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8B4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_002B(c, 375u, depth + 1u); else { c.pc = 0x001AED90u; return; } if (c.pc != 0x001AE8B4u) [[unlikely]] return; }
L_001AE8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8BCu); c.r[4].d[0] = ld8((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0078(c, 377u, depth + 1u); else { c.pc = 0x002E33C0u; return; } if (c.pc != 0x001AE8BCu) [[unlikely]] return; }
L_001AE8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8C4u); c.r[4].d[0] = ld8((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0016(c, 45u, depth + 1u); else { c.pc = 0x001588F0u; return; } if (c.pc != 0x001AE8C4u) [[unlikely]] return; }
L_001AE8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 4u);  c.pc = t; return; }
L_001AE8F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  [[clang::musttail]] return unit_002C(c, 114u, depth); }
L_001AE900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACB00u | kUnwind; return; } goto L_001ACB00; }
L_001AE910:
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[29].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 6712u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 16496u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001AE990; } }
L_001AE93C:
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001AE98C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 16498u);
    set32(c.r[3], c.r[3].w[0] + 16499u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 12u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AE9B0; } }
L_001AE98C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001AE990:
    c.r[3].d[0] = c.r[8].sd[0] < 113ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE93Cu | kUnwind; return; } goto L_001AE93C; } }
    set32(c.r[3], c.r[29].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001AE9B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 6720u)));  c.pc = t; return; }
L_001AE9D0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 139u, depth + 1u); else { c.pc = 0x00146880u; return; } if (c.pc != 0x001AE9ECu) [[unlikely]] return; }
L_001AE9EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA00u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001AEA00u) [[unlikely]] return; }
L_001AEA00:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001AEA08:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AEA54; } }
    set32(c.r[3], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEA28u) [[unlikely]] return; }
L_001AEA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001AEA54; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA3Cu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEA3Cu) [[unlikely]] return; }
L_001AEA3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AEAC8; } }
L_001AEA54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001AEAB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[19], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA78u); set32(c.r[5], c.r[5].w[0] + 16952u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001AEA78u) [[unlikely]] return; }
L_001AEA78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[19], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEA8Cu) [[unlikely]] return; }
L_001AEA8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001AEAB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEAA0u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEAA0u) [[unlikely]] return; }
L_001AEAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AEAC8; } }
L_001AEAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001AEAC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEA08u | kUnwind; return; } goto L_001AEA08; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AEADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[29].w[0] + 348u);
    set32(c.r[2], c.r[2].w[0] + 10080u);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001AEB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEB10u) [[unlikely]] return; }
L_001AEB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB44; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 348u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEB2Cu) [[unlikely]] return; }
L_001AEB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AEBC0; } }
L_001AEB44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001AEBB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[19], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB68u); set32(c.r[5], c.r[5].w[0] + 16976u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001AEB68u) [[unlikely]] return; }
L_001AEB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[19], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEB7Cu) [[unlikely]] return; }
L_001AEB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEBB0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 348u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEB98u) [[unlikely]] return; }
L_001AEB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AEBC0; } }
L_001AEBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26640u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001AEBC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEADCu | kUnwind; return; } goto L_001AEADC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AEC38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEBF4u) [[unlikely]] return; }
L_001AEBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AEC24; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC0Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEC0Cu) [[unlikely]] return; }
L_001AEC0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AEC30; } }
L_001AEC24:
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001AEC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001AEC8C; } }
L_001AEC38:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC44u); set32(c.r[5], c.r[5].w[0] + 17008u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001AEC44u) [[unlikely]] return; }
L_001AEC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC4Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AEC4Cu) [[unlikely]] return; }
L_001AEC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001AEC7C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC64u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AEC64u) [[unlikely]] return; }
L_001AEC64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AEC88; } }
L_001AEC7C:
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001AEC88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001AEC8C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001AECE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AECB0u) [[unlikely]] return; }
L_001AECB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AECE0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECC8u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AECC8u) [[unlikely]] return; }
L_001AECC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AECF0; } }
L_001AECE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001AECF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001AECF8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001AED4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[17].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 6752u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED1Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 111u, depth + 1u); else { c.pc = 0x00148DF0u; return; } if (c.pc != 0x001AED1Cu) [[unlikely]] return; }
L_001AED1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AED4C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED34u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0016(c, 237u, depth + 1u); else { c.pc = 0x0015A3B0u; return; } if (c.pc != 0x001AED34u) [[unlikely]] return; }
L_001AED34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001AED5C; } }
L_001AED4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 26640u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001AED5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AECF8u | kUnwind; return; } goto L_001AECF8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001AED90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26472u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AEDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDBCu);  if (depth < kMaxDepth) unit_002B(c, 344u, depth + 1u); else { c.pc = 0x001AE8E0u; return; } if (c.pc != 0x001AEDBCu) [[unlikely]] return; }
L_001AEDBC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AEDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001AEE00; } }
L_001AEDD0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDF0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 149u, depth + 1u); else { c.pc = 0x00159680u; return; } if (c.pc != 0x001AEDF0u) [[unlikely]] return; }
L_001AEDF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 11488u), c.r[3].w[0]);
    c.budget -= 3;
L_001AEDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001AEE00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AEE10:
    c.budget -= 2;
    { set32(c.r[4], 0u - 1u);  [[clang::musttail]] return unit_0078(c, 320u, depth); }
L_001AEE20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0078(c, 276u, depth); }
L_001AEE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 216u, depth + 1u); else { c.pc = 0x003AD650u; return; } if (c.pc != 0x001AEE4Cu) [[unlikely]] return; }
L_001AEE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE54u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001AEE54u) [[unlikely]] return; }
L_001AEE54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001AEE94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AEE90; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 10088u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_001AEED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001AF550; } }
L_001AEE90:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001AEE94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001AEEC4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10088u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_001AEED0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10096u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AEED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AEEC4:
    set32(c.r[3], ld32((c.r[1].w[0] + 10088u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_001AF54C; } }
L_001AEED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] + 10096u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] + 10088u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26400u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;  if (t) { goto L_001AEF00; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 40u, depth + 1u); else { c.pc = 0x001AC4A0u; return; } if (c.pc != 0x001AEEFCu) [[unlikely]] return; }
L_001AEEFC:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001AEF00:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AF54C; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AEF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF28u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AEF28u) [[unlikely]] return; }
L_001AEF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AEF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF38u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AEF38u) [[unlikely]] return; }
L_001AEF38:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF54u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AEF54u) [[unlikely]] return; }
L_001AEF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AEF5Cu) [[unlikely]] return; }
L_001AEF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AEF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF6Cu);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AEF6Cu) [[unlikely]] return; }
L_001AEF6C:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF88u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AEF88u) [[unlikely]] return; }
L_001AEF88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 17048u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFA4u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AEFA4u) [[unlikely]] return; }
L_001AEFA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17064u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFC0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AEFC0u) [[unlikely]] return; }
L_001AEFC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17080u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AEFDCu) [[unlikely]] return; }
L_001AEFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFE4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AEFE4u) [[unlikely]] return; }
L_001AEFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AEFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEFF4u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AEFF4u) [[unlikely]] return; }
L_001AEFF4:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF010u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF010u) [[unlikely]] return; }
L_001AF010:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17064u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF02Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF02Cu) [[unlikely]] return; }
L_001AF02C:
    set32(c.r[4], 0u + 7u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 17096u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF048u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF048u) [[unlikely]] return; }
L_001AF048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17112u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF064u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF064u) [[unlikely]] return; }
L_001AF064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 17128u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF080u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF080u) [[unlikely]] return; }
L_001AF080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF088u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF088u) [[unlikely]] return; }
L_001AF088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF098u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF098u) [[unlikely]] return; }
L_001AF098:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF0B4u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF0B4u) [[unlikely]] return; }
L_001AF0B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 17144u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF0D0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF0D0u) [[unlikely]] return; }
L_001AF0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF0D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF0D8u) [[unlikely]] return; }
L_001AF0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF0E8u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF0E8u) [[unlikely]] return; }
L_001AF0E8:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF104u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF104u) [[unlikely]] return; }
L_001AF104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF10Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF10Cu) [[unlikely]] return; }
L_001AF10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF11Cu);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF11Cu) [[unlikely]] return; }
L_001AF11C:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF138u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF138u) [[unlikely]] return; }
L_001AF138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 17144u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF154u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF154u) [[unlikely]] return; }
L_001AF154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF170u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF170u) [[unlikely]] return; }
L_001AF170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17192u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF18Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF18Cu) [[unlikely]] return; }
L_001AF18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF194u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF194u) [[unlikely]] return; }
L_001AF194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1A4u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF1A4u) [[unlikely]] return; }
L_001AF1A4:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17032u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1C0u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF1C0u) [[unlikely]] return; }
L_001AF1C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17064u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1DCu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF1DCu) [[unlikely]] return; }
L_001AF1DC:
    set32(c.r[4], 0u + 7u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 17096u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1F8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF1F8u) [[unlikely]] return; }
L_001AF1F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17112u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF214u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF214u) [[unlikely]] return; }
L_001AF214:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 17128u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF230u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF230u) [[unlikely]] return; }
L_001AF230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF238u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF238u) [[unlikely]] return; }
L_001AF238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF248u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF248u) [[unlikely]] return; }
L_001AF248:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17160u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF264u); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF264u) [[unlikely]] return; }
L_001AF264:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 17144u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF280u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF280u) [[unlikely]] return; }
L_001AF280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17064u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF29Cu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF29Cu) [[unlikely]] return; }
L_001AF29C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17112u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF2B8u) [[unlikely]] return; }
L_001AF2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2C0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF2C0u) [[unlikely]] return; }
L_001AF2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF54C; } }
L_001AF2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2D0u);  if (depth < kMaxDepth) unit_002B(c, 378u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF2D0u) [[unlikely]] return; }
L_001AF2D0:
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 17160u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2ECu); c.r[8].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF2ECu) [[unlikely]] return; }
L_001AF2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2F4u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001AF2F4u) [[unlikely]] return; }
L_001AF2F4:
    c.r[1].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AF4D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF308u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001AF308u) [[unlikely]] return; }
L_001AF308:
    set32(c.r[2], c.r[2].w[0] - 30u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AF498; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 17408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AF334:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17208u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF350u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF350u) [[unlikely]] return; }
L_001AF350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17224u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF36Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF36Cu) [[unlikely]] return; }
L_001AF36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF374:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17240u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF390u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF390u) [[unlikely]] return; }
L_001AF390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17256u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF3ACu) [[unlikely]] return; }
L_001AF3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF3B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17272u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3D0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF3D0u) [[unlikely]] return; }
L_001AF3D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17288u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3ECu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF3ECu) [[unlikely]] return; }
L_001AF3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF3F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17304u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF410u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF410u) [[unlikely]] return; }
L_001AF410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17320u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF42Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF42Cu) [[unlikely]] return; }
L_001AF42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF434:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17336u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF450u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF450u) [[unlikely]] return; }
L_001AF450:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17352u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF46Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF46Cu) [[unlikely]] return; }
L_001AF46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF474:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17368u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF490u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF490u) [[unlikely]] return; }
L_001AF490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF4B0; } }
L_001AF498:
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17176u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4B0u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF4B0u) [[unlikely]] return; }
L_001AF4B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 17384u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4CCu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF4CCu) [[unlikely]] return; }
L_001AF4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 7u);  if (t) { goto L_001AF544; } }
L_001AF4D4:
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 17144u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4ECu); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF4ECu) [[unlikely]] return; }
L_001AF4EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 17176u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF508u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF508u) [[unlikely]] return; }
L_001AF508:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 17192u);
    set32(c.r[6], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF524u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF524u) [[unlikely]] return; }
L_001AF524:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 17112u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF540u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 315u, depth + 1u); else { c.pc = 0x002E2B90u; return; } if (c.pc != 0x001AF540u) [[unlikely]] return; }
L_001AF540:
    set32(c.r[4], 0u + 7u);
    c.budget -= 1;
L_001AF544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF54Cu);  if (depth < kMaxDepth) unit_0078(c, 261u, depth + 1u); else { c.pc = 0x002E2580u; return; } if (c.pc != 0x001AF54Cu) [[unlikely]] return; }
L_001AF54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001AF550:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AF560:
    set32(c.r[29], c.r[29].w[0] - 672u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF58Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AB(c, 216u, depth + 1u); else { c.pc = 0x003AD650u; return; } if (c.pc != 0x001AF58Cu) [[unlikely]] return; }
L_001AF58C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 6720u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { [[clang::musttail]] return unit_002C(c, 22u, depth); } }
    st32((c.r[1].w[0] + 6728u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] + 6720u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 6736u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26440u)));
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[1].w[0] + 6736u), c.r[19].w[0]);  if (t) { goto L_001AF5E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AF5E4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF5E4u) [[unlikely]] return; }
L_001AF5E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26440u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26424u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AF614; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AF614; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF614u) [[unlikely]] return; }
L_001AF614:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26424u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF628u); set32(c.r[4], ld32((c.r[1].w[0] + 26472u)));  if (depth < kMaxDepth) unit_002B(c, 344u, depth + 1u); else { c.pc = 0x001AE8E0u; return; } if (c.pc != 0x001AF628u) [[unlikely]] return; }
L_001AF628:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u + 360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF63Cu); set32(c.r[16], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001AF63Cu) [[unlikely]] return; }
L_001AF63C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF648u); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001AF648u) [[unlikely]] return; }
L_001AF648:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 17504u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AF66C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 15984u)));
    set32(c.r[6], c.r[6].w[0] + 15992u);
    set32(c.r[5], c.r[29].w[0] + 600u);
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 592u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 15988u)));
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 10;
L_001AF694:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF694u | kUnwind; return; } goto L_001AF694; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 632u);
    set32(c.r[6], c.r[6].w[0] + 16024u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AF6C4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF6C4u | kUnwind; return; } goto L_001AF6C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AF708:
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AF714:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF724u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001AF724u) [[unlikely]] return; }
L_001AF724:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 180u);
    set32(c.r[8], 0u + 320u);
    set32(c.r[10], c.r[29].w[0] + 184u);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[7], 0u + 224u);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[2], c.r[29].w[0] + 192u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[9], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[5], 0u + 640u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], 0u + 448u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[10].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 36224ull;
    set32(c.r[2], 0u + 10752u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[12], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[11], c.r[29].w[0] + 136u);
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[13], c.r[29].w[0] + 144u);
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], c.r[29].w[0] + 164u);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    set32(c.r[18], c.r[18].w[0] + 15992u);
    set32(c.r[19], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[15], c.r[29].w[0] + 600u);
    set32(c.r[9], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[14], 0u + 4u);
    set32(c.r[24], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 248u), c.r[19].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 212u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 232u), c.r[24].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[20].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 196u)));
    c.r[21].d[0] = ld8((c.r[29].w[0] + 200u));
    c.r[20].d[0] = ld8((c.r[29].w[0] + 201u));
    set32(c.r[25], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[24], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 216u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[19].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 252u), c.r[22].w[0]);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st32((c.r[29].w[0] + 260u), c.r[25].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[24].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[19].w[0]);
    st32((c.r[12].w[0]), c.r[8].w[0]);
    st32((c.r[11].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[13].w[0]), c.r[6].w[0]);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[13].w[0]), 0u);
    st32((c.r[12].w[0]), c.r[5].w[0]);
    st32((c.r[11].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 153u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[10].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 276u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[4].w[0]);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 152u));
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 15984u)));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 153u));
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[29].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[29].w[0] + 300u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 301u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 15988u)));
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 112;
L_001AF8E4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[14], c.r[14].w[0] - 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[15].w[0]), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st32((c.r[15].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[14].sd[0] > 0; set32(c.r[15], c.r[15].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF8E4u | kUnwind; return; } goto L_001AF8E4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 632u);
    set32(c.r[6], c.r[6].w[0] + 16024u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AF914:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF914u | kUnwind; return; } goto L_001AF914; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AF954:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF964u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001AF964u) [[unlikely]] return; }
L_001AF964:
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[2], 0u + 320u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[2], 0u + 224u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[8], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[2], 0u + 640u);
    st32((c.r[8].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 15992u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 448u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4608ull;
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 600u);
    set32(c.r[2], 0u + 10752u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[8].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[10], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 216u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 15984u)));
    st32((c.r[29].w[0] + 232u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 196u)));
    c.r[9].d[0] = ld8((c.r[29].w[0] + 200u));
    c.r[8].d[0] = ld8((c.r[29].w[0] + 201u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 15988u)));
    st32((c.r[29].w[0] + 252u), c.r[10].w[0]);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 592u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 67;
L_001AFA70:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFA70u | kUnwind; return; } goto L_001AFA70; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 632u);
    set32(c.r[6], c.r[6].w[0] + 16024u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AFAA0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFAA0u | kUnwind; return; } goto L_001AFAA0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AFAE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);  if (t) { goto L_001AFAFC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFAF8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001AFAF8u) [[unlikely]] return; }
L_001AFAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    c.budget -= 1;
L_001AFAFC:
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] | 33920ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[8], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    set32(c.r[2], 0u + 320u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[2], 0u + 224u);
    set32(c.r[9], c.r[29].w[0] + 192u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[2], 0u + 256u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 15992u);
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[5], c.r[29].w[0] + 600u);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[10], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 15984u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 216u), c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 196u)));
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 232u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 260u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 200u));
    set32(c.r[7], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 15988u)));
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 236u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 201u));
    st32((c.r[29].w[0] + 252u), c.r[10].w[0]);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[29].w[0] + 272u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 61;
L_001AFBF0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFBF0u | kUnwind; return; } goto L_001AFBF0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 632u);
    set32(c.r[6], c.r[6].w[0] + 16024u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AFC20:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFC20u | kUnwind; return; } goto L_001AFC20; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AFC60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC70u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001AFC70u) [[unlikely]] return; }
L_001AFC70:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[5], 0u + 320u);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[9], c.r[29].w[0] + 184u);
    set32(c.r[4], 0u + 224u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u + 256u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[8].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 2304ull;
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    set32(c.r[8], c.r[29].w[0] + 132u);
    set32(c.r[14], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[7], c.r[29].w[0] + 136u);
    set32(c.r[6], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[9], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[13], 0u + 128u);
    set32(c.r[24], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[12], c.r[12].w[0] + 16312u);
    set32(c.r[19], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[11], c.r[16].w[0] + 8u);
    set32(c.r[18], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[10], 0u + 4u);
    st32((c.r[29].w[0] + 248u), c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 188u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[14], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 244u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 208u)));
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 232u), c.r[24].w[0]);
    c.r[24].d[0] = ld8((c.r[29].w[0] + 200u));
    st8((c.r[29].w[0] + 201u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 236u), c.r[19].w[0]);
    c.r[19].d[0] = ld8((c.r[29].w[0] + 201u));
    st32((c.r[29].w[0] + 216u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 252u), c.r[25].w[0]);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[24].w[0]));
    st8((c.r[29].w[0] + 257u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[29].w[0] + 260u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[14].w[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[9].w[0]), 0u);
    st32((c.r[8].w[0]), c.r[13].w[0]);
    st32((c.r[7].w[0]), c.r[13].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 284u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16304u)));
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 288u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    st8((c.r[29].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 276u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 152u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[29].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 280u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 153u));
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 300u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st8((c.r[29].w[0] + 301u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16308u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 107;
L_001AFE1C:
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[2], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[11].w[0]), c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    st32((c.r[11].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFE1Cu | kUnwind; return; } goto L_001AFE1C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16344u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AFE4C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFE4Cu | kUnwind; return; } goto L_001AFE4C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AFE8C:
    set32(c.r[2], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 224u), c.r[7].w[0]);
    set32(c.r[2], 0u + 320u);
    set32(c.r[8], c.r[29].w[0] + 184u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[2], 0u + 224u);
    set32(c.r[3], 0u + 256u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2304ull;
    st32((c.r[29].w[0] + 212u), 0u);
    set32(c.r[6], c.r[6].w[0] + 16072u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[10], ld32((c.r[1].w[0] + 3840u)));
    st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 208u), 0u);
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 184u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 232u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 16064u)));
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
    set32(c.r[2], ld32((c.r[1].w[0] + 16068u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 63;
L_001AFF88:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFF88u | kUnwind; return; } goto L_001AFF88; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[16].w[0] + 40u);
    set32(c.r[6], c.r[6].w[0] + 16104u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_001AFFB8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFFB8u | kUnwind; return; } goto L_001AFFB8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 16480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_002C(c, 20u, depth); } }
L_001AFFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_002C(c, 1u, depth);
}

}
