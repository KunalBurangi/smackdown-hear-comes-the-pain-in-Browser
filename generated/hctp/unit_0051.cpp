#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0051[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 258,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0,
};

void unit_0051(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00244000;
    case 2u: goto L_00244008;
    case 3u: goto L_00244010;
    case 4u: goto L_00244030;
    case 5u: goto L_00244040;
    case 6u: goto L_00244050;
    case 7u: goto L_00244064;
    case 8u: goto L_00244070;
    case 9u: goto L_00244084;
    case 10u: goto L_0024408C;
    case 11u: goto L_002440A0;
    case 12u: goto L_002440B0;
    case 13u: goto L_002440CC;
    case 14u: goto L_002440E0;
    case 15u: goto L_00244108;
    case 16u: goto L_00244130;
    case 17u: goto L_00244144;
    case 18u: goto L_00244154;
    case 19u: goto L_00244170;
    case 20u: goto L_00244180;
    case 21u: goto L_00244190;
    case 22u: goto L_002441A0;
    case 23u: goto L_002441B0;
    case 24u: goto L_002441C0;
    case 25u: goto L_002441D0;
    case 26u: goto L_002441E0;
    case 27u: goto L_002441F4;
    case 28u: goto L_00244200;
    case 29u: goto L_00244228;
    case 30u: goto L_0024423C;
    case 31u: goto L_0024425C;
    case 32u: goto L_00244264;
    case 33u: goto L_00244274;
    case 34u: goto L_0024427C;
    case 35u: goto L_002442A0;
    case 36u: goto L_002442D8;
    case 37u: goto L_002442E0;
    case 38u: goto L_00244300;
    case 39u: goto L_00244314;
    case 40u: goto L_00244328;
    case 41u: goto L_0024433C;
    case 42u: goto L_00244348;
    case 43u: goto L_00244354;
    case 44u: goto L_00244360;
    case 45u: goto L_00244378;
    case 46u: goto L_002443A0;
    case 47u: goto L_00244448;
    case 48u: goto L_0024446C;
    case 49u: goto L_002444A0;
    case 50u: goto L_002444C4;
    case 51u: goto L_002444F8;
    case 52u: goto L_0024451C;
    case 53u: goto L_0024453C;
    case 54u: goto L_00244600;
    case 55u: goto L_00244620;
    case 56u: goto L_00244630;
    case 57u: goto L_00244640;
    case 58u: goto L_00244650;
    case 59u: goto L_00244660;
    case 60u: goto L_0024467C;
    case 61u: goto L_0024468C;
    case 62u: goto L_002446B4;
    case 63u: goto L_002446C8;
    case 64u: goto L_002446E0;
    case 65u: goto L_00244714;
    case 66u: goto L_0024472C;
    case 67u: goto L_00244748;
    case 68u: goto L_00244760;
    case 69u: goto L_00244780;
    case 70u: goto L_002447A8;
    case 71u: goto L_002447BC;
    case 72u: goto L_002447D0;
    case 73u: goto L_002447D4;
    case 74u: goto L_002447EC;
    case 75u: goto L_00244828;
    case 76u: goto L_00244830;
    case 77u: goto L_00244850;
    case 78u: goto L_0024486C;
    case 79u: goto L_002448B0;
    case 80u: goto L_002448D0;
    case 81u: goto L_00244910;
    case 82u: goto L_00244948;
    case 83u: goto L_00244954;
    case 84u: goto L_0024496C;
    case 85u: goto L_00244990;
    case 86u: goto L_002449AC;
    case 87u: goto L_002449BC;
    case 88u: goto L_002449E0;
    case 89u: goto L_002449F0;
    case 90u: goto L_00244A24;
    case 91u: goto L_00244A30;
    case 92u: goto L_00244A44;
    case 93u: goto L_00244A4C;
    case 94u: goto L_00244A70;
    case 95u: goto L_00244A80;
    case 96u: goto L_00244A94;
    case 97u: goto L_00244AA8;
    case 98u: goto L_00244ACC;
    case 99u: goto L_00244AD8;
    case 100u: goto L_00244AE4;
    case 101u: goto L_00244B00;
    case 102u: goto L_00244B3C;
    case 103u: goto L_00244B54;
    case 104u: goto L_00244B64;
    case 105u: goto L_00244B7C;
    case 106u: goto L_00244BA0;
    case 107u: goto L_00244BCC;
    case 108u: goto L_00244BF4;
    case 109u: goto L_00244C28;
    case 110u: goto L_00244C3C;
    case 111u: goto L_00244CE4;
    case 112u: goto L_00244D18;
    case 113u: goto L_00244D34;
    case 114u: goto L_00244D80;
    case 115u: goto L_00244DBC;
    case 116u: goto L_00244DD0;
    case 117u: goto L_00244E24;
    case 118u: goto L_00244E5C;
    case 119u: goto L_00244E70;
    case 120u: goto L_00244EC4;
    case 121u: goto L_00244EF8;
    case 122u: goto L_00244F14;
    case 123u: goto L_00244F58;
    case 124u: goto L_00244F70;
    case 125u: goto L_00244F7C;
    case 126u: goto L_00244FC0;
    case 127u: goto L_00244FCC;
    case 128u: goto L_00245010;
    case 129u: goto L_0024501C;
    case 130u: goto L_00245060;
    case 131u: goto L_0024506C;
    case 132u: goto L_002450B0;
    case 133u: goto L_002450D0;
    case 134u: goto L_002450E4;
    case 135u: goto L_00245110;
    case 136u: goto L_00245150;
    case 137u: goto L_00245164;
    case 138u: goto L_00245178;
    case 139u: goto L_002451A0;
    case 140u: goto L_002451DC;
    case 141u: goto L_002451EC;
    case 142u: goto L_00245204;
    case 143u: goto L_00245220;
    case 144u: goto L_0024524C;
    case 145u: goto L_00245260;
    case 146u: goto L_00245278;
    case 147u: goto L_00245288;
    case 148u: goto L_002452AC;
    case 149u: goto L_002452E0;
    case 150u: goto L_002452F4;
    case 151u: goto L_00245320;
    case 152u: goto L_00245368;
    case 153u: goto L_00245390;
    case 154u: goto L_002453B4;
    case 155u: goto L_002453CC;
    case 156u: goto L_00245420;
    case 157u: goto L_0024544C;
    case 158u: goto L_00245464;
    case 159u: goto L_0024548C;
    case 160u: goto L_002454D0;
    case 161u: goto L_002454F0;
    case 162u: goto L_00245504;
    case 163u: goto L_00245520;
    case 164u: goto L_00245530;
    case 165u: goto L_00245560;
    case 166u: goto L_00245580;
    case 167u: goto L_00245594;
    case 168u: goto L_002455A8;
    case 169u: goto L_002455BC;
    case 170u: goto L_002455E8;
    case 171u: goto L_00245630;
    case 172u: goto L_00245664;
    case 173u: goto L_00245680;
    case 174u: goto L_00245694;
    case 175u: goto L_002456B0;
    case 176u: goto L_002456D4;
    case 177u: goto L_002456E4;
    case 178u: goto L_002456FC;
    case 179u: goto L_00245720;
    case 180u: goto L_00245740;
    case 181u: goto L_00245754;
    case 182u: goto L_00245770;
    case 183u: goto L_002457A0;
    case 184u: goto L_002457C0;
    case 185u: goto L_002457E4;
    case 186u: goto L_002457F4;
    case 187u: goto L_00245810;
    case 188u: goto L_00245818;
    case 189u: goto L_00245820;
    case 190u: goto L_00245828;
    case 191u: goto L_00245830;
    case 192u: goto L_00245844;
    case 193u: goto L_00245854;
    case 194u: goto L_0024586C;
    case 195u: goto L_00245890;
    case 196u: goto L_002458CC;
    case 197u: goto L_00245904;
    case 198u: goto L_0024591C;
    case 199u: goto L_00245990;
    case 200u: goto L_00245A8C;
    case 201u: goto L_00245AD0;
    case 202u: goto L_00245B14;
    case 203u: goto L_00245B44;
    case 204u: goto L_00245B88;
    case 205u: goto L_00245BA4;
    case 206u: goto L_00245BB0;
    case 207u: goto L_00245C40;
    case 208u: goto L_00245C70;
    case 209u: goto L_00245C7C;
    case 210u: goto L_00245C84;
    case 211u: goto L_00245CBC;
    case 212u: goto L_00245CD0;
    case 213u: goto L_00245CDC;
    case 214u: goto L_00245CE0;
    case 215u: goto L_00245CE8;
    case 216u: goto L_00245D24;
    case 217u: goto L_00245DF4;
    case 218u: goto L_00245E10;
    case 219u: goto L_00245E44;
    case 220u: goto L_00245E5C;
    case 221u: goto L_00245E98;
    case 222u: goto L_00245EB0;
    case 223u: goto L_00245F00;
    case 224u: goto L_00245F10;
    case 225u: goto L_00245F80;
    case 226u: goto L_00245FC8;
    case 227u: goto L_00245FD8;
    case 228u: goto L_00246050;
    case 229u: goto L_00246080;
    case 230u: goto L_00246098;
    case 231u: goto L_002460C4;
    case 232u: goto L_002460E4;
    case 233u: goto L_00246138;
    case 234u: goto L_00246154;
    case 235u: goto L_002461D0;
    case 236u: goto L_0024621C;
    case 237u: goto L_00246234;
    case 238u: goto L_002462B0;
    case 239u: goto L_00246330;
    case 240u: goto L_00246350;
    case 241u: goto L_0024638C;
    case 242u: goto L_0024640C;
    case 243u: goto L_00246460;
    case 244u: goto L_002464F0;
    case 245u: goto L_00246530;
    case 246u: goto L_00246550;
    case 247u: goto L_00246570;
    case 248u: goto L_0024659C;
    case 249u: goto L_002465E0;
    case 250u: goto L_00246620;
    case 251u: goto L_00246654;
    case 252u: goto L_00246690;
    case 253u: goto L_0024669C;
    case 254u: goto L_002466BC;
    case 255u: goto L_002466D8;
    case 256u: goto L_002466E0;
    case 257u: goto L_002466E8;
    case 258u: goto L_002466FC;
    case 259u: goto L_0024670C;
    case 260u: goto L_0024672C;
    case 261u: goto L_00246760;
    case 262u: goto L_00246778;
    case 263u: goto L_0024678C;
    case 264u: goto L_002467D0;
    case 265u: goto L_00246814;
    case 266u: goto L_00246848;
    case 267u: goto L_00246850;
    case 268u: goto L_00246880;
    case 269u: goto L_002468B4;
    case 270u: goto L_00246930;
    case 271u: goto L_00246960;
    case 272u: goto L_0024696C;
    case 273u: goto L_00246984;
    case 274u: goto L_00246998;
    case 275u: goto L_00246A10;
    case 276u: goto L_00246A20;
    case 277u: goto L_00246A44;
    case 278u: goto L_00246A7C;
    case 279u: goto L_00246ABC;
    case 280u: goto L_00246AD0;
    case 281u: goto L_00246AFC;
    case 282u: goto L_00246B0C;
    case 283u: goto L_00246B28;
    case 284u: goto L_00246B3C;
    case 285u: goto L_00246B44;
    case 286u: goto L_00246B50;
    case 287u: goto L_00246B90;
    case 288u: goto L_00246C20;
    case 289u: goto L_00246C38;
    case 290u: goto L_00246C4C;
    case 291u: goto L_00246C5C;
    case 292u: goto L_00246C80;
    case 293u: goto L_00246CCC;
    case 294u: goto L_00246CDC;
    case 295u: goto L_00246CF4;
    case 296u: goto L_00246D10;
    case 297u: goto L_00246D40;
    case 298u: goto L_00246D54;
    case 299u: goto L_00246D70;
    case 300u: goto L_00246D80;
    case 301u: goto L_00246DAC;
    case 302u: goto L_00246DD0;
    case 303u: goto L_00246DEC;
    case 304u: goto L_00246E00;
    case 305u: goto L_00246E14;
    case 306u: goto L_00246E24;
    case 307u: goto L_00246E34;
    case 308u: goto L_00246E44;
    case 309u: goto L_00246E58;
    case 310u: goto L_00246E6C;
    case 311u: goto L_00246E80;
    case 312u: goto L_00246E90;
    case 313u: goto L_00246F1C;
    case 314u: goto L_00246F28;
    case 315u: goto L_00246F2C;
    case 316u: goto L_00246F70;
    case 317u: goto L_00246FB0;
    case 318u: goto L_00246FD4;
    case 319u: goto L_00246FFC;
    case 320u: goto L_00247014;
    case 321u: goto L_0024701C;
    case 322u: goto L_00247048;
    case 323u: goto L_00247064;
    case 324u: goto L_00247070;
    case 325u: goto L_00247088;
    case 326u: goto L_002470B0;
    case 327u: goto L_002470EC;
    case 328u: goto L_00247100;
    case 329u: goto L_00247124;
    case 330u: goto L_0024713C;
    case 331u: goto L_00247148;
    case 332u: goto L_00247194;
    case 333u: goto L_002471A4;
    case 334u: goto L_002471C4;
    case 335u: goto L_002471E4;
    case 336u: goto L_00247210;
    case 337u: goto L_00247228;
    case 338u: goto L_00247230;
    case 339u: goto L_00247244;
    case 340u: goto L_00247250;
    case 341u: goto L_00247280;
    case 342u: goto L_00247290;
    case 343u: goto L_002472A4;
    case 344u: goto L_002472B8;
    case 345u: goto L_002472C4;
    case 346u: goto L_002472E0;
    case 347u: goto L_002472F0;
    case 348u: goto L_0024731C;
    case 349u: goto L_00247324;
    case 350u: goto L_0024733C;
    case 351u: goto L_00247350;
    case 352u: goto L_0024735C;
    case 353u: goto L_0024737C;
    case 354u: goto L_00247388;
    case 355u: goto L_002473A4;
    case 356u: goto L_002473C0;
    case 357u: goto L_002473D4;
    case 358u: goto L_002473F4;
    case 359u: goto L_00247414;
    case 360u: goto L_0024742C;
    case 361u: goto L_0024744C;
    case 362u: goto L_00247480;
    case 363u: goto L_002474B0;
    case 364u: goto L_002474D0;
    case 365u: goto L_002474F8;
    case 366u: goto L_00247520;
    case 367u: goto L_00247530;
    case 368u: goto L_00247560;
    case 369u: goto L_00247580;
    case 370u: goto L_002475A8;
    case 371u: goto L_002475D0;
    case 372u: goto L_00247604;
    case 373u: goto L_0024761C;
    case 374u: goto L_00247640;
    case 375u: goto L_00247648;
    case 376u: goto L_00247668;
    case 377u: goto L_00247678;
    case 378u: goto L_002476A8;
    case 379u: goto L_002476D0;
    case 380u: goto L_00247700;
    case 381u: goto L_0024771C;
    case 382u: goto L_00247724;
    case 383u: goto L_00247738;
    case 384u: goto L_0024776C;
    case 385u: goto L_00247788;
    case 386u: goto L_00247794;
    case 387u: goto L_00247800;
    case 388u: goto L_00247830;
    case 389u: goto L_00247880;
    case 390u: goto L_002478A8;
    case 391u: goto L_002478B8;
    case 392u: goto L_002478D0;
    case 393u: goto L_002478F0;
    case 394u: goto L_00247930;
    case 395u: goto L_00247978;
    case 396u: goto L_0024798C;
    case 397u: goto L_002479E8;
    case 398u: goto L_00247A08;
    case 399u: goto L_00247A28;
    case 400u: goto L_00247A3C;
    case 401u: goto L_00247AB4;
    case 402u: goto L_00247B10;
    case 403u: goto L_00247B20;
    case 404u: goto L_00247B48;
    case 405u: goto L_00247B60;
    case 406u: goto L_00247C54;
    case 407u: goto L_00247C68;
    case 408u: goto L_00247C80;
    case 409u: goto L_00247CA0;
    case 410u: goto L_00247CE8;
    case 411u: goto L_00247D00;
    case 412u: goto L_00247D10;
    case 413u: goto L_00247D3C;
    case 414u: goto L_00247D54;
    case 415u: goto L_00247D80;
    case 416u: goto L_00247DB8;
    case 417u: goto L_00247DD0;
    case 418u: goto L_00247DE0;
    case 419u: goto L_00247E04;
    case 420u: goto L_00247E10;
    case 421u: goto L_00247E4C;
    case 422u: goto L_00247E54;
    case 423u: goto L_00247E68;
    case 424u: goto L_00247E70;
    case 425u: goto L_00247E90;
    case 426u: goto L_00247EA0;
    case 427u: goto L_00247ED4;
    case 428u: goto L_00247EF0;
    case 429u: goto L_00247F3C;
    case 430u: goto L_00247F60;
    case 431u: goto L_00247F78;
    case 432u: goto L_00247FA8;
    case 433u: goto L_00247FC0;
    case 434u: goto L_00247FCC;
    case 435u: goto L_00247FE4;
    default: bad_entry(c, 0x00244000u); return;
    }
L_00244000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244008u); st8((c.r[20].w[0] + 132u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0050(c, 252u, depth + 1u); else { c.pc = 0x002435C0u; return; } if (c.pc != 0x00244008u) [[unlikely]] return; }
L_00244008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244010u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244010u) [[unlikely]] return; }
L_00244010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00244030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244040u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x00244040u) [[unlikely]] return; }
L_00244040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 672u);  if (t) { goto L_0024408C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244050u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00244050u) [[unlikely]] return; }
L_00244050:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00244074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244064u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00244064u) [[unlikely]] return; }
L_00244064:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244070u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 28u, depth + 1u); else { c.pc = 0x00244200u; return; } if (c.pc != 0x00244070u) [[unlikely]] return; }
L_00244070:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00244074:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244084u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x00244084u) [[unlikely]] return; }
L_00244084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024408Cu); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_0050(c, 252u, depth + 1u); else { c.pc = 0x002435C0u; return; } if (c.pc != 0x0024408Cu) [[unlikely]] return; }
L_0024408C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002440A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440B0u);  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x002440B0u) [[unlikely]] return; }
L_002440B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002440CC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002440CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002440CCu) [[unlikely]] return; }
L_002440CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002440E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);  if (t) { goto L_00244100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024411C; } }
L_00244100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244108u); c.r[5].d[0] = c.r[2].d[0] | 22339ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00244108u) [[unlikely]] return; }
L_00244108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0024411C; } }
L_00244118:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024411C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00244130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244144u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x00244144u) [[unlikely]] return; }
L_00244144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00244154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244154u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0050(c, 262u, depth + 1u); else { c.pc = 0x002436D0u; return; } if (c.pc != 0x00244154u) [[unlikely]] return; }
L_00244154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00244170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244180u);  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x00244180u) [[unlikely]] return; }
L_00244180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 528u);  if (t) { goto L_00244190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244190u);  if (depth < kMaxDepth) unit_0050(c, 268u, depth + 1u); else { c.pc = 0x002437F0u; return; } if (c.pc != 0x00244190u) [[unlikely]] return; }
L_00244190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002441A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441B0u);  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x002441B0u) [[unlikely]] return; }
L_002441B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 528u);  if (t) { goto L_002441C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441C0u);  if (depth < kMaxDepth) unit_0050(c, 273u, depth + 1u); else { c.pc = 0x002438F0u; return; } if (c.pc != 0x002441C0u) [[unlikely]] return; }
L_002441C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002441D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441E0u);  if (depth < kMaxDepth) unit_0051(c, 14u, depth + 1u); else { c.pc = 0x002440E0u; return; } if (c.pc != 0x002441E0u) [[unlikely]] return; }
L_002441E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002441F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441F4u);  if (depth < kMaxDepth) unit_0051(c, 46u, depth + 1u); else { c.pc = 0x002443A0u; return; } if (c.pc != 0x002441F4u) [[unlikely]] return; }
L_002441F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00244200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244228u); c.r[5].d[0] = c.r[2].d[0] | 22339ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x00244228u) [[unlikely]] return; }
L_00244228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024423Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 128u, depth + 1u); else { c.pc = 0x00157600u; return; } if (c.pc != 0x0024423Cu) [[unlikely]] return; }
L_0024423C:
    set32(c.r[3], 0u + 15312u);
    set32(c.r[2], 0u + 16335u);
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 528u);
    st16((c.r[29].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024425Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00243330u; return; } if (c.pc != 0x0024425Cu) [[unlikely]] return; }
L_0024425C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244264u); st32((c.r[17].w[0] + 664u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00244264u) [[unlikely]] return; }
L_00244264:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 29224u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244274u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 195u, depth + 1u); else { c.pc = 0x00242E90u; return; } if (c.pc != 0x00244274u) [[unlikely]] return; }
L_00244274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024427Cu);  if (depth < kMaxDepth) unit_0050(c, 166u, depth + 1u); else { c.pc = 0x00242B70u; return; } if (c.pc != 0x0024427Cu) [[unlikely]] return; }
L_0024427C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002442A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00244378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002442D8u); set32(c.r[4], ld32((c.r[1].w[0] + 29224u)));  if (depth < kMaxDepth) unit_0050(c, 200u, depth + 1u); else { c.pc = 0x00242F00u; return; } if (c.pc != 0x002442D8u) [[unlikely]] return; }
L_002442D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002442E0u);  if (depth < kMaxDepth) unit_0050(c, 173u, depth + 1u); else { c.pc = 0x00242BE0u; return; } if (c.pc != 0x002442E0u) [[unlikely]] return; }
L_002442E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 528u);  if (t) { goto L_00244340; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244300u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00244300u) [[unlikely]] return; }
L_00244300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244314u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00244314u) [[unlikely]] return; }
L_00244314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244328u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x00244328u) [[unlikely]] return; }
L_00244328:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024433Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x0024433Cu) [[unlikely]] return; }
L_0024433C:
    set32(c.r[4], c.r[18].w[0] + 528u);
    c.budget -= 1;
L_00244340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0050(c, 239u, depth + 1u); else { c.pc = 0x00243400u; return; } if (c.pc != 0x00244348u) [[unlikely]] return; }
L_00244348:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244354u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0015(c, 131u, depth + 1u); else { c.pc = 0x00157770u; return; } if (c.pc != 0x00244354u) [[unlikely]] return; }
L_00244354:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x00244360u) [[unlikely]] return; }
L_00244360:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024437C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244378u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00244378u) [[unlikely]] return; }
L_00244378:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0024437C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002443A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 31840u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31904u);
    set32(c.r[3], c.r[17].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28704u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28720u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28736u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244448u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x00244448u) [[unlikely]] return; }
L_00244448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28640u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28644u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28648u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024446Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0024446Cu) [[unlikely]] return; }
L_0024446C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28708u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28724u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28740u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444A0u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x002444A0u) [[unlikely]] return; }
L_002444A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28656u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28660u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28664u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x002444C4u) [[unlikely]] return; }
L_002444C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[1].w[0] + 28712u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = ld32((c.r[1].w[0] + 28728u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[1].w[0] + 28744u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444F8u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 94u, depth + 1u); else { c.pc = 0x0014D670u; return; } if (c.pc != 0x002444F8u) [[unlikely]] return; }
L_002444F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[1].w[0] + 28672u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28676u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28680u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024451Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0013(c, 95u, depth + 1u); else { c.pc = 0x0014D6C0u; return; } if (c.pc != 0x0024451Cu) [[unlikely]] return; }
L_0024451C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[1].w[0] + 28688u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[13] = ld32((c.r[1].w[0] + 28692u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[1].w[0] + 28696u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024453Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 96u, depth + 1u); else { c.pc = 0x0014D700u; return; } if (c.pc != 0x0024453Cu) [[unlikely]] return; }
L_0024453C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002445F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | 2ull;
    c.r[8].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[4], 0u + 14u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 27ull;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 71u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 41;
L_002445F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244600u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0013(c, 99u, depth + 1u); else { c.pc = 0x0014D7F0u; return; } if (c.pc != 0x00244600u) [[unlikely]] return; }
L_00244600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00244620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243540u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 250u, depth); }
L_00244630:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243400u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 239u, depth); }
L_00244640:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243640u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 255u, depth); }
L_00244650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243400u | kUnwind; return; } [[clang::musttail]] return unit_0050(c, 239u, depth); }
L_00244660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024467Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0024467Cu) [[unlikely]] return; }
L_0024467C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3568u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0024468C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024468Cu | kUnwind; return; } goto L_0024468C; } }
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446B4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x002446B4u) [[unlikely]] return; }
L_002446B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446C8u); set32(c.r[5], c.r[5].w[0] + 29232u);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002446C8u) [[unlikely]] return; }
L_002446C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002446E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00244760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3568u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
L_00244714:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024472C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024472Cu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0024472Cu) [[unlikely]] return; }
L_0024472C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244714u | kUnwind; return; } goto L_00244714; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00244748u) [[unlikely]] return; }
L_00244748:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00244764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00244760u) [[unlikely]] return; }
L_00244760:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00244764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00244780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447A8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002447A8u) [[unlikely]] return; }
L_002447A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447BCu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002447BCu) [[unlikely]] return; }
L_002447BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002447D0u) [[unlikely]] return; }
L_002447D0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002447D4:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447ECu); set32(c.r[16], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 152u, depth + 1u); else { c.pc = 0x0015DC50u; return; } if (c.pc != 0x002447ECu) [[unlikely]] return; }
L_002447EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[3].w[0] + 112u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002447D4u | kUnwind; return; } goto L_002447D4; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244828u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00244828u) [[unlikely]] return; }
L_00244828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244830u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244830u) [[unlikely]] return; }
L_00244830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00244850:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[2].w[0] + 112u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00244898; } }
L_0024486C:
    set32(c.r[2], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[5], c.r[9].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00244894; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 2u);  if (t) { goto L_002448A4; } }
L_00244894:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00244898:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024486Cu | kUnwind; return; } goto L_0024486C; } }
L_002448A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002448B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x002448D0u) [[unlikely]] return; }
L_002448D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 3600u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00244910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024496C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3600u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00244948u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00244948u) [[unlikely]] return; }
L_00244948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00244954u) [[unlikely]] return; }
L_00244954:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00244970; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024496Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0024496Cu) [[unlikely]] return; }
L_0024496C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00244970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00244990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002449ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002449ACu) [[unlikely]] return; }
L_002449AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002449BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002449BCu) [[unlikely]] return; }
L_002449BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002449E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_002449F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A24u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244A24u) [[unlikely]] return; }
L_00244A24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A30u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 79u, depth + 1u); else { c.pc = 0x00141110u; return; } if (c.pc != 0x00244A30u) [[unlikely]] return; }
L_00244A30:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A44u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00244A44u) [[unlikely]] return; }
L_00244A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A4Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244A4Cu) [[unlikely]] return; }
L_00244A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00244A70:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00141160u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 83u, depth); }
L_00244A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00244A94u) [[unlikely]] return; }
L_00244A94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244AA8u); set32(c.r[5], c.r[5].w[0] + 29248u);  if (depth < kMaxDepth) unit_0051(c, 79u, depth + 1u); else { c.pc = 0x002448B0u; return; } if (c.pc != 0x00244AA8u) [[unlikely]] return; }
L_00244AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 3632u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 8u);
    st32((c.r[1].w[0] - 27888u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244ACCu); st32((c.r[16].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00244ACCu) [[unlikely]] return; }
L_00244ACC:
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244AD8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00244AD8u) [[unlikely]] return; }
L_00244AD8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244AE4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00244AE4u) [[unlikely]] return; }
L_00244AE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00244B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00244B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00244B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244B3Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00244B3Cu) [[unlikely]] return; }
L_00244B3C:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00244B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244B54u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00244B54u) [[unlikely]] return; }
L_00244B54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244B64u); st32((c.r[17].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0051(c, 81u, depth + 1u); else { c.pc = 0x00244910u; return; } if (c.pc != 0x00244B64u) [[unlikely]] return; }
L_00244B64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00244B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244B7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00244B7Cu) [[unlikely]] return; }
L_00244B7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00244B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00244BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244BCCu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244BCCu) [[unlikely]] return; }
L_00244BCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00244C10; } }
L_00244BF4:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244C08; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244C08:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244C10:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244BF4u | kUnwind; return; } goto L_00244BF4; } }
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244C28u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00244C28u) [[unlikely]] return; }
L_00244C28:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00244CB8; } }
L_00244C3C:
    c.r[8].d[0] = ld64((c.r[2].w[0]));
    c.r[5].d[0] = c.r[8].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00244CB0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st64((c.r[5].w[0]), c.r[8].d[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 48u));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 49u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 50u));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 51u));
    st8((c.r[6].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st16((c.r[5].w[0] + 16u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 25;
L_00244CB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.budget -= 2;
L_00244CB8:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244C3Cu | kUnwind; return; } goto L_00244C3C; } }
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], 0u + 384u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00244D00; } }
L_00244CE4:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244CF8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244CF8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244D00:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244CE4u | kUnwind; return; } goto L_00244CE4; } }
    st32((c.r[17].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244D18u); set32(c.r[4], c.r[6].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00244D18u) [[unlikely]] return; }
L_00244D18:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u + 384u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00244D64; } }
L_00244D34:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244D5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 56u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00244D5C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 2;
L_00244D64:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244D34u | kUnwind; return; } goto L_00244D34; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00244DA4; } }
L_00244D80:
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 28ull;  if (t) { goto L_00244D9C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244D9C; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244D9C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244DA4:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244D80u | kUnwind; return; } goto L_00244D80; } }
    st32((c.r[17].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244DBCu); set32(c.r[4], c.r[6].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00244DBCu) [[unlikely]] return; }
L_00244DBC:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00244E08; } }
L_00244DD0:
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 28ull;  if (t) { goto L_00244E00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244E00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00244E00:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244E08:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244DD0u | kUnwind; return; } goto L_00244DD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00244E40; } }
L_00244E24:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244E38; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00244E38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 2;
L_00244E40:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244E24u | kUnwind; return; } goto L_00244E24; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[5].w[0]);  if (t) { goto L_00244E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244E5Cu); set32(c.r[4], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00244E5Cu) [[unlikely]] return; }
L_00244E5C:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_00244E60:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00244EA0; } }
L_00244E70:
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244E98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00244E98:
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244EA0:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244E70u | kUnwind; return; } goto L_00244E70; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00244EE0; } }
L_00244EC4:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244ED8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244ED8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_00244EE0:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244EC4u | kUnwind; return; } goto L_00244EC4; } }
    st32((c.r[17].w[0] + 72u), c.r[6].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244EF8u); set32(c.r[4], c.r[6].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00244EF8u) [[unlikely]] return; }
L_00244EF8:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_00244F44; } }
L_00244F14:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244F3C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 56u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_00244F3C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 2;
L_00244F44:
    c.r[2].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244F14u | kUnwind; return; } goto L_00244F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244F58u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00244F58u) [[unlikely]] return; }
L_00244F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00244F70:
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00244FA0; } }
L_00244F7C:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00244F9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244FAC; } }
L_00244F9C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244FA0:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244F7Cu | kUnwind; return; } goto L_00244F7C; } }
L_00244FAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00244FC0:
    set32(c.r[7], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00244FF0; } }
L_00244FCC:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00244FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244FFC; } }
L_00244FEC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00244FF0:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244FCCu | kUnwind; return; } goto L_00244FCC; } }
L_00244FFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00245010:
    set32(c.r[7], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00245040; } }
L_0024501C:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024503C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024504C; } }
L_0024503C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00245040:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024501Cu | kUnwind; return; } goto L_0024501C; } }
L_0024504C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00245060:
    set32(c.r[7], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00245090; } }
L_0024506C:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024508C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024509C; } }
L_0024508C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00245090:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024506Cu | kUnwind; return; } goto L_0024506C; } }
L_0024509C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002450B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002450D0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x002450D0u) [[unlikely]] return; }
L_002450D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_002450E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002450E4u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x002450E4u) [[unlikely]] return; }
L_002450E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002450E8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002450FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024513C; } }
L_002450FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0024512C; } }
L_00245110:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00245124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00245140; } }
L_00245124:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.budget -= 2;
L_0024512C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245110u | kUnwind; return; } goto L_00245110; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024513C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00245140:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00245150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245164u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00245164u) [[unlikely]] return; }
L_00245164:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245178u); set32(c.r[5], c.r[5].w[0] + 29248u);  if (depth < kMaxDepth) unit_0051(c, 79u, depth + 1u); else { c.pc = 0x002448B0u; return; } if (c.pc != 0x00245178u) [[unlikely]] return; }
L_00245178:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 3664u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002451A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00245204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3664u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002451DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002451DCu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002451DCu) [[unlikely]] return; }
L_002451DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002451ECu); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0051(c, 81u, depth + 1u); else { c.pc = 0x00244910u; return; } if (c.pc != 0x002451ECu) [[unlikely]] return; }
L_002451EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00245208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245204u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00245204u) [[unlikely]] return; }
L_00245204:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00245208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00245220:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024524Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0024524Cu) [[unlikely]] return; }
L_0024524C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245260u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00245260u) [[unlikely]] return; }
L_00245260:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245278u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245278u) [[unlikely]] return; }
L_00245278:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245288u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245288u) [[unlikely]] return; }
L_00245288:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[20].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002452C8; } }
L_002452AC:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002452C0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002452C0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 2;
L_002452C8:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002452ACu | kUnwind; return; } goto L_002452AC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002452E0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002452E0u) [[unlikely]] return; }
L_002452E0:
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024534C; } }
L_002452F4:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245344; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245320u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00245320u) [[unlikely]] return; }
L_00245320:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st16((c.r[2].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 51u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00245344:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 2;
L_0024534C:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002452F4u | kUnwind; return; } goto L_002452F4; } }
    st32((c.r[20].w[0] + 40u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245368u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00245368u) [[unlikely]] return; }
L_00245368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00245390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002453B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x002453B4u) [[unlikely]] return; }
L_002453B4:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002453F8; } }
L_002453CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002453F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00245408; } }
L_002453F4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002453F8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002453CCu | kUnwind; return; } goto L_002453CC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00245408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00245420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024544Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0024544Cu) [[unlikely]] return; }
L_0024544C:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002454A0; } }
L_00245464:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[18], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0024549C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024548Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0024548Cu) [[unlikely]] return; }
L_0024548C:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 34u));  if (t) { goto L_002454AC; } }
L_0024549C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002454A0:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 255u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245464u | kUnwind; return; } goto L_00245464; } }
L_002454AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002454D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27880u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_00245510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002454F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002454F0u) [[unlikely]] return; }
L_002454F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245504u);  if (depth < kMaxDepth) unit_0051(c, 136u, depth + 1u); else { c.pc = 0x00245150u; return; } if (c.pc != 0x00245504u) [[unlikely]] return; }
L_00245504:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00245508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27880u), c.r[4].w[0]);
    c.budget -= 2;
L_00245510:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00245520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 27880u)));  c.pc = t; return; }
L_00245530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27880u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245560; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245560u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245560u) [[unlikely]] return; }
L_00245560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27880u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00245580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00245594u) [[unlikely]] return; }
L_00245594:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002455A8u); set32(c.r[5], c.r[5].w[0] + 29248u);  if (depth < kMaxDepth) unit_0051(c, 79u, depth + 1u); else { c.pc = 0x002448B0u; return; } if (c.pc != 0x002455A8u) [[unlikely]] return; }
L_002455A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 5;
L_002455BC:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 48u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[2].w[0] + 300u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 63ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002455BCu | kUnwind; return; } goto L_002455BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 2;
L_002455E8:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 428u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[2].w[0] + 464u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002455E8u | kUnwind; return; } goto L_002455E8; } }
    st32((c.r[16].w[0] + 484u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 488u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00245630:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002456FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3696u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00245664:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 48u);  if (t) { goto L_00245680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245680u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00245680u) [[unlikely]] return; }
L_00245680:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245664u | kUnwind; return; } goto L_00245664; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00245694:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 428u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 428u);  if (t) { goto L_002456B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456B0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002456B0u) [[unlikely]] return; }
L_002456B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245694u | kUnwind; return; } goto L_00245694; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002456D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456D4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002456D4u) [[unlikely]] return; }
L_002456D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456E4u); st32((c.r[18].w[0] + 484u), 0u);  if (depth < kMaxDepth) unit_0051(c, 81u, depth + 1u); else { c.pc = 0x00244910u; return; } if (c.pc != 0x002456E4u) [[unlikely]] return; }
L_002456E4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00245700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002456FCu) [[unlikely]] return; }
L_002456FC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00245700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00245720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 496u);  if (t) { goto L_00245760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245740u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00245740u) [[unlikely]] return; }
L_00245740:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245754u);  if (depth < kMaxDepth) unit_0051(c, 166u, depth + 1u); else { c.pc = 0x00245580u; return; } if (c.pc != 0x00245754u) [[unlikely]] return; }
L_00245754:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00245758:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27872u), c.r[4].w[0]);
    c.budget -= 2;
L_00245760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00245770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27872u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002457A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002457A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002457A0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002457A0u) [[unlikely]] return; }
L_002457A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27872u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002457C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002457E4u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002457E4u) [[unlikely]] return; }
L_002457E4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002457F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002457F4u) [[unlikely]] return; }
L_002457F4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245810u); set32(c.r[16], ld32((c.r[1].w[0] + 3840u)));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00245810u) [[unlikely]] return; }
L_00245810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245818u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00245818u) [[unlikely]] return; }
L_00245818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 250u, depth + 1u); else { c.pc = 0x00246620u; return; } if (c.pc != 0x00245820u) [[unlikely]] return; }
L_00245820:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00245828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245830u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 249u, depth + 1u); else { c.pc = 0x002465E0u; return; } if (c.pc != 0x00245830u) [[unlikely]] return; }
L_00245830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024584C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245844u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 199u, depth + 1u); else { c.pc = 0x00245990u; return; } if (c.pc != 0x00245844u) [[unlikely]] return; }
L_00245844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00245858; } }
L_0024584C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245854u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 195u, depth + 1u); else { c.pc = 0x00245890u; return; } if (c.pc != 0x00245854u) [[unlikely]] return; }
L_00245854:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00245858:
    c.r[2].d[0] = c.r[17].sd[0] < 63ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245828u | kUnwind; return; } goto L_00245828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024586Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0024586Cu) [[unlikely]] return; }
L_0024586C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00245890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[3].d[0] << (c.r[17].w[0] & 63u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002458E8; } }
L_002458CC:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_002458E0; } }
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002458E0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 2;
L_002458E8:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002458CCu | kUnwind; return; } goto L_002458CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { goto L_00245968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245904u); set32(c.r[19], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00245904u) [[unlikely]] return; }
L_00245904:
    set32(c.r[8], c.r[19].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00245950; } }
L_0024591C:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00245948; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 48u)));
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 7;
L_00245948:
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.budget -= 2;
L_00245950:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024591Cu | kUnwind; return; } goto L_0024591C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st16((c.r[3].w[0] + 300u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 2;
L_00245968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00245990:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 42u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 20;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00245A4C; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 52u);  if (t) { goto L_00245A3C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_00245A2C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_00245A20; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00245A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_00245A5C; } }
L_00245A10:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 7020u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 7029u);  if (t) { goto L_00245A58; } }
L_00245A20:
    set32(c.r[19], 0u + 7000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 7009u);  if (t) { goto L_00245A58; } }
L_00245A2C:
    set32(c.r[19], 0u + 7040u);
    set32(c.r[18], 0u + 7120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00245A58; } }
L_00245A3C:
    set32(c.r[19], 0u + 7200u);
    set32(c.r[18], 0u + 7209u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00245A58; } }
L_00245A4C:
    set32(c.r[19], 0u + 7220u);
    set32(c.r[18], 0u + 7229u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_00245A58:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.budget -= 1;
L_00245A5C:
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 23120u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[20].w[0] & 63u);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 224u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_00245AF4; } }
L_00245A8C:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00245AEC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00245AE0; } }
    c.r[1].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00245AE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245AD0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245AD0u) [[unlikely]] return; }
L_00245AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245ADC; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00245ADC:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00245AE0:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_00245AEC; } }
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00245AEC:
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 2;
L_00245AF4:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[3].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245A8Cu | kUnwind; return; } goto L_00245A8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { goto L_00245C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B14u); set32(c.r[16], c.r[20].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00245B14u) [[unlikely]] return; }
L_00245B14:
    set32(c.r[30], c.r[16].w[0] + c.r[21].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[30].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23088u);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[21].w[0] + 44u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_00245BF0; } }
L_00245B44:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00245BE8; } }
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_00245BC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00245BC0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B88u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245B88u) [[unlikely]] return; }
L_00245B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245BB8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BA4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00245BA4u) [[unlikely]] return; }
L_00245BA4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00245BB0u) [[unlikely]] return; }
L_00245BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { goto L_00245BC0; } }
L_00245BB8:
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_00245BC0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00245BE8; } }
    set32(c.r[4], ld32((c.r[30].w[0] + 48u)));
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.r[22].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 7;
L_00245BE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 2;
L_00245BF0:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245B44u | kUnwind; return; } goto L_00245B44; } }
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st16((c.r[3].w[0] + 300u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.budget -= 2;
L_00245C08:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00245C40:
    set32(c.r[29], c.r[29].w[0] - 4080u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 484u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00245C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C70u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00245C70u) [[unlikely]] return; }
L_00245C70:
    st32((c.r[18].w[0] + 484u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00245C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 287u, depth + 1u); else { c.pc = 0x00246B90u; return; } if (c.pc != 0x00245C84u) [[unlikely]] return; }
L_00245C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 108u);  if (t) { goto L_00245C9C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00245C9C; } }
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00245C9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[19].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245C7Cu | kUnwind; return; } goto L_00245C7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[3].w[0] << 1);  if (t) { goto L_00245DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CBCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00245CBCu) [[unlikely]] return; }
L_00245CBC:
    st32((c.r[18].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2080u);
    set32(c.r[5], 0u + 2000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CD0u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00245CD0u) [[unlikely]] return; }
L_00245CD0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CDCu); set32(c.r[5], 0u + 2000u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00245CDCu) [[unlikely]] return; }
L_00245CDC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00245CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 287u, depth + 1u); else { c.pc = 0x00246B90u; return; } if (c.pc != 0x00245CE8u) [[unlikely]] return; }
L_00245CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245DD0; } }
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00245DD0; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[10].d[0] = c.r[6].d[0] | 32767ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245DC0; } }
L_00245D24:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[11].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00245D60; } }
    set32(c.r[8], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[12], c.r[8].w[0] + 2080u);
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; c.r[8].d[0] = c.r[11].d[0] & 32768ull;  if (t) { goto L_00245D64; } }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00245DA4; } }
L_00245D60:
    c.r[8].d[0] = c.r[11].d[0] & 32768ull;
    c.budget -= 1;
L_00245D64:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[8].d[0] = c.r[11].d[0] & 65535ull;  if (t) { goto L_00245DA4; } }
    c.r[8].d[0] = c.r[8].d[0] & c.r[10].d[0];
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00245DA4; } }
    set32(c.r[8], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[8].w[0] + 80u);
    c.r[8].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00245DA4; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], ld32((c.r[18].w[0] + 484u)));
    c.r[9].d[0] = c.r[5].d[0] | 32768ull;
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 6;
L_00245DA4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00245DB8; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00245DD0; } }
L_00245DB8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 64u);
    c.budget -= 2;
L_00245DC0:
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    c.r[6].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245D24u | kUnwind; return; } goto L_00245D24; } }
L_00245DD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245CE0u | kUnwind; return; } goto L_00245CE0; } }
    st16((c.r[18].w[0] + 488u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 484u)));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 488u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 264u, depth + 1u); else { c.pc = 0x002467D0u; return; } if (c.pc != 0x00245DF4u) [[unlikely]] return; }
L_00245DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4080u);  c.pc = t; return; }
L_00245E10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 13;
L_00245E44:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 428u);  if (t) { goto L_00245E5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E5Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00245E5Cu) [[unlikely]] return; }
L_00245E5C:
    set32(c.r[3], c.r[16].w[0] << 1);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[3].w[0] + 464u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245E44u | kUnwind; return; } goto L_00245E44; } }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[20].d[0] = ld16((c.r[4].w[0] + 300u));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
L_00245E98:
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[3].w[0] << (c.r[22].w[0] & 31u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00245ED8; } }
L_00245EB0:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00245ED4; } }
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00245ED4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00245ED8:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245EB0u | kUnwind; return; } goto L_00245EB0; } }
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00245F68; } }
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245F00u); set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00245F00u) [[unlikely]] return; }
L_00245F00:
    st32((c.r[19].w[0] + 428u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00245F50; } }
L_00245F10:
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00245F4C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 428u)));
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
L_00245F4C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00245F50:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245F10u | kUnwind; return; } goto L_00245F10; } }
    set32(c.r[3], c.r[22].w[0] << 1);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 464u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 3;
L_00245F68:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245E98u | kUnwind; return; } goto L_00245E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00245FA8; } }
L_00245F80:
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245FA4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_00245FA4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00245FA8:
    c.r[4].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245F80u | kUnwind; return; } goto L_00245F80; } }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00246020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245FC8u); set32(c.r[4], c.r[4].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00245FC8u) [[unlikely]] return; }
L_00245FC8:
    st32((c.r[18].w[0] + 460u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00246014; } }
L_00245FD8:
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[6].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246010; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 460u)));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
L_00246010:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00246014:
    c.r[4].d[0] = c.r[7].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245FD8u | kUnwind; return; } goto L_00245FD8; } }
L_00246020:
    st16((c.r[18].w[0] + 480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00246050:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 12;
L_00246080:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 428u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 428u);  if (t) { goto L_00246098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246098u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00246098u) [[unlikely]] return; }
L_00246098:
    set32(c.r[3], c.r[16].w[0] << 1);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[3].w[0] + 464u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246080u | kUnwind; return; } goto L_00246080; } }
    c.r[17].d[0] = ld16((c.r[22].w[0] + 488u));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[22].w[0] + 484u)));
    c.budget -= 3;
L_002460C4:
    set32(c.r[20], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[18], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 32767ull;  if (t) { goto L_00246110; } }
L_002460E4:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0024610C; } }
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_0024610C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00246110:
    c.r[3].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002460E4u | kUnwind; return; } goto L_002460E4; } }
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002461B0; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246138u); set32(c.r[16], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00246138u) [[unlikely]] return; }
L_00246138:
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[20], ld32((c.r[22].w[0] + 44u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[5].d[0] | 32767ull;  if (t) { goto L_00246198; } }
L_00246154:
    set32(c.r[5], c.r[21].w[0] + c.r[5].w[0]);
    c.r[8].d[0] = ld16((c.r[5].w[0]));
    c.r[5].d[0] = c.r[8].d[0] & c.r[7].d[0];
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00246194; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 428u)));
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 7;
L_00246194:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00246198:
    c.r[5].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246154u | kUnwind; return; } goto L_00246154; } }
    set32(c.r[4], c.r[19].w[0] << 1);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    st16((c.r[4].w[0] + 464u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002461B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002460C4u | kUnwind; return; } goto L_002460C4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] | 32767ull;  if (t) { goto L_002461FC; } }
L_002461D0:
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002461F8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002461F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002461FC:
    c.r[4].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002461D0u | kUnwind; return; } goto L_002461D0; } }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00246280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024621Cu); set32(c.r[4], c.r[4].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0024621Cu) [[unlikely]] return; }
L_0024621C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[22].w[0] + 460u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] | 32767ull;  if (t) { goto L_00246274; } }
L_00246234:
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld16((c.r[4].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246270; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 460u)));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 7;
L_00246270:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00246274:
    c.r[4].d[0] = c.r[8].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246234u | kUnwind; return; } goto L_00246234; } }
L_00246280:
    st16((c.r[22].w[0] + 480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002462B0:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002462D4; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_002462DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002462D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024631C; } }
L_002462DC:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 300u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00246318; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0024631C; } }
L_00246318:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024631C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246350u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 394u, depth + 1u); else { c.pc = 0x0036F300u; return; } if (c.pc != 0x00246350u) [[unlikely]] return; }
L_00246350:
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_002463D0; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 484u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00246370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00246450; } }
L_00246370:
    c.r[8].d[0] = ld16((c.r[17].w[0] + 488u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[2].d[0] | 32767ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_002463BC; } }
L_0024638C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002463B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024644C; } }
L_002463B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002463BC:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024638Cu | kUnwind; return; } goto L_0024638C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024644C; } }
L_002463D0:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002463E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024644C; } }
L_002463E8:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld16((c.r[2].w[0] + 300u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 32767ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_0024643C; } }
L_0024640C:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00246438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024644C; } }
L_00246438:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0024643C:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024640Cu | kUnwind; return; } goto L_0024640C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024644C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00246450:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246460:
    set32(c.r[2], c.r[4].w[0] + 428u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00246484; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 428u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_0024648C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002464E8; } }
L_0024648C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 464u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002464E4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 1);  if (t) { goto L_002464BC; } }
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002464BC:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002464E8; } }
L_002464E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002464E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002464F0:
    set32(c.r[2], c.r[4].w[0] + 428u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00246514; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 428u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 1);  if (t) { goto L_0024651C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246524; } }
L_0024651C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 464u));
    c.budget -= 2;
L_00246524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246530:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00246550:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00246570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 23056u);
    set32(c.r[6], c.r[29].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[7].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);  if (t) { goto L_002465C4; } }
L_0024659C:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[4].d[0] = c.r[2].d[0] << (c.r[4].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002465C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 32u);  if (t) { goto L_002465D8; } }
L_002465C0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002465C4:
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024659Cu | kUnwind; return; } goto L_0024659C; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_002465D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002465E0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00246608; } }
    set32(c.r[2], c.r[5].w[0] - 52u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00246604; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00246610; } }
L_00246604:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00246608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246614; } }
L_00246610:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246614:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246620:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002466A4; } }
L_00246654:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].sd[0] < 7000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 7230ll ? 1ull : 0ull;  if (t) { goto L_0024669C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024669C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] - 23024u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246690u); st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00246690u) [[unlikely]] return; }
L_00246690:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024669Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0024669Cu) [[unlikely]] return; }
L_0024669C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.budget -= 2;
L_002466A4:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246654u | kUnwind; return; } goto L_00246654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  if (t) { goto L_00246794; } }
L_002466BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[16], c.r[19].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466D8u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002466D8u) [[unlikely]] return; }
L_002466D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + 1u);  if (t) { goto L_00246730; } }
L_002466E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466E8u); set32(c.r[17], c.r[18].w[0] << 6);  if (depth < kMaxDepth) unit_009C(c, 160u, depth + 1u); else { c.pc = 0x00370BC0u; return; } if (c.pc != 0x002466E8u) [[unlikely]] return; }
L_002466E8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466FCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_009C(c, 160u, depth + 1u); else { c.pc = 0x00370BC0u; return; } if (c.pc != 0x002466FCu) [[unlikely]] return; }
L_002466FC:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024670Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 270u, depth + 1u); else { c.pc = 0x00246930u; return; } if (c.pc != 0x0024670Cu) [[unlikely]] return; }
L_0024670C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024672C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024672Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0024672Cu) [[unlikely]] return; }
L_0024672C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00246730:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002466E0u | kUnwind; return; } goto L_002466E0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0024678C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246760u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00246760u) [[unlikely]] return; }
L_00246760:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[17], c.r[20].w[0] << 6);
    set32(c.r[6], 0u + 64u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246778u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x00246778u) [[unlikely]] return; }
L_00246778:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024678Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024678Cu) [[unlikely]] return; }
L_0024678C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 2;
L_00246794:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002466BCu | kUnwind; return; } goto L_002466BC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002467D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] & 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[30], c.r[22].w[0] - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002468E8; } }
L_00246814:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[20], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246848u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00246848u) [[unlikely]] return; }
L_00246848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] + 1u);  if (t) { goto L_002468B8; } }
L_00246850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[23], c.r[19].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[23].w[0]));
    c.r[3].d[0] = c.r[2].d[0] | 32767ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246880u); set32(c.r[6], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0051(c, 270u, depth + 1u); else { c.pc = 0x00246930u; return; } if (c.pc != 0x00246880u) [[unlikely]] return; }
L_00246880:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002468B4; } }
    c.r[5].d[0] = ld16((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468B4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002468B4u) [[unlikely]] return; }
L_002468B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002468B8:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246850u | kUnwind; return; } goto L_00246850; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { goto L_002468E4; } }
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
L_002468E4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002468E8:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246814u | kUnwind; return; } goto L_00246814; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00246930:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246960u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00246960u) [[unlikely]] return; }
L_00246960:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024696Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0024696Cu) [[unlikely]] return; }
L_0024696C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246984u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00246984u) [[unlikely]] return; }
L_00246984:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[21], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246998u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00246998u) [[unlikely]] return; }
L_00246998:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 21089u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002469BC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002469BC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002469EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] + 21089u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002469E8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002469E8:
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_002469EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246A04; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00246A08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 184u);  if (t) { goto L_00246A18; } }
L_00246A04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00246A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246A10u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00246A10u) [[unlikely]] return; }
L_00246A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00246B6C; } }
L_00246A18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00246A3C; } }
L_00246A20:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246A20u | kUnwind; return; } goto L_00246A20; } }
L_00246A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00246A60; } }
L_00246A44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00246A70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[20], c.r[20].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 4;
L_00246A60:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246A44u | kUnwind; return; } goto L_00246A44; } }
L_00246A70:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0] + 188u);  if (t) { goto L_00246A98; } }
L_00246A7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00246AA8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00246A98:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246A7Cu | kUnwind; return; } goto L_00246A7C; } }
L_00246AA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246ABCu); set32(c.r[6], c.r[17].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00246ABCu) [[unlikely]] return; }
L_00246ABC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246AD0u); set32(c.r[6], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00246AD0u) [[unlikely]] return; }
L_00246AD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246AFCu); st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00246AFCu) [[unlikely]] return; }
L_00246AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00246B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00246B0Cu) [[unlikely]] return; }
L_00246B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246B68; } }
L_00246B14:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B28u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00246B28u) [[unlikely]] return; }
L_00246B28:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B3Cu); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00246B3Cu) [[unlikely]] return; }
L_00246B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B44u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x00246B44u) [[unlikely]] return; }
L_00246B44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B50u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0008(c, 170u, depth + 1u); else { c.pc = 0x00121A60u; return; } if (c.pc != 0x00246B50u) [[unlikely]] return; }
L_00246B50:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00246B64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00246B68; } }
L_00246B64:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00246B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00246B6C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00246B90:
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00246C14; } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 110u);  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246C10; } }
    set32(c.r[2], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246C10; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246C10; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246C10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00246C14; } }
L_00246C10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00246C14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 26u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246C38u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00246C38u) [[unlikely]] return; }
L_00246C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - 3376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246C4Cu); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00246C4Cu) [[unlikely]] return; }
L_00246C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00246C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246C5Cu);  if (depth < kMaxDepth) unit_0051(c, 300u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x00246C5Cu) [[unlikely]] return; }
L_00246C5C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00246CF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3376u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246CCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246CCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00246CCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00246CCCu) [[unlikely]] return; }
L_00246CCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246CDCu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00246CDCu) [[unlikely]] return; }
L_00246CDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00246CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246CF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00246CF4u) [[unlikely]] return; }
L_00246CF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00246CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00246D70; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00246D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246D40u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00246D40u) [[unlikely]] return; }
L_00246D40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246D54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x00246D54u) [[unlikely]] return; }
L_00246D54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00246D70; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00246D70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00246D70u) [[unlikely]] return; }
L_00246D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246D80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246DACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 465u, depth + 1u); else { c.pc = 0x0012FE40u; return; } if (c.pc != 0x00246DACu) [[unlikely]] return; }
L_00246DAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 3520u);
    set32(c.r[2], c.r[2].w[0] - 3432u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 80u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246DD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x00246DD0u) [[unlikely]] return; }
L_00246DD0:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], 0u + 15295u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 76u);
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 412u, depth + 1u); else { c.pc = 0x00247D10u; return; } if (c.pc != 0x00246DECu) [[unlikely]] return; }
L_00246DEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E00u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00246E00u) [[unlikely]] return; }
L_00246E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00246E14; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E14u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00246E14u) [[unlikely]] return; }
L_00246E14:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E24u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00246E24u) [[unlikely]] return; }
L_00246E24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E34u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00246E34u) [[unlikely]] return; }
L_00246E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E44u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00246E44u) [[unlikely]] return; }
L_00246E44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E58u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00246E58u) [[unlikely]] return; }
L_00246E58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00246E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E6Cu); set32(c.r[4], 0u + 219u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00246E6Cu) [[unlikely]] return; }
L_00246E6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E80u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00246E80u) [[unlikely]] return; }
L_00246E80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00246E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246E90u); st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00246E90u) [[unlikely]] return; }
L_00246E90:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00246EEC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00246EEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00246F1Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00246F1Cu) [[unlikely]] return; }
L_00246F1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246F28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 326u, depth + 1u); else { c.pc = 0x002470B0u; return; } if (c.pc != 0x00246F28u) [[unlikely]] return; }
L_00246F28:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246F2C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 120u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246F2Cu | kUnwind; return; } goto L_00246F2C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00246F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00247088; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 3520u);
    set32(c.r[2], c.r[2].w[0] - 3432u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246FB0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 415u, depth + 1u); else { c.pc = 0x00247D80u; return; } if (c.pc != 0x00246FB0u) [[unlikely]] return; }
L_00246FB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246FD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246FD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00246FD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00246FD4u) [[unlikely]] return; }
L_00246FD4:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246FFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246FFC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00246FFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00246FFCu) [[unlikely]] return; }
L_00246FFC:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00247014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247014u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00247014u) [[unlikely]] return; }
L_00247014:
    st32((c.r[17].w[0] + 116u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0024701C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 120u);  if (t) { goto L_00247048; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247048; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247048u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247048u) [[unlikely]] return; }
L_00247048:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024701Cu | kUnwind; return; } goto L_0024701C; } }
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247064u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00247064u) [[unlikely]] return; }
L_00247064:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247070u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 469u, depth + 1u); else { c.pc = 0x0012FEF0u; return; } if (c.pc != 0x00247070u) [[unlikely]] return; }
L_00247070:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024708C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00247088u) [[unlikely]] return; }
L_00247088:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0024708C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002470B0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] - 22992u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002470ECu); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x002470ECu) [[unlikely]] return; }
L_002470EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 22960u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
L_00247100:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247100u | kUnwind; return; } goto L_00247100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247124u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00247124u) [[unlikely]] return; }
L_00247124:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 128u);  if (t) { goto L_00247140; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024713Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 288u, depth + 1u); else { c.pc = 0x00227850u; return; } if (c.pc != 0x0024713Cu) [[unlikely]] return; }
L_0024713C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00247140:
    st32((c.r[16].w[0] + 116u), c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00247148:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247148u | kUnwind; return; } goto L_00247148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002471F8; } }
L_00247170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 22912u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247194u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00247194u) [[unlikely]] return; }
L_00247194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 22880u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_002471A4:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002471A4u | kUnwind; return; } goto L_002471A4; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002471C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002471E4u); set32(c.r[6], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x002471E4u) [[unlikely]] return; }
L_002471E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002471C4u | kUnwind; return; } goto L_002471C4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002471F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00247210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247228u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00247228u) [[unlikely]] return; }
L_00247228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 475u, depth + 1u); else { c.pc = 0x0012FFA0u; return; } if (c.pc != 0x00247230u) [[unlikely]] return; }
L_00247230:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247244u); set32(c.r[5], 0u + 189u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247244u) [[unlikely]] return; }
L_00247244:
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_00247250:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247250u | kUnwind; return; } goto L_00247250; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00247280:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FF90u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 474u, depth); }
L_00247290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002472A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 477u, depth + 1u); else { c.pc = 0x0012FFC0u; return; } if (c.pc != 0x002472A4u) [[unlikely]] return; }
L_002472A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002472B8u); set32(c.r[5], 0u + 190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002472B8u) [[unlikely]] return; }
L_002472B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002472C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 326u, depth + 1u); else { c.pc = 0x002470B0u; return; } if (c.pc != 0x002472C4u) [[unlikely]] return; }
L_002472C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002472E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E500u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 304u, depth); }
L_002472F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024731Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0051(c, 417u, depth + 1u); else { c.pc = 0x00247DD0u; return; } if (c.pc != 0x0024731Cu) [[unlikely]] return; }
L_0024731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247324u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 23u, depth + 1u); else { c.pc = 0x002481D0u; return; } if (c.pc != 0x00247324u) [[unlikely]] return; }
L_00247324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0024744C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024733Cu); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0024733Cu) [[unlikely]] return; }
L_0024733C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00247348; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00247348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247350u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 371u, depth + 1u); else { c.pc = 0x002475D0u; return; } if (c.pc != 0x00247350u) [[unlikely]] return; }
L_00247350:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 3;
L_0024735C:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + 32767u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + 7239u);  if (t) { goto L_0024739C; } }
L_0024737C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247388u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 93u, depth + 1u); else { c.pc = 0x0024C9A0u; return; } if (c.pc != 0x00247388u) [[unlikely]] return; }
L_00247388:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st64((c.r[3].w[0] + 128u), c.r[2].d[0]);
    c.budget -= 5;
L_0024739C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473A4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002473A4u) [[unlikely]] return; }
L_002473A4:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024737Cu | kUnwind; return; } goto L_0024737C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473C0u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002473C0u) [[unlikely]] return; }
L_002473C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002473F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473D4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002473D4u) [[unlikely]] return; }
L_002473D4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 39984ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473F4u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0051(c, 379u, depth + 1u); else { c.pc = 0x002476D0u; return; } if (c.pc != 0x002473F4u) [[unlikely]] return; }
L_002473F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002473F8:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247414u); set32(c.r[16], c.r[2].w[0] + 120u);  if (depth < kMaxDepth) unit_0051(c, 408u, depth + 1u); else { c.pc = 0x00247C80u; return; } if (c.pc != 0x00247414u) [[unlikely]] return; }
L_00247414:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024742Cu); set32(c.r[5], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_0051(c, 409u, depth + 1u); else { c.pc = 0x00247CA0u; return; } if (c.pc != 0x0024742Cu) [[unlikely]] return; }
L_0024742C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024735Cu | kUnwind; return; } goto L_0024735C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024744Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024744Cu) [[unlikely]] return; }
L_0024744C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00247480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002474B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002474B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002474B0u) [[unlikely]] return; }
L_002474B0:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 8;
L_002474D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002474F8u);  if (depth < kMaxDepth) unit_0051(c, 408u, depth + 1u); else { c.pc = 0x00247C80u; return; } if (c.pc != 0x002474F8u) [[unlikely]] return; }
L_002474F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002474D0u | kUnwind; return; } goto L_002474D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00247530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 137u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247560; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247560u) [[unlikely]] return; }
L_00247560:
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] << 2);
    c.budget -= 8;
L_00247580:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002475A8u);  if (depth < kMaxDepth) unit_0051(c, 408u, depth + 1u); else { c.pc = 0x00247C80u; return; } if (c.pc != 0x002475A8u) [[unlikely]] return; }
L_002475A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247580u | kUnwind; return; } goto L_00247580; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002475D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247604u); c.r[5].d[0] = c.r[2].d[0] | 21335ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00247604u) [[unlikely]] return; }
L_00247604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00247610; } }
    set32(c.r[21], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00247610:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 3;
L_0024761C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[17], c.r[2].w[0] + 7241u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 7239u);  if (t) { goto L_00247670; } }
L_00247640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247648u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00247648u) [[unlikely]] return; }
L_00247648:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247668u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024C8E0u; return; } if (c.pc != 0x00247668u) [[unlikely]] return; }
L_00247668:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00247670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247678u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00247678u) [[unlikely]] return; }
L_00247678:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247640u | kUnwind; return; } goto L_00247640; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024761Cu | kUnwind; return; } goto L_0024761C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002476A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 90u, depth + 1u); else { c.pc = 0x0024C940u; return; } if (c.pc != 0x002476A8u) [[unlikely]] return; }
L_002476A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002476D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247700u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00247700u) [[unlikely]] return; }
L_00247700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 3552u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024771Cu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0024771Cu) [[unlikely]] return; }
L_0024771C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247724u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00247724u) [[unlikely]] return; }
L_00247724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247738; } }
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247738u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00247738u) [[unlikely]] return; }
L_00247738:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    set32(c.r[2], 0u + 255u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00247808; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024776Cu); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0024776Cu) [[unlikely]] return; }
L_0024776C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247788; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247788u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00247788u) [[unlikely]] return; }
L_00247788:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247794u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00247794u) [[unlikely]] return; }
L_00247794:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43530000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247800u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247800u) [[unlikely]] return; }
L_00247800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00247810; } }
L_00247808:
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00247810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00247830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002478D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3552u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247880; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247880; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247880u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247880u) [[unlikely]] return; }
L_00247880:
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 72u);  if (t) { goto L_002478A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002478A8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002478A8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002478A8u) [[unlikely]] return; }
L_002478A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478B8u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x002478B8u) [[unlikely]] return; }
L_002478B8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002478D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002478D0u) [[unlikely]] return; }
L_002478D0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002478D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002478F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 22u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247A5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00247B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247930u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00247930u) [[unlikely]] return; }
L_00247930:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 29280u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 29280u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00247A40; } }
L_00247978:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024798Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0024798Cu) [[unlikely]] return; }
L_0024798C:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FB0000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], c.r[6].w[0] - 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002479E8u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002479E8u) [[unlikely]] return; }
L_002479E8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A08u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247A08u) [[unlikely]] return; }
L_00247A08:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A28u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247A28u) [[unlikely]] return; }
L_00247A28:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247A3Cu) [[unlikely]] return; }
L_00247A3C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00247A40:
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247978u | kUnwind; return; } goto L_00247978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00247B4C; } }
L_00247A5C:
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 211u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[16], ld32((c.r[3].w[0] + 332u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 29272u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 29272u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247AB4u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00247AB4u) [[unlikely]] return; }
L_00247AB4:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 1420u)));
    set32(c.r[2], c.r[2].w[0] + 41u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[0] = c.r[2].w[0];
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B10u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247B10u) [[unlikely]] return; }
L_00247B10:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247B20u) [[unlikely]] return; }
L_00247B20:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247B48u) [[unlikely]] return; }
L_00247B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00247B4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00247B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[10], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[12], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 35u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[9], c.r[29].w[0] + 40u);
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 1u);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[11].w[0] + 60u), c.r[12].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld64((c.r[10].w[0] + 16u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st64((c.r[3].w[0] + 256u), c.r[5].d[0]);
    c.r[2].d[0] = ld64((c.r[9].w[0]));
    st64((c.r[8].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 35u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[7].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 29264u));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 29264u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 61;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C54u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247C54u) [[unlikely]] return; }
L_00247C54:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247C68u) [[unlikely]] return; }
L_00247C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247C80:
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00247C98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_00247C98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00247CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00247CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43530000u);
    set32(c.r[25], ld32((c.r[3].w[0] + 176u)));
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::cvt_s_w(c.f[1]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CE8u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247CE8u) [[unlikely]] return; }
L_00247CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00247D00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00246F70u | kUnwind; return; } goto L_00246F70; }
L_00247D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] - 27864u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00247D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D3Cu); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00247D3Cu) [[unlikely]] return; }
L_00247D3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247D58; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D54u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 418u, depth + 1u); else { c.pc = 0x00247DE0u; return; } if (c.pc != 0x00247D54u) [[unlikely]] return; }
L_00247D54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00247D58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27864u), c.r[4].w[0]);
    c.budget -= 2;
L_00247D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 27864u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247DC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247DB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247DB8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247DB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247DB8u) [[unlikely]] return; }
L_00247DB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27864u), 0u);
    c.budget -= 2;
L_00247DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00247DD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 27864u)));  c.pc = t; return; }
L_00247DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x00247E04u) [[unlikely]] return; }
L_00247E04:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00247E10u) [[unlikely]] return; }
L_00247E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 3328u);
    set32(c.r[2], c.r[2].w[0] - 3312u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 44u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E4Cu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00247E4Cu) [[unlikely]] return; }
L_00247E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E54u);  if (depth < kMaxDepth) unit_0053(c, 80u, depth + 1u); else { c.pc = 0x0024C810u; return; } if (c.pc != 0x00247E54u) [[unlikely]] return; }
L_00247E54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00247E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E68u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x00247E68u) [[unlikely]] return; }
L_00247E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x00247E70u) [[unlikely]] return; }
L_00247E70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00247E80; } }
L_00247E7C:
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00247E80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 136u);  if (t) { goto L_00247EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E90u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00247E90u) [[unlikely]] return; }
L_00247E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00247EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247EA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 59u, depth + 1u); else { c.pc = 0x00244660u; return; } if (c.pc != 0x00247EA0u) [[unlikely]] return; }
L_00247EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00247EAC; } }
L_00247EA8:
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 1;
L_00247EAC:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 29320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247ED4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x00247ED4u) [[unlikely]] return; }
L_00247ED4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00247EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00247FE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 3328u);
    set32(c.r[3], c.r[3].w[0] - 3312u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00247F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F3Cu);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x00247F3Cu) [[unlikely]] return; }
L_00247F3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247F60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247F60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F60u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247F60u) [[unlikely]] return; }
L_00247F60:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 44u);  if (t) { goto L_00247F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F78u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00247F78u) [[unlikely]] return; }
L_00247F78:
    set32(c.r[2], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_00247F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_00247FB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247FB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247FB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_00247FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FA8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00247FA8u) [[unlikely]] return; }
L_00247FA8:
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 3;
L_00247FB4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00247FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00247FC0u) [[unlikely]] return; }
L_00247FC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x00247FCCu) [[unlikely]] return; }
L_00247FCC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00247FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00247FE4u) [[unlikely]] return; }
L_00247FE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00247FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}
