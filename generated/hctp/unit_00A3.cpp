#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A3[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30,
    0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0,
    166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0038C000;
    case 2u: goto L_0038C004;
    case 3u: goto L_0038C088;
    case 4u: goto L_0038C0A0;
    case 5u: goto L_0038C0B8;
    case 6u: goto L_0038C0D0;
    case 7u: goto L_0038C0D8;
    case 8u: goto L_0038C0E0;
    case 9u: goto L_0038C0E4;
    case 10u: goto L_0038C100;
    case 11u: goto L_0038C134;
    case 12u: goto L_0038C184;
    case 13u: goto L_0038C190;
    case 14u: goto L_0038C19C;
    case 15u: goto L_0038C1A8;
    case 16u: goto L_0038C1B8;
    case 17u: goto L_0038C1C4;
    case 18u: goto L_0038C224;
    case 19u: goto L_0038C290;
    case 20u: goto L_0038C2A0;
    case 21u: goto L_0038C2AC;
    case 22u: goto L_0038C2B8;
    case 23u: goto L_0038C2C4;
    case 24u: goto L_0038C2D4;
    case 25u: goto L_0038C2DC;
    case 26u: goto L_0038C348;
    case 27u: goto L_0038C358;
    case 28u: goto L_0038C364;
    case 29u: goto L_0038C370;
    case 30u: goto L_0038C37C;
    case 31u: goto L_0038C38C;
    case 32u: goto L_0038C394;
    case 33u: goto L_0038C400;
    case 34u: goto L_0038C414;
    case 35u: goto L_0038C420;
    case 36u: goto L_0038C42C;
    case 37u: goto L_0038C438;
    case 38u: goto L_0038C448;
    case 39u: goto L_0038C450;
    case 40u: goto L_0038C4BC;
    case 41u: goto L_0038C4CC;
    case 42u: goto L_0038C4D8;
    case 43u: goto L_0038C4E4;
    case 44u: goto L_0038C4F0;
    case 45u: goto L_0038C508;
    case 46u: goto L_0038C568;
    case 47u: goto L_0038C570;
    case 48u: goto L_0038C584;
    case 49u: goto L_0038C598;
    case 50u: goto L_0038C5B4;
    case 51u: goto L_0038C5D0;
    case 52u: goto L_0038C600;
    case 53u: goto L_0038C610;
    case 54u: goto L_0038C6F0;
    case 55u: goto L_0038C710;
    case 56u: goto L_0038C730;
    case 57u: goto L_0038C7A4;
    case 58u: goto L_0038C7C0;
    case 59u: goto L_0038C7E0;
    case 60u: goto L_0038C854;
    case 61u: goto L_0038C870;
    case 62u: goto L_0038C890;
    case 63u: goto L_0038C904;
    case 64u: goto L_0038C920;
    case 65u: goto L_0038C93C;
    case 66u: goto L_0038C948;
    case 67u: goto L_0038C95C;
    case 68u: goto L_0038C978;
    case 69u: goto L_0038CA44;
    case 70u: goto L_0038CCC0;
    case 71u: goto L_0038CCE4;
    case 72u: goto L_0038CCF4;
    case 73u: goto L_0038CD00;
    case 74u: goto L_0038CD0C;
    case 75u: goto L_0038CD18;
    case 76u: goto L_0038CD64;
    case 77u: goto L_0038CDC4;
    case 78u: goto L_0038CE24;
    case 79u: goto L_0038CE84;
    case 80u: goto L_0038CEE4;
    case 81u: goto L_0038CFF0;
    case 82u: goto L_0038D000;
    case 83u: goto L_0038D024;
    case 84u: goto L_0038D03C;
    case 85u: goto L_0038D094;
    case 86u: goto L_0038D09C;
    case 87u: goto L_0038D0B0;
    case 88u: goto L_0038D0DC;
    case 89u: goto L_0038D0F0;
    case 90u: goto L_0038D104;
    case 91u: goto L_0038D118;
    case 92u: goto L_0038D12C;
    case 93u: goto L_0038D140;
    case 94u: goto L_0038D154;
    case 95u: goto L_0038D16C;
    case 96u: goto L_0038D180;
    case 97u: goto L_0038D194;
    case 98u: goto L_0038D1AC;
    case 99u: goto L_0038D1C0;
    case 100u: goto L_0038D1D8;
    case 101u: goto L_0038D1F4;
    case 102u: goto L_0038D208;
    case 103u: goto L_0038D218;
    case 104u: goto L_0038D228;
    case 105u: goto L_0038D238;
    case 106u: goto L_0038D24C;
    case 107u: goto L_0038D254;
    case 108u: goto L_0038D264;
    case 109u: goto L_0038D270;
    case 110u: goto L_0038D29C;
    case 111u: goto L_0038D2B0;
    case 112u: goto L_0038D2D0;
    case 113u: goto L_0038D2E0;
    case 114u: goto L_0038D2F4;
    case 115u: goto L_0038D310;
    case 116u: goto L_0038D33C;
    case 117u: goto L_0038D350;
    case 118u: goto L_0038D360;
    case 119u: goto L_0038D378;
    case 120u: goto L_0038D394;
    case 121u: goto L_0038D3C0;
    case 122u: goto L_0038D3D4;
    case 123u: goto L_0038D62C;
    case 124u: goto L_0038D634;
    case 125u: goto L_0038D648;
    case 126u: goto L_0038D660;
    case 127u: goto L_0038D680;
    case 128u: goto L_0038D6B4;
    case 129u: goto L_0038D6C0;
    case 130u: goto L_0038D734;
    case 131u: goto L_0038D740;
    case 132u: goto L_0038D74C;
    case 133u: goto L_0038D758;
    case 134u: goto L_0038D7B8;
    case 135u: goto L_0038D7C0;
    case 136u: goto L_0038D7E0;
    case 137u: goto L_0038D808;
    case 138u: goto L_0038D848;
    case 139u: goto L_0038D87C;
    case 140u: goto L_0038D8C0;
    case 141u: goto L_0038D930;
    case 142u: goto L_0038D938;
    case 143u: goto L_0038D964;
    case 144u: goto L_0038D98C;
    case 145u: goto L_0038D9A8;
    case 146u: goto L_0038D9B4;
    case 147u: goto L_0038D9C0;
    case 148u: goto L_0038D9CC;
    case 149u: goto L_0038D9E4;
    case 150u: goto L_0038DA10;
    case 151u: goto L_0038DA28;
    case 152u: goto L_0038DA5C;
    case 153u: goto L_0038DA70;
    case 154u: goto L_0038DA80;
    case 155u: goto L_0038DA94;
    case 156u: goto L_0038DAB0;
    case 157u: goto L_0038DACC;
    case 158u: goto L_0038DAE8;
    case 159u: goto L_0038DAFC;
    case 160u: goto L_0038DB0C;
    case 161u: goto L_0038DB1C;
    case 162u: goto L_0038DB2C;
    case 163u: goto L_0038DB40;
    case 164u: goto L_0038DB70;
    case 165u: goto L_0038DB78;
    case 166u: goto L_0038DB80;
    case 167u: goto L_0038DB88;
    case 168u: goto L_0038DB98;
    case 169u: goto L_0038DC44;
    case 170u: goto L_0038DC4C;
    case 171u: goto L_0038DC60;
    case 172u: goto L_0038DCA0;
    case 173u: goto L_0038DCB4;
    case 174u: goto L_0038DCD0;
    case 175u: goto L_0038DD08;
    case 176u: goto L_0038DD10;
    case 177u: goto L_0038DD30;
    case 178u: goto L_0038DD44;
    case 179u: goto L_0038DD60;
    case 180u: goto L_0038DD98;
    case 181u: goto L_0038DDA0;
    case 182u: goto L_0038DDA8;
    case 183u: goto L_0038DDB4;
    case 184u: goto L_0038DDD0;
    case 185u: goto L_0038DDEC;
    case 186u: goto L_0038DE00;
    case 187u: goto L_0038DE20;
    case 188u: goto L_0038DE3C;
    case 189u: goto L_0038DECC;
    case 190u: goto L_0038DED8;
    case 191u: goto L_0038DEF0;
    case 192u: goto L_0038DF58;
    case 193u: goto L_0038DF6C;
    case 194u: goto L_0038DFB0;
    case 195u: goto L_0038E000;
    case 196u: goto L_0038E058;
    case 197u: goto L_0038E084;
    case 198u: goto L_0038E094;
    case 199u: goto L_0038E0A4;
    case 200u: goto L_0038E0CC;
    case 201u: goto L_0038E0EC;
    case 202u: goto L_0038E110;
    case 203u: goto L_0038E140;
    case 204u: goto L_0038E1B8;
    case 205u: goto L_0038E1CC;
    case 206u: goto L_0038E254;
    case 207u: goto L_0038E290;
    case 208u: goto L_0038E2A4;
    case 209u: goto L_0038E2BC;
    case 210u: goto L_0038E2D0;
    case 211u: goto L_0038E2E4;
    case 212u: goto L_0038E2FC;
    case 213u: goto L_0038E310;
    case 214u: goto L_0038E320;
    case 215u: goto L_0038E334;
    case 216u: goto L_0038E34C;
    case 217u: goto L_0038E360;
    case 218u: goto L_0038E374;
    case 219u: goto L_0038E38C;
    case 220u: goto L_0038E3A0;
    case 221u: goto L_0038E3B0;
    case 222u: goto L_0038E3C0;
    case 223u: goto L_0038E3D0;
    case 224u: goto L_0038E3E0;
    case 225u: goto L_0038E3F0;
    case 226u: goto L_0038E400;
    case 227u: goto L_0038E410;
    case 228u: goto L_0038E42C;
    case 229u: goto L_0038E450;
    case 230u: goto L_0038E480;
    case 231u: goto L_0038E498;
    case 232u: goto L_0038E4B0;
    case 233u: goto L_0038E4E0;
    case 234u: goto L_0038E518;
    case 235u: goto L_0038E534;
    case 236u: goto L_0038E558;
    case 237u: goto L_0038E574;
    case 238u: goto L_0038E598;
    case 239u: goto L_0038E5B4;
    case 240u: goto L_0038E5F0;
    case 241u: goto L_0038E610;
    case 242u: goto L_0038E630;
    case 243u: goto L_0038E650;
    case 244u: goto L_0038E670;
    case 245u: goto L_0038E690;
    case 246u: goto L_0038E6B0;
    case 247u: goto L_0038E6D0;
    case 248u: goto L_0038E6F4;
    case 249u: goto L_0038E720;
    case 250u: goto L_0038E734;
    case 251u: goto L_0038E748;
    case 252u: goto L_0038E758;
    case 253u: goto L_0038E768;
    case 254u: goto L_0038E774;
    case 255u: goto L_0038E790;
    case 256u: goto L_0038E7CC;
    case 257u: goto L_0038E7E8;
    case 258u: goto L_0038E804;
    case 259u: goto L_0038E820;
    case 260u: goto L_0038E838;
    case 261u: goto L_0038E850;
    case 262u: goto L_0038E870;
    case 263u: goto L_0038E880;
    case 264u: goto L_0038E890;
    case 265u: goto L_0038E8A0;
    case 266u: goto L_0038E8C0;
    case 267u: goto L_0038E8D0;
    case 268u: goto L_0038E8E0;
    case 269u: goto L_0038E8F0;
    case 270u: goto L_0038E924;
    case 271u: goto L_0038E954;
    case 272u: goto L_0038E970;
    case 273u: goto L_0038E978;
    case 274u: goto L_0038E990;
    case 275u: goto L_0038E9F0;
    case 276u: goto L_0038EA20;
    case 277u: goto L_0038EA54;
    case 278u: goto L_0038EA5C;
    case 279u: goto L_0038EA88;
    case 280u: goto L_0038EAA0;
    case 281u: goto L_0038EAD0;
    case 282u: goto L_0038EB10;
    case 283u: goto L_0038EB3C;
    case 284u: goto L_0038EB50;
    case 285u: goto L_0038EB70;
    case 286u: goto L_0038EBA8;
    case 287u: goto L_0038EBDC;
    case 288u: goto L_0038EBE4;
    case 289u: goto L_0038EC34;
    case 290u: goto L_0038EC3C;
    case 291u: goto L_0038EC54;
    case 292u: goto L_0038EC74;
    case 293u: goto L_0038EC90;
    case 294u: goto L_0038ECD4;
    case 295u: goto L_0038ECEC;
    case 296u: goto L_0038ED08;
    case 297u: goto L_0038ED18;
    case 298u: goto L_0038ED24;
    case 299u: goto L_0038ED3C;
    case 300u: goto L_0038ED5C;
    case 301u: goto L_0038ED78;
    case 302u: goto L_0038EDBC;
    case 303u: goto L_0038EDD4;
    case 304u: goto L_0038EDF0;
    case 305u: goto L_0038EE00;
    case 306u: goto L_0038EE18;
    case 307u: goto L_0038EE38;
    case 308u: goto L_0038EE50;
    case 309u: goto L_0038EE70;
    case 310u: goto L_0038EE8C;
    case 311u: goto L_0038EED4;
    case 312u: goto L_0038EEE4;
    case 313u: goto L_0038EF1C;
    case 314u: goto L_0038EF28;
    case 315u: goto L_0038EF40;
    case 316u: goto L_0038EF60;
    case 317u: goto L_0038EF7C;
    case 318u: goto L_0038EFC4;
    case 319u: goto L_0038F000;
    case 320u: goto L_0038F044;
    case 321u: goto L_0038F054;
    case 322u: goto L_0038F064;
    case 323u: goto L_0038F074;
    case 324u: goto L_0038F080;
    case 325u: goto L_0038F09C;
    case 326u: goto L_0038F0A8;
    case 327u: goto L_0038F0C0;
    case 328u: goto L_0038F108;
    case 329u: goto L_0038F118;
    case 330u: goto L_0038F128;
    case 331u: goto L_0038F138;
    case 332u: goto L_0038F150;
    case 333u: goto L_0038F1C0;
    case 334u: goto L_0038F220;
    case 335u: goto L_0038F240;
    case 336u: goto L_0038F250;
    case 337u: goto L_0038F27C;
    case 338u: goto L_0038F2FC;
    case 339u: goto L_0038F308;
    case 340u: goto L_0038F3F0;
    case 341u: goto L_0038F440;
    case 342u: goto L_0038F4C0;
    case 343u: goto L_0038F4CC;
    case 344u: goto L_0038F660;
    case 345u: goto L_0038F694;
    case 346u: goto L_0038F6C8;
    case 347u: goto L_0038F780;
    case 348u: goto L_0038F790;
    case 349u: goto L_0038F950;
    case 350u: goto L_0038F984;
    case 351u: goto L_0038F9C8;
    case 352u: goto L_0038FAC4;
    case 353u: goto L_0038FAD8;
    case 354u: goto L_0038FD78;
    case 355u: goto L_0038FD88;
    case 356u: goto L_0038FF50;
    case 357u: goto L_0038FF64;
    case 358u: goto L_0038FF84;
    case 359u: goto L_0038FF8C;
    default: bad_entry(c, 0x0038C000u); return;
    }
L_0038C000:
    c.f[15] = c.f[14];
    c.budget -= 1;
L_0038C004:
    c.f[2] = ld32((c.r[16].w[0] + 3140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[21] = fp::mul(c.f[21], c.f[2]);
    c.f[20] = fp::mul(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 3140u), c.f[1]);  if (t) { goto L_0038C038; } }
    st32((c.r[16].w[0] + 3140u), c.f[0]);
    c.budget -= 1;
L_0038C038:
    set32(c.r[4], ld32((c.r[16].w[0] + 3020u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2984u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038C0C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038C0A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038C090; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038C078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C0E0; } }
L_0038C078:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C088u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A3(c, 51u, depth + 1u); else { c.pc = 0x0038C5D0u; return; } if (c.pc != 0x0038C088u) [[unlikely]] return; }
L_0038C088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C0E0; } }
L_0038C090:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C0A0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A3(c, 55u, depth + 1u); else { c.pc = 0x0038C710u; return; } if (c.pc != 0x0038C0A0u) [[unlikely]] return; }
L_0038C0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C0E0; } }
L_0038C0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C0B8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A3(c, 58u, depth + 1u); else { c.pc = 0x0038C7C0u; return; } if (c.pc != 0x0038C0B8u) [[unlikely]] return; }
L_0038C0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C0E0; } }
L_0038C0C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C0D0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00A3(c, 61u, depth + 1u); else { c.pc = 0x0038C870u; return; } if (c.pc != 0x0038C0D0u) [[unlikely]] return; }
L_0038C0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C0E0; } }
L_0038C0D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 3140u), c.r[3].w[0]);
    c.budget -= 2;
L_0038C0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0038C0E4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038C100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 3020u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 2840u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 2796u), 0u);
    st8((c.r[4].w[0] + 2792u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C134u); set32(c.r[4], c.r[18].w[0] + 2736u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0038C134u) [[unlikely]] return; }
L_0038C134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    st32((c.r[18].w[0] + 3140u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2984u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038C408; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_0038C350; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_0038C298; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_0038C17C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 96u);  if (t) { goto L_0038C4C4; } }
L_0038C17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C184u);  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0038C184u) [[unlikely]] return; }
L_0038C184:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C190u) [[unlikely]] return; }
L_0038C190:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C19Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C19Cu) [[unlikely]] return; }
L_0038C19C:
    set32(c.r[4], c.r[18].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C1A8u) [[unlikely]] return; }
L_0038C1A8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 2848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1B8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x0038C1B8u) [[unlikely]] return; }
L_0038C1B8:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038C1C4u) [[unlikely]] return; }
L_0038C1C4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C1DC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C1DC:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C1F4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C1F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[2] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C224u); st32((c.r[18].w[0] + 2880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038C224u) [[unlikely]] return; }
L_0038C224:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C23C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C23C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C254; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[18].w[0] + 2888u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C290u); st32((c.r[18].w[0] + 2884u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038C290u) [[unlikely]] return; }
L_0038C290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C50C; } }
L_0038C298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0038C2A0u) [[unlikely]] return; }
L_0038C2A0:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C2ACu) [[unlikely]] return; }
L_0038C2AC:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C2B8u) [[unlikely]] return; }
L_0038C2B8:
    set32(c.r[4], c.r[18].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C2C4u) [[unlikely]] return; }
L_0038C2C4:
    set32(c.r[4], c.r[18].w[0] + 2848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x0038C2D4u) [[unlikely]] return; }
L_0038C2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2DCu); set32(c.r[4], c.r[18].w[0] + 752u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C2DCu) [[unlikely]] return; }
L_0038C2DC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C2F4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C2F4:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C30C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 2888u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C348u); st32((c.r[18].w[0] + 2880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038C348u) [[unlikely]] return; }
L_0038C348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C50C; } }
L_0038C350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C358u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0038C358u) [[unlikely]] return; }
L_0038C358:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C364u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C364u) [[unlikely]] return; }
L_0038C364:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C370u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C370u) [[unlikely]] return; }
L_0038C370:
    set32(c.r[4], c.r[18].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C37Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C37Cu) [[unlikely]] return; }
L_0038C37C:
    set32(c.r[4], c.r[18].w[0] + 2848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C38Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x0038C38Cu) [[unlikely]] return; }
L_0038C38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C394u); set32(c.r[4], c.r[18].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C394u) [[unlikely]] return; }
L_0038C394:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C3AC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C3AC:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C3C4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 2888u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C400u); st32((c.r[18].w[0] + 2880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038C400u) [[unlikely]] return; }
L_0038C400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C50C; } }
L_0038C408:
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C414u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0038C414u) [[unlikely]] return; }
L_0038C414:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C420u) [[unlikely]] return; }
L_0038C420:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C42Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C42Cu) [[unlikely]] return; }
L_0038C42C:
    set32(c.r[4], c.r[18].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C438u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C438u) [[unlikely]] return; }
L_0038C438:
    set32(c.r[4], c.r[18].w[0] + 2848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C448u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00384520u; return; } if (c.pc != 0x0038C448u) [[unlikely]] return; }
L_0038C448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C450u); set32(c.r[4], c.r[18].w[0] + 2064u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C450u) [[unlikely]] return; }
L_0038C450:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C468; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C468:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C480; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 2888u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C4BCu); st32((c.r[18].w[0] + 2880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038C4BCu) [[unlikely]] return; }
L_0038C4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C50C; } }
L_0038C4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C4CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 157u, depth + 1u); else { c.pc = 0x003896D0u; return; } if (c.pc != 0x0038C4CCu) [[unlikely]] return; }
L_0038C4CC:
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C4D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C4D8u) [[unlikely]] return; }
L_0038C4D8:
    set32(c.r[4], c.r[18].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C4E4u) [[unlikely]] return; }
L_0038C4E4:
    set32(c.r[4], c.r[18].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 84u, depth + 1u); else { c.pc = 0x00388B10u; return; } if (c.pc != 0x0038C4F0u) [[unlikely]] return; }
L_0038C4F0:
    set32(c.r[4], c.r[18].w[0] + 2888u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C508u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 20u, depth + 1u); else { c.pc = 0x00384400u; return; } if (c.pc != 0x0038C508u) [[unlikely]] return; }
L_0038C508:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038C50C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038C5A0; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    st32((c.r[18].w[0] + 2848u), c.r[2].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 2852u), c.f[0]);
    st32((c.r[18].w[0] + 2856u), 0u);
    st32((c.r[18].w[0] + 2860u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 2876u)));
    c.f[12] = ld32((c.r[18].w[0] + 2848u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == 0ull; c.f[13] = ld32((c.r[18].w[0] + 2852u));  if (t) { goto L_0038C568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C568u);  if (depth < kMaxDepth) unit_0098(c, 160u, depth + 1u); else { c.pc = 0x00361C70u; return; } if (c.pc != 0x0038C568u) [[unlikely]] return; }
L_0038C568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C570u); set32(c.r[4], c.r[18].w[0] + 2848u);  if (depth < kMaxDepth) unit_00A1(c, 26u, depth + 1u); else { c.pc = 0x003844D0u; return; } if (c.pc != 0x0038C570u) [[unlikely]] return; }
L_0038C570:
    set32(c.r[4], ld32((c.r[18].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[18].w[0] + 2848u);  if (t) { goto L_0038C584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C584u);  if (depth < kMaxDepth) unit_0098(c, 141u, depth + 1u); else { c.pc = 0x00361940u; return; } if (c.pc != 0x0038C584u) [[unlikely]] return; }
L_0038C584:
    set32(c.r[4], ld32((c.r[18].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0038C5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C598u);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x0038C598u) [[unlikely]] return; }
L_0038C598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0038C5B8; } }
L_0038C5A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0038C5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C5B4u);  if (depth < kMaxDepth) unit_0098(c, 269u, depth + 1u); else { c.pc = 0x00362E60u; return; } if (c.pc != 0x0038C5B4u) [[unlikely]] return; }
L_0038C5B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0038C5B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038C5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C600u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038C600u) [[unlikely]] return; }
L_0038C600:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C610u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038C610u) [[unlikely]] return; }
L_0038C610:
    c.f[20] = fp::add(c.f[20], c.f[22]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[0], c.f[21]);  if (t) { goto L_0038C630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_0038C64C; } }
L_0038C630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C64C; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_0038C64C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038C680; } }
L_0038C668:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C680; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C680:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C698; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_0038C698:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C6B0; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_0038C6B0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 3036u), c.f[20]);  if (t) { goto L_0038C6C8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C6C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C6E4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C6E4:
    st32((c.r[16].w[0] + 3068u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C6F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038C6F0u) [[unlikely]] return; }
L_0038C6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038C710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C730u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C730u) [[unlikely]] return; }
L_0038C730:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038C768; } }
L_0038C750:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C768; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C768:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C780; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C780:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C798; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C798:
    st32((c.r[16].w[0] + 3052u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C7A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038C7A4u) [[unlikely]] return; }
L_0038C7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038C7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C7E0u); set32(c.r[4], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C7E0u) [[unlikely]] return; }
L_0038C7E0:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038C818; } }
L_0038C800:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C818; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C818:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C830; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C830:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C848; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C848:
    st32((c.r[16].w[0] + 3084u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038C854u) [[unlikely]] return; }
L_0038C854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038C870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C890u); set32(c.r[4], c.r[16].w[0] + 2064u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038C890u) [[unlikely]] return; }
L_0038C890:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038C8C8; } }
L_0038C8B0:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C8C8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C8C8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C8E0; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C8E0:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C8F8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038C8F8:
    st32((c.r[16].w[0] + 3100u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038C904u) [[unlikely]] return; }
L_0038C904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038C920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C93Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038C93Cu) [[unlikely]] return; }
L_0038C93C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031E6B0u; return; } if (c.pc != 0x0038C948u) [[unlikely]] return; }
L_0038C948:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C95Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0038C95Cu) [[unlikely]] return; }
L_0038C95C:
    c.r[16].d[0] = ld8((c.r[2].w[0] + 15u));
    set32(c.r[3], ld32((c.r[18].w[0] + 2904u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0038CA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C978u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0038C978u) [[unlikely]] return; }
L_0038C978:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1086u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038C9A0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038C9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);  if (t) { goto L_0038C9BC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038C9BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2940000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038C9F4; } }
    c.f[2] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0038C9F4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CA0C; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038CA0C:
    st32((c.r[18].w[0] + 3100u), c.f[2]);
    c.f[1] = ld32((c.r[18].w[0] + 3096u));
    c.f[0] = ld32((c.r[18].w[0] + 3088u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 7;
L_0038CA28:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[18].w[0] + 3120u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CA44u); st32((c.r[18].w[0] + 3136u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0087(c, 285u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x0038CA44u) [[unlikely]] return; }
L_0038CA44:
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 3104u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 3104u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0038CA6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 255u);  if (t) { goto L_0038CA78; } }
L_0038CA6C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038CA78; } }
    set32(c.r[3], c.r[3].w[0] - 255u);
    c.budget -= 1;
L_0038CA78:
    c.f[2] = ld32((c.r[18].w[0] + 3024u));
    c.f[1] = ld32((c.r[18].w[0] + 3028u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038CAB8; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CAA4; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CAA4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038CAD8; } }
L_0038CAB8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CAC8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CAC8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038CADC; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CAD8:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038CADC:
    c.f[0] = ld32((c.r[18].w[0] + 3032u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 3036u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = ld32((c.r[18].w[0] + 3040u));
    c.f[1] = ld32((c.r[18].w[0] + 3044u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038CB24; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CB10; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CB10:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038CB44; } }
L_0038CB24:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CB34; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CB34:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038CB48; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CB44:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038CB48:
    c.f[0] = ld32((c.r[18].w[0] + 3048u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 3052u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[18].w[0] + 3056u));
    c.f[1] = ld32((c.r[18].w[0] + 3060u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038CB90; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CB7C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CB7C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CBB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038CBB0; } }
L_0038CB90:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CBA0; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CBA0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038CBB4; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CBB0:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038CBB4:
    c.f[0] = ld32((c.r[18].w[0] + 3064u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 3068u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[2] = ld32((c.r[18].w[0] + 3072u));
    c.f[1] = ld32((c.r[18].w[0] + 3076u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038CBFC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CBE8; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CBE8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038CC1C; } }
L_0038CBFC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CC0C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CC0C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC1C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038CC1C:
    c.f[1] = ld32((c.r[18].w[0] + 3080u));
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[16].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 3084u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 3088u));
    c.f[0] = ld32((c.r[18].w[0] + 3092u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC70; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CC5C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038CC5C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0038CC90; } }
L_0038CC70:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CC80; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038CC80:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC90; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038CC90:
    c.f[0] = ld32((c.r[18].w[0] + 3096u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 3100u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0038CCC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 3036u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CCE4u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x0038CCE4u) [[unlikely]] return; }
L_0038CCE4:
    c.f[12] = ld32((c.r[16].w[0] + 3068u));
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CCF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x0038CCF4u) [[unlikely]] return; }
L_0038CCF4:
    c.f[12] = ld32((c.r[16].w[0] + 3052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD00u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038CD00u) [[unlikely]] return; }
L_0038CD00:
    c.f[12] = ld32((c.r[16].w[0] + 3084u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD0Cu); set32(c.r[4], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038CD0Cu) [[unlikely]] return; }
L_0038CD0C:
    c.f[12] = ld32((c.r[16].w[0] + 3100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD18u); set32(c.r[4], c.r[16].w[0] + 2064u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038CD18u) [[unlikely]] return; }
L_0038CD18:
    set32(c.r[3], ld32((c.r[16].w[0] + 3020u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 2984u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 2064u);  if (t) { goto L_0038CEDC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 1408u);  if (t) { goto L_0038CE7C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[16].w[0] + 752u);  if (t) { goto L_0038CE1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 96u);  if (t) { goto L_0038CD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 3036u));  if (t) { goto L_0038CF40; } }
L_0038CD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD64u);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038CD64u) [[unlikely]] return; }
L_0038CD64:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038CD7C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CD7C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CD94; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CD94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.f[2] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CDC4u); st32((c.r[16].w[0] + 2880u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 156u, depth + 1u); else { c.pc = 0x003896C0u; return; } if (c.pc != 0x0038CDC4u) [[unlikely]] return; }
L_0038CDC4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038CDDC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CDDC:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CDF4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2884u), c.r[2].w[0]);  if (t) { goto L_0038CF3C; } }
L_0038CE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CE24u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038CE24u) [[unlikely]] return; }
L_0038CE24:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038CE3C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CE3C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CE54; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CE54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2880u), c.r[2].w[0]);  if (t) { goto L_0038CF3C; } }
L_0038CE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CE84u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038CE84u) [[unlikely]] return; }
L_0038CE84:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038CE9C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CE9C:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CEB4; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CEB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2880u), c.r[2].w[0]);  if (t) { goto L_0038CF3C; } }
L_0038CEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CEE4u);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038CEE4u) [[unlikely]] return; }
L_0038CEE4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038CEFC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CEFC:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CF14; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038CF14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 2880u), c.r[2].w[0]);
    c.budget -= 10;
L_0038CF3C:
    c.f[2] = ld32((c.r[16].w[0] + 3036u));
    c.budget -= 1;
L_0038CF40:
    set32(c.r[2], ld32((c.r[16].w[0] + 3104u)));
    c.f[1] = ld32((c.r[16].w[0] + 3032u));
    c.f[0] = ld32((c.r[16].w[0] + 3024u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0038CF74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 255u);  if (t) { goto L_0038CF80; } }
L_0038CF74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038CF80; } }
    set32(c.r[2], c.r[2].w[0] - 255u);
    c.budget -= 1;
L_0038CF80:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 3052u));
    c.f[1] = ld32((c.r[16].w[0] + 3048u));
    c.f[0] = ld32((c.r[16].w[0] + 3040u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 3068u));
    c.f[1] = ld32((c.r[16].w[0] + 3064u));
    c.f[0] = ld32((c.r[16].w[0] + 3056u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 3084u));
    c.f[1] = ld32((c.r[16].w[0] + 3080u));
    c.f[0] = ld32((c.r[16].w[0] + 3072u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CFF0u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038CFF0u) [[unlikely]] return; }
L_0038CFF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 268u, depth + 1u); else { c.pc = 0x0031E2C0u; return; } if (c.pc != 0x0038D000u) [[unlikely]] return; }
L_0038D000:
    c.f[2] = ld32((c.r[16].w[0] + 3100u));
    c.f[1] = ld32((c.r[16].w[0] + 3096u));
    c.f[0] = ld32((c.r[16].w[0] + 3088u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D024u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 274u, depth + 1u); else { c.pc = 0x0031E3C0u; return; } if (c.pc != 0x0038D024u) [[unlikely]] return; }
L_0038D024:
    set32(c.r[4], ld32((c.r[16].w[0] + 2904u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 2064u);  if (t) { goto L_0038D09C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D03Cu);  if (depth < kMaxDepth) unit_00A2(c, 83u, depth + 1u); else { c.pc = 0x00388B00u; return; } if (c.pc != 0x0038D03Cu) [[unlikely]] return; }
L_0038D03C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0038D054; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D054:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D06C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2940000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D094u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0038D094u) [[unlikely]] return; }
L_0038D094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D09Cu); st8((c.r[2].w[0] + 1086u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0038D09Cu) [[unlikely]] return; }
L_0038D09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038D0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 2720u);
    set32(c.r[16], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D0DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 142u, depth + 1u); else { c.pc = 0x00385880u; return; } if (c.pc != 0x0038D0DCu) [[unlikely]] return; }
L_0038D0DC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3008u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 96u);  if (t) { goto L_0038D0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D0F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 123u, depth + 1u); else { c.pc = 0x003890F0u; return; } if (c.pc != 0x0038D0F0u) [[unlikely]] return; }
L_0038D0F0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3009u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 752u);  if (t) { goto L_0038D104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D104u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 67u, depth + 1u); else { c.pc = 0x00388820u; return; } if (c.pc != 0x0038D104u) [[unlikely]] return; }
L_0038D104:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3010u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1408u);  if (t) { goto L_0038D118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D118u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 67u, depth + 1u); else { c.pc = 0x00388820u; return; } if (c.pc != 0x0038D118u) [[unlikely]] return; }
L_0038D118:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3011u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 2064u);  if (t) { goto L_0038D12C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D12Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 67u, depth + 1u); else { c.pc = 0x00388820u; return; } if (c.pc != 0x0038D12Cu) [[unlikely]] return; }
L_0038D12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038D140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x0038BB20u; return; } if (c.pc != 0x0038D154u) [[unlikely]] return; }
L_0038D154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D16C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D16Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D16Cu) [[unlikely]] return; }
L_0038D16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D194u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x0038BB20u; return; } if (c.pc != 0x0038D194u) [[unlikely]] return; }
L_0038D194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D1AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D1ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D1ACu) [[unlikely]] return; }
L_0038D1AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D1D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0038D1D8u) [[unlikely]] return; }
L_0038D1D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2908u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0038D238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D1F4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038D1F4u) [[unlikely]] return; }
L_0038D1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038D208; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D208u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0038D208u) [[unlikely]] return; }
L_0038D208:
    st32((c.r[16].w[0] + 2908u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D218u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0038D218u) [[unlikely]] return; }
L_0038D218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D228u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0038D228u) [[unlikely]] return; }
L_0038D228:
    set32(c.r[4], ld32((c.r[16].w[0] + 2908u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D238u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0038D238u) [[unlikely]] return; }
L_0038D238:
    set32(c.r[4], ld32((c.r[16].w[0] + 2908u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D24Cu); set32(c.r[5], 0u + 171u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D24Cu) [[unlikely]] return; }
L_0038D24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D254u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0038D254u) [[unlikely]] return; }
L_0038D254:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0038D264u) [[unlikely]] return; }
L_0038D264:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0038D270u) [[unlikely]] return; }
L_0038D270:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 72u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D29Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038D29Cu) [[unlikely]] return; }
L_0038D29C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D2B0u);  if (depth < kMaxDepth) unit_0098(c, 259u, depth + 1u); else { c.pc = 0x00362CF0u; return; } if (c.pc != 0x0038D2B0u) [[unlikely]] return; }
L_0038D2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038D2D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_0038D2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D2F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0038D2F4u) [[unlikely]] return; }
L_0038D2F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 2908u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0038D314; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D310u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D310u) [[unlikely]] return; }
L_0038D310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0038D314:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D33Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038D33Cu) [[unlikely]] return; }
L_0038D33C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D350u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x0038D350u) [[unlikely]] return; }
L_0038D350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038D360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D378u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0038D378u) [[unlikely]] return; }
L_0038D378:
    set32(c.r[4], ld32((c.r[16].w[0] + 2908u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0038D398; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D394u); set32(c.r[5], 0u + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D394u) [[unlikely]] return; }
L_0038D394:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 1;
L_0038D398:
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 68u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D3C0u); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038D3C0u) [[unlikely]] return; }
L_0038D3C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2876u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D3D4u);  if (depth < kMaxDepth) unit_0098(c, 262u, depth + 1u); else { c.pc = 0x00362D60u; return; } if (c.pc != 0x0038D3D4u) [[unlikely]] return; }
L_0038D3D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 3120u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3104u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_0038D3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 255u);  if (t) { goto L_0038D3FC; } }
L_0038D3F0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038D3FC; } }
    set32(c.r[2], c.r[2].w[0] - 255u);
    c.budget -= 1;
L_0038D3FC:
    c.f[2] = ld32((c.r[16].w[0] + 3024u));
    c.f[1] = ld32((c.r[16].w[0] + 3028u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038D43C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D428; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D428:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038D45C; } }
L_0038D43C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D44C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D44C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038D460; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D45C:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038D460:
    c.f[0] = ld32((c.r[16].w[0] + 3032u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3036u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3124u));
    c.f[2] = ld32((c.r[16].w[0] + 3040u));
    c.f[1] = ld32((c.r[16].w[0] + 3044u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038D4A8; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D494; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D494:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038D4C8; } }
L_0038D4A8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D4B8; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D4B8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038D4CC; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D4C8:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038D4CC:
    c.f[0] = ld32((c.r[16].w[0] + 3048u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3052u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3128u));
    c.f[2] = ld32((c.r[16].w[0] + 3056u));
    c.f[1] = ld32((c.r[16].w[0] + 3060u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038D514; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D500; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D500:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038D534; } }
L_0038D514:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D524; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D524:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038D538; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D534:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038D538:
    c.f[0] = ld32((c.r[16].w[0] + 3064u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3068u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3132u));
    c.f[2] = ld32((c.r[16].w[0] + 3072u));
    c.f[1] = ld32((c.r[16].w[0] + 3076u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038D580; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D56C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D56C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038D5A0; } }
L_0038D580:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D590; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D590:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038D5A4; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D5A0:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038D5A4:
    c.f[0] = ld32((c.r[16].w[0] + 3080u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3084u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 3136u));
    c.f[2] = ld32((c.r[16].w[0] + 3088u));
    c.f[1] = ld32((c.r[16].w[0] + 3092u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038D5EC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D5D8; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D5D8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038D60C; } }
L_0038D5EC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D5FC; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038D5FC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038D610; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038D60C:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038D610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 3096u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D62Cu); st32((c.r[16].w[0] + 3100u), c.f[0]);  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038D62Cu) [[unlikely]] return; }
L_0038D62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D634u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038D634u) [[unlikely]] return; }
L_0038D634:
    set32(c.r[3], ld32((c.r[2].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038D660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D648u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0038D648u) [[unlikely]] return; }
L_0038D648:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 2904u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D660u); c.r[7].d[0] = c.r[2].d[0] & 15ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0038D660u) [[unlikely]] return; }
L_0038D660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038D680:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5312u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], 0u + 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D6B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0038D6B4u) [[unlikely]] return; }
L_0038D6B4:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D6C0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0038D6C0u) [[unlikely]] return; }
L_0038D6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 30272u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30124u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], 0u + 9u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.f[14] = ld32((c.r[1].w[0] - 416u));
    set32(c.r[5], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 800u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[7], 0u + 830u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[8], c.r[8].w[0] - 480u);
    set32(c.r[9], c.r[9].w[0] - 448u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D734u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0038D734u) [[unlikely]] return; }
L_0038D734:
    set32(c.r[4], c.r[20].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0038D740u) [[unlikely]] return; }
L_0038D740:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D74Cu); st32((c.r[20].w[0] + 240u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038D74Cu) [[unlikely]] return; }
L_0038D74C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D758u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038D758u) [[unlikely]] return; }
L_0038D758:
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[6], 0u + 30u);
    set32(c.r[5], 0u + 212u);
    set32(c.r[4], 0u + 148u);
    set32(c.r[3], 0u + 131u);
    st128((c.r[20].w[0] + 256u) & ~15u, c.r[7]);
    set32(c.r[2], 0u + 128u);
    ld128((c.r[16].w[0]) & ~15u, c.r[7]);
    st128((c.r[20].w[0] + 272u) & ~15u, c.r[7]);
    st32((c.r[20].w[0] + 308u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 304u), 0u);
    st32((c.r[20].w[0] + 316u), 0u);
    st8((c.r[20].w[0] + 312u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 256u) & ~15u, c.r[6]);
    st128((c.r[20].w[0] + 288u) & ~15u, c.r[6]);
    st32((c.r[20].w[0] + 536u), 0u);
    st8((c.r[20].w[0] + 540u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 541u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 542u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 253u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7B8u); st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038D7B8u) [[unlikely]] return; }
L_0038D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031E6B0u; return; } if (c.pc != 0x0038D7C0u) [[unlikely]] return; }
L_0038D7C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 252u);
    st128((c.r[20].w[0] + 544u) & ~15u, c.r[2]);
    mmi::paddub(c.r[2], c.r[2], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7E0u); st128((c.r[6].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0038D7E0u) [[unlikely]] return; }
L_0038D7E0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 248u));
    set32(c.r[17], c.r[29].w[0] + 249u);
    set32(c.r[16], c.r[29].w[0] + 250u);
    set32(c.r[19], 0u + 1u);
    st32((c.r[20].w[0] + 320u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st32((c.r[20].w[0] + 324u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 328u), c.r[2].w[0]);  if (t) { goto L_0038D868; } }
L_0038D808:
    set32(c.r[18], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 5392u);
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[29].w[0] + 252u);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D848u); st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0038D848u) [[unlikely]] return; }
L_0038D848:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 248u));
    set32(c.r[3], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[3].w[0] + 320u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st32((c.r[3].w[0] + 324u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[3].w[0] + 328u), c.r[2].w[0]);
    c.budget -= 8;
L_0038D868:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D808u | kUnwind; return; } goto L_0038D808; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D87C:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 464u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 500u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D87Cu | kUnwind; return; } goto L_0038D87C; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0038D8C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038D9E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 30272u);
    set32(c.r[3], c.r[3].w[0] - 30184u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30124u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D930; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D930u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D930u) [[unlikely]] return; }
L_0038D930:
    st32((c.r[18].w[0] + 240u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038D938:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 464u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 464u);  if (t) { goto L_0038D964; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D964; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D964u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D964u) [[unlikely]] return; }
L_0038D964:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 500u);  if (t) { goto L_0038D98C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D98C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D98Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D98Cu) [[unlikely]] return; }
L_0038D98C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D938u | kUnwind; return; } goto L_0038D938; } }
    set32(c.r[4], c.r[18].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0038D9A8u) [[unlikely]] return; }
L_0038D9A8:
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0038D9B4u) [[unlikely]] return; }
L_0038D9B4:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0038D9C0u) [[unlikely]] return; }
L_0038D9C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0038D9CCu) [[unlikely]] return; }
L_0038D9CC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0038D9E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D9E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038D9E4u) [[unlikely]] return; }
L_0038D9E4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0038D9E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0038DA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DA28u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038DA28u) [[unlikely]] return; }
L_0038DA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0038DA5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038DA3C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0038DA3C:
    set32(c.r[9], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 5312u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DA5Cu); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0038DA5Cu) [[unlikely]] return; }
L_0038DA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038DA70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001301E0u | kUnwind; return; } [[clang::musttail]] return unit_000C(c, 21u, depth); }
L_0038DA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DA94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0038DA94u) [[unlikely]] return; }
L_0038DA94:
    st8((c.r[16].w[0] + 541u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038DAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DACCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0038DACCu) [[unlikely]] return; }
L_0038DACC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 624u);  if (t) { goto L_0038DB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DAE8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038DAE8u) [[unlikely]] return; }
L_0038DAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038DAFC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DAFCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0038DAFCu) [[unlikely]] return; }
L_0038DAFC:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB0Cu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0038DB0Cu) [[unlikely]] return; }
L_0038DB0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB1Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0038DB1Cu) [[unlikely]] return; }
L_0038DB1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB2Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0038DB2Cu) [[unlikely]] return; }
L_0038DB2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB40u); set32(c.r[5], 0u + 147u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038DB40u) [[unlikely]] return; }
L_0038DB40:
    st32((c.r[18].w[0] + 216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[18].w[0] + 220u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[18].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 180u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[18].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + 216u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB70u); st32((c.r[18].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038DB70u) [[unlikely]] return; }
L_0038DB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB78u); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0038DB78u) [[unlikely]] return; }
L_0038DB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0038DC6C; } }
L_0038DB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB88u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038DB88u) [[unlikely]] return; }
L_0038DB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0038DB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0038DB98u) [[unlikely]] return; }
L_0038DB98:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0038DB9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[18].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    st32((c.r[16].w[0] + 464u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 464u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[8].w[0] + 16u), c.r[6].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43450000u);
    st32((c.r[8].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.f[0] = c.r[5].w[0];
    c.f[13] = fp::add(c.f[1], c.f[2]);
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    st32((c.r[2].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 320u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 324u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 328u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 42;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DC44u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038DC44u) [[unlikely]] return; }
L_0038DC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DC4Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038DC4Cu) [[unlikely]] return; }
L_0038DC4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038DC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DC60u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0038DC60u) [[unlikely]] return; }
L_0038DC60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0038DC64:
    st32((c.r[16].w[0] + 500u), c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0038DC6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DB80u | kUnwind; return; } goto L_0038DB80; } }
    st8((c.r[18].w[0] + 540u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 541u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038DCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DCB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0038DCB4u) [[unlikely]] return; }
L_0038DCB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0038DCE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DCD0u); set32(c.r[5], 0u + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038DCD0u) [[unlikely]] return; }
L_0038DCD0:
    set32(c.r[2], 0u + 148u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13152u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 4;
L_0038DCE0:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 180u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 216u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 232u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD08u); st32((c.r[16].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038DD08u) [[unlikely]] return; }
L_0038DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD10u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0038DD10u) [[unlikely]] return; }
L_0038DD10:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 541u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038DD30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0038DD44u) [[unlikely]] return; }
L_0038DD44:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);  if (t) { goto L_0038DD70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD60u); set32(c.r[5], 0u + 148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038DD60u) [[unlikely]] return; }
L_0038DD60:
    set32(c.r[2], 0u + 148u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[1].w[0] - 13152u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 4;
L_0038DD70:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 180u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 216u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 232u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD98u); st32((c.r[16].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0038DD98u) [[unlikely]] return; }
L_0038DD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DDA0u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0038DDA0u) [[unlikely]] return; }
L_0038DDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DDA8u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0038DDA8u) [[unlikely]] return; }
L_0038DDA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DDB4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 122u, depth + 1u); else { c.pc = 0x0031CF50u; return; } if (c.pc != 0x0038DDB4u) [[unlikely]] return; }
L_0038DDB4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 541u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038DDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DDECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0038DDECu) [[unlikely]] return; }
L_0038DDEC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DE00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038DE00u) [[unlikely]] return; }
L_0038DE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038DE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DE3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0038DE3Cu) [[unlikely]] return; }
L_0038DE3C:
    st32((c.r[16].w[0] + 536u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 536u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 4);  if (t) { goto L_0038DE5C; } }
    ld128((c.r[16].w[0] + 544u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0038DEC4; } }
L_0038DE5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + 5380u);
    set32(c.r[2], c.r[2].w[0] + 5376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 5384u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 536u)));
    set32(c.r[2], c.r[2].w[0] + 5388u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 536u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 536u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 26;
L_0038DEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DECCu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038DECCu) [[unlikely]] return; }
L_0038DECC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DED8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 268u, depth + 1u); else { c.pc = 0x0031E2C0u; return; } if (c.pc != 0x0038DED8u) [[unlikely]] return; }
L_0038DED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038DEF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 540u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038E254; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = ld32((c.r[21].w[0] + 192u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[19], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 444u)));  if (t) { goto L_0038E1E0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0038E1E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 52u)));  if (t) { goto L_0038E1D4; } }
L_0038DF58:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DF6Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038DF6Cu) [[unlikely]] return; }
L_0038DF6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[20].w[0] << 3);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[18].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 5312u);
    st32((c.r[18].w[0] + 300u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DFB0u); set32(c.r[16], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0038DFB0u) [[unlikely]] return; }
L_0038DFB0:
    c.f[1] = c.r[20].w[0];
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[14] = ld32((c.r[1].w[0] - 424u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[20] = fp::add(c.f[0], c.f[21]);
    c.f[12] = c.r[2].w[0];
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E000u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E000u) [[unlikely]] return; }
L_0038E000:
    set32(c.r[2], ld32((c.r[21].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E0AC; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038E0AC; } }
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    ld128((c.r[21].w[0] + 288u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E058u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0038E058u) [[unlikely]] return; }
L_0038E058:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[17].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] - 424u));
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E084u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E084u) [[unlikely]] return; }
L_0038E084:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E094u) [[unlikely]] return; }
L_0038E094:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E0A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E0A4u) [[unlikely]] return; }
L_0038E0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_0038E0F0; } }
L_0038E0AC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E0CCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E0CCu) [[unlikely]] return; }
L_0038E0CC:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E0ECu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E0ECu) [[unlikely]] return; }
L_0038E0EC:
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 1;
L_0038E0F0:
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E110u) [[unlikely]] return; }
L_0038E110:
    set32(c.r[2], ld32((c.r[21].w[0] + 536u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0038E138; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038E138; } }
    ld128((c.r[21].w[0] + 288u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_0038E164; } }
L_0038E138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E140u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038E140u) [[unlikely]] return; }
L_0038E140:
    set32(c.r[4], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    c.budget -= 9;
L_0038E164:
    set32(c.r[5], ld32((c.r[16].w[0] + 500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    set32(c.r[22], c.r[16].w[0] + 500u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E1B8u); c.f[13] = fp::add(c.f[1], c.f[21]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E1B8u) [[unlikely]] return; }
L_0038E1B8:
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[5], 0u + 100u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E1CCu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x0038E1CCu) [[unlikely]] return; }
L_0038E1CC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 2;
L_0038E1D4:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DF58u | kUnwind; return; } goto L_0038DF58; } }
L_0038E1E0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 312u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E218; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 316u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 304u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 256u);  if (t) { goto L_0038E24C; } }
    st32((c.r[21].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 312u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0038E248; } }
L_0038E218:
    set32(c.r[2], ld32((c.r[21].w[0] + 316u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038E248; } }
    st32((c.r[21].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0038E248:
    set32(c.r[4], c.r[21].w[0] + 256u);
    c.budget -= 1;
L_0038E24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E254u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0038E254u) [[unlikely]] return; }
L_0038E254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0038E290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E2A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0038E2A4u) [[unlikely]] return; }
L_0038E2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E2BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E2BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E2BCu) [[unlikely]] return; }
L_0038E2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038E2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 220u, depth + 1u); else { c.pc = 0x0038E3A0u; return; } if (c.pc != 0x0038E2E4u) [[unlikely]] return; }
L_0038E2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E2FC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E2FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E2FCu) [[unlikely]] return; }
L_0038E2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038E310:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E334u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 220u, depth + 1u); else { c.pc = 0x0038E3A0u; return; } if (c.pc != 0x0038E334u) [[unlikely]] return; }
L_0038E334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E34C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E34Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E34Cu) [[unlikely]] return; }
L_0038E34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038E360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 220u, depth + 1u); else { c.pc = 0x0038E3A0u; return; } if (c.pc != 0x0038E374u) [[unlikely]] return; }
L_0038E374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E38C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E38Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E38Cu) [[unlikely]] return; }
L_0038E38C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038E3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 212u));  c.pc = t; return; }
L_0038E3B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D0B0u | kUnwind; return; } goto L_0038D0B0; }
L_0038E3C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BA00u | kUnwind; return; } [[clang::musttail]] return unit_00A2(c, 387u, depth); }
L_0038E3D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DDD0u | kUnwind; return; } goto L_0038DDD0; }
L_0038E3E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D8C0u | kUnwind; return; } goto L_0038D8C0; }
L_0038E3F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DEF0u | kUnwind; return; } goto L_0038DEF0; }
L_0038E400:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D8C0u | kUnwind; return; } goto L_0038D8C0; }
L_0038E410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E42Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x0038E42Cu) [[unlikely]] return; }
L_0038E42C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29984u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038E450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038E498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E480u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x0038E480u) [[unlikely]] return; }
L_0038E480:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038E49C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038E498u) [[unlikely]] return; }
L_0038E498:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0038E49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038E4B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0038E5C8; } }
L_0038E4E0:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0038E5C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038E5C4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E518u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E518u) [[unlikely]] return; }
L_0038E518:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E544; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E534u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E534u) [[unlikely]] return; }
L_0038E534:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038E5D4; } }
L_0038E544:
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E558u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E558u) [[unlikely]] return; }
L_0038E558:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E584; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E574u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E574u) [[unlikely]] return; }
L_0038E574:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038E5D4; } }
L_0038E584:
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E598u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E598u) [[unlikely]] return; }
L_0038E598:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E5C4; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E5B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E5B4u) [[unlikely]] return; }
L_0038E5B4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0038E5C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038E5D4; } }
L_0038E5C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0038E5C8:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E4E0u | kUnwind; return; } goto L_0038E4E0; } }
L_0038E5D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0038E5F0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 56u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E5F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E5F0u) [[unlikely]] return; }
L_0038E5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0038E610:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E630:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E650:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E670:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E690:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E6B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E6D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038E710; } }
L_0038E6F4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E6F4u | kUnwind; return; } goto L_0038E6F4; } }
L_0038E710:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E720u) [[unlikely]] return; }
L_0038E720:
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E734u) [[unlikely]] return; }
L_0038E734:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E748u) [[unlikely]] return; }
L_0038E748:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 212u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E758u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x0038E758u) [[unlikely]] return; }
L_0038E758:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E768u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E768u) [[unlikely]] return; }
L_0038E768:
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E774u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 33u, depth + 1u); else { c.pc = 0x001C04E0u; return; } if (c.pc != 0x0038E774u) [[unlikely]] return; }
L_0038E774:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E790u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E790u) [[unlikely]] return; }
L_0038E790:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E7CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E7CCu) [[unlikely]] return; }
L_0038E7CC:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E7E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E7E8u) [[unlikely]] return; }
L_0038E7E8:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E804u) [[unlikely]] return; }
L_0038E804:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E820u) [[unlikely]] return; }
L_0038E820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E838u); set32(c.r[8], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x0038E838u) [[unlikely]] return; }
L_0038E838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0038E850:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E870:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 48u));  c.pc = t; return; }
L_0038E880:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 44u));  c.pc = t; return; }
L_0038E890:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 40u));  c.pc = t; return; }
L_0038E8A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038E8C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 36u));  c.pc = t; return; }
L_0038E8D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 32u));  c.pc = t; return; }
L_0038E8E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 28u));  c.pc = t; return; }
L_0038E8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] + 3680u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 3584u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E924u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 89u, depth + 1u); else { c.pc = 0x00100790u; return; } if (c.pc != 0x0038E924u) [[unlikely]] return; }
L_0038E924:
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[17].w[0] + 672u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 676u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E954u); st8((c.r[17].w[0] + 680u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x0038E954u) [[unlikely]] return; }
L_0038E954:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[7], 0u + 64u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E970u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 153u, depth + 1u); else { c.pc = 0x001A0E70u; return; } if (c.pc != 0x0038E970u) [[unlikely]] return; }
L_0038E970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0038E9C0; } }
L_0038E978:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E990u); st32((c.r[2].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0038E990u) [[unlikely]] return; }
L_0038E990:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 12;
L_0038E9C0:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E978u | kUnwind; return; } goto L_0038E978; } }
    st128((c.r[17].w[0] + 656u) & ~15u, c.r[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038E9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038EAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0038EA64; } }
L_0038EA20:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[20], c.r[2].w[0] + 64u);  if (t) { goto L_0038EA5C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0038EA5C; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038EA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EA54u);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0038EA54u) [[unlikely]] return; }
L_0038EA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EA5Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038EA5Cu) [[unlikely]] return; }
L_0038EA5C:
    st32((c.r[20].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0038EA64:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EA20u | kUnwind; return; } goto L_0038EA20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3584u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EA88u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 86u, depth + 1u); else { c.pc = 0x00100720u; return; } if (c.pc != 0x0038EA88u) [[unlikely]] return; }
L_0038EA88:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0038EAA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EAA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038EAA0u) [[unlikely]] return; }
L_0038EAA0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0038EAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0038EAD0:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & 16383ull;
    set32(c.r[3], c.r[5].w[0] + 128u);
    set32(c.r[6], 0u - 16384u);
    c.r[5].d[0] = c.r[3].d[0] & 16383ull;
    c.r[3].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0038EB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x0038EB3Cu) [[unlikely]] return; }
L_0038EB3C:
    c.r[5].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB50u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 33u, depth + 1u); else { c.pc = 0x001504F0u; return; } if (c.pc != 0x0038EB50u) [[unlikely]] return; }
L_0038EB50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038EB70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0038EBEC; } }
L_0038EBA8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 64u);  if (t) { goto L_0038EBE4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0038EBE4; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038EBDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EBDCu);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x0038EBDCu) [[unlikely]] return; }
L_0038EBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EBE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038EBE4u) [[unlikely]] return; }
L_0038EBE4:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0038EBEC:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EBA8u | kUnwind; return; } goto L_0038EBA8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 672u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038EEDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038EDF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0038ED10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0038EC2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038EFC8; } }
L_0038EC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_0038ECC0; } }
L_0038EC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC3Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038EC3Cu) [[unlikely]] return; }
L_0038EC3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0038ECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038EC54u) [[unlikely]] return; }
L_0038EC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038EC64; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_0038EC64:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC74u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x0038EC74u) [[unlikely]] return; }
L_0038EC74:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC90u); st32((c.r[16].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0038EC90u) [[unlikely]] return; }
L_0038EC90:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 10;
L_0038ECB8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0038ECC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EC34u | kUnwind; return; } goto L_0038EC34; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ECD4u); set32(c.r[5], 0u + 20000u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038ECD4u) [[unlikely]] return; }
L_0038ECD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0038ECF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ECECu);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0038ECECu) [[unlikely]] return; }
L_0038ECEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038ECF8; } }
L_0038ECF4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038ECF8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 656u);  if (t) { goto L_0038EFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ED08u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0038ED08u) [[unlikely]] return; }
L_0038ED08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038EFC4; } }
L_0038ED10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;  if (t) { goto L_0038EDA8; } }
L_0038ED18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ED24u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038ED24u) [[unlikely]] return; }
L_0038ED24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0038EDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ED3Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038ED3Cu) [[unlikely]] return; }
L_0038ED3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038ED4C; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_0038ED4C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ED5Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x0038ED5Cu) [[unlikely]] return; }
L_0038ED5C:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ED78u); st32((c.r[16].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0038ED78u) [[unlikely]] return; }
L_0038ED78:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 10;
L_0038EDA0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0038EDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038ED18u | kUnwind; return; } goto L_0038ED18; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EDBCu); set32(c.r[5], 0u + 20002u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038EDBCu) [[unlikely]] return; }
L_0038EDBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0038EDDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EDD4u);  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0038EDD4u) [[unlikely]] return; }
L_0038EDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038EDE0; } }
L_0038EDDC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038EDE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 656u);  if (t) { goto L_0038EFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EDF0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0038EDF0u) [[unlikely]] return; }
L_0038EDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038EFC4; } }
L_0038EDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE00u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038EE00u) [[unlikely]] return; }
L_0038EE00:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0038EEB8; } }
L_0038EE18:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] & 65535ull;  if (t) { goto L_0038EEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038EE38u) [[unlikely]] return; }
L_0038EE38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0038EEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038EE50u) [[unlikely]] return; }
L_0038EE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038EE60; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_0038EE60:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE70u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x0038EE70u) [[unlikely]] return; }
L_0038EE70:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE8Cu); st32((c.r[16].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0038EE8Cu) [[unlikely]] return; }
L_0038EE8C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 10;
L_0038EEB4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038EEB8:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EE18u | kUnwind; return; } goto L_0038EE18; } }
    set32(c.r[5], c.r[19].w[0] + 848u);
    set32(c.r[4], c.r[21].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EED4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0038EED4u) [[unlikely]] return; }
L_0038EED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038EFC4; } }
L_0038EEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EEE4u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038EEE4u) [[unlikely]] return; }
L_0038EEE4:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0038EFB4; } }
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + 1000u);  if (t) { goto L_0038EFA8; } }
L_0038EF1C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EF28u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x0038EF28u) [[unlikely]] return; }
L_0038EF28:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0038EFA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EF40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038EF40u) [[unlikely]] return; }
L_0038EF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038EF50; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_0038EF50:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EF60u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A1130u; return; } if (c.pc != 0x0038EF60u) [[unlikely]] return; }
L_0038EF60:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[22], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EF7Cu); st32((c.r[22].w[0] + 64u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0038EF7Cu) [[unlikely]] return; }
L_0038EF7C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[22].w[0] + 32u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[22].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[22].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[22].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 10;
L_0038EFA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038EFA8:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EF1Cu | kUnwind; return; } goto L_0038EF1C; } }
L_0038EFB4:
    set32(c.r[5], c.r[16].w[0] + 848u);
    set32(c.r[4], c.r[21].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EFC4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0038EFC4u) [[unlikely]] return; }
L_0038EFC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038EFC8:
    st32((c.r[21].w[0] + 676u), c.r[3].w[0]);
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
L_0038F000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 676u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0038F06C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038F05C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038F04C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038F03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0038F078; } }
L_0038F03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F044u);  if (depth < kMaxDepth) unit_00A3(c, 324u, depth + 1u); else { c.pc = 0x0038F080u; return; } if (c.pc != 0x0038F044u) [[unlikely]] return; }
L_0038F044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F074; } }
L_0038F04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F054u);  if (depth < kMaxDepth) unit_00A3(c, 327u, depth + 1u); else { c.pc = 0x0038F0C0u; return; } if (c.pc != 0x0038F054u) [[unlikely]] return; }
L_0038F054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F074; } }
L_0038F05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F064u);  if (depth < kMaxDepth) unit_00A3(c, 332u, depth + 1u); else { c.pc = 0x0038F150u; return; } if (c.pc != 0x0038F064u) [[unlikely]] return; }
L_0038F064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F074; } }
L_0038F06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F074u);  if (depth < kMaxDepth) unit_00A3(c, 335u, depth + 1u); else { c.pc = 0x0038F240u; return; } if (c.pc != 0x0038F074u) [[unlikely]] return; }
L_0038F074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0038F078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038F080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F09Cu); c.r[5].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0038F09Cu) [[unlikely]] return; }
L_0038F09C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F0A8u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0038F0A8u) [[unlikely]] return; }
L_0038F0A8:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 676u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038F0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 672u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038F130; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038F120; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038F110; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0038F100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0038F13C; } }
L_0038F100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F108u);  if (depth < kMaxDepth) unit_00A3(c, 336u, depth + 1u); else { c.pc = 0x0038F250u; return; } if (c.pc != 0x0038F108u) [[unlikely]] return; }
L_0038F108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F138; } }
L_0038F110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F118u);  if (depth < kMaxDepth) unit_00A3(c, 340u, depth + 1u); else { c.pc = 0x0038F3F0u; return; } if (c.pc != 0x0038F118u) [[unlikely]] return; }
L_0038F118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F138; } }
L_0038F120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F128u);  if (depth < kMaxDepth) unit_00A3(c, 344u, depth + 1u); else { c.pc = 0x0038F660u; return; } if (c.pc != 0x0038F128u) [[unlikely]] return; }
L_0038F128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038F138; } }
L_0038F130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F138u);  if (depth < kMaxDepth) unit_00A3(c, 349u, depth + 1u); else { c.pc = 0x0038F950u; return; } if (c.pc != 0x0038F138u) [[unlikely]] return; }
L_0038F138:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0038F13C:
    st32((c.r[16].w[0] + 676u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038F150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[8].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 54;
    c.r[6].d[0] = c.r[5].d[0] >> 58;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[7], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[8].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    c.r[5].d[0] = c.r[4].d[0] & 16383ull;
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[8].d[0] << 44;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] >> 58;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    set32(c.r[8], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F1C0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0038F1C0u) [[unlikely]] return; }
L_0038F1C0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[16].w[0] + 16u));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[5].d[0] << 54;
    c.r[6].d[0] = c.r[5].d[0] >> 58;
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[5].d[0] = c.r[4].d[0] & 16383ull;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    c.r[4].d[0] = c.r[6].d[0] << 32;
    set32(c.r[7], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[6].d[0] = c.r[8].d[0] << 44;
    c.r[2].d[0] = c.r[8].d[0] << 30;
    c.r[6].d[0] = c.r[6].d[0] >> 58;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F220u); set32(c.r[8], c.r[3].w[0] << (c.r[2].w[0] & 31u));  if (depth < kMaxDepth) unit_0012(c, 324u, depth + 1u); else { c.pc = 0x0014BE30u; return; } if (c.pc != 0x0038F220u) [[unlikely]] return; }
L_0038F220:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 676u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038F240:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 676u), c.r[3].w[0]);  c.pc = t; return; }
L_0038F250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80C80000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[29].w[0] + 76u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[3].d[0] | 33058ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 128u);  if (t) { goto L_0038F3C8; } }
L_0038F27C:
    set32(c.r[6], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[10], c.r[6].w[0] + 32u);  if (t) { goto L_0038F3C4; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[10].w[0])));
    set32(c.r[16], ld32((c.r[10].w[0] + 4u)));
    c.r[9].d[0] = ld16((c.r[6].w[0] + 20u));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 18u));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[25], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F2C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_0038F2C8; } }
L_0038F2C0:
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[24], c.r[25].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0038F2C8:
    set32(c.r[8], ld32((c.r[10].w[0] + 16u)));
    set32(c.r[14], c.r[9].w[0] << 1);
    set32(c.r[6], ld32((c.r[10].w[0] + 12u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[15], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] + c.r[6].w[0]);  if (t) { goto L_0038F3B8; } }
L_0038F2FC:
    c.r[7].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038F3A0; } }
L_0038F308:
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[24].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[29].w[0] + 76u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 680u));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038F388; } }
    c.r[11].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F388; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038F348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_0038F388; } }
L_0038F348:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F388; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[3]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 14;
L_0038F388:
    set32(c.r[8], ld32((c.r[5].w[0])));
    mmi::ppac5(c.r[9], c.r[8]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 6;
L_0038F3A0:
    c.r[8].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F308u | kUnwind; return; } goto L_0038F308; } }
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[25], c.r[25].w[0] + c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + 256u);
    c.budget -= 3;
L_0038F3B8:
    c.r[6].d[0] = c.r[13].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[12].d[0] = c.r[25].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F2FCu | kUnwind; return; } goto L_0038F2FC; } }
L_0038F3C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038F3C8:
    c.r[6].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F27Cu | kUnwind; return; } goto L_0038F27C; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038F3F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[7].d[0] = c.r[6].d[0] | 255ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[6].d[0] = c.r[7].d[0] << 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80BB0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[3].d[0] | 29184ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80C80000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[3].d[0] = c.r[3].d[0] | 33058ull;
    set32(c.r[19], 0u + 128u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[7].d[0] | c.r[6].d[0];  if (t) { goto L_0038F630; } }
L_0038F440:
    set32(c.r[6], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 32u);  if (t) { goto L_0038F62C; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[6].w[0])));
    set32(c.r[16], ld32((c.r[6].w[0] + 4u)));
    c.r[10].d[0] = ld16((c.r[7].w[0] + 20u));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 12u));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 18u));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[25], c.r[9].w[0] + c.r[8].w[0]);  if (t) { goto L_0038F484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[24].d[0] = 0ull + 0ull;  if (t) { goto L_0038F48C; } }
L_0038F484:
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[24], c.r[25].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_0038F48C:
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[14], c.r[10].w[0] << 1);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[15], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[15].w[0] + c.r[6].w[0]);  if (t) { goto L_0038F620; } }
L_0038F4C0:
    c.r[7].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038F608; } }
L_0038F4CC:
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[8], c.r[8].w[0] << 2);
    st32((c.r[29].w[0] + 124u), c.r[20].w[0]);
    set32(c.r[21], c.r[24].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 680u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038F554; } }
    c.r[8].d[0] = ld8((c.r[21].w[0] + 3u));
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld8((c.r[29].w[0] + 127u));
    c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F564; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038F510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_0038F564; } }
L_0038F510:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F564; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[3]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_0038F564; } }
L_0038F554:
    c.r[8].d[0] = ld8((c.r[21].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038F5FC; } }
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 1;
L_0038F564:
    c.r[8].d[0] = ld8((c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[19].d[0]; c.r[1].d[0] = c.r[8].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038F5F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F5B0; } }
    c.r[9].d[0] = ld8((c.r[29].w[0] + 127u));
    c.r[21].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    st32((c.r[5].w[0]), c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_0038F5F0; } }
L_0038F5B0:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 127u));
    set32(c.r[8], c.r[8].w[0] - 128u);
    c.r[21].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[5].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[22], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 16;
L_0038F5F0:
    set32(c.r[8], ld32((c.r[5].w[0])));
    mmi::ppac5(c.r[9], c.r[8]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 3;
L_0038F5FC:
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 3;
L_0038F608:
    c.r[8].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F4CCu | kUnwind; return; } goto L_0038F4CC; } }
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[25], c.r[25].w[0] + c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + 256u);
    c.budget -= 3;
L_0038F620:
    c.r[6].d[0] = c.r[13].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[12].d[0] = c.r[25].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F4C0u | kUnwind; return; } goto L_0038F4C0; } }
L_0038F62C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0038F630:
    c.r[6].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F440u | kUnwind; return; } goto L_0038F440; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0038F660:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F694u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038F694u) [[unlikely]] return; }
L_0038F694:
    set32(c.r[7], ld32((c.r[2].w[0] + 384u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[5].d[0] | 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80C80000u);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[30].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] | 33058ull;  if (t) { goto L_0038F910; } }
L_0038F6C8:
    set32(c.r[5], c.r[5].w[0] + c.r[21].w[0]);
    set32(c.r[7], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + 32u);
    set32(c.r[6], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[22].w[0]);  if (t) { goto L_0038F90C; } }
    set32(c.r[6], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0038F90C; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 18u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[20], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0038F714; } }
L_0038F70C:
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[19], c.r[20].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0038F714:
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[5].w[0])));
    set32(c.r[23], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.r[9].d[0] = ld16((c.r[6].w[0] + 20u));
    c.r[7].d[0] = ld16((c.r[8].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[8].w[0] + 18u));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[17], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_0038F744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_0038F74C; } }
L_0038F744:
    set32(c.r[6], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[25], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0038F74C:
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[15], c.r[9].w[0] << 1);
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[7], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[24], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[24], c.r[24].w[0] + c.r[5].w[0]);  if (t) { goto L_0038F900; } }
L_0038F780:
    c.r[12].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038F8E4; } }
L_0038F790:
    c.r[8].d[0] = ld8((c.r[13].w[0]));
    c.r[5].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[25].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[29].w[0] + 172u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 680u));
    c.budget -= 10;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_0038F828; } }
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld8((c.r[29].w[0] + 175u));
    c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F838; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038F7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_0038F838; } }
L_0038F7E0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F838; } }
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[3]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    set32(c.r[8], 0u + 128u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_0038F838; } }
L_0038F828:
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[8], 0u + 128u);  if (t) { goto L_0038F8D4; } }
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_0038F838:
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[5].d[0]; c.r[1].d[0] = c.r[8].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038F8C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038F888; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038F8C8; } }
L_0038F888:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    set32(c.r[8], c.r[8].w[0] - 128u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::psubsh(c.r[9], c.r[30], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 16;
L_0038F8C8:
    set32(c.r[8], ld32((c.r[4].w[0])));
    mmi::ppac5(c.r[9], c.r[8]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 3;
L_0038F8D4:
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 4;
L_0038F8E4:
    c.r[5].d[0] = c.r[6].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F790u | kUnwind; return; } goto L_0038F790; } }
    set32(c.r[14], c.r[14].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + c.r[15].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[15].w[0]);
    set32(c.r[24], c.r[24].w[0] + 256u);
    c.budget -= 4;
L_0038F900:
    c.r[5].d[0] = c.r[14].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[13].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F780u | kUnwind; return; } goto L_0038F780; } }
L_0038F90C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0038F910:
    c.r[5].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[21].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F6C8u | kUnwind; return; } goto L_0038F6C8; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0038F950:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F984u); st32((c.r[29].w[0] + 292u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038F984u) [[unlikely]] return; }
L_0038F984:
    set32(c.r[7], ld32((c.r[2].w[0] + 384u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[6].d[0] = c.r[5].d[0] | 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80C80000u);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[4], c.r[29].w[0] + 300u);
    c.r[3].d[0] = c.r[3].d[0] | 33058ull;
    set32(c.r[20], 0u + 128u);
    set32(c.r[21], c.r[29].w[0] + 296u);
    st64((c.r[29].w[0] + 160u), c.r[5].d[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), c.r[5].w[0]);  if (t) { goto L_0038FF10; } }
L_0038F9C8:
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[7], c.r[5].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { goto L_0038FF0C; } }
    set32(c.r[10], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_0038FF0C; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[7].w[0] + 4u);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 12u));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 18u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[18], c.r[9].w[0] + c.r[8].w[0]);  if (t) { goto L_0038FA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0038FA20; } }
L_0038FA18:
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[17], c.r[18].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_0038FA20:
    set32(c.r[9], ld32((c.r[10].w[0] + 4u)));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 12u));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 18u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[16], c.r[9].w[0] + c.r[8].w[0]);  if (t) { goto L_0038FA3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_0038FA44; } }
L_0038FA3C:
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[25], c.r[16].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_0038FA44:
    set32(c.r[7], ld32((c.r[6].w[0])));
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[24], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[6], c.r[8].w[0] << 7);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 17;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[24], c.r[24].w[0] + c.r[6].w[0]);  if (t) { goto L_0038FD64; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.r[8].d[0] = ld16((c.r[5].w[0] + 20u));
    c.r[6].d[0] = ld16((c.r[7].w[0] + 12u));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 18u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[15], c.r[7].w[0] + c.r[6].w[0]);  if (t) { goto L_0038FAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_0038FAB8; } }
L_0038FAAC:
    set32(c.r[5], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], c.r[15].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    c.budget -= 3;
L_0038FAB8:
    set32(c.r[14], c.r[8].w[0] << 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0038FD4C; } }
L_0038FAC4:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[23].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0038FD28; } }
L_0038FAD8:
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.r[9].d[0] = ld8((c.r[12].w[0]));
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[25].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 300u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 292u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 680u));
    c.budget -= 16;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);  if (t) { goto L_0038FBF4; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 208u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 3u));
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FB84; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038FB44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0038FB84; } }
L_0038FB44:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FB84; } }
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[3]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 14;
L_0038FB84:
    c.r[22].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[8].d[0] = c.r[22].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0038FBA0; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.r[5].w[0]);  if (t) { goto L_0038FC74; } }
L_0038FBA0:
    c.r[8].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    st32((c.r[29].w[0] + 192u), c.r[8].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[22], c.r[22]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038FC74; } }
L_0038FBF4:
    set32(c.r[8], ld32((c.r[29].w[0] + 208u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038FD14; } }
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[22].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[8].d[0] = c.r[22].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0038FC24; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.r[5].w[0]);  if (t) { goto L_0038FC74; } }
L_0038FC24:
    c.r[8].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    st32((c.r[29].w[0] + 176u), c.r[8].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0])));
    set32(c.r[11], ld32((c.r[5].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[22], c.r[22]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
L_0038FC74:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[20].d[0]; c.r[1].d[0] = c.r[8].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038FD08; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FCC4; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038FD08; } }
L_0038FCC4:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 303u));
    set32(c.r[8], c.r[8].w[0] - 128u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[4].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    c.r[9].d[0] = ld64((c.r[29].w[0] + 160u));
    mmi::psubsh(c.r[9], c.r[9], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 17;
L_0038FD08:
    set32(c.r[8], ld32((c.r[4].w[0])));
    mmi::ppac5(c.r[9], c.r[8]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 3;
L_0038FD14:
    set32(c.r[30], c.r[30].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[23], c.r[23].w[0] + 2u);
    c.budget -= 5;
L_0038FD28:
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[30].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038FAD8u | kUnwind; return; } goto L_0038FAD8; } }
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[14].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[14].w[0]);
    set32(c.r[24], c.r[24].w[0] + 256u);
    c.budget -= 5;
L_0038FD4C:
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    c.r[5].d[0] = c.r[13].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[12].d[0] = c.r[15].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038FAC4u | kUnwind; return; } goto L_0038FAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0038FF10; } }
L_0038FD64:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[14].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0] + 20u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[5].w[0] << 1);  if (t) { goto L_0038FEFC; } }
L_0038FD78:
    c.r[12].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038FEDC; } }
L_0038FD88:
    c.r[8].d[0] = ld8((c.r[12].w[0]));
    c.r[5].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[25].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[29].w[0] + 296u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 292u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 680u));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0038FE20; } }
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[29].w[0] + 299u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld8((c.r[29].w[0] + 299u));
    c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FE30; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[1].d[0] = c.r[11].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038FDDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 296u), c.r[3].w[0]);  if (t) { goto L_0038FE30; } }
L_0038FDDC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FE30; } }
    set32(c.r[10], ld32((c.r[21].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[3]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[21].w[0]), c.r[9].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 299u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0038FE30; } }
L_0038FE20:
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038FECC; } }
    st8((c.r[29].w[0] + 299u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_0038FE30:
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[20].d[0]; c.r[1].d[0] = c.r[8].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0038FEC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038FE7C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 299u));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[21].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    mmi::pextlh(c.r[8], c.r[0], c.r[9]);
    { Reg128 scratch; mmi::pmulth(c, c.r[9], c.r[8], c.r[10], 0); }
    mmi::psraw(c.r[11], c.r[9], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[11]);
    mmi::ppacb(c.r[8], c.r[0], c.r[10]);
    st32((c.r[21].w[0]), c.r[8].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 299u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038FEC0; } }
L_0038FE7C:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 299u));
    set32(c.r[8], c.r[8].w[0] - 128u);
    c.r[22].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[21].w[0])));
    mmi::pextlw(c.r[11], c.r[8], c.r[8]);
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 160u));
    mmi::psubsh(c.r[9], c.r[5], c.r[8]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[21].w[0]), c.r[9].w[0]);
    st8((c.r[29].w[0] + 299u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 17;
L_0038FEC0:
    set32(c.r[8], ld32((c.r[21].w[0])));
    mmi::ppac5(c.r[9], c.r[8]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 3;
L_0038FECC:
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[12], c.r[12].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 4;
L_0038FEDC:
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038FD88u | kUnwind; return; } goto L_0038FD88; } }
    set32(c.r[14], c.r[14].w[0] + 2u);
    set32(c.r[18], c.r[18].w[0] + c.r[15].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[15].w[0]);
    set32(c.r[24], c.r[24].w[0] + 256u);
    c.budget -= 4;
L_0038FEFC:
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    c.r[5].d[0] = c.r[14].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[13].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038FD78u | kUnwind; return; } goto L_0038FD78; } }
L_0038FF0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0038FF10:
    c.r[5].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[19].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F9C8u | kUnwind; return; } goto L_0038F9C8; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0038FF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0038FF64u) [[unlikely]] return; }
L_0038FF64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] - 29856u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x0038FF84u) [[unlikely]] return; }
L_0038FF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF8Cu); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_00A3(c, 269u, depth + 1u); else { c.pc = 0x0038E8F0u; return; } if (c.pc != 0x0038FF8Cu) [[unlikely]] return; }
L_0038FF8C:
    st32((c.r[16].w[0] + 1024u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1028u), c.r[2].w[0]);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 1032u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1036u), 0u);
    set32(c.r[4], c.r[16].w[0] + 992u);
    st32((c.r[16].w[0] + 1040u), 0u);
    st32((c.r[16].w[0] + 1048u), 0u);
    st32((c.r[16].w[0] + 1052u), 0u);
    st32((c.r[16].w[0] + 1056u), 0u);
    st32((c.r[16].w[0] + 1060u), 0u);
    st32((c.r[16].w[0] + 1068u), 0u);
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1076u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1080u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1084u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1088u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1089u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1090u), static_cast<std::uint8_t>(0u));
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
}

}
