#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001E[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0,
    0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0,
    459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490,
    0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00178000;
    case 2u: goto L_00178018;
    case 3u: goto L_00178030;
    case 4u: goto L_00178048;
    case 5u: goto L_00178070;
    case 6u: goto L_00178080;
    case 7u: goto L_00178088;
    case 8u: goto L_00178098;
    case 9u: goto L_001780A4;
    case 10u: goto L_001780BC;
    case 11u: goto L_001780C0;
    case 12u: goto L_001780E0;
    case 13u: goto L_00178144;
    case 14u: goto L_00178158;
    case 15u: goto L_00178174;
    case 16u: goto L_00178198;
    case 17u: goto L_001781B0;
    case 18u: goto L_001781DC;
    case 19u: goto L_00178204;
    case 20u: goto L_0017821C;
    case 21u: goto L_00178228;
    case 22u: goto L_00178260;
    case 23u: goto L_00178288;
    case 24u: goto L_001782B4;
    case 25u: goto L_001782C4;
    case 26u: goto L_001782FC;
    case 27u: goto L_00178320;
    case 28u: goto L_00178340;
    case 29u: goto L_0017837C;
    case 30u: goto L_001783A0;
    case 31u: goto L_001783C0;
    case 32u: goto L_00178400;
    case 33u: goto L_00178410;
    case 34u: goto L_00178424;
    case 35u: goto L_0017842C;
    case 36u: goto L_00178438;
    case 37u: goto L_00178448;
    case 38u: goto L_00178454;
    case 39u: goto L_0017845C;
    case 40u: goto L_00178470;
    case 41u: goto L_00178494;
    case 42u: goto L_0017849C;
    case 43u: goto L_001784A4;
    case 44u: goto L_001784B0;
    case 45u: goto L_001784C0;
    case 46u: goto L_001784D0;
    case 47u: goto L_001784E4;
    case 48u: goto L_001784EC;
    case 49u: goto L_001784F8;
    case 50u: goto L_00178508;
    case 51u: goto L_00178520;
    case 52u: goto L_00178534;
    case 53u: goto L_0017854C;
    case 54u: goto L_00178558;
    case 55u: goto L_00178570;
    case 56u: goto L_001785D0;
    case 57u: goto L_001785EC;
    case 58u: goto L_00178604;
    case 59u: goto L_00178620;
    case 60u: goto L_0017862C;
    case 61u: goto L_0017863C;
    case 62u: goto L_00178650;
    case 63u: goto L_00178690;
    case 64u: goto L_001786B0;
    case 65u: goto L_001786C4;
    case 66u: goto L_001786EC;
    case 67u: goto L_00178700;
    case 68u: goto L_00178720;
    case 69u: goto L_00178748;
    case 70u: goto L_00178750;
    case 71u: goto L_00178768;
    case 72u: goto L_00178778;
    case 73u: goto L_00178790;
    case 74u: goto L_001787A0;
    case 75u: goto L_001787C0;
    case 76u: goto L_0017880C;
    case 77u: goto L_00178828;
    case 78u: goto L_00178844;
    case 79u: goto L_00178860;
    case 80u: goto L_00178878;
    case 81u: goto L_001788A8;
    case 82u: goto L_001788C0;
    case 83u: goto L_001788E4;
    case 84u: goto L_001788F4;
    case 85u: goto L_00178904;
    case 86u: goto L_00178924;
    case 87u: goto L_00178944;
    case 88u: goto L_001789A4;
    case 89u: goto L_001789BC;
    case 90u: goto L_001789D0;
    case 91u: goto L_001789F0;
    case 92u: goto L_00178A10;
    case 93u: goto L_00178A38;
    case 94u: goto L_00178A40;
    case 95u: goto L_00178A58;
    case 96u: goto L_00178A74;
    case 97u: goto L_00178A9C;
    case 98u: goto L_00178AA4;
    case 99u: goto L_00178ABC;
    case 100u: goto L_00178ACC;
    case 101u: goto L_00178AE4;
    case 102u: goto L_00178B00;
    case 103u: goto L_00178B34;
    case 104u: goto L_00178B40;
    case 105u: goto L_00178B48;
    case 106u: goto L_00178B60;
    case 107u: goto L_00178BA0;
    case 108u: goto L_00178BAC;
    case 109u: goto L_00178BB4;
    case 110u: goto L_00178BD0;
    case 111u: goto L_00178BE8;
    case 112u: goto L_00178C18;
    case 113u: goto L_00178C30;
    case 114u: goto L_00178C54;
    case 115u: goto L_00178CA4;
    case 116u: goto L_00178CAC;
    case 117u: goto L_00178CB8;
    case 118u: goto L_00178CCC;
    case 119u: goto L_00178CEC;
    case 120u: goto L_00178D2C;
    case 121u: goto L_00178D34;
    case 122u: goto L_00178D40;
    case 123u: goto L_00178D54;
    case 124u: goto L_00178D74;
    case 125u: goto L_00178D98;
    case 126u: goto L_00178DC0;
    case 127u: goto L_00178DD8;
    case 128u: goto L_00178DFC;
    case 129u: goto L_00178E24;
    case 130u: goto L_00178E38;
    case 131u: goto L_00178E48;
    case 132u: goto L_00178E54;
    case 133u: goto L_00178E78;
    case 134u: goto L_00178EA0;
    case 135u: goto L_00178EB4;
    case 136u: goto L_00178EC4;
    case 137u: goto L_00178EE0;
    case 138u: goto L_00178EF4;
    case 139u: goto L_00178F7C;
    case 140u: goto L_00178F9C;
    case 141u: goto L_00178FB0;
    case 142u: goto L_00178FC0;
    case 143u: goto L_00178FF0;
    case 144u: goto L_00179018;
    case 145u: goto L_00179028;
    case 146u: goto L_00179030;
    case 147u: goto L_00179048;
    case 148u: goto L_00179078;
    case 149u: goto L_00179094;
    case 150u: goto L_001790A0;
    case 151u: goto L_001790B8;
    case 152u: goto L_001790D0;
    case 153u: goto L_001790F4;
    case 154u: goto L_00179110;
    case 155u: goto L_00179118;
    case 156u: goto L_00179160;
    case 157u: goto L_00179170;
    case 158u: goto L_00179180;
    case 159u: goto L_001791B8;
    case 160u: goto L_001791E8;
    case 161u: goto L_001791FC;
    case 162u: goto L_00179214;
    case 163u: goto L_00179228;
    case 164u: goto L_00179284;
    case 165u: goto L_001792A4;
    case 166u: goto L_001792BC;
    case 167u: goto L_001792DC;
    case 168u: goto L_001792F4;
    case 169u: goto L_00179304;
    case 170u: goto L_0017931C;
    case 171u: goto L_00179334;
    case 172u: goto L_00179350;
    case 173u: goto L_0017936C;
    case 174u: goto L_00179374;
    case 175u: goto L_00179394;
    case 176u: goto L_001793C0;
    case 177u: goto L_001793E0;
    case 178u: goto L_00179458;
    case 179u: goto L_0017946C;
    case 180u: goto L_001794A8;
    case 181u: goto L_001794C0;
    case 182u: goto L_00179500;
    case 183u: goto L_00179508;
    case 184u: goto L_00179590;
    case 185u: goto L_001795B4;
    case 186u: goto L_001795BC;
    case 187u: goto L_001795C4;
    case 188u: goto L_001795E0;
    case 189u: goto L_00179604;
    case 190u: goto L_0017968C;
    case 191u: goto L_001796A0;
    case 192u: goto L_001796F4;
    case 193u: goto L_0017970C;
    case 194u: goto L_00179740;
    case 195u: goto L_00179760;
    case 196u: goto L_00179798;
    case 197u: goto L_001798F4;
    case 198u: goto L_00179910;
    case 199u: goto L_0017992C;
    case 200u: goto L_00179938;
    case 201u: goto L_00179964;
    case 202u: goto L_00179970;
    case 203u: goto L_001799A4;
    case 204u: goto L_001799B8;
    case 205u: goto L_001799C4;
    case 206u: goto L_001799D0;
    case 207u: goto L_00179A00;
    case 208u: goto L_00179A10;
    case 209u: goto L_00179A30;
    case 210u: goto L_00179A94;
    case 211u: goto L_00179ABC;
    case 212u: goto L_00179ACC;
    case 213u: goto L_00179AD8;
    case 214u: goto L_00179AF0;
    case 215u: goto L_00179B10;
    case 216u: goto L_00179B28;
    case 217u: goto L_00179B58;
    case 218u: goto L_00179B70;
    case 219u: goto L_00179B84;
    case 220u: goto L_00179BA8;
    case 221u: goto L_00179BBC;
    case 222u: goto L_00179BE0;
    case 223u: goto L_00179BF4;
    case 224u: goto L_00179C18;
    case 225u: goto L_00179C30;
    case 226u: goto L_00179C44;
    case 227u: goto L_00179C68;
    case 228u: goto L_00179C80;
    case 229u: goto L_00179CB0;
    case 230u: goto L_00179CB8;
    case 231u: goto L_00179CDC;
    case 232u: goto L_00179D04;
    case 233u: goto L_00179D20;
    case 234u: goto L_00179D44;
    case 235u: goto L_00179D50;
    case 236u: goto L_00179D7C;
    case 237u: goto L_00179D90;
    case 238u: goto L_00179E10;
    case 239u: goto L_00179E30;
    case 240u: goto L_00179E40;
    case 241u: goto L_00179E60;
    case 242u: goto L_00179E8C;
    case 243u: goto L_00179EA0;
    case 244u: goto L_00179ECC;
    case 245u: goto L_00179EE0;
    case 246u: goto L_00179F74;
    case 247u: goto L_00179FB8;
    case 248u: goto L_0017A014;
    case 249u: goto L_0017A028;
    case 250u: goto L_0017A070;
    case 251u: goto L_0017A084;
    case 252u: goto L_0017A08C;
    case 253u: goto L_0017A0A0;
    case 254u: goto L_0017A0C8;
    case 255u: goto L_0017A108;
    case 256u: goto L_0017A174;
    case 257u: goto L_0017A184;
    case 258u: goto L_0017A194;
    case 259u: goto L_0017A1BC;
    case 260u: goto L_0017A1DC;
    case 261u: goto L_0017A210;
    case 262u: goto L_0017A220;
    case 263u: goto L_0017A230;
    case 264u: goto L_0017A240;
    case 265u: goto L_0017A250;
    case 266u: goto L_0017A260;
    case 267u: goto L_0017A270;
    case 268u: goto L_0017A280;
    case 269u: goto L_0017A290;
    case 270u: goto L_0017A2A0;
    case 271u: goto L_0017A2B0;
    case 272u: goto L_0017A2C0;
    case 273u: goto L_0017A2D0;
    case 274u: goto L_0017A2E0;
    case 275u: goto L_0017A30C;
    case 276u: goto L_0017A32C;
    case 277u: goto L_0017A338;
    case 278u: goto L_0017A378;
    case 279u: goto L_0017A384;
    case 280u: goto L_0017A39C;
    case 281u: goto L_0017A3BC;
    case 282u: goto L_0017A3D4;
    case 283u: goto L_0017A420;
    case 284u: goto L_0017A438;
    case 285u: goto L_0017A464;
    case 286u: goto L_0017A490;
    case 287u: goto L_0017A4F0;
    case 288u: goto L_0017A4F8;
    case 289u: goto L_0017A524;
    case 290u: goto L_0017A540;
    case 291u: goto L_0017A558;
    case 292u: goto L_0017A580;
    case 293u: goto L_0017A598;
    case 294u: goto L_0017A5A0;
    case 295u: goto L_0017A5CC;
    case 296u: goto L_0017A5E4;
    case 297u: goto L_0017A600;
    case 298u: goto L_0017A610;
    case 299u: goto L_0017A628;
    case 300u: goto L_0017A630;
    case 301u: goto L_0017A65C;
    case 302u: goto L_0017A680;
    case 303u: goto L_0017A698;
    case 304u: goto L_0017A6A0;
    case 305u: goto L_0017A6CC;
    case 306u: goto L_0017A6F0;
    case 307u: goto L_0017A700;
    case 308u: goto L_0017A718;
    case 309u: goto L_0017A748;
    case 310u: goto L_0017A760;
    case 311u: goto L_0017A780;
    case 312u: goto L_0017A7F4;
    case 313u: goto L_0017A820;
    case 314u: goto L_0017A874;
    case 315u: goto L_0017A888;
    case 316u: goto L_0017A8AC;
    case 317u: goto L_0017A8C0;
    case 318u: goto L_0017A8F0;
    case 319u: goto L_0017A900;
    case 320u: goto L_0017A914;
    case 321u: goto L_0017A91C;
    case 322u: goto L_0017A934;
    case 323u: goto L_0017A950;
    case 324u: goto L_0017A964;
    case 325u: goto L_0017A96C;
    case 326u: goto L_0017A984;
    case 327u: goto L_0017A9A0;
    case 328u: goto L_0017A9B4;
    case 329u: goto L_0017A9BC;
    case 330u: goto L_0017A9D4;
    case 331u: goto L_0017A9F0;
    case 332u: goto L_0017AA1C;
    case 333u: goto L_0017AA54;
    case 334u: goto L_0017AA80;
    case 335u: goto L_0017AAAC;
    case 336u: goto L_0017AAE0;
    case 337u: goto L_0017AB08;
    case 338u: goto L_0017AB24;
    case 339u: goto L_0017AB2C;
    case 340u: goto L_0017AB34;
    case 341u: goto L_0017AB3C;
    case 342u: goto L_0017AB70;
    case 343u: goto L_0017AB94;
    case 344u: goto L_0017ABA4;
    case 345u: goto L_0017ABC0;
    case 346u: goto L_0017AC18;
    case 347u: goto L_0017AC28;
    case 348u: goto L_0017AC40;
    case 349u: goto L_0017AC60;
    case 350u: goto L_0017AC70;
    case 351u: goto L_0017AC80;
    case 352u: goto L_0017AC88;
    case 353u: goto L_0017AC94;
    case 354u: goto L_0017ACA0;
    case 355u: goto L_0017ACB0;
    case 356u: goto L_0017ACB8;
    case 357u: goto L_0017ACC4;
    case 358u: goto L_0017ACD0;
    case 359u: goto L_0017ACE0;
    case 360u: goto L_0017ACE8;
    case 361u: goto L_0017ACF4;
    case 362u: goto L_0017AD00;
    case 363u: goto L_0017AD20;
    case 364u: goto L_0017AD30;
    case 365u: goto L_0017AD5C;
    case 366u: goto L_0017AD80;
    case 367u: goto L_0017ADA4;
    case 368u: goto L_0017ADB0;
    case 369u: goto L_0017ADC4;
    case 370u: goto L_0017ADCC;
    case 371u: goto L_0017ADE4;
    case 372u: goto L_0017ADF4;
    case 373u: goto L_0017ADFC;
    case 374u: goto L_0017AE1C;
    case 375u: goto L_0017AE30;
    case 376u: goto L_0017AE70;
    case 377u: goto L_0017AE84;
    case 378u: goto L_0017AE8C;
    case 379u: goto L_0017AEA4;
    case 380u: goto L_0017AEB4;
    case 381u: goto L_0017AEBC;
    case 382u: goto L_0017AEDC;
    case 383u: goto L_0017AEF0;
    case 384u: goto L_0017AF04;
    case 385u: goto L_0017AF0C;
    case 386u: goto L_0017AF24;
    case 387u: goto L_0017AF34;
    case 388u: goto L_0017AF3C;
    case 389u: goto L_0017AF5C;
    case 390u: goto L_0017AF70;
    case 391u: goto L_0017AF84;
    case 392u: goto L_0017AF8C;
    case 393u: goto L_0017AFA0;
    case 394u: goto L_0017AFCC;
    case 395u: goto L_0017AFEC;
    case 396u: goto L_0017B058;
    case 397u: goto L_0017B078;
    case 398u: goto L_0017B098;
    case 399u: goto L_0017B0B0;
    case 400u: goto L_0017B100;
    case 401u: goto L_0017B138;
    case 402u: goto L_0017B144;
    case 403u: goto L_0017B1A0;
    case 404u: goto L_0017B1B0;
    case 405u: goto L_0017B1C8;
    case 406u: goto L_0017B1D0;
    case 407u: goto L_0017B20C;
    case 408u: goto L_0017B248;
    case 409u: goto L_0017B280;
    case 410u: goto L_0017B2B8;
    case 411u: goto L_0017B314;
    case 412u: goto L_0017B31C;
    case 413u: goto L_0017B324;
    case 414u: goto L_0017B344;
    case 415u: goto L_0017B3A0;
    case 416u: goto L_0017B3B0;
    case 417u: goto L_0017B404;
    case 418u: goto L_0017B420;
    case 419u: goto L_0017B45C;
    case 420u: goto L_0017B47C;
    case 421u: goto L_0017B488;
    case 422u: goto L_0017B4BC;
    case 423u: goto L_0017B4D8;
    case 424u: goto L_0017B4F8;
    case 425u: goto L_0017B570;
    case 426u: goto L_0017B5A4;
    case 427u: goto L_0017B5B4;
    case 428u: goto L_0017B5E0;
    case 429u: goto L_0017B620;
    case 430u: goto L_0017B64C;
    case 431u: goto L_0017B680;
    case 432u: goto L_0017B698;
    case 433u: goto L_0017B6A8;
    case 434u: goto L_0017B6C0;
    case 435u: goto L_0017B6E0;
    case 436u: goto L_0017B704;
    case 437u: goto L_0017B718;
    case 438u: goto L_0017B72C;
    case 439u: goto L_0017B754;
    case 440u: goto L_0017B760;
    case 441u: goto L_0017B774;
    case 442u: goto L_0017B784;
    case 443u: goto L_0017B794;
    case 444u: goto L_0017B7A4;
    case 445u: goto L_0017B7C8;
    case 446u: goto L_0017B814;
    case 447u: goto L_0017B880;
    case 448u: goto L_0017B890;
    case 449u: goto L_0017B8A4;
    case 450u: goto L_0017B8B8;
    case 451u: goto L_0017B8CC;
    case 452u: goto L_0017B8E0;
    case 453u: goto L_0017B8F4;
    case 454u: goto L_0017B908;
    case 455u: goto L_0017B91C;
    case 456u: goto L_0017B930;
    case 457u: goto L_0017B940;
    case 458u: goto L_0017B974;
    case 459u: goto L_0017B980;
    case 460u: goto L_0017B9A0;
    case 461u: goto L_0017B9B0;
    case 462u: goto L_0017B9D8;
    case 463u: goto L_0017BA20;
    case 464u: goto L_0017BA6C;
    case 465u: goto L_0017BAB8;
    case 466u: goto L_0017BAF8;
    case 467u: goto L_0017BB10;
    case 468u: goto L_0017BB34;
    case 469u: goto L_0017BB40;
    case 470u: goto L_0017BB58;
    case 471u: goto L_0017BB88;
    case 472u: goto L_0017BBA0;
    case 473u: goto L_0017BBB0;
    case 474u: goto L_0017BC00;
    case 475u: goto L_0017BC20;
    case 476u: goto L_0017BC30;
    case 477u: goto L_0017BC40;
    case 478u: goto L_0017BC74;
    case 479u: goto L_0017BC80;
    case 480u: goto L_0017BCF8;
    case 481u: goto L_0017BD0C;
    case 482u: goto L_0017BD30;
    case 483u: goto L_0017BD38;
    case 484u: goto L_0017BDB8;
    case 485u: goto L_0017BDC8;
    case 486u: goto L_0017BDE0;
    case 487u: goto L_0017BE10;
    case 488u: goto L_0017BE3C;
    case 489u: goto L_0017BE44;
    case 490u: goto L_0017BE7C;
    case 491u: goto L_0017BE88;
    case 492u: goto L_0017BF0C;
    case 493u: goto L_0017BF7C;
    case 494u: goto L_0017BF8C;
    case 495u: goto L_0017BF9C;
    case 496u: goto L_0017BFC0;
    case 497u: goto L_0017BFE0;
    default: bad_entry(c, 0x00178000u); return;
    }
L_00178000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178018; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178018u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178018u) [[unlikely]] return; }
L_00178018:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00178030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178030u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00178030u) [[unlikely]] return; }
L_00178030:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00178048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178048u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00178048u) [[unlikely]] return; }
L_00178048:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178070; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178070; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178070u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178070u) [[unlikely]] return; }
L_00178070:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178088; } }
L_00178080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178088u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00178088u) [[unlikely]] return; }
L_00178088:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178098u); st32((c.r[17].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00178098u) [[unlikely]] return; }
L_00178098:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001780A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x001780A4u) [[unlikely]] return; }
L_001780A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001780C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001780BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001780BCu) [[unlikely]] return; }
L_001780BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001780C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001780E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 3216u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 176u);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 30u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], 0u + 36u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178144u); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00178144u) [[unlikely]] return; }
L_00178144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00178158; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178158u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 268u, depth + 1u); else { c.pc = 0x00227540u; return; } if (c.pc != 0x00178158u) [[unlikely]] return; }
L_00178158:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] + 3248u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00178174:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178174u | kUnwind; return; } goto L_00178174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178198u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00178198u) [[unlikely]] return; }
L_00178198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001781B0; } }
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001781B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 288u, depth + 1u); else { c.pc = 0x00227850u; return; } if (c.pc != 0x001781B0u) [[unlikely]] return; }
L_001781B0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + 3296u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_001781DC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001781DCu | kUnwind; return; } goto L_001781DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178204u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00178204u) [[unlikely]] return; }
L_00178204:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 32u);  if (t) { goto L_00178220; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017821Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 288u, depth + 1u); else { c.pc = 0x00227850u; return; } if (c.pc != 0x0017821Cu) [[unlikely]] return; }
L_0017821C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00178220:
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00178228:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178228u | kUnwind; return; } goto L_00178228; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00178260:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001782E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] + 3392u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00178288:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178288u | kUnwind; return; } goto L_00178288; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001782B4u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x001782B4u) [[unlikely]] return; }
L_001782B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001782C4u); set32(c.r[6], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x001782C4u) [[unlikely]] return; }
L_001782C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001783E4; } }
L_001782E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0017836C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[6].w[0] + 3440u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_001782FC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001782FCu | kUnwind; return; } goto L_001782FC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00178320:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178340u); set32(c.r[6], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00178340u) [[unlikely]] return; }
L_00178340:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178320u | kUnwind; return; } goto L_00178320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001783E8; } }
L_0017836C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] + 3536u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_0017837C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017837Cu | kUnwind; return; } goto L_0017837C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001783A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001783C0u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x001783C0u) [[unlikely]] return; }
L_001783C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001783A0u | kUnwind; return; } goto L_001783A0; } }
L_001783E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001783E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00178400:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_00178410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178424u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00178424u) [[unlikely]] return; }
L_00178424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017842Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017842Cu) [[unlikely]] return; }
L_0017842C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178438u); set32(c.r[5], 0u + 179u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00178438u) [[unlikely]] return; }
L_00178438:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178448u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 22u, depth + 1u); else { c.pc = 0x00178260u; return; } if (c.pc != 0x00178448u) [[unlikely]] return; }
L_00178448:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178454u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001E(c, 177u, depth + 1u); else { c.pc = 0x001793E0u; return; } if (c.pc != 0x00178454u) [[unlikely]] return; }
L_00178454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017845Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0017845Cu) [[unlikely]] return; }
L_0017845C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178494u) [[unlikely]] return; }
L_00178494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017849Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0017849Cu) [[unlikely]] return; }
L_0017849C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784A4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001784A4u) [[unlikely]] return; }
L_001784A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784B0u); set32(c.r[5], 0u + 180u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x001784B0u) [[unlikely]] return; }
L_001784B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 22u, depth + 1u); else { c.pc = 0x00178260u; return; } if (c.pc != 0x001784C0u) [[unlikely]] return; }
L_001784C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001784D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x001784E4u) [[unlikely]] return; }
L_001784E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784ECu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001784ECu) [[unlikely]] return; }
L_001784EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001784F8u); set32(c.r[5], 0u + 180u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x001784F8u) [[unlikely]] return; }
L_001784F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 22u, depth + 1u); else { c.pc = 0x00178260u; return; } if (c.pc != 0x00178508u) [[unlikely]] return; }
L_00178508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178534u) [[unlikely]] return; }
L_00178534:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00178550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017854Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 126u, depth + 1u); else { c.pc = 0x00178DC0u; return; } if (c.pc != 0x0017854Cu) [[unlikely]] return; }
L_0017854C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00178550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178558u);  if (depth < kMaxDepth) unit_000C(c, 28u, depth + 1u); else { c.pc = 0x001302A0u; return; } if (c.pc != 0x00178558u) [[unlikely]] return; }
L_00178558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0017863C; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_00178598; } }
    set32(c.r[2], c.r[7].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00178598:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00178634; } }
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001785F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001785D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001785D0u);  if (depth < kMaxDepth) unit_001E(c, 113u, depth + 1u); else { c.pc = 0x00178C30u; return; } if (c.pc != 0x001785D0u) [[unlikely]] return; }
L_001785D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 437u);  if (t) { goto L_00178624; } }
L_001785D8:
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[7].w[0] - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001785ECu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001785ECu) [[unlikely]] return; }
L_001785EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178620; } }
L_001785F4:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0017860C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178604u);  if (depth < kMaxDepth) unit_001E(c, 113u, depth + 1u); else { c.pc = 0x00178C30u; return; } if (c.pc != 0x00178604u) [[unlikely]] return; }
L_00178604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178620; } }
L_0017860C:
    set32(c.r[25], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178620u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178620u) [[unlikely]] return; }
L_00178620:
    set32(c.r[4], 0u + 437u);
    c.budget -= 1;
L_00178624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017862Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0017862Cu) [[unlikely]] return; }
L_0017862C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00178640; } }
L_00178634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017863Cu); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0017863Cu) [[unlikely]] return; }
L_0017863C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00178640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00178650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001789BC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0017869C; } }
    set32(c.r[5], 0u + 15u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178690u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00178690u) [[unlikely]] return; }
L_00178690:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_001789BC; } }
L_0017869C:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001786B0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001786B0u) [[unlikely]] return; }
L_001786B0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017870C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001786C4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001786C4u) [[unlikely]] return; }
L_001786C4:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001786D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001786DC; } }
L_001786D8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001786DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], 0u + 1026u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001786ECu); set32(c.r[4], c.r[4].w[0] - 18054u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x001786ECu) [[unlikely]] return; }
L_001786EC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178700u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x00178700u) [[unlikely]] return; }
L_00178700:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_001789BC; } }
L_0017870C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00178770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178720u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178720u) [[unlikely]] return; }
L_00178720:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178738; } }
L_00178734:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00178738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], 0u + 1026u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178748u); set32(c.r[4], c.r[4].w[0] - 17028u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00178748u) [[unlikely]] return; }
L_00178748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178750u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178750u) [[unlikely]] return; }
L_00178750:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178768u) [[unlikely]] return; }
L_00178768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001789C0; } }
L_00178770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178778u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178778u) [[unlikely]] return; }
L_00178778:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178790u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178790u) [[unlikely]] return; }
L_00178790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001789BC; } }
L_00178798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001787A0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001787A0u) [[unlikely]] return; }
L_001787A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001788B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001787C0u); set32(c.r[17], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001787C0u) [[unlikely]] return; }
L_001787C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001787E8; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001787EC; } }
L_001787E8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001787EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00178804; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 25u);  if (t) { goto L_00178894; } }
L_00178804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017880Cu);  if (depth < kMaxDepth) unit_001C(c, 339u, depth + 1u); else { c.pc = 0x00173A40u; return; } if (c.pc != 0x0017880Cu) [[unlikely]] return; }
L_0017880C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00178820; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 27u);  if (t) { goto L_00178894; } }
L_00178820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178828u);  if (depth < kMaxDepth) unit_001C(c, 342u, depth + 1u); else { c.pc = 0x00173AC0u; return; } if (c.pc != 0x00178828u) [[unlikely]] return; }
L_00178828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017883C; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 28u);  if (t) { goto L_00178894; } }
L_0017883C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178844u);  if (depth < kMaxDepth) unit_001C(c, 345u, depth + 1u); else { c.pc = 0x00173B80u; return; } if (c.pc != 0x00178844u) [[unlikely]] return; }
L_00178844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00178858; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 26u);  if (t) { goto L_00178894; } }
L_00178858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178860u);  if (depth < kMaxDepth) unit_001C(c, 365u, depth + 1u); else { c.pc = 0x00173F60u; return; } if (c.pc != 0x00178860u) [[unlikely]] return; }
L_00178860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_00178870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178894; } }
L_00178870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178878u);  if (depth < kMaxDepth) unit_001C(c, 279u, depth + 1u); else { c.pc = 0x001731B0u; return; } if (c.pc != 0x00178878u) [[unlikely]] return; }
L_00178878:
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00178890; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 19u);  if (t) { goto L_00178894; } }
L_00178890:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00178894:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001788A8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x001788A8u) [[unlikely]] return; }
L_001788A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_001789BC; } }
L_001788B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001788C0u); set32(c.r[17], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001788C0u) [[unlikely]] return; }
L_001788C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001788D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[17].w[0] - 1u);  if (t) { goto L_001788DC; } }
L_001788D4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_001788DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001788E4u);  if (depth < kMaxDepth) unit_001A(c, 313u, depth + 1u); else { c.pc = 0x0016AF70u; return; } if (c.pc != 0x001788E4u) [[unlikely]] return; }
L_001788E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0017899C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001788F4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001788F4u) [[unlikely]] return; }
L_001788F4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178904u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00178904u) [[unlikely]] return; }
L_00178904:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], 0u + 200u);
    set32(c.r[4], 0u + 144u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178924u); st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00178924u) [[unlikely]] return; }
L_00178924:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00178948; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178944u); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_001E(c, 198u, depth + 1u); else { c.pc = 0x00179910u; return; } if (c.pc != 0x00178944u) [[unlikely]] return; }
L_00178944:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00178948:
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 35u);
    st32((c.r[6].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_001789BC; } }
L_0017899C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001789A4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001789A4u) [[unlikely]] return; }
L_001789A4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001789BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001789BCu) [[unlikely]] return; }
L_001789BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001789C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001789D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001789F0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001789F0u) [[unlikely]] return; }
L_001789F0:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 84u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178A60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00178A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A10u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178A10u) [[unlikely]] return; }
L_00178A10:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178A24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178A28; } }
L_00178A24:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00178A28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], 0u + 1026u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A38u); set32(c.r[4], c.r[4].w[0] - 18054u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00178A38u) [[unlikely]] return; }
L_00178A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A40u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178A40u) [[unlikely]] return; }
L_00178A40:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178A58u) [[unlikely]] return; }
L_00178A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00178AE8; } }
L_00178A60:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00178A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00178AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A74u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178A74u) [[unlikely]] return; }
L_00178A74:
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178A8C; } }
L_00178A88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00178A8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[6], 0u + 1026u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178A9Cu); set32(c.r[4], c.r[4].w[0] - 17028u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00178A9Cu) [[unlikely]] return; }
L_00178A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178AA4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178AA4u) [[unlikely]] return; }
L_00178AA4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178ABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178ABCu) [[unlikely]] return; }
L_00178ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178AE4; } }
L_00178AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178ACCu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178ACCu) [[unlikely]] return; }
L_00178ACC:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178AE4u) [[unlikely]] return; }
L_00178AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00178AE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178B48; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B34u); set32(c.r[5], c.r[2].w[0] - 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178B34u) [[unlikely]] return; }
L_00178B34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 113u, depth + 1u); else { c.pc = 0x00178C30u; return; } if (c.pc != 0x00178B40u) [[unlikely]] return; }
L_00178B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B48u); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00178B48u) [[unlikely]] return; }
L_00178B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178BB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178BA0u); set32(c.r[5], c.r[2].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178BA0u) [[unlikely]] return; }
L_00178BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178BACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 113u, depth + 1u); else { c.pc = 0x00178C30u; return; } if (c.pc != 0x00178BACu) [[unlikely]] return; }
L_00178BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178BB4u); set32(c.r[4], 0u + 437u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00178BB4u) [[unlikely]] return; }
L_00178BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178BE8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00178BE8u) [[unlikely]] return; }
L_00178BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00178C18; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00178BFC; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00178BFC:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C18u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 424u, depth + 1u); else { c.pc = 0x0012F830u; return; } if (c.pc != 0x00178C18u) [[unlikely]] return; }
L_00178C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 24u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C54u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00178C54u) [[unlikely]] return; }
L_00178C54:
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00178CF4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178CD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178CA4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00178CA4u) [[unlikely]] return; }
L_00178CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178CACu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178CACu) [[unlikely]] return; }
L_00178CAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178CB8u); set32(c.r[5], 0u + 185u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00178CB8u) [[unlikely]] return; }
L_00178CB8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178CCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 177u, depth + 1u); else { c.pc = 0x001793E0u; return; } if (c.pc != 0x00178CCCu) [[unlikely]] return; }
L_00178CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_00178D78; } }
L_00178CD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178CECu); set32(c.r[5], c.r[2].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178CECu) [[unlikely]] return; }
L_00178CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178D74; } }
L_00178CF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00178D5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = c.f[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D2Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00178D2Cu) [[unlikely]] return; }
L_00178D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D34u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00178D34u) [[unlikely]] return; }
L_00178D34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D40u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x00178D40u) [[unlikely]] return; }
L_00178D40:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 177u, depth + 1u); else { c.pc = 0x001793E0u; return; } if (c.pc != 0x00178D54u) [[unlikely]] return; }
L_00178D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00178D74; } }
L_00178D5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D74u); set32(c.r[5], c.r[2].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178D74u) [[unlikely]] return; }
L_00178D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_00178D78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178DA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178D98u); st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_001E(c, 22u, depth + 1u); else { c.pc = 0x00178260u; return; } if (c.pc != 0x00178D98u) [[unlikely]] return; }
L_00178D98:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_00178DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00178DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178DD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00178DD8u) [[unlikely]] return; }
L_00178DD8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178DFCu); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00178DFCu) [[unlikely]] return; }
L_00178DFC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 25500u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178E24u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x00178E24u) [[unlikely]] return; }
L_00178E24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00178E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178E38u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00178E38u) [[unlikely]] return; }
L_00178E38:
    c.r[1].d[0] = 0ull | 43340ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178E48u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00178E48u) [[unlikely]] return; }
L_00178E48:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00178E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178E54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00178E54u) [[unlikely]] return; }
L_00178E54:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178E78u); set32(c.r[16], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x00178E78u) [[unlikely]] return; }
L_00178E78:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 25500u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178EA0u); set32(c.r[5], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_001C(c, 327u, depth + 1u); else { c.pc = 0x001737A0u; return; } if (c.pc != 0x00178EA0u) [[unlikely]] return; }
L_00178EA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00178EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178EB4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00178EB4u) [[unlikely]] return; }
L_00178EB4:
    c.r[1].d[0] = 0ull | 43560ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178EC4u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00178EC4u) [[unlikely]] return; }
L_00178EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178EF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x00178EF4u) [[unlikely]] return; }
L_00178EF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00178F84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178F44; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178F74; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00178F74; } }
L_00178F44:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178F74; } }
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00178F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178F7Cu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00178F7Cu) [[unlikely]] return; }
L_00178F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00178FA0; } }
L_00178F84:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178F9Cu); st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00178F9Cu) [[unlikely]] return; }
L_00178F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00178FA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00178FB0:
    c.budget -= 2;
    {  goto L_00179350; }
L_00178FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00178FF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178FF0u);  if (depth < kMaxDepth) unit_001E(c, 158u, depth + 1u); else { c.pc = 0x00179180u; return; } if (c.pc != 0x00178FF0u) [[unlikely]] return; }
L_00178FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00179150; } }
L_00178FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179050; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179018u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179018u) [[unlikely]] return; }
L_00179018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017914C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179028u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x00179028u) [[unlikely]] return; }
L_00179028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179030u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179030u) [[unlikely]] return; }
L_00179030:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179048u) [[unlikely]] return; }
L_00179048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017914C; } }
L_00179050:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001790FC; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017914C; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179078u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179078u) [[unlikely]] return; }
L_00179078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001790C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179094u) [[unlikely]] return; }
L_00179094:
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001790A0u); st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001790A0u) [[unlikely]] return; }
L_001790A0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001790B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001790B8u) [[unlikely]] return; }
L_001790B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_001790D4; } }
L_001790C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001790D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001790D0u) [[unlikely]] return; }
L_001790D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_001790D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001790F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001790F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001790F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001790F4u) [[unlikely]] return; }
L_001790F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_0017914C; } }
L_001790FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017914C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179110u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179110u) [[unlikely]] return; }
L_00179110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179118u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x00179118u) [[unlikely]] return; }
L_00179118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017914C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_00179138; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_00179138:
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 5;
L_0017914C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00179150:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179160:
    c.budget -= 2;
    {  goto L_00179350; }
L_00179170:
    c.budget -= 2;
    {  goto L_00179350; }
L_00179180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00179338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791B8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001791B8u) [[unlikely]] return; }
L_001791B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001792B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001792A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791E8u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x001791E8u) [[unlikely]] return; }
L_001791E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001792A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001791FCu);  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x001791FCu) [[unlikely]] return; }
L_001791FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00179218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179214u);  if (depth < kMaxDepth) unit_008E(c, 394u, depth + 1u); else { c.pc = 0x0033BA70u; return; } if (c.pc != 0x00179214u) [[unlikely]] return; }
L_00179214:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00179218:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179228u); set32(c.r[16], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179228u) [[unlikely]] return; }
L_00179228:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0017926C; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_00179270; } }
L_0017926C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00179270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[6], 0u + 38u);
    c.r[1].d[0] = c.r[1].d[0] | 22828ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179284u); set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00179284u) [[unlikely]] return; }
L_00179284:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792A4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 285u, depth + 1u); else { c.pc = 0x001763C0u; return; } if (c.pc != 0x001792A4u) [[unlikely]] return; }
L_001792A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0017932C; } }
L_001792B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792BCu); set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x001792BCu) [[unlikely]] return; }
L_001792BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00179324; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001792FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792DCu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001792DCu) [[unlikely]] return; }
L_001792DC:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001792F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001792F4u) [[unlikely]] return; }
L_001792F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017932C; } }
L_001792FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179304u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179304u) [[unlikely]] return; }
L_00179304:
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017931Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017931Cu) [[unlikely]] return; }
L_0017931C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017932C; } }
L_00179324:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_0017932C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179334u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00179334u) [[unlikely]] return; }
L_00179334:
    st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00179338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017936Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017936Cu) [[unlikely]] return; }
L_0017936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179374u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x00179374u) [[unlikely]] return; }
L_00179374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001793C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0017939C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179394u) [[unlikely]] return; }
L_00179394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001793C4; } }
L_0017939C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001793B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001793C0; } }
L_001793B0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001793C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001793C0u) [[unlikely]] return; }
L_001793C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001793C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001793E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 28u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u + 12u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 84u));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; if (c.r[4].d[0] == 0) c.r[21].d[0] = c.r[3].d[0];  if (t) { goto L_00179434; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_00179438; } }
L_00179434:
    set32(c.r[2], ld32((c.r[22].w[0] + 92u)));
    c.budget -= 1;
L_00179438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[20], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    c.r[5].d[0] = c.r[2].d[0] | 21335ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179458u); set32(c.r[23], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00179458u) [[unlikely]] return; }
L_00179458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00179464; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00179464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001794E8; } }
L_0017946C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001794F8; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001794F4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001794E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0] + 60u)));  if (t) { goto L_001794CC; } }
L_001794A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001794C0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x001794C0u) [[unlikely]] return; }
L_001794C0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.budget -= 3;
L_001794CC:
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001794A8u | kUnwind; return; } goto L_001794A8; } }
L_001794E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001794E8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].sd[0] < 28ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017946Cu | kUnwind; return; } goto L_0017946C; } }
L_001794F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001794F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179500u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x00179500u) [[unlikely]] return; }
L_00179500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00179554; } }
L_00179508:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;  if (t) { goto L_00179560; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00179560; } }
    set32(c.r[3], ld32((c.r[22].w[0] + 60u)));
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00179550; } }
    st32((c.r[6].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00179550:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00179554:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179508u | kUnwind; return; } goto L_00179508; } }
L_00179560:
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
L_00179590:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001795B4u) [[unlikely]] return; }
L_001795B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795BCu);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x001795BCu) [[unlikely]] return; }
L_001795BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 23u, depth + 1u); else { c.pc = 0x002481D0u; return; } if (c.pc != 0x001795C4u) [[unlikely]] return; }
L_001795C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179720; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001796A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795E0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x001795E0u) [[unlikely]] return; }
L_001795E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], c.r[2].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179604u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00179604u) [[unlikely]] return; }
L_00179604:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 380u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 44u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017968Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017968Cu) [[unlikely]] return; }
L_0017968C:
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001796A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001796A0u) [[unlikely]] return; }
L_001796A0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 84u));
    set32(c.r[16], 0u + 12u);
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[3], 0u + 28u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; if (c.r[4].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_001796E0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001796D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_001796D4; } }
L_001796D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 1;
L_001796D4:
    set32(c.r[20], c.r[3].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[20].w[0] + 8u);  if (t) { goto L_001796EC; } }
L_001796E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[20].w[0] + 4u);
    c.budget -= 3;
L_001796EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00179714; } }
L_001796F4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_00179720; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00179720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017970Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 194u, depth + 1u); else { c.pc = 0x00179740u; return; } if (c.pc != 0x0017970Cu) [[unlikely]] return; }
L_0017970C:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00179714:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 28ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001796F4u | kUnwind; return; } goto L_001796F4; } }
L_00179720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00179740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179760u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179760u) [[unlikely]] return; }
L_00179760:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00179784; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00179784:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001797C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179798u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179798u) [[unlikely]] return; }
L_00179798:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001797C0; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_001797C0; } }
L_001797C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_00179860; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_00179838; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00179838; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.f[0]);  if (t) { goto L_001798D0; } }
L_00179838:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.f[0]);  if (t) { goto L_001798D0; } }
L_00179860:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { goto L_001798B8; } }
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - c.r[4].w[0]);  if (t) { goto L_001798B4; } }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[4].w[0] << 4);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.f[0]);  if (t) { goto L_001798D0; } }
L_001798B4:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.budget -= 1;
L_001798B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 6;
L_001798D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001798F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001798F4u) [[unlikely]] return; }
L_001798F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017992Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0017992Cu) [[unlikely]] return; }
L_0017992C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179938u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00179938u) [[unlikely]] return; }
L_00179938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15600u);
    set32(c.r[3], c.r[3].w[0] - 15512u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15452u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179964u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00179964u) [[unlikely]] return; }
L_00179964:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179970u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00179970u) [[unlikely]] return; }
L_00179970:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 272u);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799A4u); st128((c.r[16].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001799A4u) [[unlikely]] return; }
L_001799A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001799D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799B8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x001799B8u) [[unlikely]] return; }
L_001799B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001D(c, 443u, depth + 1u); else { c.pc = 0x00177A00u; return; } if (c.pc != 0x001799C4u) [[unlikely]] return; }
L_001799C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001799D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x001799D0u) [[unlikely]] return; }
L_001799D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001799D4:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], 0u + 65u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179A00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179A00u) [[unlikely]] return; }
L_00179A00:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179A10u) [[unlikely]] return; }
L_00179A10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00179A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00179AF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 15600u);
    set32(c.r[3], c.r[3].w[0] - 15512u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15452u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179A94; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179A94; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179A94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179A94u) [[unlikely]] return; }
L_00179A94:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179ABC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179ABC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179ABCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179ABCu) [[unlikely]] return; }
L_00179ABC:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179ACCu); st32((c.r[17].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00179ACCu) [[unlikely]] return; }
L_00179ACC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x00179AD8u) [[unlikely]] return; }
L_00179AD8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00179AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179AF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00179AF0u) [[unlikely]] return; }
L_00179AF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00179AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00179B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B28u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00179B28u) [[unlikely]] return; }
L_00179B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00179B58; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00179B3C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00179B3C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B58u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00179B58u) [[unlikely]] return; }
L_00179B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179B70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x00179B84u) [[unlikely]] return; }
L_00179B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3632u);
    set32(c.r[4], 0u + 36u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179BA8u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00179BA8u) [[unlikely]] return; }
L_00179BA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 32u);  if (t) { goto L_00179BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179BBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 268u, depth + 1u); else { c.pc = 0x00227540u; return; } if (c.pc != 0x00179BBCu) [[unlikely]] return; }
L_00179BBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00179BC0:
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179BF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x00179BF4u) [[unlikely]] return; }
L_00179BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3664u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179C18u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00179C18u) [[unlikely]] return; }
L_00179C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179C44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x00179C44u) [[unlikely]] return; }
L_00179C44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 3696u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179C68u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00179C68u) [[unlikely]] return; }
L_00179C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00179C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00179D04; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00179CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179CB0u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x00179CB0u) [[unlikely]] return; }
L_00179CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179CB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 452u, depth + 1u); else { c.pc = 0x00177B90u; return; } if (c.pc != 0x00179CB8u) [[unlikely]] return; }
L_00179CB8:
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00179CE8; } }
    set32(c.r[5], 0u + 19u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179CDCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00179CDCu) [[unlikely]] return; }
L_00179CDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_00179D04; } }
L_00179CE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179D04u) [[unlikely]] return; }
L_00179D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00179D44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179D44u) [[unlikely]] return; }
L_00179D44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00179D7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179D7Cu) [[unlikely]] return; }
L_00179D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00179DD4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 64u);  if (t) { goto L_00179E08; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00179E04; } }
L_00179DD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00179E04; } }
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00179E04:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_00179E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E10u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x00179E10u) [[unlikely]] return; }
L_00179E10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00179E4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179E30u) [[unlikely]] return; }
L_00179E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E40u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00179E40u) [[unlikely]] return; }
L_00179E40:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_00179E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00179E8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179E8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179E8Cu) [[unlikely]] return; }
L_00179E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00179ECC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179ECCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179ECCu) [[unlikely]] return; }
L_00179ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179EE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00179F24; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00179F24:
    c.f[0] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 132u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00179F40; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00179F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179F74u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179F74u) [[unlikely]] return; }
L_00179F74:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00179FB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00179FB8u) [[unlikely]] return; }
L_00179FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_0017A1F0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[18].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0017A1E0; } }
L_0017A014:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A028u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0017A028u) [[unlikely]] return; }
L_0017A028:
    c.f[0] = c.r[19].w[0];
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 128u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A070u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A070u) [[unlikely]] return; }
L_0017A070:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017A0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A084u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017A084u) [[unlikely]] return; }
L_0017A084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A08Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 452u, depth + 1u); else { c.pc = 0x00177B90u; return; } if (c.pc != 0x0017A08Cu) [[unlikely]] return; }
L_0017A08C:
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0017A0BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A0A0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017A0A0u) [[unlikely]] return; }
L_0017A0A0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0017A0E0; } }
L_0017A0BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017A0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A0C8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017A0C8u) [[unlikely]] return; }
L_0017A0C8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0017A0E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0017A19C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0017A138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A108u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017A108u) [[unlikely]] return; }
L_0017A108:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0017A140; } }
L_0017A138:
    ld128((c.r[20].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 2;
L_0017A140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A174u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A174u) [[unlikely]] return; }
L_0017A174:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A184u) [[unlikely]] return; }
L_0017A184:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A194u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A194u) [[unlikely]] return; }
L_0017A194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0017A1E0; } }
L_0017A19C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1BCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A1BCu) [[unlikely]] return; }
L_0017A1BC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A1DCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A1DCu) [[unlikely]] return; }
L_0017A1DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017A1E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A014u | kUnwind; return; } goto L_0017A014; } }
L_0017A1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017A210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00178B60u | kUnwind; return; } goto L_00178B60; }
L_0017A220:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00178B00u | kUnwind; return; } goto L_00178B00; }
L_0017A230:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001789D0u | kUnwind; return; } goto L_001789D0; }
L_0017A240:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00178650u | kUnwind; return; } goto L_00178650; }
L_0017A250:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00178570u | kUnwind; return; } goto L_00178570; }
L_0017A260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00177F50u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 478u, depth); }
L_0017A270:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179590u | kUnwind; return; } goto L_00179590; }
L_0017A280:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00177F50u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 478u, depth); }
L_0017A290:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179D20u | kUnwind; return; } goto L_00179D20; }
L_0017A2A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179C80u | kUnwind; return; } goto L_00179C80; }
L_0017A2B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179A30u | kUnwind; return; } goto L_00179A30; }
L_0017A2C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179EE0u | kUnwind; return; } goto L_00179EE0; }
L_0017A2D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00179A30u | kUnwind; return; } goto L_00179A30; }
L_0017A2E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A30Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0017A30Cu) [[unlikely]] return; }
L_0017A30C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 14864u);
    set32(c.r[2], c.r[2].w[0] - 14776u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A32Cu); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017A32Cu) [[unlikely]] return; }
L_0017A32C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A338u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017A338u) [[unlikely]] return; }
L_0017A338:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 12u);
    st128((c.r[19].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 112u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    st8((c.r[19].w[0] + 120u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A378u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0017A378u) [[unlikely]] return; }
L_0017A378:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A384u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017A384u) [[unlikely]] return; }
L_0017A384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A39C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A39Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0017A39Cu) [[unlikely]] return; }
L_0017A39C:
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3728u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
L_0017A3BC:
    set32(c.r[4], 0u + 192u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A3D4u); set32(c.r[20], c.r[2].w[0] + 203u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017A3D4u) [[unlikely]] return; }
L_0017A3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0017A424; } }
    set32(c.r[3], 0u + 333u);
    set32(c.r[7], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = c.r[20].w[0];
    set32(c.r[5], 0u + 3u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[6], 0u + 4u);
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[14] = fp::cvt_s_w(c.f[1]);
    c.f[16] = c.r[3].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A420u); c.f[15] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x0017A420u) [[unlikely]] return; }
L_0017A420:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0017A424:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A438u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x0017A438u) [[unlikely]] return; }
L_0017A438:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A3BCu | kUnwind; return; } goto L_0017A3BC; } }
    st32((c.r[19].w[0] + 128u), 0u);
    set32(c.r[2], 0u + 341u);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A464u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A464u) [[unlikely]] return; }
L_0017A464:
    st8((c.r[19].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017A490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017A558; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 14864u);
    set32(c.r[2], c.r[2].w[0] - 14776u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A4F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A4F0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A4F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A4F0u) [[unlikely]] return; }
L_0017A4F0:
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0017A4F8:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 44u);  if (t) { goto L_0017A524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A524; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A524u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A524u) [[unlikely]] return; }
L_0017A524:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A4F8u | kUnwind; return; } goto L_0017A4F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A540u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0017A540u) [[unlikely]] return; }
L_0017A540:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017A55C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A558u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017A558u) [[unlikely]] return; }
L_0017A558:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017A55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017A580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A598u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0017A598u) [[unlikely]] return; }
L_0017A598:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0017A5A0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A5CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A5CCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A5CCu) [[unlikely]] return; }
L_0017A5CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A5A0u | kUnwind; return; } goto L_0017A5A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A5E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0017A5E4u) [[unlikely]] return; }
L_0017A5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017A600:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_0017A610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A628u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0017A628u) [[unlikely]] return; }
L_0017A628:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0017A630:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A65C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A65Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A65Cu) [[unlikely]] return; }
L_0017A65C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A630u | kUnwind; return; } goto L_0017A630; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017A680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A698u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0017A698u) [[unlikely]] return; }
L_0017A698:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 2;
L_0017A6A0:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017A6CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A6CCu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A6CCu) [[unlikely]] return; }
L_0017A6CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A6A0u | kUnwind; return; } goto L_0017A6A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017A6F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302A0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 28u, depth); }
L_0017A700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A718u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017A718u) [[unlikely]] return; }
L_0017A718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017A748; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017A72C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0017A72C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A748u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0017A748u) [[unlikely]] return; }
L_0017A748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A780u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0017A780u) [[unlikely]] return; }
L_0017A780:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A7B8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 64u);  if (t) { goto L_0017A7EC; } }
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0017A7E8; } }
L_0017A7B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017A7E8; } }
    st32((c.r[19].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017A7E8:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 1;
L_0017A7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A7F4u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0017A7F4u) [[unlikely]] return; }
L_0017A7F4:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] + 3744u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] ^ 2ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[17].w[0] << 2);
    c.budget -= 11;
L_0017A820:
    set32(c.r[3], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 44u);  if (t) { goto L_0017A8C0; } }
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 203u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[5].w[0] - 8u);
    c.f[2] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A874u); c.f[12] = fp::cvt_s_w(c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A874u) [[unlikely]] return; }
L_0017A874:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0017A890; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A888u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x0017A888u) [[unlikely]] return; }
L_0017A888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0017A8C4; } }
L_0017A890:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0017A8B4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A8ACu); set32(c.r[5], c.r[19].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x0017A8ACu) [[unlikely]] return; }
L_0017A8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017A8C0; } }
L_0017A8B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A8C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x0017A8C0u) [[unlikely]] return; }
L_0017A8C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017A8C4:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A820u | kUnwind; return; } goto L_0017A820; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017A8F0:
    st32((c.r[4].w[0] + 44u), c.f[12]);
    st32((c.r[4].w[0] + 48u), c.f[13]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[14]);  c.pc = t; return; }
L_0017A900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017A914u) [[unlikely]] return; }
L_0017A914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A91Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017A91Cu) [[unlikely]] return; }
L_0017A91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A934; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A934u) [[unlikely]] return; }
L_0017A934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017A964u) [[unlikely]] return; }
L_0017A964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A96Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017A96Cu) [[unlikely]] return; }
L_0017A96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A984; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A984u) [[unlikely]] return; }
L_0017A984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017A9B4u) [[unlikely]] return; }
L_0017A9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017A9BCu) [[unlikely]] return; }
L_0017A9BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017A9D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017A9D4u) [[unlikely]] return; }
L_0017A9D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017A9F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
L_0017AA1C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0017AA88; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_0017AA5C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AA54u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AA54u) [[unlikely]] return; }
L_0017AA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0017AAB0; } }
L_0017AA5C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AA80u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AA80u) [[unlikely]] return; }
L_0017AA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AAAC; } }
L_0017AA88:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AAACu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AAACu) [[unlikely]] return; }
L_0017AAAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017AAB0:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AA1Cu | kUnwind; return; } goto L_0017AA1C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017AAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[8], 0u + 103u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[9], 0u + 18u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001E(c, 274u, depth + 1u); else { c.pc = 0x0017A2E0u; return; } if (c.pc != 0x0017AB08u) [[unlikely]] return; }
L_0017AB08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 14936u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB24u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AB24u) [[unlikely]] return; }
L_0017AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB2Cu);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x0017AB2Cu) [[unlikely]] return; }
L_0017AB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB34u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AB34u) [[unlikely]] return; }
L_0017AB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB3Cu); set32(c.r[18], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AB3Cu) [[unlikely]] return; }
L_0017AB3C:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017AB64; } }
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0017AB68; } }
L_0017AB64:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017AB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB70u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017AB70u) [[unlikely]] return; }
L_0017AB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017AB94; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AB94u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 418u, depth + 1u); else { c.pc = 0x0017B420u; return; } if (c.pc != 0x0017AB94u) [[unlikely]] return; }
L_0017AB94:
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 6u, depth + 1u); else { c.pc = 0x0017C060u; return; } if (c.pc != 0x0017ABA4u) [[unlikely]] return; }
L_0017ABA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017ABC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017AC40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 14936u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017AC18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017AC18; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AC18u) [[unlikely]] return; }
L_0017AC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC28u); st32((c.r[17].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_001E(c, 286u, depth + 1u); else { c.pc = 0x0017A490u; return; } if (c.pc != 0x0017AC28u) [[unlikely]] return; }
L_0017AC28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0017AC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017AC40u) [[unlikely]] return; }
L_0017AC40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0017AC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017AC60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130260u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 24u, depth); }
L_0017AC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC80u);  if (depth < kMaxDepth) unit_001E(c, 292u, depth + 1u); else { c.pc = 0x0017A580u; return; } if (c.pc != 0x0017AC80u) [[unlikely]] return; }
L_0017AC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC88u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AC88u) [[unlikely]] return; }
L_0017AC88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC94u); set32(c.r[5], 0u + 187u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x0017AC94u) [[unlikely]] return; }
L_0017AC94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017ACA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACB0u);  if (depth < kMaxDepth) unit_001E(c, 298u, depth + 1u); else { c.pc = 0x0017A610u; return; } if (c.pc != 0x0017ACB0u) [[unlikely]] return; }
L_0017ACB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACB8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017ACB8u) [[unlikely]] return; }
L_0017ACB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACC4u); set32(c.r[5], 0u + 188u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x0017ACC4u) [[unlikely]] return; }
L_0017ACC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017ACD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACE0u);  if (depth < kMaxDepth) unit_001E(c, 302u, depth + 1u); else { c.pc = 0x0017A680u; return; } if (c.pc != 0x0017ACE0u) [[unlikely]] return; }
L_0017ACE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACE8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017ACE8u) [[unlikely]] return; }
L_0017ACE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ACF4u); set32(c.r[5], 0u + 188u);  if (depth < kMaxDepth) unit_001D(c, 454u, depth + 1u); else { c.pc = 0x00177BE0u; return; } if (c.pc != 0x0017ACF4u) [[unlikely]] return; }
L_0017ACF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017AD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017AD20; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD20u); set32(c.r[5], ld32((c.r[3].w[0] + 24u)));  if (depth < kMaxDepth) unit_001F(c, 6u, depth + 1u); else { c.pc = 0x0017C060u; return; } if (c.pc != 0x0017AD20u) [[unlikely]] return; }
L_0017AD20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017AD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017AD64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AD5Cu) [[unlikely]] return; }
L_0017AD5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_0017AD64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017ADA4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017ADA4u) [[unlikely]] return; }
L_0017ADA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017ADB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017ADC4u) [[unlikely]] return; }
L_0017ADC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017ADCCu) [[unlikely]] return; }
L_0017ADCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017ADEC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017ADE4u) [[unlikely]] return; }
L_0017ADE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017AE20; } }
L_0017ADEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADF4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017ADF4u) [[unlikely]] return; }
L_0017ADF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 457u, depth + 1u); else { c.pc = 0x00177C30u; return; } if (c.pc != 0x0017ADFCu) [[unlikely]] return; }
L_0017ADFC:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017AE1C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AE1Cu) [[unlikely]] return; }
L_0017AE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017AE20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AE30:
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0017AE5C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017AE5C; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0017AE5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017AE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AE84u) [[unlikely]] return; }
L_0017AE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017AE8Cu) [[unlikely]] return; }
L_0017AE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017AEAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AEA4u) [[unlikely]] return; }
L_0017AEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017AEE0; } }
L_0017AEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEB4u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AEB4u) [[unlikely]] return; }
L_0017AEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 457u, depth + 1u); else { c.pc = 0x00177C30u; return; } if (c.pc != 0x0017AEBCu) [[unlikely]] return; }
L_0017AEBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017AEDC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AEDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AEDCu) [[unlikely]] return; }
L_0017AEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017AEE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AEF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AF04u) [[unlikely]] return; }
L_0017AF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 456u, depth + 1u); else { c.pc = 0x00177C10u; return; } if (c.pc != 0x0017AF0Cu) [[unlikely]] return; }
L_0017AF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017AF2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AF24u) [[unlikely]] return; }
L_0017AF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0017AF60; } }
L_0017AF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF34u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017AF34u) [[unlikely]] return; }
L_0017AF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 457u, depth + 1u); else { c.pc = 0x00177C30u; return; } if (c.pc != 0x0017AF3Cu) [[unlikely]] return; }
L_0017AF3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017AF5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017AF5Cu) [[unlikely]] return; }
L_0017AF5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0017AF60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AF70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 393u, depth + 1u); else { c.pc = 0x0017AFA0u; return; } if (c.pc != 0x0017AF84u) [[unlikely]] return; }
L_0017AF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 399u, depth + 1u); else { c.pc = 0x0017B0B0u; return; } if (c.pc != 0x0017AF8Cu) [[unlikely]] return; }
L_0017AF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 332u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017B098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFCCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017AFCCu) [[unlikely]] return; }
L_0017AFCC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 108u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFECu); st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0017AFECu) [[unlikely]] return; }
L_0017AFEC:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[1].w[0] + 4200u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 4200u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B058u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B058u) [[unlikely]] return; }
L_0017B058:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B078u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B078u) [[unlikely]] return; }
L_0017B078:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B098u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B098u) [[unlikely]] return; }
L_0017B098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017B0B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017B3C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 3760u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B100u); st32((c.r[3].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017B100u) [[unlikely]] return; }
L_0017B100:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 14;
L_0017B138:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B144u); set32(c.r[4], ld32((c.r[2].w[0] + 112u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0017B144u) [[unlikely]] return; }
L_0017B144:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 201u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] + 6u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1A0u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B1A0u) [[unlikely]] return; }
L_0017B1A0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B1B0u) [[unlikely]] return; }
L_0017B1B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B138u | kUnwind; return; } goto L_0017B138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1C8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B1C8u) [[unlikely]] return; }
L_0017B1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1D0u); set32(c.r[16], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B1D0u) [[unlikely]] return; }
L_0017B1D0:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0017B1F4; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0017B1F4:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017B3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B20Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017B20Cu) [[unlikely]] return; }
L_0017B20C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B248u); st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B248u) [[unlikely]] return; }
L_0017B248:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B270; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0017B274; } }
L_0017B270:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017B274:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 34u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B280u); st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B280u) [[unlikely]] return; }
L_0017B280:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B2A8; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0017B2AC; } }
L_0017B2A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017B2AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B2B8u); st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B2B8u) [[unlikely]] return; }
L_0017B2B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B2E0; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0017B2E4; } }
L_0017B2E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017B2E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 2u);
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_0017B300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0017B304; } }
L_0017B300:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0017B304:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
L_0017B314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B31Cu);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B31Cu) [[unlikely]] return; }
L_0017B31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B324u);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x0017B324u) [[unlikely]] return; }
L_0017B324:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 88u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B344u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 28u, depth + 1u); else { c.pc = 0x00248260u; return; } if (c.pc != 0x0017B344u) [[unlikely]] return; }
L_0017B344:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 223u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    set32(c.r[2], c.r[5].w[0] + 15u);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B3A0u); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B3A0u) [[unlikely]] return; }
L_0017B3A0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B3B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B3B0u) [[unlikely]] return; }
L_0017B3B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B314u | kUnwind; return; } goto L_0017B314; } }
L_0017B3C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B404; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0017B404; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0017B404; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B404u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B404u) [[unlikely]] return; }
L_0017B404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0017B420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B45Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0017B45Cu) [[unlikely]] return; }
L_0017B45C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15184u);
    set32(c.r[2], c.r[2].w[0] - 15096u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B47Cu); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017B47Cu) [[unlikely]] return; }
L_0017B47C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B488u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017B488u) [[unlikely]] return; }
L_0017B488:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 272u);
    st128((c.r[19].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[20].w[0]) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 128u), 0u);
    st32((c.r[19].w[0] + 140u), 0u);
    st8((c.r[19].w[0] + 136u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B4BCu); st128((c.r[19].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017B4BCu) [[unlikely]] return; }
L_0017B4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017B4D8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B4D8u); set32(c.r[6], 0u + 204u);  if (depth < kMaxDepth) unit_0018(c, 110u, depth + 1u); else { c.pc = 0x001630C0u; return; } if (c.pc != 0x0017B4D8u) [[unlikely]] return; }
L_0017B4D8:
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B4F8u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017B4F8u) [[unlikely]] return; }
L_0017B4F8:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], 0u + 2u);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 152u), c.r[16].w[0]);  if (t) { goto L_0017B548; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0017B544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_0017B548; } }
L_0017B544:
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_0017B548:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 60u), 0u);
    c.budget -= 10;
L_0017B570:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 64u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B570u | kUnwind; return; } goto L_0017B570; } }
    st32((c.r[19].w[0] + 144u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 148u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B5A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B5A4u) [[unlikely]] return; }
L_0017B5A4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B5B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B5B4u) [[unlikely]] return; }
L_0017B5B4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017B5E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0017B6C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 15184u);
    set32(c.r[2], c.r[2].w[0] - 15096u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
L_0017B620:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 64u);  if (t) { goto L_0017B64C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B64C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B64Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B64Cu) [[unlikely]] return; }
L_0017B64C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B620u | kUnwind; return; } goto L_0017B620; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B680; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B680; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B680u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B680u) [[unlikely]] return; }
L_0017B680:
    st32((c.r[18].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B698u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0017B698u) [[unlikely]] return; }
L_0017B698:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B6A8u); st32((c.r[18].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0017B6A8u) [[unlikely]] return; }
L_0017B6A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017B6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B6C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0017B6C0u) [[unlikely]] return; }
L_0017B6C0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0017B6C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017B6E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B704u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0017B704u) [[unlikely]] return; }
L_0017B704:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B718u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B718u) [[unlikely]] return; }
L_0017B718:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], c.r[2].w[0] + 624u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 5;
L_0017B72C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 64u);  if (t) { goto L_0017B754; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B754; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B754u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B754u) [[unlikely]] return; }
L_0017B754:
    set32(c.r[4], 0u + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B760u); st32((c.r[20].w[0]), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017B760u) [[unlikely]] return; }
L_0017B760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017B774; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B774u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0017B774u) [[unlikely]] return; }
L_0017B774:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B784u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0017B784u) [[unlikely]] return; }
L_0017B784:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B794u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0017B794u) [[unlikely]] return; }
L_0017B794:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B7A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0017B7A4u) [[unlikely]] return; }
L_0017B7A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B72Cu | kUnwind; return; } goto L_0017B72C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B7C8u); set32(c.r[5], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B7C8u) [[unlikely]] return; }
L_0017B7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 64u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43DB0000u);
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B814u); set32(c.r[5], 0u + 5u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B814u) [[unlikely]] return; }
L_0017B814:
    set32(c.r[3], 0u + 535u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = c.r[4].w[0];
    st32((c.r[6].w[0] + 100u), c.r[5].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017B880:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130270u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 25u, depth); }
L_0017B890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0017B8A4u) [[unlikely]] return; }
L_0017B8A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8B8u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B8B8u) [[unlikely]] return; }
L_0017B8B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8CCu); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B8CCu) [[unlikely]] return; }
L_0017B8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017B8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0017B8F4u) [[unlikely]] return; }
L_0017B8F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B908u); set32(c.r[5], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B908u) [[unlikely]] return; }
L_0017B908:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B91Cu); set32(c.r[5], 0u + 9u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B91Cu) [[unlikely]] return; }
L_0017B91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017B930:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302A0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 28u, depth); }
L_0017B940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0017B97C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B9A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B974u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B974u) [[unlikely]] return; }
L_0017B974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0017B9A4; } }
L_0017B97C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017B9A0; } }
    goto L_0017B984;
L_0017B980:
    c.budget -= 1;
L_0017B984:
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B9A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B9A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017B9A0u) [[unlikely]] return; }
L_0017B9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0017B9A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017B9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017BAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B9D8u);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017B9D8u) [[unlikely]] return; }
L_0017B9D8:
    set32(c.r[16], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017BAA0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0017BA54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017BA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_0017BAEC; } }
L_0017BA08:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BA20u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017BA20u) [[unlikely]] return; }
L_0017BA20:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (t) { goto L_0017BA48; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0017BA4C; } }
L_0017BA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017BA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017BAE8; } }
L_0017BA54:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BA6Cu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017BA6Cu) [[unlikely]] return; }
L_0017BA6C:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (t) { goto L_0017BA94; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0017BA98; } }
L_0017BA94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017BA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017BAE8; } }
L_0017BAA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BAB8u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001D(c, 405u, depth + 1u); else { c.pc = 0x00177600u; return; } if (c.pc != 0x0017BAB8u) [[unlikely]] return; }
L_0017BAB8:
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (t) { goto L_0017BAE0; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0017BAE4; } }
L_0017BAE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0017BAE4:
    st16((c.r[2].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0017BAE8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0017BAEC:
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BAF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BAF8u) [[unlikely]] return; }
L_0017BAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017BB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017BB34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BB34u) [[unlikely]] return; }
L_0017BB34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017BB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB58u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0017BB58u) [[unlikely]] return; }
L_0017BB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0017BB88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0017BB6C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0017BB6C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB88u); set32(c.r[10], 0u + 12u);  if (depth < kMaxDepth) unit_000B(c, 395u, depth + 1u); else { c.pc = 0x0012F020u; return; } if (c.pc != 0x0017BB88u) [[unlikely]] return; }
L_0017BB88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017BBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017BBB0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 136u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017BBE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017BC18; } }
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0017BC18; } }
L_0017BBE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 140u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_0017BC00:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017BC18; } }
    st32((c.r[4].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017BC18:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 80u);  [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_0017BC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017BC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017BC40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 3776u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + 3792u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BC74u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_001E(c, 479u, depth + 1u); else { c.pc = 0x0017BC80u; return; } if (c.pc != 0x0017BC74u) [[unlikely]] return; }
L_0017BC74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017BC80:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E20000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BCF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BCF8u) [[unlikely]] return; }
L_0017BCF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BD0Cu) [[unlikely]] return; }
L_0017BD0C:
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 4160u);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD30u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0017BD30u) [[unlikely]] return; }
L_0017BD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017BD38u) [[unlikely]] return; }
L_0017BD38:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[0] = c.r[20].w[0];
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[1] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[14] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDB8u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BDB8u) [[unlikely]] return; }
L_0017BDB8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BDC8u) [[unlikely]] return; }
L_0017BDC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    set32(c.r[21], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 4u, depth); } }
L_0017BDE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017BE3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE10u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017BE10u) [[unlikely]] return; }
L_0017BE10:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 4176u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_0017BE80; } }
L_0017BE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE44u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0017BE44u) [[unlikely]] return; }
L_0017BE44:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[20].w[0] << 5);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 14;
L_0017BE7C:
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 1;
L_0017BE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0017BE88u) [[unlikely]] return; }
L_0017BE88:
    c.r[1].d[0] = c.r[2].sd[0] < 186ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0017BEB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0017BED0; } }
L_0017BEB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 4192u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
L_0017BED0:
    set32(c.r[3], c.r[20].w[0] - c.r[22].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF0Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BF0Cu) [[unlikely]] return; }
L_0017BF0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0017BFE8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[19], ld32((c.r[3].w[0] + 444u)));  if (t) { goto L_0017BFA4; } }
    ld128((c.r[18].w[0] + 112u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BF7Cu) [[unlikely]] return; }
L_0017BF7C:
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BF8Cu) [[unlikely]] return; }
L_0017BF8C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BF9Cu) [[unlikely]] return; }
L_0017BF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_001F(c, 4u, depth); } }
L_0017BFA4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BFC0u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BFC0u) [[unlikely]] return; }
L_0017BFC0:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BFE0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017BFE0u) [[unlikely]] return; }
L_0017BFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 3u, depth); } }
L_0017BFE8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C004u); set32(c.r[7], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_001F(c, 2u, depth);
}

}
