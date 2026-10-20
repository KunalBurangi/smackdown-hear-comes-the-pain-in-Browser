#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B3[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 73,
    0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0,
    0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0,
    0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459,
};

void unit_00B3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003CC000;
    case 2u: goto L_003CC008;
    case 3u: goto L_003CC020;
    case 4u: goto L_003CC048;
    case 5u: goto L_003CC0AC;
    case 6u: goto L_003CC0E4;
    case 7u: goto L_003CC0F0;
    case 8u: goto L_003CC128;
    case 9u: goto L_003CC138;
    case 10u: goto L_003CC150;
    case 11u: goto L_003CC170;
    case 12u: goto L_003CC1EC;
    case 13u: goto L_003CC1F4;
    case 14u: goto L_003CC21C;
    case 15u: goto L_003CC238;
    case 16u: goto L_003CC248;
    case 17u: goto L_003CC260;
    case 18u: goto L_003CC278;
    case 19u: goto L_003CC290;
    case 20u: goto L_003CC2A8;
    case 21u: goto L_003CC2C0;
    case 22u: goto L_003CC2DC;
    case 23u: goto L_003CC2E4;
    case 24u: goto L_003CC2F8;
    case 25u: goto L_003CC300;
    case 26u: goto L_003CC328;
    case 27u: goto L_003CC34C;
    case 28u: goto L_003CC358;
    case 29u: goto L_003CC370;
    case 30u: goto L_003CC3A8;
    case 31u: goto L_003CC3C4;
    case 32u: goto L_003CC3D8;
    case 33u: goto L_003CC3E4;
    case 34u: goto L_003CC410;
    case 35u: goto L_003CC470;
    case 36u: goto L_003CC494;
    case 37u: goto L_003CC49C;
    case 38u: goto L_003CC4C8;
    case 39u: goto L_003CC4D8;
    case 40u: goto L_003CC500;
    case 41u: goto L_003CC510;
    case 42u: goto L_003CC514;
    case 43u: goto L_003CC538;
    case 44u: goto L_003CC55C;
    case 45u: goto L_003CC570;
    case 46u: goto L_003CC584;
    case 47u: goto L_003CC5B0;
    case 48u: goto L_003CC5C8;
    case 49u: goto L_003CC5EC;
    case 50u: goto L_003CC60C;
    case 51u: goto L_003CC614;
    case 52u: goto L_003CC620;
    case 53u: goto L_003CC62C;
    case 54u: goto L_003CC640;
    case 55u: goto L_003CC648;
    case 56u: goto L_003CC650;
    case 57u: goto L_003CC668;
    case 58u: goto L_003CC678;
    case 59u: goto L_003CC690;
    case 60u: goto L_003CC6C0;
    case 61u: goto L_003CC6E0;
    case 62u: goto L_003CC6E8;
    case 63u: goto L_003CC6F4;
    case 64u: goto L_003CC700;
    case 65u: goto L_003CC72C;
    case 66u: goto L_003CC76C;
    case 67u: goto L_003CC7A4;
    case 68u: goto L_003CC7C0;
    case 69u: goto L_003CC7D0;
    case 70u: goto L_003CC7D8;
    case 71u: goto L_003CC7E0;
    case 72u: goto L_003CC7F0;
    case 73u: goto L_003CC7FC;
    case 74u: goto L_003CC810;
    case 75u: goto L_003CC818;
    case 76u: goto L_003CC820;
    case 77u: goto L_003CC828;
    case 78u: goto L_003CC838;
    case 79u: goto L_003CC840;
    case 80u: goto L_003CC84C;
    case 81u: goto L_003CC868;
    case 82u: goto L_003CC888;
    case 83u: goto L_003CC8A4;
    case 84u: goto L_003CC8B4;
    case 85u: goto L_003CC8C0;
    case 86u: goto L_003CC8D4;
    case 87u: goto L_003CC8E4;
    case 88u: goto L_003CC8F0;
    case 89u: goto L_003CC910;
    case 90u: goto L_003CC920;
    case 91u: goto L_003CC948;
    case 92u: goto L_003CC968;
    case 93u: goto L_003CC9B8;
    case 94u: goto L_003CC9D8;
    case 95u: goto L_003CC9E8;
    case 96u: goto L_003CCA08;
    case 97u: goto L_003CCA24;
    case 98u: goto L_003CCA2C;
    case 99u: goto L_003CCA44;
    case 100u: goto L_003CCA54;
    case 101u: goto L_003CCA60;
    case 102u: goto L_003CCA7C;
    case 103u: goto L_003CCA84;
    case 104u: goto L_003CCAF0;
    case 105u: goto L_003CCB20;
    case 106u: goto L_003CCB34;
    case 107u: goto L_003CCB3C;
    case 108u: goto L_003CCB48;
    case 109u: goto L_003CCB6C;
    case 110u: goto L_003CCBA0;
    case 111u: goto L_003CCBBC;
    case 112u: goto L_003CCC38;
    case 113u: goto L_003CCC54;
    case 114u: goto L_003CCC70;
    case 115u: goto L_003CCCD4;
    case 116u: goto L_003CCCE8;
    case 117u: goto L_003CCD20;
    case 118u: goto L_003CCD64;
    case 119u: goto L_003CCD7C;
    case 120u: goto L_003CCD9C;
    case 121u: goto L_003CCDA4;
    case 122u: goto L_003CCDBC;
    case 123u: goto L_003CCE00;
    case 124u: goto L_003CCE7C;
    case 125u: goto L_003CCE90;
    case 126u: goto L_003CCE98;
    case 127u: goto L_003CCEA0;
    case 128u: goto L_003CCEA8;
    case 129u: goto L_003CCEB0;
    case 130u: goto L_003CCEDC;
    case 131u: goto L_003CCF08;
    case 132u: goto L_003CCF24;
    case 133u: goto L_003CCF40;
    case 134u: goto L_003CCF48;
    case 135u: goto L_003CCF64;
    case 136u: goto L_003CCF98;
    case 137u: goto L_003CCFB0;
    case 138u: goto L_003CCFD0;
    case 139u: goto L_003CD000;
    case 140u: goto L_003CD010;
    case 141u: goto L_003CD020;
    case 142u: goto L_003CD030;
    case 143u: goto L_003CD050;
    case 144u: goto L_003CD0C8;
    case 145u: goto L_003CD0D8;
    case 146u: goto L_003CD0E8;
    case 147u: goto L_003CD0F8;
    case 148u: goto L_003CD118;
    case 149u: goto L_003CD12C;
    case 150u: goto L_003CD150;
    case 151u: goto L_003CD188;
    case 152u: goto L_003CD1A8;
    case 153u: goto L_003CD1CC;
    case 154u: goto L_003CD1E0;
    case 155u: goto L_003CD204;
    case 156u: goto L_003CD218;
    case 157u: goto L_003CD220;
    case 158u: goto L_003CD240;
    case 159u: goto L_003CD248;
    case 160u: goto L_003CD28C;
    case 161u: goto L_003CD298;
    case 162u: goto L_003CD2A0;
    case 163u: goto L_003CD2B8;
    case 164u: goto L_003CD2F8;
    case 165u: goto L_003CD310;
    case 166u: goto L_003CD334;
    case 167u: goto L_003CD340;
    case 168u: goto L_003CD368;
    case 169u: goto L_003CD38C;
    case 170u: goto L_003CD398;
    case 171u: goto L_003CD3A0;
    case 172u: goto L_003CD3B8;
    case 173u: goto L_003CD3CC;
    case 174u: goto L_003CD400;
    case 175u: goto L_003CD468;
    case 176u: goto L_003CD508;
    case 177u: goto L_003CD5A0;
    case 178u: goto L_003CD5D0;
    case 179u: goto L_003CD5DC;
    case 180u: goto L_003CD5E4;
    case 181u: goto L_003CD5F0;
    case 182u: goto L_003CD5FC;
    case 183u: goto L_003CD610;
    case 184u: goto L_003CD620;
    case 185u: goto L_003CD62C;
    case 186u: goto L_003CD640;
    case 187u: goto L_003CD650;
    case 188u: goto L_003CD660;
    case 189u: goto L_003CD680;
    case 190u: goto L_003CD694;
    case 191u: goto L_003CD6A0;
    case 192u: goto L_003CD6B0;
    case 193u: goto L_003CD6B8;
    case 194u: goto L_003CD6C0;
    case 195u: goto L_003CD6D0;
    case 196u: goto L_003CD6D8;
    case 197u: goto L_003CD6E0;
    case 198u: goto L_003CD700;
    case 199u: goto L_003CD750;
    case 200u: goto L_003CD770;
    case 201u: goto L_003CD79C;
    case 202u: goto L_003CD7B0;
    case 203u: goto L_003CD7BC;
    case 204u: goto L_003CD7C8;
    case 205u: goto L_003CD7F0;
    case 206u: goto L_003CD804;
    case 207u: goto L_003CD830;
    case 208u: goto L_003CD838;
    case 209u: goto L_003CD840;
    case 210u: goto L_003CD848;
    case 211u: goto L_003CD850;
    case 212u: goto L_003CD860;
    case 213u: goto L_003CD868;
    case 214u: goto L_003CD894;
    case 215u: goto L_003CD8B8;
    case 216u: goto L_003CD8F0;
    case 217u: goto L_003CD950;
    case 218u: goto L_003CD97C;
    case 219u: goto L_003CD990;
    case 220u: goto L_003CD998;
    case 221u: goto L_003CD9A4;
    case 222u: goto L_003CD9C0;
    case 223u: goto L_003CD9E0;
    case 224u: goto L_003CDA18;
    case 225u: goto L_003CDA20;
    case 226u: goto L_003CDA58;
    case 227u: goto L_003CDAA0;
    case 228u: goto L_003CDAC8;
    case 229u: goto L_003CDB20;
    case 230u: goto L_003CDB48;
    case 231u: goto L_003CDB98;
    case 232u: goto L_003CDBDC;
    case 233u: goto L_003CDBF4;
    case 234u: goto L_003CDBFC;
    case 235u: goto L_003CDC28;
    case 236u: goto L_003CDC58;
    case 237u: goto L_003CDC6C;
    case 238u: goto L_003CDC78;
    case 239u: goto L_003CDCA0;
    case 240u: goto L_003CDCB0;
    case 241u: goto L_003CDCE4;
    case 242u: goto L_003CDCF0;
    case 243u: goto L_003CDD20;
    case 244u: goto L_003CDD30;
    case 245u: goto L_003CDD48;
    case 246u: goto L_003CDD78;
    case 247u: goto L_003CDDF8;
    case 248u: goto L_003CDE08;
    case 249u: goto L_003CDE70;
    case 250u: goto L_003CDE80;
    case 251u: goto L_003CDE90;
    case 252u: goto L_003CDEA0;
    case 253u: goto L_003CDEB0;
    case 254u: goto L_003CDED4;
    case 255u: goto L_003CDF10;
    case 256u: goto L_003CDF38;
    case 257u: goto L_003CDF48;
    case 258u: goto L_003CDF50;
    case 259u: goto L_003CDF68;
    case 260u: goto L_003CDF88;
    case 261u: goto L_003CDFA0;
    case 262u: goto L_003CDFD0;
    case 263u: goto L_003CDFFC;
    case 264u: goto L_003CE018;
    case 265u: goto L_003CE034;
    case 266u: goto L_003CE068;
    case 267u: goto L_003CE070;
    case 268u: goto L_003CE098;
    case 269u: goto L_003CE0E0;
    case 270u: goto L_003CE10C;
    case 271u: goto L_003CE178;
    case 272u: goto L_003CE188;
    case 273u: goto L_003CE230;
    case 274u: goto L_003CE270;
    case 275u: goto L_003CE2B4;
    case 276u: goto L_003CE2D8;
    case 277u: goto L_003CE338;
    case 278u: goto L_003CE348;
    case 279u: goto L_003CE360;
    case 280u: goto L_003CE3A0;
    case 281u: goto L_003CE3C8;
    case 282u: goto L_003CE3DC;
    case 283u: goto L_003CE400;
    case 284u: goto L_003CE418;
    case 285u: goto L_003CE430;
    case 286u: goto L_003CE448;
    case 287u: goto L_003CE460;
    case 288u: goto L_003CE480;
    case 289u: goto L_003CE4AC;
    case 290u: goto L_003CE4F0;
    case 291u: goto L_003CE508;
    case 292u: goto L_003CE528;
    case 293u: goto L_003CE564;
    case 294u: goto L_003CE588;
    case 295u: goto L_003CE5A0;
    case 296u: goto L_003CE5C0;
    case 297u: goto L_003CE5FC;
    case 298u: goto L_003CE620;
    case 299u: goto L_003CE638;
    case 300u: goto L_003CE658;
    case 301u: goto L_003CE694;
    case 302u: goto L_003CE6B8;
    case 303u: goto L_003CE720;
    case 304u: goto L_003CE738;
    case 305u: goto L_003CE750;
    case 306u: goto L_003CE790;
    case 307u: goto L_003CE7B8;
    case 308u: goto L_003CE7C8;
    case 309u: goto L_003CE7F8;
    case 310u: goto L_003CE808;
    case 311u: goto L_003CE818;
    case 312u: goto L_003CE830;
    case 313u: goto L_003CE858;
    case 314u: goto L_003CE8B8;
    case 315u: goto L_003CE8D4;
    case 316u: goto L_003CE8E8;
    case 317u: goto L_003CE8F0;
    case 318u: goto L_003CE8F8;
    case 319u: goto L_003CE918;
    case 320u: goto L_003CE940;
    case 321u: goto L_003CE948;
    case 322u: goto L_003CE954;
    case 323u: goto L_003CE968;
    case 324u: goto L_003CE978;
    case 325u: goto L_003CE9B8;
    case 326u: goto L_003CE9CC;
    case 327u: goto L_003CE9E8;
    case 328u: goto L_003CE9F0;
    case 329u: goto L_003CEA38;
    case 330u: goto L_003CEA70;
    case 331u: goto L_003CEA78;
    case 332u: goto L_003CEA84;
    case 333u: goto L_003CEA98;
    case 334u: goto L_003CEAF8;
    case 335u: goto L_003CEB04;
    case 336u: goto L_003CEB24;
    case 337u: goto L_003CEB30;
    case 338u: goto L_003CEB38;
    case 339u: goto L_003CEB60;
    case 340u: goto L_003CEBB4;
    case 341u: goto L_003CEBE0;
    case 342u: goto L_003CEC10;
    case 343u: goto L_003CECC0;
    case 344u: goto L_003CECF0;
    case 345u: goto L_003CED18;
    case 346u: goto L_003CED7C;
    case 347u: goto L_003CED9C;
    case 348u: goto L_003CEDE8;
    case 349u: goto L_003CEE00;
    case 350u: goto L_003CEE18;
    case 351u: goto L_003CEE30;
    case 352u: goto L_003CEE54;
    case 353u: goto L_003CEE60;
    case 354u: goto L_003CEE78;
    case 355u: goto L_003CEE98;
    case 356u: goto L_003CEEC0;
    case 357u: goto L_003CEECC;
    case 358u: goto L_003CEEF4;
    case 359u: goto L_003CEF00;
    case 360u: goto L_003CEF14;
    case 361u: goto L_003CEF48;
    case 362u: goto L_003CEF70;
    case 363u: goto L_003CEF78;
    case 364u: goto L_003CEF98;
    case 365u: goto L_003CEFAC;
    case 366u: goto L_003CEFD0;
    case 367u: goto L_003CEFE8;
    case 368u: goto L_003CEFF8;
    case 369u: goto L_003CF008;
    case 370u: goto L_003CF02C;
    case 371u: goto L_003CF060;
    case 372u: goto L_003CF080;
    case 373u: goto L_003CF0A0;
    case 374u: goto L_003CF0F0;
    case 375u: goto L_003CF138;
    case 376u: goto L_003CF154;
    case 377u: goto L_003CF16C;
    case 378u: goto L_003CF174;
    case 379u: goto L_003CF190;
    case 380u: goto L_003CF1AC;
    case 381u: goto L_003CF1C4;
    case 382u: goto L_003CF1D8;
    case 383u: goto L_003CF208;
    case 384u: goto L_003CF218;
    case 385u: goto L_003CF278;
    case 386u: goto L_003CF298;
    case 387u: goto L_003CF2B4;
    case 388u: goto L_003CF2D0;
    case 389u: goto L_003CF324;
    case 390u: goto L_003CF350;
    case 391u: goto L_003CF388;
    case 392u: goto L_003CF3AC;
    case 393u: goto L_003CF3D4;
    case 394u: goto L_003CF3E8;
    case 395u: goto L_003CF410;
    case 396u: goto L_003CF430;
    case 397u: goto L_003CF468;
    case 398u: goto L_003CF480;
    case 399u: goto L_003CF49C;
    case 400u: goto L_003CF4B8;
    case 401u: goto L_003CF4D4;
    case 402u: goto L_003CF4F0;
    case 403u: goto L_003CF570;
    case 404u: goto L_003CF58C;
    case 405u: goto L_003CF5A8;
    case 406u: goto L_003CF5E8;
    case 407u: goto L_003CF604;
    case 408u: goto L_003CF618;
    case 409u: goto L_003CF630;
    case 410u: goto L_003CF6F0;
    case 411u: goto L_003CF774;
    case 412u: goto L_003CF790;
    case 413u: goto L_003CF7CC;
    case 414u: goto L_003CF804;
    case 415u: goto L_003CF828;
    case 416u: goto L_003CF848;
    case 417u: goto L_003CF87C;
    case 418u: goto L_003CF8AC;
    case 419u: goto L_003CF8B0;
    case 420u: goto L_003CF8E0;
    case 421u: goto L_003CF908;
    case 422u: goto L_003CF924;
    case 423u: goto L_003CF928;
    case 424u: goto L_003CF964;
    case 425u: goto L_003CF974;
    case 426u: goto L_003CF984;
    case 427u: goto L_003CF988;
    case 428u: goto L_003CF9E8;
    case 429u: goto L_003CFA18;
    case 430u: goto L_003CFA28;
    case 431u: goto L_003CFA44;
    case 432u: goto L_003CFA58;
    case 433u: goto L_003CFA6C;
    case 434u: goto L_003CFAA8;
    case 435u: goto L_003CFAC8;
    case 436u: goto L_003CFAF8;
    case 437u: goto L_003CFB40;
    case 438u: goto L_003CFB48;
    case 439u: goto L_003CFB50;
    case 440u: goto L_003CFB80;
    case 441u: goto L_003CFBA8;
    case 442u: goto L_003CFBE8;
    case 443u: goto L_003CFD98;
    case 444u: goto L_003CFE60;
    case 445u: goto L_003CFEB4;
    case 446u: goto L_003CFEBC;
    case 447u: goto L_003CFEC4;
    case 448u: goto L_003CFECC;
    case 449u: goto L_003CFED4;
    case 450u: goto L_003CFEE4;
    case 451u: goto L_003CFF0C;
    case 452u: goto L_003CFF24;
    case 453u: goto L_003CFF28;
    case 454u: goto L_003CFF60;
    case 455u: goto L_003CFF90;
    case 456u: goto L_003CFFA4;
    case 457u: goto L_003CFFA8;
    case 458u: goto L_003CFFE4;
    case 459u: goto L_003CFFFC;
    default: bad_entry(c, 0x003CC000u); return;
    }
L_003CC000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC008u); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CC008u) [[unlikely]] return; }
L_003CC008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 25568u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CC020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC020u);  if (depth < kMaxDepth) unit_00B2(c, 502u, depth + 1u); else { c.pc = 0x003CBD38u; return; } if (c.pc != 0x003CC020u) [[unlikely]] return; }
L_003CC020:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003CC040; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003CC040; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003CC040; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003CC048; } }
L_003CC040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC048u);  if (depth < kMaxDepth) unit_00B2(c, 502u, depth + 1u); else { c.pc = 0x003CBD38u; return; } if (c.pc != 0x003CC048u) [[unlikely]] return; }
L_003CC048:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC104; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CC078; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC104; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 19808u);  if (t) { goto L_003CC0A4; } }
    c.budget -= 1;
L_003CC078:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));  if (t) { goto L_003CC090; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[21].w[0] + 9u);  if (t) { goto L_003CC0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25544u)));
    c.budget -= 2;
L_003CC090:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC104; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19856u);
    c.budget -= 3;
L_003CC0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0ACu);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CC0ACu) [[unlikely]] return; }
L_003CC0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC104; } }
    c.budget -= 1;
L_003CC0B8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CC0D0u);  goto L_003CC0D4; }
L_003CC0D4:
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0E4u); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_00B2(c, 460u, depth + 1u); else { c.pc = 0x003CB778u; return; } if (c.pc != 0x003CC0E4u) [[unlikely]] return; }
L_003CC0E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC0F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 484u, depth + 1u); else { c.pc = 0x003CBA98u; return; } if (c.pc != 0x003CC0F0u) [[unlikely]] return; }
L_003CC0F0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CC0F4u);  goto L_003CC0F8; }
L_003CC0F8:
    set32(c.r[3], c.r[21].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_003CC104:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC128:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC138u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 503u, depth + 1u); else { c.pc = 0x003CBD60u; return; } if (c.pc != 0x003CC138u) [[unlikely]] return; }
L_003CC138:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 25552u);
    st32((c.r[3].w[0] - 25548u), c.r[7].w[0]);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003CC170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003CC198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 25536u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CC224; } }
L_003CC198:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_003CC1D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC1D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[8], c.r[2].w[0] + 19616u);
    set32(c.r[7], c.r[4].w[0] - 25536u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] - 25536u);  if (t) { goto L_003CC1E4; } }
    c.budget -= 1;
L_003CC1D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[4].w[0] - 25536u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[4].w[0] - 25536u);
    c.budget -= 3;
L_003CC1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CC1ECu) [[unlikely]] return; }
L_003CC1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CC1F4u) [[unlikely]] return; }
L_003CC1F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 47u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 92u);  if (t) { goto L_003CC214; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CC228; } }
L_003CC214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC21Cu);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CC21Cu) [[unlikely]] return; }
L_003CC21C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003CC224:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CC228:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 25536u);  c.pc = t; return; }
L_003CC248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C96C0u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 195u, depth); }
L_003CC260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9598u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 189u, depth); }
L_003CC278:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C95D8u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 190u, depth); }
L_003CC290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C95E8u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 191u, depth); }
L_003CC2A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9640u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 192u, depth); }
L_003CC2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25144u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC2DCu); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 246u, depth + 1u); else { c.pc = 0x003CDD78u; return; } if (c.pc != 0x003CC2DCu) [[unlikely]] return; }
L_003CC2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC2E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 248u, depth + 1u); else { c.pc = 0x003CDE08u; return; } if (c.pc != 0x003CC2E4u) [[unlikely]] return; }
L_003CC2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 25128u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC2F8:
    set32(c.r[2], 0u + 8191u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    c.budget -= 2;
L_003CC300:
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC300u | kUnwind; return; } goto L_003CC300; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CC328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25140u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CC34C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC34Cu); set32(c.r[4], ld32((c.r[2].w[0] - 25136u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CC34Cu) [[unlikely]] return; }
L_003CC34C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] - 25024u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
L_003CC370:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[7].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003CC38C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CC3A0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003CC38C:
    c.r[2].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC370u | kUnwind; return; } goto L_003CC370; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CC3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CC3A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC3C4u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC3C4u) [[unlikely]] return; }
L_003CC3C4:
    set32(c.r[17], c.r[16].w[0] + 20u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC3D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 208u, depth + 1u); else { c.pc = 0x003C9800u; return; } if (c.pc != 0x003CC3D8u) [[unlikely]] return; }
L_003CC3D8:
    set32(c.r[4], 0u + 16385u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC3E4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC3E4u) [[unlikely]] return; }
L_003CC3E4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC3F8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003CC3F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[7], c.r[4].w[0] << 11);
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[4].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CC468; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CC468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CC528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC494u);  if (depth < kMaxDepth) unit_00B4(c, 318u, depth + 1u); else { c.pc = 0x003D32A8u; return; } if (c.pc != 0x003CC494u) [[unlikely]] return; }
L_003CC494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC49Cu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_00B2(c, 70u, depth + 1u); else { c.pc = 0x003C8968u; return; } if (c.pc != 0x003CC49Cu) [[unlikely]] return; }
L_003CC49C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CC518; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20064u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003CC000u < 16384u) { entry = entries_00B3[(t - 0x003CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CC4C8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CC508; } }
L_003CC4D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003CC508; } }
    c.budget -= 1;
L_003CC500:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 2;
L_003CC508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC510u);  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8728u; return; } if (c.pc != 0x003CC510u) [[unlikely]] return; }
L_003CC510:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_003CC514:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CC518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 323u, depth); }
L_003CC528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC538:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC55Cu); set32(c.r[4], c.r[19].w[0] - 25132u);  if (depth < kMaxDepth) unit_00B4(c, 398u, depth + 1u); else { c.pc = 0x003D3D38u; return; } if (c.pc != 0x003CC55Cu) [[unlikely]] return; }
L_003CC55C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CC594; } }
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 25024u);
    set32(c.r[17], 0u + 12u);
    c.budget -= 3;
L_003CC570:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CC588; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC584u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 35u, depth + 1u); else { c.pc = 0x003CC470u; return; } if (c.pc != 0x003CC584u) [[unlikely]] return; }
L_003CC584:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CC588:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC570u | kUnwind; return; } goto L_003CC570; } }
    st32((c.r[19].w[0] - 25132u), 0u);
    c.budget -= 1;
L_003CC594:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC5B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 25140u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 25136u), c.r[5].w[0]);  c.pc = t; return; }
L_003CC5C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CC654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC5ECu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 230u, depth + 1u); else { c.pc = 0x003CDB48u; return; } if (c.pc != 0x003CC5ECu) [[unlikely]] return; }
L_003CC5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[2].w[0] - 24400u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CC650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC60Cu);  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CC60Cu) [[unlikely]] return; }
L_003CC60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC614u); set32(c.r[4], 0u + 16896u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC614u) [[unlikely]] return; }
L_003CC614:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC620u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CC620u) [[unlikely]] return; }
L_003CC620:
    set32(c.r[4], 0u + 16897u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC62Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC62Cu) [[unlikely]] return; }
L_003CC62C:
    set32(c.r[4], 0u + 17152u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC640u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC640u) [[unlikely]] return; }
L_003CC640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CC648u) [[unlikely]] return; }
L_003CC648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC650u); set32(c.r[4], 0u + 17153u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC650u) [[unlikely]] return; }
L_003CC650:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CC654:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC668:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC678u);  if (depth < kMaxDepth) unit_00B3(c, 59u, depth + 1u); else { c.pc = 0x003CC690u; return; } if (c.pc != 0x003CC678u) [[unlikely]] return; }
L_003CC678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CC690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CC6B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20104u);  if (t) { goto L_003CC860; } }
    c.budget -= 1;
L_003CC6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6C0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 230u, depth + 1u); else { c.pc = 0x003CDB48u; return; } if (c.pc != 0x003CC6C0u) [[unlikely]] return; }
L_003CC6C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003CC870; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 24400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CC6E0u) [[unlikely]] return; }
L_003CC6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6E8u); set32(c.r[4], 0u + 17408u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC6E8u) [[unlikely]] return; }
L_003CC6E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC6F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CC6F4u) [[unlikely]] return; }
L_003CC6F4:
    set32(c.r[4], 0u + 17409u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC700u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC700u) [[unlikely]] return; }
L_003CC700:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003CC740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC72Cu); set32(c.r[4], c.r[4].w[0] + 20152u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CC72Cu) [[unlikely]] return; }
L_003CC72C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CC730:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20184u);  if (t) { goto L_003CC860; } }
    c.budget -= 1;
L_003CC740:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_003CC780; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC770; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC76Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CC76Cu) [[unlikely]] return; }
L_003CC76C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CC770:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20280u);  if (t) { goto L_003CC860; } }
    c.budget -= 1;
L_003CC780:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CC7B8; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC7A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7A4u); set32(c.r[4], c.r[4].w[0] + 20320u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CC7A4u) [[unlikely]] return; }
L_003CC7A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CC7A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20280u);  if (t) { goto L_003CC860; } }
    c.budget -= 1;
L_003CC7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7C0u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC7C0u) [[unlikely]] return; }
L_003CC7C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CC7D0u) [[unlikely]] return; }
L_003CC7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7D8u); set32(c.r[4], 0u + 17921u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC7D8u) [[unlikely]] return; }
L_003CC7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7E0u); set32(c.r[4], 0u + 17920u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC7E0u) [[unlikely]] return; }
L_003CC7E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7F0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CC7F0u) [[unlikely]] return; }
L_003CC7F0:
    set32(c.r[4], 0u + 17921u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC7FCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC7FCu) [[unlikely]] return; }
L_003CC7FC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC830; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC810u); set32(c.r[5], c.r[5].w[0] + 20376u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CC810u) [[unlikely]] return; }
L_003CC810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC818u); set32(c.r[4], 0u + 17664u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC818u) [[unlikely]] return; }
L_003CC818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CC820u) [[unlikely]] return; }
L_003CC820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC828u); set32(c.r[4], 0u + 17665u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC828u) [[unlikely]] return; }
L_003CC828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC874; } }
L_003CC830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC838u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC838u) [[unlikely]] return; }
L_003CC838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CC840u) [[unlikely]] return; }
L_003CC840:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC84Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC84Cu) [[unlikely]] return; }
L_003CC84C:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CC874; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20424u);
    c.budget -= 3;
L_003CC860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC868u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CC868u) [[unlikely]] return; }
L_003CC868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC874; } }
L_003CC870:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CC874:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC888:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8A4u); set32(c.r[4], 0u + 18176u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC8A4u) [[unlikely]] return; }
L_003CC8A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CC8B4u) [[unlikely]] return; }
L_003CC8B4:
    set32(c.r[4], 0u + 18177u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8C0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC8C0u) [[unlikely]] return; }
L_003CC8C0:
    set32(c.r[4], 0u + 18432u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC8FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8D4u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC8D4u) [[unlikely]] return; }
L_003CC8D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CC8E4u) [[unlikely]] return; }
L_003CC8E4:
    set32(c.r[4], 0u + 18433u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC8F0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CC8F0u) [[unlikely]] return; }
L_003CC8F0:
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[16].d[0];
    c.budget -= 3;
L_003CC8FC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 25024u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
L_003CC920:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC920u | kUnwind; return; } goto L_003CC920; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003CC948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CC968:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), 0ull);  if (t) { goto L_003CC998; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20472u);  if (t) { goto L_003CC9D0; } }
    c.budget -= 1;
L_003CC998:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CC9B0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20512u);  if (t) { goto L_003CC9D0; } }
    c.budget -= 1;
L_003CC9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9B8u);  if (depth < kMaxDepth) unit_00B3(c, 89u, depth + 1u); else { c.pc = 0x003CC910u; return; } if (c.pc != 0x003CC9B8u) [[unlikely]] return; }
L_003CC9B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CC9E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20552u);
    c.budget -= 3;
L_003CC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9D8u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CC9D8u) [[unlikely]] return; }
L_003CC9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCAD8; } }
L_003CC9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC9E8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 230u, depth + 1u); else { c.pc = 0x003CDB48u; return; } if (c.pc != 0x003CC9E8u) [[unlikely]] return; }
L_003CC9E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CCA90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 24400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CCA08u) [[unlikely]] return; }
L_003CCA08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CCA24; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA24u); set32(c.r[4], c.r[4].w[0] + 20600u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CCA24u) [[unlikely]] return; }
L_003CCA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 59u, depth + 1u); else { c.pc = 0x003CC690u; return; } if (c.pc != 0x003CCA2Cu) [[unlikely]] return; }
L_003CCA2C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[16].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_003CCAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA44u); set32(c.r[4], 0u + 18688u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CCA44u) [[unlikely]] return; }
L_003CCA44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24080u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CCA54u) [[unlikely]] return; }
L_003CCA54:
    set32(c.r[4], 0u + 18689u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA60u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CCA60u) [[unlikely]] return; }
L_003CCA60:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_003CCAA4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA7Cu); set32(c.r[5], c.r[5].w[0] + 20640u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCA7Cu) [[unlikely]] return; }
L_003CCA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCA84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 91u, depth + 1u); else { c.pc = 0x003CC948u; return; } if (c.pc != 0x003CCA84u) [[unlikely]] return; }
L_003CCA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCAD8; } }
    c.budget -= 1;
L_003CCA90:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st64((c.r[16].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 5;
L_003CCAA4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(2047ll);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] << 21;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
L_003CCAD8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CCAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003CCB88; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  goto L_003CCB24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB20u);  if (depth < kMaxDepth) unit_00B3(c, 123u, depth + 1u); else { c.pc = 0x003CCE00u; return; } if (c.pc != 0x003CCB20u) [[unlikely]] return; }
L_003CCB20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_003CCB24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CCB70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB34u); set32(c.r[4], 0u + 20480u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CCB34u) [[unlikely]] return; }
L_003CCB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB3Cu); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CCB3Cu) [[unlikely]] return; }
L_003CCB3C:
    set32(c.r[4], 0u + 20481u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB48u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CCB48u) [[unlikely]] return; }
L_003CCB48:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CCB70; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CCB70; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCB6Cu); set32(c.r[4], c.r[4].w[0] + 20680u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CCB6Cu) [[unlikely]] return; }
L_003CCB6C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003CCB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC948u | kUnwind; return; } goto L_003CC948; }
L_003CCB88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CCBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CCBC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCBBCu); set32(c.r[5], c.r[5].w[0] + 20704u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCBBCu) [[unlikely]] return; }
L_003CCBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCC28; } }
    c.budget -= 1;
L_003CCBC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CCBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_003CCC08; } }
L_003CCBD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CCBF0; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003CCC0C; } }
L_003CCBF0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[7].w[0] + 16u)));  if (t) { goto L_003CCC0C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003CCC0C; } }
L_003CCC08:
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 1;
L_003CCC0C:
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    st32((c.r[7].w[0] + 40u), 0u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 7;
L_003CCC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CCC38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CCC60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCC54u); set32(c.r[5], c.r[5].w[0] + 20704u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCC54u) [[unlikely]] return; }
L_003CCC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCC64; } }
    c.budget -= 1;
L_003CCC60:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_003CCC64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CCC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003CCCB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20704u);  if (t) { goto L_003CCCCC; } }
    c.budget -= 1;
L_003CCCB0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CCCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 20728u);  if (t) { goto L_003CCCCC; } }
L_003CCCC0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CCCE0; } }
    set32(c.r[5], c.r[5].w[0] + 20760u);
    c.budget -= 1;
L_003CCCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCD4u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCCD4u) [[unlikely]] return; }
L_003CCCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCDDC; } }
    c.budget -= 1;
L_003CCCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCCE8u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_00B3(c, 28u, depth + 1u); else { c.pc = 0x003CC358u; return; } if (c.pc != 0x003CCCE8u) [[unlikely]] return; }
L_003CCCE8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_003CCCF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCDDC; } }
L_003CCCF8:
    set32(c.r[21], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCDDC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003CCD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_003CCDDC; } }
    c.budget -= 1;
L_003CCD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD20u);  if (depth < kMaxDepth) unit_00B2(c, 52u, depth + 1u); else { c.pc = 0x003C86A0u; return; } if (c.pc != 0x003CCD20u) [[unlikely]] return; }
L_003CCD20:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003CCDDC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[16], c.r[18].w[0] << 11);
    c.r[7].d[0] = ld64((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD64u); if (c.r[6].d[0] != 0) c.r[16].d[0] = c.r[7].d[0];  if (depth < kMaxDepth) unit_00B3(c, 34u, depth + 1u); else { c.pc = 0x003CC410u; return; } if (c.pc != 0x003CCD64u) [[unlikely]] return; }
L_003CCD64:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD7Cu); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 67u, depth + 1u); else { c.pc = 0x003C88B8u; return; } if (c.pc != 0x003CCD7Cu) [[unlikely]] return; }
L_003CCD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CCDE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 24080u)));
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[20].d[0]) { st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));  goto L_003CCDD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD9Cu);  if (depth < kMaxDepth) unit_00B2(c, 150u, depth + 1u); else { c.pc = 0x003C91F0u; return; } if (c.pc != 0x003CCD9Cu) [[unlikely]] return; }
L_003CCD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDA4u);  if (depth < kMaxDepth) unit_00B2(c, 140u, depth + 1u); else { c.pc = 0x003C90E0u; return; } if (c.pc != 0x003CCDA4u) [[unlikely]] return; }
L_003CCDA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDBCu); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8728u; return; } if (c.pc != 0x003CCDBCu) [[unlikely]] return; }
L_003CCDBC:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003CCDD8; } }
L_003CCDD0:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_003CCDD8:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003CCDDC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CCDE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_003CCE58; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 20800u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC328u | kUnwind; return; } goto L_003CC328; }
L_003CCE58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CCEE8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);  if (t) { goto L_003CCE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE7Cu);  if (depth < kMaxDepth) unit_00B2(c, 92u, depth + 1u); else { c.pc = 0x003C8BC8u; return; } if (c.pc != 0x003CCE7Cu) [[unlikely]] return; }
L_003CCE7C:
    set32(c.r[19], 0u + 2u);
    c.r[17].d[0] = c.r[17].d[0] | 65526ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CCE98; } }
L_003CCE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCE98u);  if (depth < kMaxDepth) unit_00B3(c, 24u, depth + 1u); else { c.pc = 0x003CC2F8u; return; } if (c.pc != 0x003CCE98u) [[unlikely]] return; }
L_003CCE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEA0u);  if (depth < kMaxDepth) unit_00B2(c, 140u, depth + 1u); else { c.pc = 0x003C90E0u; return; } if (c.pc != 0x003CCEA0u) [[unlikely]] return; }
L_003CCEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEA8u);  if (depth < kMaxDepth) unit_00B3(c, 43u, depth + 1u); else { c.pc = 0x003CC538u; return; } if (c.pc != 0x003CCEA8u) [[unlikely]] return; }
L_003CCEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 131u, depth + 1u); else { c.pc = 0x003CCF08u; return; } if (c.pc != 0x003CCEB0u) [[unlikely]] return; }
L_003CCEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[19].d[0]) { st32((c.r[16].w[0] + 40u), 0u);  goto L_003CCEE0; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[20].w[0] - 24076u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CCE90u | kUnwind; return; } goto L_003CCE90; } }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 40u), 0u);  goto L_003CCEE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCEDCu); set32(c.r[4], c.r[21].w[0] + 20824u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CCEDCu) [[unlikely]] return; }
L_003CCEDC:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_003CCEE0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003CCEE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCF08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CCF30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF24u); set32(c.r[5], c.r[5].w[0] + 20704u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCF24u) [[unlikely]] return; }
L_003CCF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCF34; } }
    c.budget -= 1;
L_003CCF30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 1;
L_003CCF34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CCF40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_003CCF48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CCF70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCF64u); set32(c.r[5], c.r[5].w[0] + 20704u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CCF64u) [[unlikely]] return; }
L_003CCF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCF88; } }
    c.budget -= 1;
L_003CCF70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CCF88; }
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_003CCF88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CCF98:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC690u | kUnwind; return; } goto L_003CC690; }
L_003CCFB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003CCFD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] << 11;
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_003CD000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD010u);  if (depth < kMaxDepth) unit_00B3(c, 136u, depth + 1u); else { c.pc = 0x003CCF98u; return; } if (c.pc != 0x003CD010u) [[unlikely]] return; }
L_003CD010:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD030u);  if (depth < kMaxDepth) unit_00B3(c, 136u, depth + 1u); else { c.pc = 0x003CCF98u; return; } if (c.pc != 0x003CD030u) [[unlikely]] return; }
L_003CD030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CD108; } }
    set32(c.r[2], 0u + 203u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 204ll ? 1ull : 0ull;  if (t) { goto L_003CD0F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 205u);  if (t) { goto L_003CD0A0; } }
    set32(c.r[2], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 202ll ? 1ull : 0ull;  if (t) { goto L_003CD0D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 200u);  if (t) { goto L_003CD0E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CD0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CD10C; } }
    c.budget -= 1;
L_003CD0A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[5].sd[0] < 205ll ? 1ull : 0ull;  if (t) { goto L_003CD0F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 299u);  if (t) { goto L_003CD0E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CD100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CD10C; } }
L_003CD0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0C8u);  if (depth < kMaxDepth) unit_00B3(c, 137u, depth + 1u); else { c.pc = 0x003CCFB0u; return; } if (c.pc != 0x003CD0C8u) [[unlikely]] return; }
L_003CD0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CD104; } }
L_003CD0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0D8u);  if (depth < kMaxDepth) unit_00B3(c, 138u, depth + 1u); else { c.pc = 0x003CCFD0u; return; } if (c.pc != 0x003CD0D8u) [[unlikely]] return; }
L_003CD0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CD104; } }
L_003CD0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0E8u);  if (depth < kMaxDepth) unit_00B3(c, 139u, depth + 1u); else { c.pc = 0x003CD000u; return; } if (c.pc != 0x003CD0E8u) [[unlikely]] return; }
L_003CD0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CD104; } }
L_003CD0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0F8u);  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CD020u; return; } if (c.pc != 0x003CD0F8u) [[unlikely]] return; }
L_003CD0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CD104; } }
L_003CD100:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003CD104:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003CD108:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CD10C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD118:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD12Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CD12Cu) [[unlikely]] return; }
L_003CD12C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 16u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CD174; } }
    set32(c.r[7], 0u + 58u);
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_003CD150:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_003CD178; } }
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD150u | kUnwind; return; } goto L_003CD150; } }
L_003CD174:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CD178:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD188:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1A8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CD1A8u) [[unlikely]] return; }
L_003CD1A8:
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] + 20856u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    swr(c.r[2], (c.r[29].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1CCu); st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x003CD1CCu) [[unlikely]] return; }
L_003CD1CC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD204u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B3(c, 148u, depth + 1u); else { c.pc = 0x003CD118u; return; } if (c.pc != 0x003CD204u) [[unlikely]] return; }
L_003CD204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CD218; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD218u); set32(c.r[5], c.r[5].w[0] - 23808u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003CD218u) [[unlikely]] return; }
L_003CD218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 151u, depth + 1u); else { c.pc = 0x003CD188u; return; } if (c.pc != 0x003CD220u) [[unlikely]] return; }
L_003CD220:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_003CD290; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD240u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CD240u) [[unlikely]] return; }
L_003CD240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CD248u) [[unlikely]] return; }
L_003CD248:
    set32(c.r[4], 0u + 92u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_003CD28C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003CD290; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CD290; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003CD290; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CD28C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD28Cu); set32(c.r[5], c.r[5].w[0] + 20864u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CD28Cu) [[unlikely]] return; }
L_003CD28C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CD290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD298u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x003CD298u) [[unlikely]] return; }
L_003CD298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CD2A0u) [[unlikely]] return; }
L_003CD2A0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CD2DC; } }
    set32(c.r[8], 0u + 92u);
    set32(c.r[7], 0u + 47u);
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_003CD2B8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_003CD2CC; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_003CD2CC:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD2B8u | kUnwind; return; } goto L_003CD2B8; } }
L_003CD2DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD2F8:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], 0u + 47u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] ^ 92ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_003CD310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[5].w[0] << 24);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD334u); set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));  if (depth < kMaxDepth) unit_00B3(c, 164u, depth + 1u); else { c.pc = 0x003CD2F8u; return; } if (c.pc != 0x003CD334u) [[unlikely]] return; }
L_003CD334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD340u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 164u, depth + 1u); else { c.pc = 0x003CD2F8u; return; } if (c.pc != 0x003CD340u) [[unlikely]] return; }
L_003CD340:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CD368:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD38Cu); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CD38Cu) [[unlikely]] return; }
L_003CD38C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD398u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CD398u) [[unlikely]] return; }
L_003CD398:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003CD3A8; } }
L_003CD3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CD3E0; } }
L_003CD3A8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003CD3DC; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_003CD3B8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3CCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 165u, depth + 1u); else { c.pc = 0x003CD310u; return; } if (c.pc != 0x003CD3CCu) [[unlikely]] return; }
L_003CD3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD3A0u | kUnwind; return; } goto L_003CD3A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD3B8u | kUnwind; return; } goto L_003CD3B8; } }
L_003CD3DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CD3E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD400:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CD540; } }
    set32(c.r[2], c.r[21].w[0] << 3);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[23], 0u + 10u);
    set32(c.r[22], 0u + 13u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
L_003CD468:
    set32(c.r[6], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003CD480; } }
    set32(c.r[2], 0u + 47u);
    set32(c.r[3], 0u + 47u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003CD480:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[23].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  goto L_003CD4A4; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));  goto L_003CD4A4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_003CD528; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_003CD4A4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[23].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CD4C0; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003CD4C0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003CD4C8; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003CD4C0:
    set32(c.r[4], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 2;
L_003CD4C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[23].d[0]; set32(c.r[17], c.r[18].w[0] - c.r[5].w[0]);  if (t) { goto L_003CD4DC; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[22].d[0]) { mmi::mult(c, 0, c.r[30].w[0], c.r[20].w[0]); c.r[2].d[0] = c.lo.d[0];  goto L_003CD4E4; }
L_003CD4DC:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    mmi::mult(c, 0, c.r[30].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 2;
L_003CD4E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003CD508u) [[unlikely]] return; }
L_003CD508:
    set32(c.r[6], c.r[16].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 1u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  goto L_003CD518; }
L_003CD518:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[21].d[0]; c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CD540; } }
L_003CD528:
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD468u | kUnwind; return; } goto L_003CD468; }
L_003CD540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_003CD56C; }
    st32((c.r[2].w[0] + 12u), c.r[30].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
L_003CD56C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CD5A0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CD5D0u) [[unlikely]] return; }
L_003CD5D0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CD5DCu) [[unlikely]] return; }
L_003CD5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5E4u); set32(c.r[4], 0u + 24576u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD5E4u) [[unlikely]] return; }
L_003CD5E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5F0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CD5F0u) [[unlikely]] return; }
L_003CD5F0:
    set32(c.r[4], 0u + 24577u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5FCu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD5FCu) [[unlikely]] return; }
L_003CD5FC:
    set32(c.r[4], 0u + 24832u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CD6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD610u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD610u) [[unlikely]] return; }
L_003CD610:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD620u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CD620u) [[unlikely]] return; }
L_003CD620:
    set32(c.r[4], 0u + 24833u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD62Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD62Cu) [[unlikely]] return; }
L_003CD62C:
    set32(c.r[4], 0u + 25088u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CD6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD640u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD640u) [[unlikely]] return; }
L_003CD640:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD650u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 201u, depth + 1u); else { c.pc = 0x003C9748u; return; } if (c.pc != 0x003CD650u) [[unlikely]] return; }
L_003CD650:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD660u); set32(c.r[4], 0u + 25089u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD660u) [[unlikely]] return; }
L_003CD660:
    set32(c.r[2], 0u + 4096u);
    c.r[3].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], 0u + 25344u);  if (t) { goto L_003CD6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD680u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD680u) [[unlikely]] return; }
L_003CD680:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD694u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 223u, depth + 1u); else { c.pc = 0x003C9938u; return; } if (c.pc != 0x003CD694u) [[unlikely]] return; }
L_003CD694:
    set32(c.r[4], 0u + 25345u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6A0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD6A0u) [[unlikely]] return; }
L_003CD6A0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], 0u + 25856u);  if (t) { goto L_003CD6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6B0u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD6B0u) [[unlikely]] return; }
L_003CD6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CD6B8u) [[unlikely]] return; }
L_003CD6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6C0u); set32(c.r[4], 0u + 25857u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD6C0u) [[unlikely]] return; }
L_003CD6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CD6E4; } }
L_003CD6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6D0u); set32(c.r[4], 0u + 25600u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD6D0u) [[unlikely]] return; }
L_003CD6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CD6D8u) [[unlikely]] return; }
L_003CD6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6E0u); set32(c.r[4], 0u + 25601u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD6E0u) [[unlikely]] return; }
L_003CD6E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CD6E4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003CD700:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 288u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 296u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 304u), c.r[22].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 320u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 328u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD750u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CD750u) [[unlikely]] return; }
L_003CD750:
    c.r[3].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 13u);
    if (c.r[3].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CD878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] - 24096u);
    c.budget -= 3;
L_003CD770:
    set32(c.r[3], ld32((c.r[23].w[0] + 12u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD79Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CD79Cu) [[unlikely]] return; }
L_003CD79C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 26112u);  if (t) { goto L_003CD868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7B0u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD7B0u) [[unlikely]] return; }
L_003CD7B0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7BCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CD7BCu) [[unlikely]] return; }
L_003CD7BC:
    set32(c.r[4], 0u + 26113u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD7C8u) [[unlikely]] return; }
L_003CD7C8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CD7F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 24076u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_003CD868; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD7F0u); set32(c.r[4], c.r[2].w[0] + 20872u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD7F0u) [[unlikely]] return; }
L_003CD7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { goto L_003CD868; } }
L_003CD7F8:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD804u); set32(c.r[22], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_00B3(c, 82u, depth + 1u); else { c.pc = 0x003CC888u; return; } if (c.pc != 0x003CD804u) [[unlikely]] return; }
L_003CD804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] + 20912u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 24076u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CD830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD830u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD830u) [[unlikely]] return; }
L_003CD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD838u); set32(c.r[4], 0u + 26624u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD838u) [[unlikely]] return; }
L_003CD838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CD840u) [[unlikely]] return; }
L_003CD840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD848u); set32(c.r[4], 0u + 26625u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD848u) [[unlikely]] return; }
L_003CD848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD850u); set32(c.r[4], 0u + 26368u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD850u) [[unlikely]] return; }
L_003CD850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24080u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD860u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 213u, depth + 1u); else { c.pc = 0x003C9878u; return; } if (c.pc != 0x003CD860u) [[unlikely]] return; }
L_003CD860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD868u); set32(c.r[4], 0u + 26369u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD868u) [[unlikely]] return; }
L_003CD868:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD770u | kUnwind; return; } goto L_003CD770; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_003CD878:
    set32(c.r[16], c.r[3].w[0] - 24076u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003CD894; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD894u); set32(c.r[4], c.r[4].w[0] + 20944u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD894u) [[unlikely]] return; }
L_003CD894:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003CD8BC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 10u);  if (t) { goto L_003CD8B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD8B8u); set32(c.r[4], c.r[4].w[0] + 20968u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD8B8u) [[unlikely]] return; }
L_003CD8B8:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003CD8BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 312u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 328u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003CD8F0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 312u), c.r[23].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] - 24096u);
    st64((c.r[29].w[0] + 264u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 280u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 328u), c.r[31].d[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDA24; } }
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CD9F8; } }
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[21], 0u + 2u);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_003CD950:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[22].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 154u, depth + 1u); else { c.pc = 0x003CD1E0u; return; } if (c.pc != 0x003CD97Cu) [[unlikely]] return; }
L_003CD97C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 26880u);  if (t) { goto L_003CD9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD990u);  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD990u) [[unlikely]] return; }
L_003CD990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD998u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00B2(c, 218u, depth + 1u); else { c.pc = 0x003C98E0u; return; } if (c.pc != 0x003CD998u) [[unlikely]] return; }
L_003CD998:
    set32(c.r[4], 0u + 26881u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD9A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 187u, depth + 1u); else { c.pc = 0x003C9568u; return; } if (c.pc != 0x003CD9A4u) [[unlikely]] return; }
L_003CD9A4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], ld32((c.r[30].w[0] - 24076u)));  if (t) { goto L_003CD9C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CD9E0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD9C0u); set32(c.r[4], c.r[2].w[0] + 21016u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD9C0u) [[unlikely]] return; }
L_003CD9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_003CD9E4; } }
L_003CD9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { goto L_003CD9E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD9E0u); set32(c.r[4], c.r[3].w[0] + 21056u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CD9E0u) [[unlikely]] return; }
L_003CD9E0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003CD9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD950u | kUnwind; return; } goto L_003CD950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[30].w[0] - 24076u)));  if (t) { goto L_003CDA00; } }
    c.budget -= 1;
L_003CD9F8:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[30].w[0] - 24076u)));
    c.budget -= 2;
L_003CDA00:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_003CDA18; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA18u); set32(c.r[4], c.r[4].w[0] + 21088u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CDA18u) [[unlikely]] return; }
L_003CDA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA20u);  if (depth < kMaxDepth) unit_00B3(c, 229u, depth + 1u); else { c.pc = 0x003CDB20u; return; } if (c.pc != 0x003CDA20u) [[unlikely]] return; }
L_003CDA20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CDA24:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 264u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 280u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 296u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 312u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 328u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003CDA58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003CDAF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] - 24096u);
    c.budget -= 3;
L_003CDAA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDAC8u); set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 168u, depth + 1u); else { c.pc = 0x003CD368u; return; } if (c.pc != 0x003CDAC8u) [[unlikely]] return; }
L_003CDAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { goto L_003CDAE8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003CDAF8; } }
    c.budget -= 1;
L_003CDAE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDAA0u | kUnwind; return; } goto L_003CDAA0; } }
L_003CDAF0:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_003CDAF8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CDB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 24096u);
    set32(c.r[6], 0u + 16u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CDB48:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] - 24096u);
    st32((c.r[3].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CDB88; } }
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDA58u | kUnwind; return; } goto L_003CDA58; }
L_003CDB88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CDB98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[20], c.r[2].w[0] - 6656u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBDCu); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CDBDCu) [[unlikely]] return; }
L_003CDBDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 24096u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CDBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBF4u);  if (depth < kMaxDepth) unit_00B3(c, 229u, depth + 1u); else { c.pc = 0x003CDB20u; return; } if (c.pc != 0x003CDBF4u) [[unlikely]] return; }
L_003CDBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBFCu);  if (depth < kMaxDepth) unit_00B3(c, 216u, depth + 1u); else { c.pc = 0x003CD8F0u; return; } if (c.pc != 0x003CDBFCu) [[unlikely]] return; }
L_003CDBFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDD00; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CDC30; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CDD00; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC28u); set32(c.r[4], c.r[4].w[0] + 21112u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CDC28u) [[unlikely]] return; }
L_003CDC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDD00; } }
L_003CDC30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003CDC60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CDD00; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC58u); set32(c.r[4], c.r[4].w[0] + 21160u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CDC58u) [[unlikely]] return; }
L_003CDC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDD00; } }
L_003CDC60:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CDC6Cu) [[unlikely]] return; }
L_003CDC6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDC78u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 177u, depth + 1u); else { c.pc = 0x003CD5A0u; return; } if (c.pc != 0x003CDC78u) [[unlikely]] return; }
L_003CDC78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] + 9u);  goto L_003CDCB8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 24076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CDCA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCA0u); set32(c.r[4], c.r[4].w[0] + 21208u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CDCA0u) [[unlikely]] return; }
L_003CDCA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CDCA4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCB0u); set32(c.r[5], c.r[5].w[0] + 21248u);  if (depth < kMaxDepth) unit_00B3(c, 26u, depth + 1u); else { c.pc = 0x003CC328u; return; } if (c.pc != 0x003CDCB0u) [[unlikely]] return; }
L_003CDCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDD00; } }
L_003CDCB8:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    mmi::divu(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CDCCCu);  goto L_003CDCD0; }
L_003CDCD0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[17].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCE4u); set32(c.r[17], c.r[17].w[0] << 3);  if (depth < kMaxDepth) unit_00B3(c, 174u, depth + 1u); else { c.pc = 0x003CD400u; return; } if (c.pc != 0x003CDCE4u) [[unlikely]] return; }
L_003CDCE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 198u, depth + 1u); else { c.pc = 0x003CD700u; return; } if (c.pc != 0x003CDCF0u) [[unlikely]] return; }
L_003CDCF0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x003CDCF4u);  goto L_003CDCF8; }
L_003CDCF8:
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003CDD00:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CDD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD30u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 230u, depth + 1u); else { c.pc = 0x003CDB48u; return; } if (c.pc != 0x003CDD30u) [[unlikely]] return; }
L_003CDD30:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CDD48:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CDD68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CDD6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 24080u), c.r[4].w[0]);  c.pc = t; return; }
L_003CDD68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_003CDD6C:
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 24080u), c.r[2].w[0]);  c.pc = t; return; }
L_003CDD78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CDDA0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[2].w[0] - 24072u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CDDA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_003CDDE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CDDE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[8], c.r[2].w[0] + 20864u);
    set32(c.r[7], c.r[4].w[0] - 24072u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CDDEC; } }
    c.budget -= 1;
L_003CDDE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st8((c.r[4].w[0] - 24072u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003CDDEC:
    set32(c.r[4], c.r[4].w[0] - 24072u);
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127BE8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_003CDDF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24072u);  c.pc = t; return; }
L_003CDE08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CDE58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[7], c.r[2].w[0] + 21296u);
    set32(c.r[6], c.r[3].w[0] - 23808u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CDE58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 23808u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00127BE8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_003CDE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23808u);  c.pc = t; return; }
L_003CDE80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 24080u)));  c.pc = t; return; }
L_003CDE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 24076u), c.r[4].w[0]);  c.pc = t; return; }
L_003CDEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 24076u)));  c.pc = t; return; }
L_003CDEB0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] - 23456u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CDED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CDF08; } }
L_003CDED0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003CDED4:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);  if (t) { goto L_003CDF08; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] - 23456u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDED4u | kUnwind; return; } goto L_003CDED4; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003CDF08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003CDF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003CDF40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF38u); set32(c.r[4], c.r[4].w[0] + 21304u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CDF38u) [[unlikely]] return; }
L_003CDF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CE000; } }
L_003CDF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF48u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 309u, depth + 1u); else { c.pc = 0x003CE7F8u; return; } if (c.pc != 0x003CDF48u) [[unlikely]] return; }
L_003CDF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF50u);  if (depth < kMaxDepth) unit_00B3(c, 253u, depth + 1u); else { c.pc = 0x003CDEB0u; return; } if (c.pc != 0x003CDF50u) [[unlikely]] return; }
L_003CDF50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_003CDF70; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF68u); set32(c.r[4], c.r[4].w[0] + 21352u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CDF68u) [[unlikely]] return; }
L_003CDF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CDFF4; } }
L_003CDF70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF88u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDF88u) [[unlikely]] return; }
L_003CDF88:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDFA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDFA0u) [[unlikely]] return; }
L_003CDFA0:
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003CDFBCu);  goto L_003CDFC0; }
L_003CDFC0:
    set32(c.r[3], c.r[18].w[0] + 560u);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_003CDFD0:
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDFD0u | kUnwind; return; } goto L_003CDFD0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003CDFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDFFCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 311u, depth + 1u); else { c.pc = 0x003CE818u; return; } if (c.pc != 0x003CDFFCu) [[unlikely]] return; }
L_003CDFFC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CE000:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CE018:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CE058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE034u);  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003CE034u) [[unlikely]] return; }
L_003CE034:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[6], 0u + 568u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CE058:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_003CE070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE098; }
L_003CE098:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_003CE0E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE0E0u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE0E0u) [[unlikely]] return; }
L_003CE0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE208; } }
L_003CE0E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE208; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_003CE118; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE10Cu); set32(c.r[4], c.r[4].w[0] + 21440u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE10Cu) [[unlikely]] return; }
L_003CE10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE208; } }
    c.budget -= 1;
L_003CE118:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + 15u);
    set32(c.r[7], c.r[3].w[0] + 30u);
    c.r[5].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + 56u);
    set32(c.r[2], c.r[6].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.r[8].d[0] = c.r[3].d[0] ^ c.r[8].d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    if (c.r[8].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE178u); st32((c.r[16].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CE178u) [[unlikely]] return; }
L_003CE178:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CE1A8; } }
L_003CE188:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE188u | kUnwind; return; } goto L_003CE188; } }
L_003CE1A8:
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[8], 0u + 1u);
    st32((c.r[16].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[17].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[8].d[0]; st32((c.r[17].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_003CE204; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003CE204:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003CE208:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CE230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE250; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE250:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CE268; } }
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 3;
L_003CE268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CE2A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE2A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003CE2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE2B4u);  if (depth < kMaxDepth) unit_00B3(c, 276u, depth + 1u); else { c.pc = 0x003CE2D8u; return; } if (c.pc != 0x003CE2B4u) [[unlikely]] return; }
L_003CE2B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003CE2B8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_003CE2C4; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003CE2C4:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CE308; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE308:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CE350; }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CE33C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 44u), 0u);  goto L_003CE340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE338u);  if (depth < kMaxDepth) unit_00AF(c, 67u, depth + 1u); else { c.pc = 0x003BC890u; return; } if (c.pc != 0x003CE338u) [[unlikely]] return; }
L_003CE338:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003CE33C:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_003CE340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 273u, depth + 1u); else { c.pc = 0x003CE230u; return; } if (c.pc != 0x003CE348u) [[unlikely]] return; }
L_003CE348:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003CE350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE380; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE380:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  goto L_003CE390; }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_003CE390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 23456u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.budget -= 10;
L_003CE3C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CE3E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE3DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 345u, depth + 1u); else { c.pc = 0x003CED18u; return; } if (c.pc != 0x003CE3DCu) [[unlikely]] return; }
L_003CE3DC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CE3E0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE3C8u | kUnwind; return; } goto L_003CE3C8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CE400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE420; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE418u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE418u) [[unlikely]] return; }
L_003CE418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE424; } }
L_003CE420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_003CE424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE450; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE448u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE448u) [[unlikely]] return; }
L_003CE448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE454; } }
L_003CE450:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_003CE454:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CE488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE480u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE480u) [[unlikely]] return; }
L_003CE480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE4E4; } }
L_003CE488:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CE4A4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 32u)));  goto L_003CE4B8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CE4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4ACu); set32(c.r[4], c.r[4].w[0] + 21480u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE4ACu) [[unlikely]] return; }
L_003CE4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE4E4; } }
    c.budget -= 1;
L_003CE4B8:
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 11;
L_003CE4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE510; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE508u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE508u) [[unlikely]] return; }
L_003CE508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CE578; } }
L_003CE510:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CE54C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003CE528:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_003CE54C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE528u | kUnwind; return; } goto L_003CE528; }
L_003CE54C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_003CE570; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE564u); set32(c.r[4], c.r[4].w[0] + 21512u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE564u) [[unlikely]] return; }
L_003CE564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CE578; } }
    c.budget -= 1;
L_003CE570:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 2;
L_003CE578:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE588:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE5A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5A0u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE5A0u) [[unlikely]] return; }
L_003CE5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE610; } }
L_003CE5A8:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CE5E4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003CE5C0:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_003CE5E4; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE5C0u | kUnwind; return; } goto L_003CE5C0; }
L_003CE5E4:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_003CE608; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5FCu); set32(c.r[4], c.r[4].w[0] + 21512u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE5FCu) [[unlikely]] return; }
L_003CE5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE610; } }
    c.budget -= 1;
L_003CE608:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 2;
L_003CE610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE640; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE638u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE638u) [[unlikely]] return; }
L_003CE638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CE6A8; } }
L_003CE640:
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CE67C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_003CE658:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_003CE67C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE658u | kUnwind; return; } goto L_003CE658; }
L_003CE67C:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] << 5);  goto L_003CE6A0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE694u); set32(c.r[4], c.r[4].w[0] + 21512u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE694u) [[unlikely]] return; }
L_003CE694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CE6A8; } }
    c.budget -= 1;
L_003CE6A0:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 2;
L_003CE6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE6B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE6E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE6E0:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  goto L_003CE6FC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CE710; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 1;
L_003CE6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21552u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE710:
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE740; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE738u); set32(c.r[4], c.r[4].w[0] + 21400u);  if (depth < kMaxDepth) unit_00B3(c, 313u, depth + 1u); else { c.pc = 0x003CE858u; return; } if (c.pc != 0x003CE738u) [[unlikely]] return; }
L_003CE738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003CE744; } }
L_003CE740:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_003CE744:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE750:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CE778; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 23768u), 0u);
    st32((c.r[3].w[0] - 23764u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] - 23760u), 0u);  c.pc = t; return; }
L_003CE778:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 23768u), c.r[7].w[0]);
    st32((c.r[3].w[0] - 23764u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] - 23760u), c.r[6].w[0]);  c.pc = t; return; }
L_003CE790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[2].w[0] - 23768u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE7B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 23764u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7B8u); set32(c.r[5], ld32((c.r[3].w[0] - 23760u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE7B8u) [[unlikely]] return; }
L_003CE7B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE7C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CE7E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21400u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003CE858; }
L_003CE7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE7F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE808u);  if (depth < kMaxDepth) unit_00B4(c, 117u, depth + 1u); else { c.pc = 0x003D0E00u; return; } if (c.pc != 0x003CE808u) [[unlikely]] return; }
L_003CE808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CE818:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 118u, depth); }
L_003CE830:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CE848; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 23752u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 23748u), 0u);  c.pc = t; return; }
L_003CE848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 23752u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 23748u), c.r[5].w[0]);  c.pc = t; return; }
L_003CE858:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] - 23744u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 24u), c.f[12]);
    st32((c.r[29].w[0] + 28u), c.f[13]);
    st32((c.r[29].w[0] + 32u), c.f[14]);
    st32((c.r[29].w[0] + 36u), c.f[15]);
    st32((c.r[29].w[0] + 40u), c.f[16]);
    st32((c.r[29].w[0] + 44u), c.f[17]);
    st32((c.r[29].w[0] + 48u), c.f[18]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE8B8u); st32((c.r[29].w[0] + 52u), c.f[19]);  if (depth < kMaxDepth) unit_000B(c, 31u, depth + 1u); else { c.pc = 0x0012C458u; return; } if (c.pc != 0x003CE8B8u) [[unlikely]] return; }
L_003CE8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 23752u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CE8D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE8D4u); set32(c.r[4], ld32((c.r[2].w[0] - 23748u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE8D4u) [[unlikely]] return; }
L_003CE8D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CE8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CE8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CE8F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23488u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE918u); set32(c.r[3], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 309u, depth + 1u); else { c.pc = 0x003CE7F8u; return; } if (c.pc != 0x003CE918u) [[unlikely]] return; }
L_003CE918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] - 23464u);
    set32(c.r[4], c.r[4].w[0] - 23456u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 9088u);  if (t) { goto L_003CE958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE940u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CE940u) [[unlikely]] return; }
L_003CE940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE948u);  if (depth < kMaxDepth) unit_00B3(c, 316u, depth + 1u); else { c.pc = 0x003CE8E8u; return; } if (c.pc != 0x003CE948u) [[unlikely]] return; }
L_003CE948:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 312u, depth + 1u); else { c.pc = 0x003CE830u; return; } if (c.pc != 0x003CE954u) [[unlikely]] return; }
L_003CE954:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003CE958:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE968u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 311u, depth + 1u); else { c.pc = 0x003CE818u; return; } if (c.pc != 0x003CE968u) [[unlikely]] return; }
L_003CE968:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CE978:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] - 23464u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003CEA18; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] - 23456u);
    set32(c.r[17], 0u + 15u);
    c.budget -= 4;
L_003CE9B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CE9D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 264u, depth + 1u); else { c.pc = 0x003CE018u; return; } if (c.pc != 0x003CE9CCu) [[unlikely]] return; }
L_003CE9CC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CE9D0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE9B8u | kUnwind; return; } goto L_003CE9B8; } }
    set32(c.r[4], c.r[19].w[0] - 23456u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9E8u); set32(c.r[6], 0u + 9088u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CE9E8u) [[unlikely]] return; }
L_003CE9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9F0u);  if (depth < kMaxDepth) unit_00B3(c, 317u, depth + 1u); else { c.pc = 0x003CE8F0u; return; } if (c.pc != 0x003CE9F0u) [[unlikely]] return; }
L_003CE9F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE830u | kUnwind; return; } goto L_003CE830; }
L_003CEA18:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CEA38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[17], c.r[2].w[0] + 56u);  if (t) { goto L_003CEB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA70u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00AF(c, 65u, depth + 1u); else { c.pc = 0x003BC828u; return; } if (c.pc != 0x003CEA70u) [[unlikely]] return; }
L_003CEA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA78u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00AF(c, 44u, depth + 1u); else { c.pc = 0x003BC668u; return; } if (c.pc != 0x003CEA78u) [[unlikely]] return; }
L_003CEA78:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CEA84u) [[unlikely]] return; }
L_003CEA84:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003CEAB4; } }
    c.budget -= 1;
L_003CEA98:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEA98u | kUnwind; return; } goto L_003CEA98; } }
L_003CEAB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CEAE0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 21640u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE858u | kUnwind; return; } goto L_003CE858; }
L_003CEAE0:
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAF8u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AF(c, 38u, depth + 1u); else { c.pc = 0x003BC5C0u; return; } if (c.pc != 0x003CEAF8u) [[unlikely]] return; }
L_003CEAF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB04u); set32(c.r[5], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_00AF(c, 72u, depth + 1u); else { c.pc = 0x003BC8F0u; return; } if (c.pc != 0x003CEB04u) [[unlikely]] return; }
L_003CEB04:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB24u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00AF(c, 113u, depth + 1u); else { c.pc = 0x003BCF60u; return; } if (c.pc != 0x003CEB24u) [[unlikely]] return; }
L_003CEB24:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x003BC708u; return; } if (c.pc != 0x003CEB30u) [[unlikely]] return; }
L_003CEB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEB38u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00AF(c, 57u, depth + 1u); else { c.pc = 0x003BC7A0u; return; } if (c.pc != 0x003CEB38u) [[unlikely]] return; }
L_003CEB38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_003CEB48:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CEBA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 21704u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE858u | kUnwind; return; } goto L_003CE858; }
L_003CEBA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEBB4u); set32(c.r[17], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_00AF(c, 53u, depth + 1u); else { c.pc = 0x003BC700u; return; } if (c.pc != 0x003CEBB4u) [[unlikely]] return; }
L_003CEBB4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_003CEBD0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003CEBFC; } }
L_003CEBD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003CEBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEBE0u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_00AF(c, 55u, depth + 1u); else { c.pc = 0x003BC750u; return; } if (c.pc != 0x003CEBE0u) [[unlikely]] return; }
L_003CEBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003CEBFC; } }
L_003CEBE8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CEC00; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_003CEBFC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CEC00:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEC10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003CECF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));  if (t) { goto L_003CEC80; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 56u);
    set32(c.r[21], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_003CEC84; } }
L_003CEC80:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_003CEC84:
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[5].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_003CECC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CECC0u);  if (depth < kMaxDepth) unit_00B3(c, 306u, depth + 1u); else { c.pc = 0x003CE790u; return; } if (c.pc != 0x003CECC0u) [[unlikely]] return; }
L_003CECC0:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 2;
L_003CECC8:
    set32(c.r[2], c.r[7].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CECF4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CECF0u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 268u, depth + 1u); else { c.pc = 0x003CE098u; return; } if (c.pc != 0x003CECF0u) [[unlikely]] return; }
L_003CECF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CECF4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CED18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CEDD0; } }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CEDD4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CEDD4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[17], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_003CED84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED7Cu);  if (depth < kMaxDepth) unit_00B3(c, 339u, depth + 1u); else { c.pc = 0x003CEB60u; return; } if (c.pc != 0x003CED7Cu) [[unlikely]] return; }
L_003CED7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_003CED84:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_003CEDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 342u, depth + 1u); else { c.pc = 0x003CEC10u; return; } if (c.pc != 0x003CED9Cu) [[unlikely]] return; }
L_003CED9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 2;
L_003CEDA4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003CEDD4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEA38u | kUnwind; return; } goto L_003CEA38; }
L_003CEDD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003CEDD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEDE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 316u, depth); }
L_003CEE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00B4(c, 317u, depth); }
L_003CEE18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] - 14368u);
    set32(c.r[2], c.r[2].w[0] - 14352u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[4], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_003CEE30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 14364u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CEE54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEE54u); set32(c.r[4], ld32((c.r[2].w[0] - 14360u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEE54u) [[unlikely]] return; }
L_003CEE54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CEE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129970u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 163u, depth); }
L_003CEE78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEE98u); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x003CEE98u) [[unlikely]] return; }
L_003CEE98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[3].w[0] - 12008u);
    set32(c.r[3], 0u + 17u);
    set32(c.r[5], c.r[5].w[0] + 21784u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CEECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEEC0u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003CEEC0u) [[unlikely]] return; }
L_003CEEC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEECCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CEECCu) [[unlikely]] return; }
L_003CEECC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_003CEF00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], c.r[16].w[0] - 12008u);
    set32(c.r[5], c.r[5].w[0] + 21848u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEEF4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003CEEF4u) [[unlikely]] return; }
L_003CEEF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEF00u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CEF00u) [[unlikely]] return; }
L_003CEF00:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEF14u); st32((c.r[29].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 353u, depth + 1u); else { c.pc = 0x003CEE60u; return; } if (c.pc != 0x003CEF14u) [[unlikely]] return; }
L_003CEF14:
    set32(c.r[6], 0u + 16u);
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_003CEF38; } }
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003CEF38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CEF58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEF48u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B3(c, 353u, depth + 1u); else { c.pc = 0x003CEE60u; return; } if (c.pc != 0x003CEF48u) [[unlikely]] return; }
L_003CEF48:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003CEF58:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CEF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CEF78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 14248u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], 0u + 39u);
    c.budget -= 8;
L_003CEF98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003CEFB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 362u, depth + 1u); else { c.pc = 0x003CEF70u; return; } if (c.pc != 0x003CEFACu) [[unlikely]] return; }
L_003CEFAC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003CEFB0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEF98u | kUnwind; return; } goto L_003CEF98; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] - 14364u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 14360u), c.r[5].w[0]);  c.pc = t; return; }
L_003CEFE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFF8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 354u, depth + 1u); else { c.pc = 0x003CEE78u; return; } if (c.pc != 0x003CEFF8u) [[unlikely]] return; }
L_003CEFF8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF008:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] - 14248u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CF028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CF058; } }
L_003CF028:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003CF02C:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[5].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_003CF058; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - 14248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF02Cu | kUnwind; return; } goto L_003CF02C; }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003CF058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003CF060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 56u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124ED8u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 49u, depth); }
L_003CF080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2048u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF0A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 367u, depth + 1u); else { c.pc = 0x003CEFE8u; return; } if (c.pc != 0x003CF0A0u) [[unlikely]] return; }
L_003CF0A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x003CF0B4u);  goto L_003CF0B8; }
L_003CF0B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003CF118; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 21912u);  if (t) { goto L_003CF14C; } }
    c.budget -= 1;
L_003CF118:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CF130; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 21952u);  if (t) { goto L_003CF14C; } }
    c.budget -= 1;
L_003CF130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF138u);  if (depth < kMaxDepth) unit_00B3(c, 369u, depth + 1u); else { c.pc = 0x003CF008u; return; } if (c.pc != 0x003CF138u) [[unlikely]] return; }
L_003CF138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 21992u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003CF160; } }
L_003CF14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF154u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF154u) [[unlikely]] return; }
L_003CF154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF178; } }
    c.budget -= 1;
L_003CF160:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF16Cu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x003CF16Cu) [[unlikely]] return; }
L_003CF16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 372u, depth + 1u); else { c.pc = 0x003CF080u; return; } if (c.pc != 0x003CF174u) [[unlikely]] return; }
L_003CF174:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CF178:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CF1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF1ACu);  if (depth < kMaxDepth) unit_00B3(c, 396u, depth + 1u); else { c.pc = 0x003CF430u; return; } if (c.pc != 0x003CF1ACu) [[unlikely]] return; }
L_003CF1AC:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CF1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF1C4u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B3(c, 371u, depth + 1u); else { c.pc = 0x003CF060u; return; } if (c.pc != 0x003CF1C4u) [[unlikely]] return; }
L_003CF1C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF1D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003CF210; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF208u); set32(c.r[5], c.r[5].w[0] + 22040u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF208u) [[unlikely]] return; }
L_003CF208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF27C; } }
L_003CF210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF218u);  if (depth < kMaxDepth) unit_00B3(c, 348u, depth + 1u); else { c.pc = 0x003CEDE8u; return; } if (c.pc != 0x003CF218u) [[unlikely]] return; }
L_003CF218:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CF228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_003CF258; } }
L_003CF228:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CF240; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003CF25C; } }
L_003CF240:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003CF25C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003CF25C; } }
L_003CF258:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003CF25C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF278u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 349u, depth + 1u); else { c.pc = 0x003CEE00u; return; } if (c.pc != 0x003CF278u) [[unlikely]] return; }
L_003CF278:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_003CF27C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF2C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF2B4u); set32(c.r[5], c.r[5].w[0] + 22072u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF2B4u) [[unlikely]] return; }
L_003CF2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF2C4; } }
    c.budget -= 1;
L_003CF2C0:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_003CF2C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_003CF300; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 22104u);  if (t) { goto L_003CF31C; } }
L_003CF300:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CF310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 22136u);  if (t) { goto L_003CF31C; } }
L_003CF310:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CF330; } }
    set32(c.r[5], c.r[5].w[0] + 22168u);
    c.budget -= 1;
L_003CF31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF324u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF324u) [[unlikely]] return; }
L_003CF324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF414; } }
    c.budget -= 1;
L_003CF330:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CF348; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CF414; } }
    c.budget -= 1;
L_003CF348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF350u);  if (depth < kMaxDepth) unit_00B3(c, 348u, depth + 1u); else { c.pc = 0x003CEDE8u; return; } if (c.pc != 0x003CF350u) [[unlikely]] return; }
L_003CF350:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003CF390; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF388u); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B3(c, 349u, depth + 1u); else { c.pc = 0x003CEE00u; return; } if (c.pc != 0x003CF388u) [[unlikely]] return; }
L_003CF388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF414; } }
L_003CF390:
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3ACu); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_00B3(c, 354u, depth + 1u); else { c.pc = 0x003CEE78u; return; } if (c.pc != 0x003CF3ACu) [[unlikely]] return; }
L_003CF3AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3D4u); if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x003CF3D4u) [[unlikely]] return; }
L_003CF3D4:
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF3E8u); set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CF3E8u) [[unlikely]] return; }
L_003CF3E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF410u); st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 349u, depth + 1u); else { c.pc = 0x003CEE00u; return; } if (c.pc != 0x003CF410u) [[unlikely]] return; }
L_003CF410:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003CF414:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CF430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CF460; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 22208u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEE30u | kUnwind; return; } goto L_003CEE30; }
L_003CF460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF468u);  if (depth < kMaxDepth) unit_00B3(c, 348u, depth + 1u); else { c.pc = 0x003CEDE8u; return; } if (c.pc != 0x003CF468u) [[unlikely]] return; }
L_003CF468:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEE00u | kUnwind; return; } goto L_003CEE00; }
L_003CF480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF4A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF49Cu); set32(c.r[5], c.r[5].w[0] + 22208u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF49Cu) [[unlikely]] return; }
L_003CF49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF4AC; } }
    c.budget -= 1;
L_003CF4A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 1;
L_003CF4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF4B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF4E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF4D4u); set32(c.r[5], c.r[5].w[0] + 22232u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF4D4u) [[unlikely]] return; }
L_003CF4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF4E4; } }
    c.budget -= 1;
L_003CF4E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_003CF4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF518; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 22256u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEE30u | kUnwind; return; } goto L_003CEE30; }
L_003CF518:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.budget -= 9;
    if (c.r[5].d[0] == 0ull) { breakpoint(c, 0x003CF538u);  goto L_003CF53C; }
L_003CF53C:
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF598; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF58Cu); set32(c.r[5], c.r[5].w[0] + 22208u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF58Cu) [[unlikely]] return; }
L_003CF58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF59C; } }
    c.budget -= 1;
L_003CF598:
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 1;
L_003CF59C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF5A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_003CF5C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 22280u);  if (t) { goto L_003CF5FC; } }
L_003CF5C8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CF5E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 22328u);  if (t) { goto L_003CF5FC; } }
    c.budget -= 1;
L_003CF5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF5E8u);  if (depth < kMaxDepth) unit_00B3(c, 369u, depth + 1u); else { c.pc = 0x003CF008u; return; } if (c.pc != 0x003CF5E8u) [[unlikely]] return; }
L_003CF5E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22368u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003CF610; } }
L_003CF5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF604u);  if (depth < kMaxDepth) unit_00B3(c, 351u, depth + 1u); else { c.pc = 0x003CEE30u; return; } if (c.pc != 0x003CF604u) [[unlikely]] return; }
L_003CF604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CF61C; } }
    c.budget -= 1;
L_003CF610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 372u, depth + 1u); else { c.pc = 0x003CF080u; return; } if (c.pc != 0x003CF618u) [[unlikely]] return; }
L_003CF618:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CF61C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[10].sd[0] >= 0; c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CF660; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 22472u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003CF660:
    c.budget -= 2;
    { const bool t = c.r[11].sd[0] >= 0; set32(c.r[2], c.r[10].w[0] << 1);  if (t) { goto L_003CF680; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 22520u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003CF680:
    set32(c.r[9], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[9].w[0] << 6);
    c.r[2].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);  if (t) { goto L_003CF6B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[4].w[0] + 22568u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCC0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_003CF6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[7], c.r[3].w[0] << 8);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 7656u), c.r[10].w[0]);
    st32((c.r[4].w[0] - 7652u), c.r[11].w[0]);
    st32((c.r[5].w[0] - 7692u), c.r[7].w[0]);
    st32((c.r[6].w[0] - 7688u), c.r[2].w[0]);
    st32((c.r[8].w[0] - 7696u), c.r[9].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7688u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[30].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0] + 72u), c.r[31].d[0]);  if (t) { goto L_003CF748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[21].w[0] - 7696u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] - 7692u), c.r[2].w[0]);  if (t) { goto L_003CF74C; } }
L_003CF748:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_003CF74C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[19].w[0] - 7684u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);  goto L_003CF7F0; }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[17], c.r[18].w[0] - 7692u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF774u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 374u, depth + 1u); else { c.pc = 0x00112C00u; return; } if (c.pc != 0x003CF774u) [[unlikely]] return; }
L_003CF774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003CF7B0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 22632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF790u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF790u) [[unlikely]] return; }
L_003CF790:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF790u | kUnwind; return; } goto L_003CF790; } }
    c.budget -= 1;
L_003CF7B0:
    set32(c.r[16], c.r[19].w[0] - 7684u);
    set32(c.r[5], ld32((c.r[18].w[0] - 7692u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + 22704u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7CCu); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF7CCu) [[unlikely]] return; }
L_003CF7CC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] - 7676u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] - 7680u), c.r[3].w[0]);
    c.budget -= 9;
L_003CF7F0:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] - 7624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF804u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CF804u) [[unlikely]] return; }
L_003CF804:
    set32(c.r[17], ld32((c.r[16].w[0] - 7680u)));
    set32(c.r[2], ld32((c.r[21].w[0] - 7696u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CF9B8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[20].w[0] - 7624u);
    c.budget -= 5;
L_003CF828:
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 24u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CF868; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF848u); set32(c.r[4], c.r[2].w[0] + 22752u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF848u) [[unlikely]] return; }
L_003CF848:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF848u | kUnwind; return; } goto L_003CF848; } }
    c.budget -= 1;
L_003CF868:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 256u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF87Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00B4(c, 248u, depth + 1u); else { c.pc = 0x003D2740u; return; } if (c.pc != 0x003CF87Cu) [[unlikely]] return; }
L_003CF87C:
    set32(c.r[3], c.r[18].w[0] << 8);
    set32(c.r[5], c.r[22].w[0] - 6856u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003CF8D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8ACu); set32(c.r[4], c.r[2].w[0] + 22800u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF8ACu) [[unlikely]] return; }
L_003CF8AC:
    c.budget -= 1;
L_003CF8B0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF8B0u | kUnwind; return; } goto L_003CF8B0; } }
    c.budget -= 1;
L_003CF8D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003CF900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8E0u); set32(c.r[4], c.r[2].w[0] + 22856u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF8E0u) [[unlikely]] return; }
L_003CF8E0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF8E0u | kUnwind; return; } goto L_003CF8E0; } }
    c.budget -= 1;
L_003CF900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF908u);  if (depth < kMaxDepth) unit_00B4(c, 197u, depth + 1u); else { c.pc = 0x003D1C68u; return; } if (c.pc != 0x003CF908u) [[unlikely]] return; }
L_003CF908:
    set32(c.r[3], 0u + 16384u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 16u);  if (t) { goto L_003CF948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF924u); set32(c.r[4], c.r[30].w[0] + 22904u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF924u) [[unlikely]] return; }
L_003CF924:
    c.budget -= 1;
L_003CF928:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF928u | kUnwind; return; } goto L_003CF928; } }
    c.budget -= 1;
L_003CF948:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF964u); set32(c.r[17], c.r[17].w[0] + 16384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF964u) [[unlikely]] return; }
L_003CF964:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF974u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 303u, depth + 1u); else { c.pc = 0x003D3038u; return; } if (c.pc != 0x003CF974u) [[unlikely]] return; }
L_003CF974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003CF9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF984u); set32(c.r[4], c.r[23].w[0] + 22960u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CF984u) [[unlikely]] return; }
L_003CF984:
    c.budget -= 1;
L_003CF988:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF988u | kUnwind; return; } goto L_003CF988; } }
    c.budget -= 1;
L_003CF9A8:
    set32(c.r[2], ld32((c.r[21].w[0] - 7696u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] - 7624u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF828u | kUnwind; return; } goto L_003CF828; } }
L_003CF9B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CF9E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 7696u)));
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_003CFA80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[2].w[0] - 7624u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
L_003CFA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CFA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA28u);  if (depth < kMaxDepth) unit_00B4(c, 250u, depth + 1u); else { c.pc = 0x003D2798u; return; } if (c.pc != 0x003CFA28u) [[unlikely]] return; }
L_003CFA28:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CFA44; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CFA44u) [[unlikely]] return; }
L_003CFA44:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CFA5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA58u);  if (depth < kMaxDepth) unit_00B4(c, 308u, depth + 1u); else { c.pc = 0x003D3130u; return; } if (c.pc != 0x003CFA58u) [[unlikely]] return; }
L_003CFA58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CFA5C:
    set32(c.r[16], c.r[16].w[0] + 24u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA6Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CFA6Cu) [[unlikely]] return; }
L_003CFA6C:
    set32(c.r[3], ld32((c.r[18].w[0] - 7696u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFA18u | kUnwind; return; } goto L_003CFA18; }
L_003CFA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 7676u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CFAB4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[16], c.r[16].w[0] - 7684u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAA8u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0004(c, 380u, depth + 1u); else { c.pc = 0x00112D68u; return; } if (c.pc != 0x003CFAA8u) [[unlikely]] return; }
L_003CFAA8:
    st32((c.r[16].w[0]), 0u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_003CFAB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CFAC8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[8].w[0] - 7696u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003CFB1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] - 7624u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CFB1C; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003CFAF8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { goto L_003CFB1C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFAF8u | kUnwind; return; } goto L_003CFAF8; } }
L_003CFB1C:
    set32(c.r[3], ld32((c.r[8].w[0] - 7696u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CFB34; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003CFB34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CFB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003CFB48:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_003CFB70; }
L_003CFB50:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFB50u | kUnwind; return; } goto L_003CFB50; } }
    c.budget -= 1;
L_003CFB70:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_003CFB9C; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 2;
L_003CFB80:
    c.budget -= 7;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFB80u | kUnwind; return; } goto L_003CFB80; }
L_003CFB9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CFBA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1592u);
    set32(c.r[13], c.r[16].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[3].w[0] - 11696u);
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[25], 0u + 1u);
    set32(c.r[24], 0u + 2u);
    set32(c.r[14], c.r[2].w[0] + 8u);
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 16;
L_003CFBE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[25].d[0]) { set32(c.r[15], c.r[15].w[0] + 1u);  goto L_003CFE3C; }
    set32(c.r[8], 0u + 128u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 83u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_003CFC34; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 83u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 83u));
    st8((c.r[7].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_003CFC34:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_003CFE4C; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003CFC6C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[24].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 36u));
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_003CFC6C:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    set32(c.r[3], ld32((c.r[7].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 10u);  if (t) { goto L_003CFCA4; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 72u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_003CFCA4:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003CFCE0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 38u));
    st8((c.r[7].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_003CFCE0:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003CFD18; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_003CFD18:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[8].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_003CFD60; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 48u)));
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[7].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 12;
L_003CFD60:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0]; set32(c.r[2], 0u + 127u);  if (t) { goto L_003CFE4C; } }
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[9].d[0] = ld8((c.r[7].w[0] + 38u));  if (t) { goto L_003CFDF4; } }
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[12], 0u + 9u);
    set32(c.r[4], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[8], c.r[7].w[0] + 64u);
    set32(c.r[5], c.r[14].w[0] + 48u);
    c.budget -= 6;
L_003CFD98:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[9].w[0] << 24);  if (t) { goto L_003CFDDC; } }
    st32((c.r[4].w[0] + 8u), c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = ld8((c.r[7].w[0] + 38u));
    set32(c.r[2], c.r[9].w[0] << 24);
    c.budget -= 13;
L_003CFDDC:
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFD98u | kUnwind; return; } goto L_003CFD98; } }
L_003CFDF4:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[25].d[0];  if (t) { goto L_003CFE30; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[24].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 36u));
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_003CFE30:
    c.budget -= 2;
    if (c.r[10].d[0] == c.r[4].d[0]) { st32((c.r[16].w[0]), c.r[10].w[0]);  goto L_003CFE50; }
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 1;
L_003CFE3C:
    set32(c.r[14], c.r[14].w[0] + 96u);
    c.r[2].d[0] = c.r[15].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFBE8u | kUnwind; return; } goto L_003CFBE8; } }
L_003CFE4C:
    st32((c.r[16].w[0]), c.r[10].w[0]);
    c.budget -= 1;
L_003CFE50:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CFE60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11704u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[23].w[0] - 7644u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 17;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[23].w[0] - 7644u);  [[clang::musttail]] return unit_00B4(c, 7u, depth); }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEB4u); set32(c.r[16], c.r[16].w[0] + 3136u);  if (depth < kMaxDepth) unit_00B4(c, 262u, depth + 1u); else { c.pc = 0x003D2A30u; return; } if (c.pc != 0x003CFEB4u) [[unlikely]] return; }
L_003CFEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEBCu); set32(c.r[17], c.r[19].w[0] - 7636u);  if (depth < kMaxDepth) unit_00B4(c, 288u, depth + 1u); else { c.pc = 0x003D2E28u; return; } if (c.pc != 0x003CFEBCu) [[unlikely]] return; }
L_003CFEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEC4u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (depth < kMaxDepth) unit_00B2(c, 317u, depth + 1u); else { c.pc = 0x003CA658u; return; } if (c.pc != 0x003CFEC4u) [[unlikely]] return; }
L_003CFEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFECCu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (depth < kMaxDepth) unit_00B4(c, 10u, depth + 1u); else { c.pc = 0x003D0140u; return; } if (c.pc != 0x003CFECCu) [[unlikely]] return; }
L_003CFECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFED4u);  if (depth < kMaxDepth) unit_00B3(c, 410u, depth + 1u); else { c.pc = 0x003CF6F0u; return; } if (c.pc != 0x003CFED4u) [[unlikely]] return; }
L_003CFED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEE4u); set32(c.r[6], 0u + 2256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x003CFEE4u) [[unlikely]] return; }
L_003CFEE4:
    set32(c.r[4], 0u + 2176u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[2], 0u - 64u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 3132u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0] - 7640u), c.r[16].w[0]);  if (t) { goto L_003CFF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF0Cu); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_0004(c, 374u, depth + 1u); else { c.pc = 0x00112C00u; return; } if (c.pc != 0x003CFF0Cu) [[unlikely]] return; }
L_003CFF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CFF48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], 0u + 2256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF24u); set32(c.r[4], c.r[4].w[0] + 23016u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CFF24u) [[unlikely]] return; }
L_003CFF24:
    c.budget -= 1;
L_003CFF28:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFF28u | kUnwind; return; } goto L_003CFF28; } }
    c.budget -= 1;
L_003CFF48:
    set32(c.r[16], c.r[19].w[0] - 7636u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[22].w[0] + 22704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF60u); set32(c.r[5], 0u + 2256u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CFF60u) [[unlikely]] return; }
L_003CFF60:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], 0u - 64u);
    set32(c.r[5], ld32((c.r[18].w[0] - 7640u)));
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], ld32((c.r[20].w[0] + 3132u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFF90u); st32((c.r[8].w[0] - 7632u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 297u, depth + 1u); else { c.pc = 0x003CA2D8u; return; } if (c.pc != 0x003CFF90u) [[unlikely]] return; }
L_003CFF90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 3128u), c.r[2].w[0]);  if (t) { goto L_003CFFC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFA4u); set32(c.r[4], c.r[4].w[0] + 23088u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x003CFFA4u) [[unlikely]] return; }
L_003CFFA4:
    c.budget -= 1;
L_003CFFA8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFFA8u | kUnwind; return; } goto L_003CFFA8; } }
    c.budget -= 1;
L_003CFFC8:
    set32(c.r[16], c.r[16].w[0] + 3128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1208u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFE4u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (depth < kMaxDepth) unit_00B2(c, 308u, depth + 1u); else { c.pc = 0x003CA4D8u; return; } if (c.pc != 0x003CFFE4u) [[unlikely]] return; }
L_003CFFE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFFFCu); set32(c.r[20], c.r[17].w[0] - 7668u);  if (depth < kMaxDepth) unit_00B2(c, 309u, depth + 1u); else { c.pc = 0x003CA4E8u; return; } if (c.pc != 0x003CFFFCu) [[unlikely]] return; }
L_003CFFFC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_00B4(c, 1u, depth);
}

}
