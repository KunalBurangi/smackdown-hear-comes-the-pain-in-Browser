#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0071[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0,
    0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0,
    0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 338, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0,
    0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408,
    0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0,
};

void unit_0071(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C4000;
    case 2u: goto L_002C401C;
    case 3u: goto L_002C404C;
    case 4u: goto L_002C405C;
    case 5u: goto L_002C408C;
    case 6u: goto L_002C40BC;
    case 7u: goto L_002C40EC;
    case 8u: goto L_002C411C;
    case 9u: goto L_002C4150;
    case 10u: goto L_002C4180;
    case 11u: goto L_002C41B0;
    case 12u: goto L_002C41E0;
    case 13u: goto L_002C41FC;
    case 14u: goto L_002C4288;
    case 15u: goto L_002C42B8;
    case 16u: goto L_002C42E8;
    case 17u: goto L_002C4318;
    case 18u: goto L_002C434C;
    case 19u: goto L_002C437C;
    case 20u: goto L_002C43AC;
    case 21u: goto L_002C43DC;
    case 22u: goto L_002C4410;
    case 23u: goto L_002C4440;
    case 24u: goto L_002C4470;
    case 25u: goto L_002C44A0;
    case 26u: goto L_002C44B4;
    case 27u: goto L_002C44B8;
    case 28u: goto L_002C44E0;
    case 29u: goto L_002C44F4;
    case 30u: goto L_002C4518;
    case 31u: goto L_002C45A0;
    case 32u: goto L_002C45F4;
    case 33u: goto L_002C4640;
    case 34u: goto L_002C465C;
    case 35u: goto L_002C468C;
    case 36u: goto L_002C46C0;
    case 37u: goto L_002C46DC;
    case 38u: goto L_002C46F0;
    case 39u: goto L_002C48EC;
    case 40u: goto L_002C4900;
    case 41u: goto L_002C4918;
    case 42u: goto L_002C4940;
    case 43u: goto L_002C496C;
    case 44u: goto L_002C49B8;
    case 45u: goto L_002C4A70;
    case 46u: goto L_002C4AAC;
    case 47u: goto L_002C4BD0;
    case 48u: goto L_002C4C10;
    case 49u: goto L_002C4C44;
    case 50u: goto L_002C4C70;
    case 51u: goto L_002C4C98;
    case 52u: goto L_002C4CD0;
    case 53u: goto L_002C4CF0;
    case 54u: goto L_002C4D2C;
    case 55u: goto L_002C4D44;
    case 56u: goto L_002C4D60;
    case 57u: goto L_002C4D74;
    case 58u: goto L_002C4DB0;
    case 59u: goto L_002C4DE0;
    case 60u: goto L_002C4DF0;
    case 61u: goto L_002C4E00;
    case 62u: goto L_002C4E10;
    case 63u: goto L_002C4E20;
    case 64u: goto L_002C4E30;
    case 65u: goto L_002C4E40;
    case 66u: goto L_002C4E50;
    case 67u: goto L_002C4E6C;
    case 68u: goto L_002C4E84;
    case 69u: goto L_002C4EA0;
    case 70u: goto L_002C4EBC;
    case 71u: goto L_002C4ED4;
    case 72u: goto L_002C4EF0;
    case 73u: goto L_002C4F0C;
    case 74u: goto L_002C4F24;
    case 75u: goto L_002C4F40;
    case 76u: goto L_002C4F54;
    case 77u: goto L_002C4F68;
    case 78u: goto L_002C4F70;
    case 79u: goto L_002C4FA0;
    case 80u: goto L_002C4FAC;
    case 81u: goto L_002C4FC0;
    case 82u: goto L_002C4FE4;
    case 83u: goto L_002C4FF8;
    case 84u: goto L_002C5010;
    case 85u: goto L_002C5044;
    case 86u: goto L_002C5064;
    case 87u: goto L_002C508C;
    case 88u: goto L_002C509C;
    case 89u: goto L_002C50AC;
    case 90u: goto L_002C50F4;
    case 91u: goto L_002C511C;
    case 92u: goto L_002C512C;
    case 93u: goto L_002C513C;
    case 94u: goto L_002C5184;
    case 95u: goto L_002C5190;
    case 96u: goto L_002C519C;
    case 97u: goto L_002C51A8;
    case 98u: goto L_002C51D0;
    case 99u: goto L_002C51E0;
    case 100u: goto L_002C51F0;
    case 101u: goto L_002C5268;
    case 102u: goto L_002C5278;
    case 103u: goto L_002C5288;
    case 104u: goto L_002C52D4;
    case 105u: goto L_002C52FC;
    case 106u: goto L_002C530C;
    case 107u: goto L_002C531C;
    case 108u: goto L_002C535C;
    case 109u: goto L_002C5384;
    case 110u: goto L_002C5394;
    case 111u: goto L_002C53A4;
    case 112u: goto L_002C53E0;
    case 113u: goto L_002C5420;
    case 114u: goto L_002C5430;
    case 115u: goto L_002C5440;
    case 116u: goto L_002C547C;
    case 117u: goto L_002C54BC;
    case 118u: goto L_002C54CC;
    case 119u: goto L_002C54DC;
    case 120u: goto L_002C551C;
    case 121u: goto L_002C5528;
    case 122u: goto L_002C5534;
    case 123u: goto L_002C5540;
    case 124u: goto L_002C554C;
    case 125u: goto L_002C5558;
    case 126u: goto L_002C5564;
    case 127u: goto L_002C5590;
    case 128u: goto L_002C55A0;
    case 129u: goto L_002C55B0;
    case 130u: goto L_002C562C;
    case 131u: goto L_002C5684;
    case 132u: goto L_002C569C;
    case 133u: goto L_002C56A8;
    case 134u: goto L_002C56C0;
    case 135u: goto L_002C56CC;
    case 136u: goto L_002C56E4;
    case 137u: goto L_002C56F0;
    case 138u: goto L_002C5708;
    case 139u: goto L_002C5714;
    case 140u: goto L_002C572C;
    case 141u: goto L_002C5738;
    case 142u: goto L_002C5750;
    case 143u: goto L_002C575C;
    case 144u: goto L_002C5774;
    case 145u: goto L_002C5780;
    case 146u: goto L_002C5798;
    case 147u: goto L_002C57A4;
    case 148u: goto L_002C57BC;
    case 149u: goto L_002C57E4;
    case 150u: goto L_002C5824;
    case 151u: goto L_002C5830;
    case 152u: goto L_002C583C;
    case 153u: goto L_002C584C;
    case 154u: goto L_002C5870;
    case 155u: goto L_002C58C8;
    case 156u: goto L_002C58F0;
    case 157u: goto L_002C5918;
    case 158u: goto L_002C5940;
    case 159u: goto L_002C5968;
    case 160u: goto L_002C5990;
    case 161u: goto L_002C59B8;
    case 162u: goto L_002C59E0;
    case 163u: goto L_002C5A08;
    case 164u: goto L_002C5A30;
    case 165u: goto L_002C5A40;
    case 166u: goto L_002C5A58;
    case 167u: goto L_002C5A70;
    case 168u: goto L_002C5A98;
    case 169u: goto L_002C5AA8;
    case 170u: goto L_002C5AB8;
    case 171u: goto L_002C5AD0;
    case 172u: goto L_002C5B00;
    case 173u: goto L_002C5B28;
    case 174u: goto L_002C5B54;
    case 175u: goto L_002C5B80;
    case 176u: goto L_002C5BAC;
    case 177u: goto L_002C5BD8;
    case 178u: goto L_002C5C04;
    case 179u: goto L_002C5C30;
    case 180u: goto L_002C5C5C;
    case 181u: goto L_002C5C88;
    case 182u: goto L_002C5CB0;
    case 183u: goto L_002C5CCC;
    case 184u: goto L_002C5CE0;
    case 185u: goto L_002C5CF4;
    case 186u: goto L_002C5D08;
    case 187u: goto L_002C5D2C;
    case 188u: goto L_002C5D3C;
    case 189u: goto L_002C5D4C;
    case 190u: goto L_002C5D60;
    case 191u: goto L_002C5D94;
    case 192u: goto L_002C5DBC;
    case 193u: goto L_002C5DD0;
    case 194u: goto L_002C5DE4;
    case 195u: goto L_002C5E70;
    case 196u: goto L_002C5E84;
    case 197u: goto L_002C5EA8;
    case 198u: goto L_002C5EB8;
    case 199u: goto L_002C5EC4;
    case 200u: goto L_002C5ED8;
    case 201u: goto L_002C5EE4;
    case 202u: goto L_002C5EF8;
    case 203u: goto L_002C5F04;
    case 204u: goto L_002C5F18;
    case 205u: goto L_002C5F24;
    case 206u: goto L_002C5F38;
    case 207u: goto L_002C5F44;
    case 208u: goto L_002C5F58;
    case 209u: goto L_002C5F64;
    case 210u: goto L_002C5F78;
    case 211u: goto L_002C5F84;
    case 212u: goto L_002C5F98;
    case 213u: goto L_002C5FA4;
    case 214u: goto L_002C5FB8;
    case 215u: goto L_002C5FC4;
    case 216u: goto L_002C5FD8;
    case 217u: goto L_002C5FE4;
    case 218u: goto L_002C5FF8;
    case 219u: goto L_002C6004;
    case 220u: goto L_002C6018;
    case 221u: goto L_002C6024;
    case 222u: goto L_002C6038;
    case 223u: goto L_002C6044;
    case 224u: goto L_002C6058;
    case 225u: goto L_002C6064;
    case 226u: goto L_002C6078;
    case 227u: goto L_002C6130;
    case 228u: goto L_002C6160;
    case 229u: goto L_002C617C;
    case 230u: goto L_002C6180;
    case 231u: goto L_002C61A0;
    case 232u: goto L_002C61C0;
    case 233u: goto L_002C61E0;
    case 234u: goto L_002C6200;
    case 235u: goto L_002C6220;
    case 236u: goto L_002C6240;
    case 237u: goto L_002C6260;
    case 238u: goto L_002C6280;
    case 239u: goto L_002C6290;
    case 240u: goto L_002C6328;
    case 241u: goto L_002C6350;
    case 242u: goto L_002C6378;
    case 243u: goto L_002C63A0;
    case 244u: goto L_002C63C8;
    case 245u: goto L_002C63F0;
    case 246u: goto L_002C6418;
    case 247u: goto L_002C6440;
    case 248u: goto L_002C6468;
    case 249u: goto L_002C6490;
    case 250u: goto L_002C64B0;
    case 251u: goto L_002C64E0;
    case 252u: goto L_002C6500;
    case 253u: goto L_002C6520;
    case 254u: goto L_002C6540;
    case 255u: goto L_002C6560;
    case 256u: goto L_002C6580;
    case 257u: goto L_002C65A0;
    case 258u: goto L_002C65C0;
    case 259u: goto L_002C65E0;
    case 260u: goto L_002C6600;
    case 261u: goto L_002C6610;
    case 262u: goto L_002C66A8;
    case 263u: goto L_002C66D0;
    case 264u: goto L_002C66F8;
    case 265u: goto L_002C6720;
    case 266u: goto L_002C6748;
    case 267u: goto L_002C6770;
    case 268u: goto L_002C6798;
    case 269u: goto L_002C67C0;
    case 270u: goto L_002C67E8;
    case 271u: goto L_002C6810;
    case 272u: goto L_002C6830;
    case 273u: goto L_002C6854;
    case 274u: goto L_002C6868;
    case 275u: goto L_002C687C;
    case 276u: goto L_002C6890;
    case 277u: goto L_002C68A4;
    case 278u: goto L_002C68B8;
    case 279u: goto L_002C68CC;
    case 280u: goto L_002C68E0;
    case 281u: goto L_002C68F4;
    case 282u: goto L_002C6908;
    case 283u: goto L_002C6920;
    case 284u: goto L_002C694C;
    case 285u: goto L_002C696C;
    case 286u: goto L_002C6994;
    case 287u: goto L_002C69A4;
    case 288u: goto L_002C69B4;
    case 289u: goto L_002C69FC;
    case 290u: goto L_002C6A24;
    case 291u: goto L_002C6A34;
    case 292u: goto L_002C6A44;
    case 293u: goto L_002C6A8C;
    case 294u: goto L_002C6AB4;
    case 295u: goto L_002C6AC4;
    case 296u: goto L_002C6AD4;
    case 297u: goto L_002C6B0C;
    case 298u: goto L_002C6B34;
    case 299u: goto L_002C6B44;
    case 300u: goto L_002C6B54;
    case 301u: goto L_002C6B90;
    case 302u: goto L_002C6BB4;
    case 303u: goto L_002C6BC4;
    case 304u: goto L_002C6BD4;
    case 305u: goto L_002C6C20;
    case 306u: goto L_002C6C50;
    case 307u: goto L_002C6C68;
    case 308u: goto L_002C6C74;
    case 309u: goto L_002C6C8C;
    case 310u: goto L_002C6C98;
    case 311u: goto L_002C6CB0;
    case 312u: goto L_002C6CBC;
    case 313u: goto L_002C6CD4;
    case 314u: goto L_002C6CE0;
    case 315u: goto L_002C6CF8;
    case 316u: goto L_002C6D18;
    case 317u: goto L_002C6D50;
    case 318u: goto L_002C6DA8;
    case 319u: goto L_002C6DD0;
    case 320u: goto L_002C6DF8;
    case 321u: goto L_002C6E20;
    case 322u: goto L_002C6E48;
    case 323u: goto L_002C6E58;
    case 324u: goto L_002C6E70;
    case 325u: goto L_002C6E90;
    case 326u: goto L_002C6EA0;
    case 327u: goto L_002C6ED0;
    case 328u: goto L_002C6EF8;
    case 329u: goto L_002C6F24;
    case 330u: goto L_002C6F50;
    case 331u: goto L_002C6F7C;
    case 332u: goto L_002C6FB0;
    case 333u: goto L_002C6FCC;
    case 334u: goto L_002C6FE0;
    case 335u: goto L_002C7000;
    case 336u: goto L_002C7020;
    case 337u: goto L_002C705C;
    case 338u: goto L_002C7060;
    case 339u: goto L_002C707C;
    case 340u: goto L_002C7090;
    case 341u: goto L_002C70B0;
    case 342u: goto L_002C70F0;
    case 343u: goto L_002C7120;
    case 344u: goto L_002C7140;
    case 345u: goto L_002C7160;
    case 346u: goto L_002C7180;
    case 347u: goto L_002C71A0;
    case 348u: goto L_002C71B0;
    case 349u: goto L_002C7248;
    case 350u: goto L_002C7270;
    case 351u: goto L_002C7298;
    case 352u: goto L_002C72C0;
    case 353u: goto L_002C72E8;
    case 354u: goto L_002C7300;
    case 355u: goto L_002C7330;
    case 356u: goto L_002C7350;
    case 357u: goto L_002C7370;
    case 358u: goto L_002C7390;
    case 359u: goto L_002C73B0;
    case 360u: goto L_002C73C0;
    case 361u: goto L_002C7458;
    case 362u: goto L_002C7480;
    case 363u: goto L_002C74A8;
    case 364u: goto L_002C74D0;
    case 365u: goto L_002C74F8;
    case 366u: goto L_002C7510;
    case 367u: goto L_002C7534;
    case 368u: goto L_002C7548;
    case 369u: goto L_002C755C;
    case 370u: goto L_002C7570;
    case 371u: goto L_002C7584;
    case 372u: goto L_002C75A0;
    case 373u: goto L_002C75D8;
    case 374u: goto L_002C75F8;
    case 375u: goto L_002C7620;
    case 376u: goto L_002C7630;
    case 377u: goto L_002C7640;
    case 378u: goto L_002C7688;
    case 379u: goto L_002C76B0;
    case 380u: goto L_002C76C0;
    case 381u: goto L_002C76D0;
    case 382u: goto L_002C7714;
    case 383u: goto L_002C7758;
    case 384u: goto L_002C7768;
    case 385u: goto L_002C7778;
    case 386u: goto L_002C77B4;
    case 387u: goto L_002C77BC;
    case 388u: goto L_002C77D0;
    case 389u: goto L_002C7814;
    case 390u: goto L_002C7824;
    case 391u: goto L_002C7834;
    case 392u: goto L_002C7864;
    case 393u: goto L_002C7878;
    case 394u: goto L_002C78BC;
    case 395u: goto L_002C78CC;
    case 396u: goto L_002C78DC;
    case 397u: goto L_002C7910;
    case 398u: goto L_002C7940;
    case 399u: goto L_002C7950;
    case 400u: goto L_002C796C;
    case 401u: goto L_002C7984;
    case 402u: goto L_002C7990;
    case 403u: goto L_002C79A8;
    case 404u: goto L_002C79B4;
    case 405u: goto L_002C79CC;
    case 406u: goto L_002C79D8;
    case 407u: goto L_002C79F0;
    case 408u: goto L_002C79FC;
    case 409u: goto L_002C7A14;
    case 410u: goto L_002C7A20;
    case 411u: goto L_002C7A38;
    case 412u: goto L_002C7A40;
    case 413u: goto L_002C7A48;
    case 414u: goto L_002C7A60;
    case 415u: goto L_002C7ACC;
    case 416u: goto L_002C7B04;
    case 417u: goto L_002C7B30;
    case 418u: goto L_002C7B88;
    case 419u: goto L_002C7BB0;
    case 420u: goto L_002C7BD8;
    case 421u: goto L_002C7C00;
    case 422u: goto L_002C7C28;
    case 423u: goto L_002C7C50;
    case 424u: goto L_002C7C60;
    case 425u: goto L_002C7C78;
    case 426u: goto L_002C7C90;
    case 427u: goto L_002C7CA0;
    case 428u: goto L_002C7CD0;
    case 429u: goto L_002C7CF8;
    case 430u: goto L_002C7D24;
    case 431u: goto L_002C7D50;
    case 432u: goto L_002C7D80;
    case 433u: goto L_002C7DAC;
    case 434u: goto L_002C7DE0;
    case 435u: goto L_002C7DFC;
    case 436u: goto L_002C7E10;
    case 437u: goto L_002C7E30;
    case 438u: goto L_002C7E50;
    case 439u: goto L_002C7E90;
    case 440u: goto L_002C7ECC;
    case 441u: goto L_002C7EE8;
    case 442u: goto L_002C7F14;
    case 443u: goto L_002C7F30;
    case 444u: goto L_002C7F38;
    case 445u: goto L_002C7F5C;
    case 446u: goto L_002C7F74;
    case 447u: goto L_002C7F94;
    case 448u: goto L_002C7FAC;
    case 449u: goto L_002C7FC0;
    case 450u: goto L_002C7FD0;
    case 451u: goto L_002C7FDC;
    case 452u: goto L_002C7FEC;
    default: bad_entry(c, 0x002C4000u); return;
    }
L_002C4000:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4014; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_002C4030; } }
L_002C4014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C401Cu); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C401Cu) [[unlikely]] return; }
L_002C401C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C402C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C402C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_002C4030:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4044; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_002C405C; } }
L_002C4044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C404Cu); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C404Cu) [[unlikely]] return; }
L_002C404C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C405C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C405C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002C4128; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4084; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C40A0; } }
L_002C4084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C408Cu); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C408Cu) [[unlikely]] return; }
L_002C408C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C409C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C409C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C40A0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C40B4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C40D0; } }
L_002C40B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40BCu); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C40BCu) [[unlikely]] return; }
L_002C40BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C40CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C40CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C40D0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C40E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C4100; } }
L_002C40E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C40ECu); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C40ECu) [[unlikely]] return; }
L_002C40EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C40FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C40FC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002C4100:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4114; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C4120; } }
L_002C4114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C411Cu); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C411Cu) [[unlikely]] return; }
L_002C411C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002C4120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C44B4; } }
L_002C4128:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_002C41F4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4148; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4164; } }
L_002C4148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4150u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4150u) [[unlikely]] return; }
L_002C4150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4160:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4164:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4178; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C4194; } }
L_002C4178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4180u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4180u) [[unlikely]] return; }
L_002C4180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4190:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C4194:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C41A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C41C4; } }
L_002C41A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41B0u); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C41B0u) [[unlikely]] return; }
L_002C41B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C41C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C41C0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002C41C4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C41D8; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_002C41F0; } }
L_002C41D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C41E0u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C41E0u) [[unlikely]] return; }
L_002C41E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C41F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C41F0:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_002C41F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C44B4; } }
L_002C41FC:
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] - 2u);  if (t) { goto L_002C420C; } }
    set32(c.r[19], c.r[19].w[0] - 8u);
    c.budget -= 1;
L_002C420C:
    c.r[1].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002C421C; } }
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_002C421C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C4244; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_002C4248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C44B4; } }
L_002C4244:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002C4248:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_002C4324; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4280; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C429C; } }
L_002C4280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4288u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4288u) [[unlikely]] return; }
L_002C4288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4298:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002C429C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C42B0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002C42CC; } }
L_002C42B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42B8u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C42B8u) [[unlikely]] return; }
L_002C42B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C42C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C42C8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002C42CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C42E0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_002C42FC; } }
L_002C42E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C42E8u); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C42E8u) [[unlikely]] return; }
L_002C42E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C42F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C42F8:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_002C42FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4310; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C431C; } }
L_002C4310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4318u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4318u) [[unlikely]] return; }
L_002C4318:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002C431C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C44B4; } }
L_002C4324:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C43E8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4344; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4360; } }
L_002C4344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C434Cu); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C434Cu) [[unlikely]] return; }
L_002C434C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C435C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C435C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4360:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4374; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C4390; } }
L_002C4374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C437Cu); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C437Cu) [[unlikely]] return; }
L_002C437C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C438C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C438C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C4390:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C43A4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C43C0; } }
L_002C43A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43ACu); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C43ACu) [[unlikely]] return; }
L_002C43AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C43BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C43BC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002C43C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C43D4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C43E0; } }
L_002C43D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C43DCu); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C43DCu) [[unlikely]] return; }
L_002C43DC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002C43E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C44B4; } }
L_002C43E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C44B0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4408; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4424; } }
L_002C4408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4410u); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4410u) [[unlikely]] return; }
L_002C4410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4420:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4424:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4438; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C4454; } }
L_002C4438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4440u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4440u) [[unlikely]] return; }
L_002C4440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4450:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002C4454:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4468; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C4484; } }
L_002C4468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4470u); set32(c.r[5], 0u + 8192u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C4470u) [[unlikely]] return; }
L_002C4470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C4480:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002C4484:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4498; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_002C44B4; } }
L_002C4498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44A0u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0070(c, 158u, depth + 1u); else { c.pc = 0x002C2B70u; return; } if (c.pc != 0x002C44A0u) [[unlikely]] return; }
L_002C44A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C44B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002C44B4; } }
L_002C44B0:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_002C44B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002C44B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C44E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C44F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C44F4u) [[unlikely]] return; }
L_002C44F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002C4508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4588; } }
L_002C4508:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_002C4578; } }
L_002C4518:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4574; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002C4574; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002C4574; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002C4574; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C4574; } }
    c.r[3].d[0] = ld64((c.r[2].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002C458C; } }
L_002C4574:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002C4578:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C4518u | kUnwind; return; } goto L_002C4518; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002C458C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C45A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002C45CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C462C; } }
L_002C45CC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C45E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002C4630; } }
L_002C45E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C45F4u); if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0070(c, 81u, depth + 1u); else { c.pc = 0x002C1960u; return; } if (c.pc != 0x002C45F4u) [[unlikely]] return; }
L_002C45F4:
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C461C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] & 3ull;  if (t) { goto L_002C4618; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C461C; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_002C4618:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C461C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C462C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C462C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002C4630:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C465Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C465Cu) [[unlikely]] return; }
L_002C465C:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C46A8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 383u));
    set32(c.r[2], 0u + 218u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C46AC; } }
    set32(c.r[4], 0u + 202u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C468Cu); set32(c.r[7], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198190u; return; } if (c.pc != 0x002C468Cu) [[unlikely]] return; }
L_002C468C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C46A8; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0]) & ~15u, c.r[3]);  if (t) { goto L_002C46AC; } }
L_002C46A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C46AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C46C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C46DCu) [[unlikely]] return; }
L_002C46DC:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C4770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C46F0u);  if (depth < kMaxDepth) unit_0035(c, 88u, depth + 1u); else { c.pc = 0x001D5D30u; return; } if (c.pc != 0x002C46F0u) [[unlikely]] return; }
L_002C46F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4770; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 984u)));
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = ld32((c.r[2].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C4714; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C4714:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C4730; } }
L_002C4728:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C4730:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C474C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002C4754; } }
L_002C474C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 2;
L_002C4754:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 5u);  if (t) { goto L_002C4770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002C4A54; } }
L_002C4770:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002C4784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C4784:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 379u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].sd[0] < 220ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C47BC; } }
    c.r[1].d[0] = c.r[6].sd[0] < 236ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002C47BC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002C47BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 221u);  if (t) { goto L_002C47D0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C47D0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C47D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 253u);  if (t) { goto L_002C47E4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C47E4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C47E4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], 0u + 251u);  if (t) { goto L_002C47F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C47F8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C47F8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], 0u + 252u);  if (t) { goto L_002C480C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002C480C; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C480C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002C4854; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 383u));
    set32(c.r[4], c.r[3].w[0] - 217u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C4848; } }
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | 65ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C4848; } }
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_002C4848:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002C4854; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4854:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 245u);  if (t) { goto L_002C4898; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 383u));
    c.r[3].d[0] = c.r[3].d[0] ^ 226ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002C4888; } }
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] - 26832u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002C4888; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4888:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C4894; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4894:
    set32(c.r[3], c.r[6].w[0] - 245u);
    c.budget -= 1;
L_002C4898:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002C48C4; } }
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 529ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C48C4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002C48C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002C48E4; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 383u));
    set32(c.r[2], 0u + 246u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002C48E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C48E0:
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_002C48E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C48ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002C48ECu) [[unlikely]] return; }
L_002C48EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C4964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4900u);  if (depth < kMaxDepth) unit_0034(c, 180u, depth + 1u); else { c.pc = 0x001D23D0u; return; } if (c.pc != 0x002C4900u) [[unlikely]] return; }
L_002C4900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C4910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4A50; } }
L_002C4910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4918u);  if (depth < kMaxDepth) unit_0034(c, 182u, depth + 1u); else { c.pc = 0x001D24B0u; return; } if (c.pc != 0x002C4918u) [[unlikely]] return; }
L_002C4918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4A50; } }
L_002C4928:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C4964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4940u);  if (depth < kMaxDepth) unit_0035(c, 76u, depth + 1u); else { c.pc = 0x001D5810u; return; } if (c.pc != 0x002C4940u) [[unlikely]] return; }
L_002C4940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4964; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C4964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C4964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C496Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C496Cu) [[unlikely]] return; }
L_002C496C:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C49F0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 383u));
    set32(c.r[2], 0u + 219u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_002C4990; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002C49F0; } }
L_002C4990:
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + 440u);  if (t) { goto L_002C49F0; } }
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 10u);
    c.budget -= 2;
L_002C49B8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C49B8u | kUnwind; return; } goto L_002C49B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002C49F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C49F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C4A00:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 383u));
    set32(c.r[2], 0u + 245u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C4A18:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4A3C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002C4A50; } }
L_002C4A3C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4A50; } }
L_002C4A4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C4A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002C4A54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002C4A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 218u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 383u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_002C4AA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4BB4; } }
L_002C4AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4AACu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002C4AACu) [[unlikely]] return; }
L_002C4AAC:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002C4AF0; } }
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1980000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);  if (t) { goto L_002C4AF0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4BB4; } }
L_002C4AF0:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C4B08; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C4B08:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C4B24; } }
L_002C4B1C:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C4B24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4B44; } }
L_002C4B40:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002C4B44:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C4BB4; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 224u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_002C4B68; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002C4B68:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C4B7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_002C4B84; } }
L_002C4B7C:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_002C4B84:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C4BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C4BA4; } }
L_002C4BA0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002C4BA4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4BB4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C4BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[8], c.r[3].w[0] + 48u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[2].w[0] + 48u);  if (t) { goto L_002C4C20; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.f[17] = ld32((c.r[8].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C10u); c.f[16] = ld32((c.r[8].w[0]));  if (depth < kMaxDepth) unit_0010(c, 274u, depth + 1u); else { c.pc = 0x00143ED0u; return; } if (c.pc != 0x002C4C10u) [[unlikely]] return; }
L_002C4C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4C58; } }
L_002C4C20:
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.f[17] = ld32((c.r[7].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C44u); c.f[16] = ld32((c.r[7].w[0]));  if (depth < kMaxDepth) unit_0010(c, 274u, depth + 1u); else { c.pc = 0x00143ED0u; return; } if (c.pc != 0x002C4C44u) [[unlikely]] return; }
L_002C4C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C4C54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C4C58; } }
L_002C4C54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002C4C58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002C4C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4C98u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x002C4C98u) [[unlikely]] return; }
L_002C4C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10912u);
    set32(c.r[2], c.r[2].w[0] + 11000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4CD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4CD0u) [[unlikely]] return; }
L_002C4CD0:
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C4CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C4D44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10912u);
    set32(c.r[2], c.r[2].w[0] + 11000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D2Cu); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x002C4D2Cu) [[unlikely]] return; }
L_002C4D2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C4D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002C4D44u) [[unlikely]] return; }
L_002C4D44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C4D48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4D74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x002C4D74u) [[unlikely]] return; }
L_002C4D74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C4D8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_002C4D98; } }
L_002C4D8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_002C4D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4DB0:
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C4DCC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), 0u);  if (t) { goto L_002C4DD8; } }
L_002C4DCC:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 3;
L_002C4DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_002C4DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002C4DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4E00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  c.pc = t; return; }
L_002C4E10:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  c.pc = t; return; }
L_002C4E20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302B0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 29u, depth); }
L_002C4E30:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_002C4E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002C4E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E6Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4E6Cu) [[unlikely]] return; }
L_002C4E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4E84; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4E84u) [[unlikely]] return; }
L_002C4E84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4EBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4EBCu) [[unlikely]] return; }
L_002C4EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4ED4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4ED4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4ED4u) [[unlikely]] return; }
L_002C4ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4F0Cu) [[unlikely]] return; }
L_002C4F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C4F24; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4F24u) [[unlikely]] return; }
L_002C4F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C4F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002C4F54u) [[unlikely]] return; }
L_002C4F54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F68u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002C4F68u) [[unlikely]] return; }
L_002C4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4F70u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C4F70u) [[unlikely]] return; }
L_002C4F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C4FA0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002C4F84; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_002C4F84:
    set32(c.r[8], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FA0u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x002C4FA0u) [[unlikely]] return; }
L_002C4FA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002C4FACu) [[unlikely]] return; }
L_002C4FAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C4FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FE4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4FE4u) [[unlikely]] return; }
L_002C4FE4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 40u));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C4FF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C4FF8u) [[unlikely]] return; }
L_002C4FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C5010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 1104u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5044u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0071(c, 50u, depth + 1u); else { c.pc = 0x002C4C70u; return; } if (c.pc != 0x002C5044u) [[unlikely]] return; }
L_002C5044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10704u);
    set32(c.r[2], c.r[2].w[0] + 10792u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5064u); st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5064u) [[unlikely]] return; }
L_002C5064:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 56u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C508Cu); st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C508Cu) [[unlikely]] return; }
L_002C508C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C509Cu); st128((c.r[19].w[0] + 80u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C509Cu) [[unlikely]] return; }
L_002C509C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50ACu); st128((c.r[19].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C50ACu) [[unlikely]] return; }
L_002C50AC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 315u);
    set32(c.r[2], 0u + 465u);
    st128((c.r[19].w[0] + 112u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[19].w[0] + 128u), c.f[0]);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[19].w[0] + 136u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[19].w[0] + 140u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C50F4u); st32((c.r[19].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C50F4u) [[unlikely]] return; }
L_002C50F4:
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 160u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 180u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C511Cu); st32((c.r[19].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C511Cu) [[unlikely]] return; }
L_002C511C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C512Cu); st128((c.r[19].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C512Cu) [[unlikely]] return; }
L_002C512C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C513Cu); st128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C513Cu) [[unlikely]] return; }
L_002C513C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 317u);
    set32(c.r[2], 0u + 465u);
    st128((c.r[19].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[19].w[0] + 240u), c.f[0]);
    st32((c.r[19].w[0] + 244u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[19].w[0] + 248u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[19].w[0] + 252u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5184u); st32((c.r[19].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5184u) [[unlikely]] return; }
L_002C5184:
    st32((c.r[19].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5190u); set32(c.r[4], 0u + 318u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5190u) [[unlikely]] return; }
L_002C5190:
    st32((c.r[19].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C519Cu); set32(c.r[4], 0u + 319u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C519Cu) [[unlikely]] return; }
L_002C519C:
    st32((c.r[19].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51A8u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C51A8u) [[unlikely]] return; }
L_002C51A8:
    st32((c.r[19].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 272u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 292u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 296u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51D0u); st32((c.r[19].w[0] + 300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C51D0u) [[unlikely]] return; }
L_002C51D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51E0u); st128((c.r[19].w[0] + 304u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C51E0u) [[unlikely]] return; }
L_002C51E0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C51F0u); st128((c.r[19].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C51F0u) [[unlikely]] return; }
L_002C51F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[19].w[0] + 384u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 435u);
    st128((c.r[19].w[0] + 336u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 352u), c.f[0]);
    st32((c.r[19].w[0] + 356u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 360u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 364u), c.f[0]);
    st32((c.r[19].w[0] + 368u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 384u), 0u);
    st32((c.r[19].w[0] + 388u), 0u);
    st32((c.r[19].w[0] + 392u), 0u);
    st32((c.r[19].w[0] + 396u), 0u);
    st32((c.r[19].w[0] + 400u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 404u), 0u);
    st32((c.r[19].w[0] + 408u), c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5268u); st32((c.r[19].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5268u) [[unlikely]] return; }
L_002C5268:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5278u); st128((c.r[19].w[0] + 416u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5278u) [[unlikely]] return; }
L_002C5278:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5288u); st128((c.r[19].w[0] + 432u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5288u) [[unlikely]] return; }
L_002C5288:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 321u);
    set32(c.r[2], 0u + 513u);
    st128((c.r[19].w[0] + 448u) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0] + 464u), c.f[0]);
    st32((c.r[19].w[0] + 468u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 472u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 476u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52D4u); st32((c.r[19].w[0] + 480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C52D4u) [[unlikely]] return; }
L_002C52D4:
    st32((c.r[19].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 496u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 512u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 516u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 520u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C52FCu); st32((c.r[19].w[0] + 524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C52FCu) [[unlikely]] return; }
L_002C52FC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C530Cu); st128((c.r[19].w[0] + 528u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C530Cu) [[unlikely]] return; }
L_002C530C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C531Cu); st128((c.r[19].w[0] + 544u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C531Cu) [[unlikely]] return; }
L_002C531C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43ED0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 322u);
    st128((c.r[19].w[0] + 560u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0] + 576u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 580u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 584u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 588u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C535Cu); st32((c.r[19].w[0] + 592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C535Cu) [[unlikely]] return; }
L_002C535C:
    st32((c.r[19].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 608u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 624u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 628u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 632u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5384u); st32((c.r[19].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5384u) [[unlikely]] return; }
L_002C5384:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5394u); st128((c.r[19].w[0] + 640u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5394u) [[unlikely]] return; }
L_002C5394:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C53A4u); st128((c.r[19].w[0] + 656u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C53A4u) [[unlikely]] return; }
L_002C53A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x44060000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[19].w[0] + 672u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0] + 688u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 692u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 696u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 700u), c.f[0]);
    st32((c.r[19].w[0] + 704u), c.r[2].w[0]);
    c.budget -= 15;
L_002C53E0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 720u), 0u);
    c.r[2].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C53E0u | kUnwind; return; } goto L_002C53E0; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[19].w[0] + 720u);
    st32((c.r[19].w[0] + 752u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 756u), 0u);
    set32(c.r[2], 0u + 7u);
    st32((c.r[19].w[0] + 760u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5420u); st32((c.r[19].w[0] + 764u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5420u) [[unlikely]] return; }
L_002C5420:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5430u); st128((c.r[19].w[0] + 768u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5430u) [[unlikely]] return; }
L_002C5430:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5440u); st128((c.r[19].w[0] + 784u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5440u) [[unlikely]] return; }
L_002C5440:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43ED0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[19].w[0] + 800u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0] + 816u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 820u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 824u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 828u), c.f[0]);
    st32((c.r[19].w[0] + 832u), c.r[2].w[0]);
    c.budget -= 15;
L_002C547C:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 848u), 0u);
    c.r[2].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C547Cu | kUnwind; return; } goto L_002C547C; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[19].w[0] + 848u);
    st32((c.r[19].w[0] + 880u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 884u), 0u);
    set32(c.r[2], 0u + 7u);
    st32((c.r[19].w[0] + 888u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54BCu); st32((c.r[19].w[0] + 892u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C54BCu) [[unlikely]] return; }
L_002C54BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54CCu); st128((c.r[19].w[0] + 896u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C54CCu) [[unlikely]] return; }
L_002C54CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C54DCu); st128((c.r[19].w[0] + 912u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C54DCu) [[unlikely]] return; }
L_002C54DC:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44060000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 323u);
    st128((c.r[19].w[0] + 928u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 23u);
    st32((c.r[19].w[0] + 944u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 948u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 952u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 956u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C551Cu); st32((c.r[19].w[0] + 960u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C551Cu) [[unlikely]] return; }
L_002C551C:
    st32((c.r[19].w[0] + 976u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5528u); set32(c.r[4], 0u + 324u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5528u) [[unlikely]] return; }
L_002C5528:
    st32((c.r[19].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5534u); set32(c.r[4], 0u + 325u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5534u) [[unlikely]] return; }
L_002C5534:
    st32((c.r[19].w[0] + 984u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5540u); set32(c.r[4], 0u + 326u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5540u) [[unlikely]] return; }
L_002C5540:
    st32((c.r[19].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C554Cu); set32(c.r[4], 0u + 327u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C554Cu) [[unlikely]] return; }
L_002C554C:
    st32((c.r[19].w[0] + 992u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5558u); set32(c.r[4], 0u + 328u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5558u) [[unlikely]] return; }
L_002C5558:
    st32((c.r[19].w[0] + 996u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5564u); set32(c.r[4], 0u + 329u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C5564u) [[unlikely]] return; }
L_002C5564:
    st32((c.r[19].w[0] + 1000u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 3u);
    st32((c.r[19].w[0] + 1008u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 1012u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 976u);
    st32((c.r[19].w[0] + 1016u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5590u); st32((c.r[19].w[0] + 1020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5590u) [[unlikely]] return; }
L_002C5590:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55A0u); st128((c.r[19].w[0] + 1024u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C55A0u) [[unlikely]] return; }
L_002C55A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C55B0u); st128((c.r[19].w[0] + 1040u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C55B0u) [[unlikely]] return; }
L_002C55B0:
    ld128((c.r[2].w[0]) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43440000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], 0u + 23u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 359u);
    st128((c.r[19].w[0] + 1056u) & ~15u, c.r[8]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44080000u);
    st32((c.r[19].w[0] + 1072u), c.f[0]);
    st32((c.r[19].w[0] + 1076u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 1080u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[19].w[0] + 1084u), c.f[0]);
    st32((c.r[19].w[0] + 1088u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 1160u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 1164u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 1168u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 1172u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 1176u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1180u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 1184u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1188u), c.r[3].w[0]);
    set32(c.r[2], c.r[9].w[0] << 3);
    c.budget -= 31;
L_002C562C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 1104u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1105u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1106u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1107u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 1108u), c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C562Cu | kUnwind; return; } goto L_002C562C; } }
    st32((c.r[19].w[0] + 1192u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26528u));
    set32(c.r[4], 0u + 208u);
    st32((c.r[19].w[0] + 1196u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26536u));
    st32((c.r[19].w[0] + 1200u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26544u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5684u); st32((c.r[19].w[0] + 1204u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C5684u) [[unlikely]] return; }
L_002C5684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C569C; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C569Cu); set32(c.r[7], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C569Cu) [[unlikely]] return; }
L_002C569C:
    st32((c.r[19].w[0] + 1208u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56A8u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C56A8u) [[unlikely]] return; }
L_002C56A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C56C0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56C0u); set32(c.r[7], c.r[19].w[0] + 176u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C56C0u) [[unlikely]] return; }
L_002C56C0:
    st32((c.r[19].w[0] + 1212u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56CCu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C56CCu) [[unlikely]] return; }
L_002C56CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C56E4; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56E4u); set32(c.r[7], c.r[19].w[0] + 288u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C56E4u) [[unlikely]] return; }
L_002C56E4:
    st32((c.r[19].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C56F0u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C56F0u) [[unlikely]] return; }
L_002C56F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C5708; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5708u); set32(c.r[7], c.r[19].w[0] + 400u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C5708u) [[unlikely]] return; }
L_002C5708:
    st32((c.r[19].w[0] + 1220u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5714u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C5714u) [[unlikely]] return; }
L_002C5714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C572C; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C572Cu); set32(c.r[7], c.r[19].w[0] + 512u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C572Cu) [[unlikely]] return; }
L_002C572C:
    st32((c.r[19].w[0] + 1544u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5738u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C5738u) [[unlikely]] return; }
L_002C5738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C5750; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5750u); set32(c.r[7], c.r[19].w[0] + 624u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C5750u) [[unlikely]] return; }
L_002C5750:
    st32((c.r[19].w[0] + 1548u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C575Cu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C575Cu) [[unlikely]] return; }
L_002C575C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C5774; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5774u); set32(c.r[7], c.r[19].w[0] + 752u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C5774u) [[unlikely]] return; }
L_002C5774:
    st32((c.r[19].w[0] + 1552u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5780u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C5780u) [[unlikely]] return; }
L_002C5780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C5798; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5798u); set32(c.r[7], c.r[19].w[0] + 880u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C5798u) [[unlikely]] return; }
L_002C5798:
    st32((c.r[19].w[0] + 1556u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57A4u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C57A4u) [[unlikely]] return; }
L_002C57A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C57BC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57BCu); set32(c.r[7], c.r[19].w[0] + 1008u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C57BCu) [[unlikely]] return; }
L_002C57BC:
    st32((c.r[19].w[0] + 1560u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1552u)));
    set32(c.r[4], 0u + 192u);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1556u)));
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1560u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C57E4u); st32((c.r[2].w[0] + 192u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C57E4u) [[unlikely]] return; }
L_002C57E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43BD0000u);  if (t) { goto L_002C5824; } }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432E0000u);
    c.f[14] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[15] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[16] = c.r[3].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x002C5824u) [[unlikely]] return; }
L_002C5824:
    st32((c.r[19].w[0] + 1564u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5830u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C5830u) [[unlikely]] return; }
L_002C5830:
    set32(c.r[4], ld32((c.r[19].w[0] + 1564u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C583Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x002C583Cu) [[unlikely]] return; }
L_002C583C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C584Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 190u, depth + 1u); else { c.pc = 0x002C5D60u; return; } if (c.pc != 0x002C584Cu) [[unlikely]] return; }
L_002C584C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C5870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C5A58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10704u);
    set32(c.r[2], c.r[2].w[0] + 10792u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1208u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58C8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C58C8u) [[unlikely]] return; }
L_002C58C8:
    st32((c.r[17].w[0] + 1208u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1212u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C58F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C58F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C58F0u) [[unlikely]] return; }
L_002C58F0:
    st32((c.r[17].w[0] + 1212u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1216u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5918; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5918; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5918u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5918u) [[unlikely]] return; }
L_002C5918:
    st32((c.r[17].w[0] + 1216u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1220u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5940; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5940u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5940u) [[unlikely]] return; }
L_002C5940:
    st32((c.r[17].w[0] + 1220u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1544u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5968; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5968; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5968u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5968u) [[unlikely]] return; }
L_002C5968:
    st32((c.r[17].w[0] + 1544u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1548u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5990; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5990; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5990u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5990u) [[unlikely]] return; }
L_002C5990:
    st32((c.r[17].w[0] + 1548u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C59B8u) [[unlikely]] return; }
L_002C59B8:
    st32((c.r[17].w[0] + 1552u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1556u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C59E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C59E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C59E0u) [[unlikely]] return; }
L_002C59E0:
    st32((c.r[17].w[0] + 1556u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1560u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A08u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5A08u) [[unlikely]] return; }
L_002C5A08:
    st32((c.r[17].w[0] + 1560u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1564u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5A30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5A30u) [[unlikely]] return; }
L_002C5A30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A40u); st32((c.r[17].w[0] + 1564u), 0u);  if (depth < kMaxDepth) unit_0071(c, 53u, depth + 1u); else { c.pc = 0x002C4CF0u; return; } if (c.pc != 0x002C5A40u) [[unlikely]] return; }
L_002C5A40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C5A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002C5A58u) [[unlikely]] return; }
L_002C5A58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C5A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1552u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5A98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5A98u) [[unlikely]] return; }
L_002C5A98:
    set32(c.r[4], ld32((c.r[17].w[0] + 1556u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AA8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5AA8u) [[unlikely]] return; }
L_002C5AA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1560u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5AB8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5AB8u) [[unlikely]] return; }
L_002C5AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1208u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C5B0C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5B00u) [[unlikely]] return; }
L_002C5B00:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C5B0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1212u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5B28u) [[unlikely]] return; }
L_002C5B28:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5B38:
    set32(c.r[4], ld32((c.r[17].w[0] + 1216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5B54u) [[unlikely]] return; }
L_002C5B54:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5B64:
    set32(c.r[4], ld32((c.r[17].w[0] + 1220u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5B90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5B80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5B80u) [[unlikely]] return; }
L_002C5B80:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5B90:
    set32(c.r[4], ld32((c.r[17].w[0] + 1544u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BBC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5BACu) [[unlikely]] return; }
L_002C5BAC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5BBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5BE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5BD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5BD8u) [[unlikely]] return; }
L_002C5BD8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5BE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5C14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5C04u) [[unlikely]] return; }
L_002C5C04:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5C14:
    set32(c.r[4], ld32((c.r[17].w[0] + 1556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5C40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5C30u) [[unlikely]] return; }
L_002C5C30:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5C40:
    set32(c.r[4], ld32((c.r[17].w[0] + 1560u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C5C6C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5C5Cu) [[unlikely]] return; }
L_002C5C5C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C5C6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1564u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C5C9C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5C88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C5C88u) [[unlikely]] return; }
L_002C5C88:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002C5C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4DB0u; return; } if (c.pc != 0x002C5CCCu) [[unlikely]] return; }
L_002C5CCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C5CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CE0u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002C5CE0u) [[unlikely]] return; }
L_002C5CE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 1556u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C5CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5CF4u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002C5CF4u) [[unlikely]] return; }
L_002C5CF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1560u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C5D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D08u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002C5D08u) [[unlikely]] return; }
L_002C5D08:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C5D4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1552u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5D2Cu) [[unlikely]] return; }
L_002C5D2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1556u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D3Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5D3Cu) [[unlikely]] return; }
L_002C5D3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1560u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D4Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C5D4Cu) [[unlikely]] return; }
L_002C5D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C5D60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5D94u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002C5D94u) [[unlikely]] return; }
L_002C5D94:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[18].w[0] + 1224u);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DBCu); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5DBCu) [[unlikely]] return; }
L_002C5DBC:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[18].w[0] + 1240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DD0u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5DD0u) [[unlikely]] return; }
L_002C5DD0:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[18].w[0] + 1256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5DE4u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5DE4u) [[unlikely]] return; }
L_002C5DE4:
    c.r[6].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002C5DFC; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_002C5E68; } }
L_002C5DFC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_002C5E14; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5E2C; } }
L_002C5E14:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_002C5E2C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[3], c.r[6].w[0] >> 1);  if (t) { goto L_002C5E40; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002C5E58; } }
L_002C5E40:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002C5E58:
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 4;
L_002C5E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E70u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x002C5E70u) [[unlikely]] return; }
L_002C5E70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5E84u); set32(c.r[5], c.r[5].w[0] - 26736u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5E84u) [[unlikely]] return; }
L_002C5E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[18].w[0] + 1272u);  if (t) { goto L_002C5EB0; } }
    set32(c.r[4], c.r[18].w[0] + 1272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EA8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002C5EA8u) [[unlikely]] return; }
L_002C5EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C5EBC; } }
L_002C5EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EB8u); set32(c.r[5], c.r[29].w[0] + 97u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x002C5EB8u) [[unlikely]] return; }
L_002C5EB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C5EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 374u, depth + 1u); else { c.pc = 0x002B7C00u; return; } if (c.pc != 0x002C5EC4u) [[unlikely]] return; }
L_002C5EC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5ED8u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5ED8u) [[unlikely]] return; }
L_002C5ED8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 376u, depth + 1u); else { c.pc = 0x002B7C20u; return; } if (c.pc != 0x002C5EE4u) [[unlikely]] return; }
L_002C5EE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5EF8u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5EF8u) [[unlikely]] return; }
L_002C5EF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F04u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 378u, depth + 1u); else { c.pc = 0x002B7C40u; return; } if (c.pc != 0x002C5F04u) [[unlikely]] return; }
L_002C5F04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F18u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5F18u) [[unlikely]] return; }
L_002C5F18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 380u, depth + 1u); else { c.pc = 0x002B7C60u; return; } if (c.pc != 0x002C5F24u) [[unlikely]] return; }
L_002C5F24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F38u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5F38u) [[unlikely]] return; }
L_002C5F38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 382u, depth + 1u); else { c.pc = 0x002B7C80u; return; } if (c.pc != 0x002C5F44u) [[unlikely]] return; }
L_002C5F44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F58u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5F58u) [[unlikely]] return; }
L_002C5F58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 384u, depth + 1u); else { c.pc = 0x002B7CA0u; return; } if (c.pc != 0x002C5F64u) [[unlikely]] return; }
L_002C5F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F78u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5F78u) [[unlikely]] return; }
L_002C5F78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 386u, depth + 1u); else { c.pc = 0x002B7CC0u; return; } if (c.pc != 0x002C5F84u) [[unlikely]] return; }
L_002C5F84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5F98u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5F98u) [[unlikely]] return; }
L_002C5F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 388u, depth + 1u); else { c.pc = 0x002B7CE0u; return; } if (c.pc != 0x002C5FA4u) [[unlikely]] return; }
L_002C5FA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FB8u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5FB8u) [[unlikely]] return; }
L_002C5FB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FC4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 390u, depth + 1u); else { c.pc = 0x002B7D00u; return; } if (c.pc != 0x002C5FC4u) [[unlikely]] return; }
L_002C5FC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FD8u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5FD8u) [[unlikely]] return; }
L_002C5FD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 392u, depth + 1u); else { c.pc = 0x002B7D20u; return; } if (c.pc != 0x002C5FE4u) [[unlikely]] return; }
L_002C5FE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C5FF8u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C5FF8u) [[unlikely]] return; }
L_002C5FF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6004u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 394u, depth + 1u); else { c.pc = 0x002B7D40u; return; } if (c.pc != 0x002C6004u) [[unlikely]] return; }
L_002C6004:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6018u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C6018u) [[unlikely]] return; }
L_002C6018:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6024u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 396u, depth + 1u); else { c.pc = 0x002B7D60u; return; } if (c.pc != 0x002C6024u) [[unlikely]] return; }
L_002C6024:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6038u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C6038u) [[unlikely]] return; }
L_002C6038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6044u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 398u, depth + 1u); else { c.pc = 0x002B7D80u; return; } if (c.pc != 0x002C6044u) [[unlikely]] return; }
L_002C6044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6058u); set32(c.r[5], c.r[5].w[0] - 26744u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C6058u) [[unlikely]] return; }
L_002C6058:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6064u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 400u, depth + 1u); else { c.pc = 0x002B7DA0u; return; } if (c.pc != 0x002C6064u) [[unlikely]] return; }
L_002C6064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[18].w[0] + 1512u);
    set32(c.r[5], c.r[5].w[0] - 26744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6078u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C6078u) [[unlikely]] return; }
L_002C6078:
    set32(c.r[4], c.r[18].w[0] + 1224u);
    set32(c.r[3], c.r[18].w[0] + 1240u);
    st32((c.r[18].w[0] + 384u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1256u);
    st32((c.r[18].w[0] + 392u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1272u);
    st32((c.r[18].w[0] + 396u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1288u);
    st32((c.r[18].w[0] + 720u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1400u);
    st32((c.r[18].w[0] + 848u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1304u);
    st32((c.r[18].w[0] + 724u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1416u);
    st32((c.r[18].w[0] + 852u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1320u);
    st32((c.r[18].w[0] + 728u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1432u);
    st32((c.r[18].w[0] + 856u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1336u);
    st32((c.r[18].w[0] + 732u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1448u);
    st32((c.r[18].w[0] + 860u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1352u);
    st32((c.r[18].w[0] + 736u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1480u);
    st32((c.r[18].w[0] + 864u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1368u);
    st32((c.r[18].w[0] + 740u), c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1496u);
    st32((c.r[18].w[0] + 868u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1384u);
    set32(c.r[3], c.r[18].w[0] + 1512u);
    st32((c.r[18].w[0] + 744u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 872u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C6130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6160u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6160u) [[unlikely]] return; }
L_002C6160:
    set32(c.r[4], ld32((c.r[16].w[0] + 1212u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6180u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6180u) [[unlikely]] return; }
    goto L_002C6180;
L_002C617C:
    c.f[13] = c.f[12];
    c.budget -= 1;
L_002C6180:
    set32(c.r[4], ld32((c.r[16].w[0] + 1216u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61A0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C61A0u) [[unlikely]] return; }
L_002C61A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1220u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61C0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C61C0u) [[unlikely]] return; }
L_002C61C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1544u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C61E0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C61E0u) [[unlikely]] return; }
L_002C61E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1548u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6200u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6200u) [[unlikely]] return; }
L_002C6200:
    set32(c.r[4], ld32((c.r[16].w[0] + 1552u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6220u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6220u) [[unlikely]] return; }
L_002C6220:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6240u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6240u) [[unlikely]] return; }
L_002C6240:
    set32(c.r[4], ld32((c.r[16].w[0] + 1560u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6260u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6260u) [[unlikely]] return; }
L_002C6260:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6280u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6280u) [[unlikely]] return; }
L_002C6280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C62F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C62EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C62E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C62D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 1208u)));  if (t) { goto L_002C6304; } }
L_002C62D4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 480u);  if (t) { goto L_002C6300; } }
L_002C62E0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 480u);  if (t) { goto L_002C6300; } }
L_002C62EC:
    set32(c.r[17], 0u + 640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C6300; } }
L_002C62F8:
    set32(c.r[17], 0u - 640u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C6300:
    set32(c.r[4], ld32((c.r[18].w[0] + 1208u)));
    c.budget -= 1;
L_002C6304:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6328u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6328u) [[unlikely]] return; }
L_002C6328:
    set32(c.r[4], ld32((c.r[18].w[0] + 1212u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6350u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6350u) [[unlikely]] return; }
L_002C6350:
    set32(c.r[4], ld32((c.r[18].w[0] + 1216u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6378u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6378u) [[unlikely]] return; }
L_002C6378:
    set32(c.r[4], ld32((c.r[18].w[0] + 1220u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63A0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C63A0u) [[unlikely]] return; }
L_002C63A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1544u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63C8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C63C8u) [[unlikely]] return; }
L_002C63C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1548u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C63F0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C63F0u) [[unlikely]] return; }
L_002C63F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1552u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6418u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6418u) [[unlikely]] return; }
L_002C6418:
    set32(c.r[4], ld32((c.r[18].w[0] + 1556u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6440u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6440u) [[unlikely]] return; }
L_002C6440:
    set32(c.r[4], ld32((c.r[18].w[0] + 1560u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6468u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6468u) [[unlikely]] return; }
L_002C6468:
    set32(c.r[4], ld32((c.r[18].w[0] + 1564u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6490u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6490u) [[unlikely]] return; }
L_002C6490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C64B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C64E0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C64E0u) [[unlikely]] return; }
L_002C64E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1212u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6500u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6500u) [[unlikely]] return; }
L_002C6500:
    set32(c.r[4], ld32((c.r[16].w[0] + 1216u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6520u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6520u) [[unlikely]] return; }
L_002C6520:
    set32(c.r[4], ld32((c.r[16].w[0] + 1220u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6540u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6540u) [[unlikely]] return; }
L_002C6540:
    set32(c.r[4], ld32((c.r[16].w[0] + 1544u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6560u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6560u) [[unlikely]] return; }
L_002C6560:
    set32(c.r[4], ld32((c.r[16].w[0] + 1548u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6580u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6580u) [[unlikely]] return; }
L_002C6580:
    set32(c.r[4], ld32((c.r[16].w[0] + 1552u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65A0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C65A0u) [[unlikely]] return; }
L_002C65A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65C0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C65C0u) [[unlikely]] return; }
L_002C65C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1560u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C65E0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C65E0u) [[unlikely]] return; }
L_002C65E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6600u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6600u) [[unlikely]] return; }
L_002C6600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C6678; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C666C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C6660; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C6654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 1208u)));  if (t) { goto L_002C6684; } }
L_002C6654:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 480u);  if (t) { goto L_002C6680; } }
L_002C6660:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 480u);  if (t) { goto L_002C6680; } }
L_002C666C:
    set32(c.r[17], 0u - 640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C6680; } }
L_002C6678:
    set32(c.r[17], 0u + 640u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C6680:
    set32(c.r[4], ld32((c.r[18].w[0] + 1208u)));
    c.budget -= 1;
L_002C6684:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66A8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C66A8u) [[unlikely]] return; }
L_002C66A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1212u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66D0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C66D0u) [[unlikely]] return; }
L_002C66D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1216u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C66F8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C66F8u) [[unlikely]] return; }
L_002C66F8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1220u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6720u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6720u) [[unlikely]] return; }
L_002C6720:
    set32(c.r[4], ld32((c.r[18].w[0] + 1544u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6748u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6748u) [[unlikely]] return; }
L_002C6748:
    set32(c.r[4], ld32((c.r[18].w[0] + 1548u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6770u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6770u) [[unlikely]] return; }
L_002C6770:
    set32(c.r[4], ld32((c.r[18].w[0] + 1552u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6798u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6798u) [[unlikely]] return; }
L_002C6798:
    set32(c.r[4], ld32((c.r[18].w[0] + 1556u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67C0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C67C0u) [[unlikely]] return; }
L_002C67C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 1560u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C67E8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C67E8u) [[unlikely]] return; }
L_002C67E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1564u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6810u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6810u) [[unlikely]] return; }
L_002C6810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6854u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6854u) [[unlikely]] return; }
L_002C6854:
    set32(c.r[4], ld32((c.r[16].w[0] + 1212u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6868u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6868u) [[unlikely]] return; }
L_002C6868:
    set32(c.r[4], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C687Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C687Cu) [[unlikely]] return; }
L_002C687C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6890u) [[unlikely]] return; }
L_002C6890:
    set32(c.r[4], ld32((c.r[16].w[0] + 1544u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68A4u) [[unlikely]] return; }
L_002C68A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1548u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68B8u) [[unlikely]] return; }
L_002C68B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1552u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68CCu) [[unlikely]] return; }
L_002C68CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1556u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68E0u) [[unlikely]] return; }
L_002C68E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1560u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C68F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C68F4u) [[unlikely]] return; }
L_002C68F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6908u) [[unlikely]] return; }
L_002C6908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C6920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 672u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C694Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0071(c, 50u, depth + 1u); else { c.pc = 0x002C4C70u; return; } if (c.pc != 0x002C694Cu) [[unlikely]] return; }
L_002C694C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10496u);
    set32(c.r[2], c.r[2].w[0] + 10584u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C696Cu); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C696Cu) [[unlikely]] return; }
L_002C696C:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 56u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6994u); st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6994u) [[unlikely]] return; }
L_002C6994:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69A4u); st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C69A4u) [[unlikely]] return; }
L_002C69A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69B4u); st128((c.r[18].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C69B4u) [[unlikely]] return; }
L_002C69B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 336u);
    set32(c.r[2], 0u + 465u);
    st128((c.r[18].w[0] + 112u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C69FCu); st32((c.r[18].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C69FCu) [[unlikely]] return; }
L_002C69FC:
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 160u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 180u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A24u); st32((c.r[18].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6A24u) [[unlikely]] return; }
L_002C6A24:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A34u); st128((c.r[18].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6A34u) [[unlikely]] return; }
L_002C6A34:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A44u); st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6A44u) [[unlikely]] return; }
L_002C6A44:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 337u);
    set32(c.r[2], 0u + 465u);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[18].w[0] + 240u), c.f[0]);
    st32((c.r[18].w[0] + 244u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[18].w[0] + 248u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[18].w[0] + 252u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6A8Cu); st32((c.r[18].w[0] + 256u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C6A8Cu) [[unlikely]] return; }
L_002C6A8C:
    st32((c.r[18].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 272u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 288u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 292u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 296u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AB4u); st32((c.r[18].w[0] + 300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6AB4u) [[unlikely]] return; }
L_002C6AB4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AC4u); st128((c.r[18].w[0] + 304u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6AC4u) [[unlikely]] return; }
L_002C6AC4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6AD4u); st128((c.r[18].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6AD4u) [[unlikely]] return; }
L_002C6AD4:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x440A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[18].w[0] + 336u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B60000u);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 356u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 360u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 364u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 368u), 0u);  if (t) { goto L_002C6D28; } }
L_002C6B0C:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 432u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 384u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[18].w[0] + 440u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B34u); st32((c.r[18].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6B34u) [[unlikely]] return; }
L_002C6B34:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B44u); st128((c.r[18].w[0] + 448u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6B44u) [[unlikely]] return; }
L_002C6B44:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6B54u); st128((c.r[18].w[0] + 464u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6B54u) [[unlikely]] return; }
L_002C6B54:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[18].w[0] + 480u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 21u);
    st32((c.r[18].w[0] + 496u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 500u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 504u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 508u), c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_002C6D20; } }
L_002C6B90:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + 528u);
    st32((c.r[18].w[0] + 576u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 580u), 0u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[18].w[0] + 584u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BB4u); st32((c.r[18].w[0] + 588u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6BB4u) [[unlikely]] return; }
L_002C6BB4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BC4u); st128((c.r[18].w[0] + 592u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6BC4u) [[unlikely]] return; }
L_002C6BC4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6BD4u); st128((c.r[18].w[0] + 608u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C6BD4u) [[unlikely]] return; }
L_002C6BD4:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 562u);
    st128((c.r[18].w[0] + 624u) & ~15u, c.r[4]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 21u);
    st32((c.r[18].w[0] + 640u), c.f[0]);
    st32((c.r[18].w[0] + 644u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 648u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 652u), c.f[0]);
    st32((c.r[18].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 19;
L_002C6C20:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 672u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 673u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 674u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 675u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 676u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6C20u | kUnwind; return; } goto L_002C6C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C50u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C6C50u) [[unlikely]] return; }
L_002C6C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6C68; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C68u); set32(c.r[7], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C6C68u) [[unlikely]] return; }
L_002C6C68:
    st32((c.r[18].w[0] + 768u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C74u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C6C74u) [[unlikely]] return; }
L_002C6C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6C8C; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C8Cu); set32(c.r[7], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C6C8Cu) [[unlikely]] return; }
L_002C6C8C:
    st32((c.r[18].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6C98u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C6C98u) [[unlikely]] return; }
L_002C6C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6CB0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CB0u); set32(c.r[7], c.r[18].w[0] + 288u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C6CB0u) [[unlikely]] return; }
L_002C6CB0:
    st32((c.r[18].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CBCu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C6CBCu) [[unlikely]] return; }
L_002C6CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6CD4; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CD4u); set32(c.r[7], c.r[18].w[0] + 432u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C6CD4u) [[unlikely]] return; }
L_002C6CD4:
    st32((c.r[18].w[0] + 780u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CE0u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C6CE0u) [[unlikely]] return; }
L_002C6CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C6CF8; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6CF8u); set32(c.r[7], c.r[18].w[0] + 576u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C6CF8u) [[unlikely]] return; }
L_002C6CF8:
    st32((c.r[18].w[0] + 784u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 780u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6D18u); st32((c.r[2].w[0] + 192u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0071(c, 336u, depth + 1u); else { c.pc = 0x002C7020u; return; } if (c.pc != 0x002C6D18u) [[unlikely]] return; }
L_002C6D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002C6D30; } }
L_002C6D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 528u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6B90u | kUnwind; return; } goto L_002C6B90; } }
L_002C6D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 384u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C6B0Cu | kUnwind; return; } goto L_002C6B0C; } }
L_002C6D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C6D50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C6E70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10496u);
    set32(c.r[2], c.r[2].w[0] + 10584u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 768u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6DA8u) [[unlikely]] return; }
L_002C6DA8:
    st32((c.r[17].w[0] + 768u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 772u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DD0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6DD0u) [[unlikely]] return; }
L_002C6DD0:
    st32((c.r[17].w[0] + 772u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 776u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6DF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6DF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6DF8u) [[unlikely]] return; }
L_002C6DF8:
    st32((c.r[17].w[0] + 776u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 780u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6E20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6E20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6E20u) [[unlikely]] return; }
L_002C6E20:
    st32((c.r[17].w[0] + 780u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 784u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6E48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6E48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6E48u) [[unlikely]] return; }
L_002C6E48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E58u); st32((c.r[17].w[0] + 784u), 0u);  if (depth < kMaxDepth) unit_0071(c, 53u, depth + 1u); else { c.pc = 0x002C4CF0u; return; } if (c.pc != 0x002C6E58u) [[unlikely]] return; }
L_002C6E58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C6E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002C6E70u) [[unlikely]] return; }
L_002C6E70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C6E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6E90:
    set32(c.r[4], ld32((c.r[4].w[0] + 780u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { set32(c.r[6], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBBD0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 481u, depth); }
L_002C6EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C6EDC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6ED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6ED0u) [[unlikely]] return; }
L_002C6ED0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C6EDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 772u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6F08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6EF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6EF8u) [[unlikely]] return; }
L_002C6EF8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C6F08:
    set32(c.r[4], ld32((c.r[16].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6F34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6F24u) [[unlikely]] return; }
L_002C6F24:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C6F34:
    set32(c.r[4], ld32((c.r[16].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C6F60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6F50u) [[unlikely]] return; }
L_002C6F50:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C6F60:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C6F90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6F7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C6F7Cu) [[unlikely]] return; }
L_002C6F7C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_002C6F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C6FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4DB0u; return; } if (c.pc != 0x002C6FCCu) [[unlikely]] return; }
L_002C6FCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C6FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C6FE0u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002C6FE0u) [[unlikely]] return; }
L_002C6FE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7000; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 780u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7000u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C7000u) [[unlikely]] return; }
L_002C7000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7020:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[7], 0u + 12u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C705Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006D(c, 412u, depth + 1u); else { c.pc = 0x002B7F40u; return; } if (c.pc != 0x002C705Cu) [[unlikely]] return; }
L_002C705C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7060:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 112u);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C707Cu); set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x002C707Cu) [[unlikely]] return; }
L_002C707C:
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7090u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002C7090u) [[unlikely]] return; }
L_002C7090:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 26744u);
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[21], c.r[2].w[0] + 788u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C70B0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C70B0u) [[unlikely]] return; }
L_002C70B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 528u), c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7060u | kUnwind; return; } goto L_002C7060; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C70F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 5u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7120u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7120u) [[unlikely]] return; }
L_002C7120:
    set32(c.r[4], ld32((c.r[16].w[0] + 772u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7140u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7140u) [[unlikely]] return; }
L_002C7140:
    set32(c.r[4], ld32((c.r[16].w[0] + 776u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7160u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7160u) [[unlikely]] return; }
L_002C7160:
    set32(c.r[4], ld32((c.r[16].w[0] + 780u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7180u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7180u) [[unlikely]] return; }
L_002C7180:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C71A0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C71A0u) [[unlikely]] return; }
L_002C71A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C71B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C7218; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C720C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C7200; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C71F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 768u)));  if (t) { goto L_002C7224; } }
L_002C71F4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 480u);  if (t) { goto L_002C7220; } }
L_002C7200:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 480u);  if (t) { goto L_002C7220; } }
L_002C720C:
    set32(c.r[17], 0u + 640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C7220; } }
L_002C7218:
    set32(c.r[17], 0u - 640u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C7220:
    set32(c.r[4], ld32((c.r[18].w[0] + 768u)));
    c.budget -= 1;
L_002C7224:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7248u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7248u) [[unlikely]] return; }
L_002C7248:
    set32(c.r[4], ld32((c.r[18].w[0] + 772u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7270u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7270u) [[unlikely]] return; }
L_002C7270:
    set32(c.r[4], ld32((c.r[18].w[0] + 776u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7298u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7298u) [[unlikely]] return; }
L_002C7298:
    set32(c.r[4], ld32((c.r[18].w[0] + 780u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72C0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C72C0u) [[unlikely]] return; }
L_002C72C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 784u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    set32(c.r[5], 0u + 10u);
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C72E8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C72E8u) [[unlikely]] return; }
L_002C72E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C7300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7330u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7330u) [[unlikely]] return; }
L_002C7330:
    set32(c.r[4], ld32((c.r[16].w[0] + 772u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7350u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7350u) [[unlikely]] return; }
L_002C7350:
    set32(c.r[4], ld32((c.r[16].w[0] + 776u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7370u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7370u) [[unlikely]] return; }
L_002C7370:
    set32(c.r[4], ld32((c.r[16].w[0] + 780u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7390u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7390u) [[unlikely]] return; }
L_002C7390:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C73B0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C73B0u) [[unlikely]] return; }
L_002C73B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C73C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002C7428; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002C741C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002C7410; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002C7404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 768u)));  if (t) { goto L_002C7434; } }
L_002C7404:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 480u);  if (t) { goto L_002C7430; } }
L_002C7410:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 480u);  if (t) { goto L_002C7430; } }
L_002C741C:
    set32(c.r[17], 0u - 640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002C7430; } }
L_002C7428:
    set32(c.r[17], 0u + 640u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C7430:
    set32(c.r[4], ld32((c.r[18].w[0] + 768u)));
    c.budget -= 1;
L_002C7434:
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7458u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7458u) [[unlikely]] return; }
L_002C7458:
    set32(c.r[4], ld32((c.r[18].w[0] + 772u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7480u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7480u) [[unlikely]] return; }
L_002C7480:
    set32(c.r[4], ld32((c.r[18].w[0] + 776u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74A8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C74A8u) [[unlikely]] return; }
L_002C74A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 780u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74D0u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C74D0u) [[unlikely]] return; }
L_002C74D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 784u)));
    c.f[1] = c.r[17].w[0];
    c.f[0] = c.r[16].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C74F8u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C74F8u) [[unlikely]] return; }
L_002C74F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C7510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7534u) [[unlikely]] return; }
L_002C7534:
    set32(c.r[4], ld32((c.r[16].w[0] + 772u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7548u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7548u) [[unlikely]] return; }
L_002C7548:
    set32(c.r[4], ld32((c.r[16].w[0] + 776u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C755Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C755Cu) [[unlikely]] return; }
L_002C755C:
    set32(c.r[4], ld32((c.r[16].w[0] + 780u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7570u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7570u) [[unlikely]] return; }
L_002C7570:
    set32(c.r[4], ld32((c.r[16].w[0] + 784u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7584u) [[unlikely]] return; }
L_002C7584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C75A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 912u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75D8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0071(c, 50u, depth + 1u); else { c.pc = 0x002C4C70u; return; } if (c.pc != 0x002C75D8u) [[unlikely]] return; }
L_002C75D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10288u);
    set32(c.r[2], c.r[2].w[0] + 10376u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 315u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C75F8u); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C75F8u) [[unlikely]] return; }
L_002C75F8:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 56u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7620u); st32((c.r[18].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7620u) [[unlikely]] return; }
L_002C7620:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7630u); st128((c.r[18].w[0] + 80u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7630u) [[unlikely]] return; }
L_002C7630:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7640u); st128((c.r[18].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7640u) [[unlikely]] return; }
L_002C7640:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 313u);
    set32(c.r[2], 0u + 465u);
    st128((c.r[18].w[0] + 112u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[18].w[0] + 136u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26504u));
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7688u); st32((c.r[18].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C7688u) [[unlikely]] return; }
L_002C7688:
    st32((c.r[18].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 160u);
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 180u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 184u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76B0u); st32((c.r[18].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C76B0u) [[unlikely]] return; }
L_002C76B0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76C0u); st128((c.r[18].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C76C0u) [[unlikely]] return; }
L_002C76C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C76D0u); st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C76D0u) [[unlikely]] return; }
L_002C76D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 465u);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[18].w[0] + 240u), c.f[0]);
    st32((c.r[18].w[0] + 244u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[18].w[0] + 248u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26512u));
    st32((c.r[18].w[0] + 252u), c.f[0]);
    st32((c.r[18].w[0] + 256u), 0u);
    c.budget -= 17;
L_002C7714:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 272u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7714u | kUnwind; return; } goto L_002C7714; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 272u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 312u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7758u); st32((c.r[18].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7758u) [[unlikely]] return; }
L_002C7758:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7768u); st128((c.r[18].w[0] + 320u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7768u) [[unlikely]] return; }
L_002C7768:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7778u); st128((c.r[18].w[0] + 336u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7778u) [[unlikely]] return; }
L_002C7778:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 352u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 41u);
    st32((c.r[18].w[0] + 368u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 372u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 376u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    st32((c.r[18].w[0] + 380u), c.f[0]);
    st32((c.r[18].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 15;
L_002C77B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77BCu); set32(c.r[4], 0u + 338u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C77BCu) [[unlikely]] return; }
L_002C77BC:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C77D0u); st32((c.r[3].w[0] + 400u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C77D0u) [[unlikely]] return; }
L_002C77D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 528u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C77B4u | kUnwind; return; } goto L_002C77B4; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 432u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 400u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 440u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7814u); st32((c.r[18].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7814u) [[unlikely]] return; }
L_002C7814:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7824u); st128((c.r[18].w[0] + 448u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7824u) [[unlikely]] return; }
L_002C7824:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7834u); st128((c.r[18].w[0] + 464u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7834u) [[unlikely]] return; }
L_002C7834:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 480u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 41u);
    st32((c.r[18].w[0] + 496u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 500u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 504u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 508u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 12;
L_002C7864:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7878u); st32((c.r[2].w[0] + 656u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7878u) [[unlikely]] return; }
L_002C7878:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 784u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7864u | kUnwind; return; } goto L_002C7864; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 688u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 692u), c.r[2].w[0]);
    set32(c.r[3], c.r[18].w[0] + 656u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78BCu); st32((c.r[18].w[0] + 700u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C78BCu) [[unlikely]] return; }
L_002C78BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78CCu); st128((c.r[18].w[0] + 704u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C78CCu) [[unlikely]] return; }
L_002C78CC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C78DCu); st128((c.r[18].w[0] + 720u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C78DCu) [[unlikely]] return; }
L_002C78DC:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42BA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 736u) & ~15u, c.r[6]);
    set32(c.r[2], 0u + 41u);
    st32((c.r[18].w[0] + 752u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 756u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 760u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 764u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 768u), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 3);
    c.budget -= 13;
L_002C7910:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 912u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 913u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 914u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 915u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 916u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 3);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7910u | kUnwind; return; } goto L_002C7910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7940u); set32(c.r[4], 0u + 338u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x002C7940u) [[unlikely]] return; }
L_002C7940:
    set32(c.r[4], ld32((c.r[18].w[0] + 432u)));
    c.f[12] = ld32((c.r[18].w[0] + 504u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7950u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBC60u; return; } if (c.pc != 0x002C7950u) [[unlikely]] return; }
L_002C7950:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], 0u + 208u);
    c.f[0] = ld32((c.r[18].w[0] + 496u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C796Cu); st32((c.r[18].w[0] + 752u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C796Cu) [[unlikely]] return; }
L_002C796C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C7984; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7984u); set32(c.r[7], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C7984u) [[unlikely]] return; }
L_002C7984:
    st32((c.r[18].w[0] + 976u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7990u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C7990u) [[unlikely]] return; }
L_002C7990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C79A8; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79A8u); set32(c.r[7], c.r[18].w[0] + 176u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C79A8u) [[unlikely]] return; }
L_002C79A8:
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79B4u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C79B4u) [[unlikely]] return; }
L_002C79B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C79CC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79CCu); set32(c.r[7], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C79CCu) [[unlikely]] return; }
L_002C79CC:
    st32((c.r[18].w[0] + 984u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79D8u); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C79D8u) [[unlikely]] return; }
L_002C79D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C79F0; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79F0u); set32(c.r[7], c.r[18].w[0] + 432u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C79F0u) [[unlikely]] return; }
L_002C79F0:
    st32((c.r[18].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C79FCu); set32(c.r[4], 0u + 208u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C79FCu) [[unlikely]] return; }
L_002C79FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C7A14; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A14u); set32(c.r[7], c.r[18].w[0] + 688u);  if (depth < kMaxDepth) unit_006E(c, 452u, depth + 1u); else { c.pc = 0x002BB370u; return; } if (c.pc != 0x002C7A14u) [[unlikely]] return; }
L_002C7A14:
    st32((c.r[18].w[0] + 992u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A20u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002C7A20u) [[unlikely]] return; }
L_002C7A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002C7A38; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A38u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x002C7A38u) [[unlikely]] return; }
L_002C7A38:
    st32((c.r[18].w[0] + 996u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002C7A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A48u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7A48u) [[unlikely]] return; }
L_002C7A48:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[19], c.r[20].w[0] << 4);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7A60u); st128((c.r[2].w[0] + 528u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002C7A60u) [[unlikely]] return; }
L_002C7A60:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 784u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C7A40u | kUnwind; return; } goto L_002C7A40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A30000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 984u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429A0000u);
    set32(c.r[5], c.r[18].w[0] + 528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], c.r[18].w[0] + 784u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[6].w[0] + 192u), c.r[7].w[0]);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 988u)));
    st32((c.r[2].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 992u)));
    st32((c.r[2].w[0] + 196u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 996u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7ACCu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7ACCu) [[unlikely]] return; }
L_002C7ACC:
    set32(c.r[2], ld32((c.r[18].w[0] + 996u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    set32(c.r[2], ld32((c.r[18].w[0] + 996u)));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 26520u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B04u); st32((c.r[2].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0071(c, 438u, depth + 1u); else { c.pc = 0x002C7E50u; return; } if (c.pc != 0x002C7B04u) [[unlikely]] return; }
L_002C7B04:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C7B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C7C78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 10288u);
    set32(c.r[2], c.r[2].w[0] + 10376u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 976u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7B88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7B88; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7B88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7B88u) [[unlikely]] return; }
L_002C7B88:
    st32((c.r[17].w[0] + 976u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 980u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7BB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7BB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BB0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7BB0u) [[unlikely]] return; }
L_002C7BB0:
    st32((c.r[17].w[0] + 980u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7BD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7BD8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7BD8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7BD8u) [[unlikely]] return; }
L_002C7BD8:
    st32((c.r[17].w[0] + 984u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 988u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7C00u) [[unlikely]] return; }
L_002C7C00:
    st32((c.r[17].w[0] + 988u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 992u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C28; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7C28u) [[unlikely]] return; }
L_002C7C28:
    st32((c.r[17].w[0] + 992u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 996u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7C50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7C50u) [[unlikely]] return; }
L_002C7C50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C60u); st32((c.r[17].w[0] + 996u), 0u);  if (depth < kMaxDepth) unit_0071(c, 53u, depth + 1u); else { c.pc = 0x002C4CF0u; return; } if (c.pc != 0x002C7C60u) [[unlikely]] return; }
L_002C7C60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002C7C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7C78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002C7C78u) [[unlikely]] return; }
L_002C7C78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C7C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7C90:
    set32(c.r[4], ld32((c.r[4].w[0] + 984u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { set32(c.r[6], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBBD0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 481u, depth); }
L_002C7CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 976u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002C7CDC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7CD0u) [[unlikely]] return; }
L_002C7CD0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002C7CDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7D08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7CF8u) [[unlikely]] return; }
L_002C7CF8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C7D08:
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7D34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7D24u) [[unlikely]] return; }
L_002C7D24:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C7D34:
    set32(c.r[4], ld32((c.r[17].w[0] + 988u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002C7D60; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7D50u) [[unlikely]] return; }
L_002C7D50:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C7D60:
    set32(c.r[2], ld32((c.r[17].w[0] + 992u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002C7D90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 988u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7D80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7D80u) [[unlikely]] return; }
L_002C7D80:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002C7D90:
    set32(c.r[4], ld32((c.r[17].w[0] + 996u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C7DC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7DACu) [[unlikely]] return; }
L_002C7DAC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_002C7DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7DFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 58u, depth + 1u); else { c.pc = 0x002C4DB0u; return; } if (c.pc != 0x002C7DFCu) [[unlikely]] return; }
L_002C7DFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002C7E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E10u);  if (depth < kMaxDepth) unit_006E(c, 483u, depth + 1u); else { c.pc = 0x002BBC10u; return; } if (c.pc != 0x002C7E10u) [[unlikely]] return; }
L_002C7E10:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002C7E30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 984u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E30u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_006E(c, 481u, depth + 1u); else { c.pc = 0x002BBBD0u; return; } if (c.pc != 0x002C7E30u) [[unlikely]] return; }
L_002C7E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C7E50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7E90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 92u, depth + 1u); else { c.pc = 0x002B8670u; return; } if (c.pc != 0x002C7E90u) [[unlikely]] return; }
L_002C7E90:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], 0u + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002C7EF0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 984u)));
    set32(c.r[19], 0u + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 15584u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7ECCu); set32(c.r[23], c.r[23].w[0] - 15616u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7ECCu) [[unlikely]] return; }
L_002C7ECC:
    set32(c.r[4], ld32((c.r[21].w[0] + 996u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 15504u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7EE8u); set32(c.r[6], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7EE8u) [[unlikely]] return; }
L_002C7EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002C7F34; } }
L_002C7EF0:
    set32(c.r[4], ld32((c.r[21].w[0] + 984u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 15512u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F14u); set32(c.r[23], c.r[23].w[0] - 15520u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7F14u) [[unlikely]] return; }
L_002C7F14:
    set32(c.r[4], ld32((c.r[21].w[0] + 996u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 24112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F30u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C7F30u) [[unlikely]] return; }
L_002C7F30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C7F34:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002C7F38:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_002C7FF4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 12u, depth + 1u); else { c.pc = 0x002B8150u; return; } if (c.pc != 0x002C7F5Cu) [[unlikely]] return; }
L_002C7F5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F74u); st32((c.r[3].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002C7F74u) [[unlikely]] return; }
L_002C7F74:
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 26728u);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[30], c.r[16].w[0] + 1000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7F94u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002C7F94u) [[unlikely]] return; }
L_002C7F94:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FACu); st32((c.r[2].w[0] + 656u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002C7FACu) [[unlikely]] return; }
L_002C7FAC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { [[clang::musttail]] return unit_0072(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FC0u); set32(c.r[5], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002C7FC0u) [[unlikely]] return; }
L_002C7FC0:
    set32(c.r[4], c.r[16].w[0] + 528u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FD0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002C7FD0u) [[unlikely]] return; }
L_002C7FD0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FDCu); set32(c.r[5], c.r[16].w[0] + 784u);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002C7FDCu) [[unlikely]] return; }
L_002C7FDC:
    set32(c.r[4], c.r[16].w[0] + 784u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C7FECu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002C7FECu) [[unlikely]] return; }
L_002C7FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_0072(c, 2u, depth); } }
L_002C7FF4:
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 272u), 0u);
    st32((c.r[3].w[0] + 656u), 0u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0072(c, 1u, depth);
}

}
