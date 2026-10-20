#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0002[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    23, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0,
    285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302,
    0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0,
    0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0,
    384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0,
    400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0,
    416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0,
    432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0,
    448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0,
    464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0,
    480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0,
    496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0,
    512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0,
    528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0,
    544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0,
    560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0,
    576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0,
    592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0,
    608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0,
};

void unit_0002(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00108000;
    case 2u: goto L_00108008;
    case 3u: goto L_00108018;
    case 4u: goto L_00108028;
    case 5u: goto L_00108038;
    case 6u: goto L_0010803C;
    case 7u: goto L_00108040;
    case 8u: goto L_00108068;
    case 9u: goto L_00108080;
    case 10u: goto L_00108088;
    case 11u: goto L_00108098;
    case 12u: goto L_001080A8;
    case 13u: goto L_001080B8;
    case 14u: goto L_001080C0;
    case 15u: goto L_001080E8;
    case 16u: goto L_00108100;
    case 17u: goto L_00108118;
    case 18u: goto L_00108140;
    case 19u: goto L_00108148;
    case 20u: goto L_00108158;
    case 21u: goto L_00108164;
    case 22u: goto L_00108174;
    case 23u: goto L_00108180;
    case 24u: goto L_00108188;
    case 25u: goto L_00108194;
    case 26u: goto L_001081A0;
    case 27u: goto L_001081AC;
    case 28u: goto L_001081D0;
    case 29u: goto L_001081E8;
    case 30u: goto L_001081F0;
    case 31u: goto L_001081FC;
    case 32u: goto L_00108200;
    case 33u: goto L_00108218;
    case 34u: goto L_00108290;
    case 35u: goto L_001082C0;
    case 36u: goto L_001082CC;
    case 37u: goto L_001082D8;
    case 38u: goto L_001082E4;
    case 39u: goto L_001082F0;
    case 40u: goto L_001082FC;
    case 41u: goto L_00108308;
    case 42u: goto L_00108318;
    case 43u: goto L_00108330;
    case 44u: goto L_00108338;
    case 45u: goto L_00108348;
    case 46u: goto L_00108358;
    case 47u: goto L_00108364;
    case 48u: goto L_0010836C;
    case 49u: goto L_00108378;
    case 50u: goto L_00108388;
    case 51u: goto L_00108394;
    case 52u: goto L_0010839C;
    case 53u: goto L_001083A8;
    case 54u: goto L_001083BC;
    case 55u: goto L_001083C8;
    case 56u: goto L_001083F8;
    case 57u: goto L_001083FC;
    case 58u: goto L_00108400;
    case 59u: goto L_00108478;
    case 60u: goto L_00108480;
    case 61u: goto L_00108498;
    case 62u: goto L_001084A8;
    case 63u: goto L_001084BC;
    case 64u: goto L_001084F0;
    case 65u: goto L_00108508;
    case 66u: goto L_00108514;
    case 67u: goto L_00108520;
    case 68u: goto L_0010852C;
    case 69u: goto L_00108538;
    case 70u: goto L_00108544;
    case 71u: goto L_00108550;
    case 72u: goto L_0010855C;
    case 73u: goto L_00108568;
    case 74u: goto L_00108580;
    case 75u: goto L_001085BC;
    case 76u: goto L_00108600;
    case 77u: goto L_0010861C;
    case 78u: goto L_00108624;
    case 79u: goto L_0010863C;
    case 80u: goto L_00108650;
    case 81u: goto L_00108690;
    case 82u: goto L_001086BC;
    case 83u: goto L_001086E0;
    case 84u: goto L_00108840;
    case 85u: goto L_00108880;
    case 86u: goto L_001088C0;
    case 87u: goto L_00108900;
    case 88u: goto L_00108998;
    case 89u: goto L_00108A14;
    case 90u: goto L_00108A20;
    case 91u: goto L_00108A38;
    case 92u: goto L_00108B20;
    case 93u: goto L_00108B30;
    case 94u: goto L_00108B38;
    case 95u: goto L_00108B7C;
    case 96u: goto L_00108B90;
    case 97u: goto L_00108BB4;
    case 98u: goto L_00108BF8;
    case 99u: goto L_00108C08;
    case 100u: goto L_00108C30;
    case 101u: goto L_00108CC8;
    case 102u: goto L_00108CF0;
    case 103u: goto L_00108D70;
    case 104u: goto L_00108D80;
    case 105u: goto L_00108D94;
    case 106u: goto L_00108DB8;
    case 107u: goto L_00108E80;
    case 108u: goto L_00108EAC;
    case 109u: goto L_00108F2C;
    case 110u: goto L_00108F54;
    case 111u: goto L_00108F64;
    case 112u: goto L_00108F90;
    case 113u: goto L_00109008;
    case 114u: goto L_00109030;
    case 115u: goto L_0010903C;
    case 116u: goto L_00109040;
    case 117u: goto L_00109080;
    case 118u: goto L_00109098;
    case 119u: goto L_001090D8;
    case 120u: goto L_001090E8;
    case 121u: goto L_00109148;
    case 122u: goto L_001091A8;
    case 123u: goto L_00109234;
    case 124u: goto L_001092B8;
    case 125u: goto L_001092D4;
    case 126u: goto L_00109340;
    case 127u: goto L_00109370;
    case 128u: goto L_00109394;
    case 129u: goto L_001093D8;
    case 130u: goto L_001093E8;
    case 131u: goto L_001093FC;
    case 132u: goto L_00109408;
    case 133u: goto L_00109430;
    case 134u: goto L_00109468;
    case 135u: goto L_001095B0;
    case 136u: goto L_00109620;
    case 137u: goto L_00109650;
    case 138u: goto L_0010966C;
    case 139u: goto L_00109674;
    case 140u: goto L_001096BC;
    case 141u: goto L_001096E4;
    case 142u: goto L_001096F0;
    case 143u: goto L_00109720;
    case 144u: goto L_00109728;
    case 145u: goto L_0010974C;
    case 146u: goto L_00109758;
    case 147u: goto L_00109770;
    case 148u: goto L_0010983C;
    case 149u: goto L_00109840;
    case 150u: goto L_00109848;
    case 151u: goto L_00109880;
    case 152u: goto L_00109890;
    case 153u: goto L_001098C0;
    case 154u: goto L_001098E8;
    case 155u: goto L_001098F8;
    case 156u: goto L_00109900;
    case 157u: goto L_00109954;
    case 158u: goto L_00109970;
    case 159u: goto L_00109978;
    case 160u: goto L_001099B4;
    case 161u: goto L_001099EC;
    case 162u: goto L_00109A04;
    case 163u: goto L_00109A0C;
    case 164u: goto L_00109A18;
    case 165u: goto L_00109A28;
    case 166u: goto L_00109A68;
    case 167u: goto L_00109A80;
    case 168u: goto L_00109A98;
    case 169u: goto L_00109AAC;
    case 170u: goto L_00109AD0;
    case 171u: goto L_00109AE0;
    case 172u: goto L_00109B54;
    case 173u: goto L_00109B70;
    case 174u: goto L_00109B80;
    case 175u: goto L_00109BB0;
    case 176u: goto L_00109BDC;
    case 177u: goto L_00109C00;
    case 178u: goto L_00109CA8;
    case 179u: goto L_00109CF4;
    case 180u: goto L_00109CFC;
    case 181u: goto L_00109D04;
    case 182u: goto L_00109D54;
    case 183u: goto L_00109D90;
    case 184u: goto L_00109D98;
    case 185u: goto L_00109DC4;
    case 186u: goto L_00109DD8;
    case 187u: goto L_00109E14;
    case 188u: goto L_00109E20;
    case 189u: goto L_00109E58;
    case 190u: goto L_00109E68;
    case 191u: goto L_00109EAC;
    case 192u: goto L_00109EB8;
    case 193u: goto L_00109EC8;
    case 194u: goto L_00109EE0;
    case 195u: goto L_00109F00;
    case 196u: goto L_00109F10;
    case 197u: goto L_00109F20;
    case 198u: goto L_00109F58;
    case 199u: goto L_00109F64;
    case 200u: goto L_00109F78;
    case 201u: goto L_00109FD0;
    case 202u: goto L_00109FF8;
    case 203u: goto L_0010A00C;
    case 204u: goto L_0010A034;
    case 205u: goto L_0010A048;
    case 206u: goto L_0010A060;
    case 207u: goto L_0010A070;
    case 208u: goto L_0010A080;
    case 209u: goto L_0010A088;
    case 210u: goto L_0010A0A0;
    case 211u: goto L_0010A0B0;
    case 212u: goto L_0010A0C0;
    case 213u: goto L_0010A0D0;
    case 214u: goto L_0010A0E0;
    case 215u: goto L_0010A0F0;
    case 216u: goto L_0010A100;
    case 217u: goto L_0010A118;
    case 218u: goto L_0010A130;
    case 219u: goto L_0010A140;
    case 220u: goto L_0010A150;
    case 221u: goto L_0010A1AC;
    case 222u: goto L_0010A1C0;
    case 223u: goto L_0010A1D8;
    case 224u: goto L_0010A220;
    case 225u: goto L_0010A230;
    case 226u: goto L_0010A238;
    case 227u: goto L_0010A240;
    case 228u: goto L_0010A288;
    case 229u: goto L_0010A290;
    case 230u: goto L_0010A29C;
    case 231u: goto L_0010A2B8;
    case 232u: goto L_0010A2CC;
    case 233u: goto L_0010A2DC;
    case 234u: goto L_0010A2F0;
    case 235u: goto L_0010A300;
    case 236u: goto L_0010A348;
    case 237u: goto L_0010A3A0;
    case 238u: goto L_0010A3B0;
    case 239u: goto L_0010A3C4;
    case 240u: goto L_0010A3D4;
    case 241u: goto L_0010A3E4;
    case 242u: goto L_0010A460;
    case 243u: goto L_0010A488;
    case 244u: goto L_0010A498;
    case 245u: goto L_0010A4A8;
    case 246u: goto L_0010A50C;
    case 247u: goto L_0010A524;
    case 248u: goto L_0010A534;
    case 249u: goto L_0010A544;
    case 250u: goto L_0010A574;
    case 251u: goto L_0010A594;
    case 252u: goto L_0010A5A8;
    case 253u: goto L_0010A5E0;
    case 254u: goto L_0010A608;
    case 255u: goto L_0010A640;
    case 256u: goto L_0010A670;
    case 257u: goto L_0010A680;
    case 258u: goto L_0010A6A8;
    case 259u: goto L_0010A6D0;
    case 260u: goto L_0010A6E8;
    case 261u: goto L_0010A700;
    case 262u: goto L_0010A71C;
    case 263u: goto L_0010A760;
    case 264u: goto L_0010A778;
    case 265u: goto L_0010A7E0;
    case 266u: goto L_0010A828;
    case 267u: goto L_0010A838;
    case 268u: goto L_0010A83C;
    case 269u: goto L_0010A850;
    case 270u: goto L_0010A85C;
    case 271u: goto L_0010A870;
    case 272u: goto L_0010A8A8;
    case 273u: goto L_0010A8B8;
    case 274u: goto L_0010A8C8;
    case 275u: goto L_0010A908;
    case 276u: goto L_0010A96C;
    case 277u: goto L_0010A974;
    case 278u: goto L_0010A9C8;
    case 279u: goto L_0010A9E8;
    case 280u: goto L_0010AA04;
    case 281u: goto L_0010AA34;
    case 282u: goto L_0010AA40;
    case 283u: goto L_0010AA64;
    case 284u: goto L_0010AA74;
    case 285u: goto L_0010AA80;
    case 286u: goto L_0010AA88;
    case 287u: goto L_0010AAA4;
    case 288u: goto L_0010AAB0;
    case 289u: goto L_0010AAC0;
    case 290u: goto L_0010AACC;
    case 291u: goto L_0010AAD4;
    case 292u: goto L_0010AAF0;
    case 293u: goto L_0010AAF8;
    case 294u: goto L_0010AB10;
    case 295u: goto L_0010AC38;
    case 296u: goto L_0010AC4C;
    case 297u: goto L_0010AC64;
    case 298u: goto L_0010AC7C;
    case 299u: goto L_0010ACCC;
    case 300u: goto L_0010ACDC;
    case 301u: goto L_0010ACEC;
    case 302u: goto L_0010ACFC;
    case 303u: goto L_0010AD0C;
    case 304u: goto L_0010AD1C;
    case 305u: goto L_0010AD2C;
    case 306u: goto L_0010AD3C;
    case 307u: goto L_0010AD4C;
    case 308u: goto L_0010ADB8;
    case 309u: goto L_0010AE98;
    case 310u: goto L_0010AECC;
    case 311u: goto L_0010AED4;
    case 312u: goto L_0010AEE8;
    case 313u: goto L_0010AEF0;
    case 314u: goto L_0010AF38;
    case 315u: goto L_0010AF44;
    case 316u: goto L_0010AF4C;
    case 317u: goto L_0010AF60;
    case 318u: goto L_0010AF78;
    case 319u: goto L_0010AFAC;
    case 320u: goto L_0010AFB8;
    case 321u: goto L_0010AFF4;
    case 322u: goto L_0010B010;
    case 323u: goto L_0010B03C;
    case 324u: goto L_0010B080;
    case 325u: goto L_0010B0A8;
    case 326u: goto L_0010B0C0;
    case 327u: goto L_0010B0CC;
    case 328u: goto L_0010B0DC;
    case 329u: goto L_0010B0E8;
    case 330u: goto L_0010B0F4;
    case 331u: goto L_0010B104;
    case 332u: goto L_0010B114;
    case 333u: goto L_0010B120;
    case 334u: goto L_0010B138;
    case 335u: goto L_0010B148;
    case 336u: goto L_0010B158;
    case 337u: goto L_0010B168;
    case 338u: goto L_0010B178;
    case 339u: goto L_0010B18C;
    case 340u: goto L_0010B1A0;
    case 341u: goto L_0010B1B4;
    case 342u: goto L_0010B1C8;
    case 343u: goto L_0010B1DC;
    case 344u: goto L_0010B240;
    case 345u: goto L_0010B254;
    case 346u: goto L_0010B2B8;
    case 347u: goto L_0010B2D0;
    case 348u: goto L_0010B318;
    case 349u: goto L_0010B33C;
    case 350u: goto L_0010B3A0;
    case 351u: goto L_0010B424;
    case 352u: goto L_0010B430;
    case 353u: goto L_0010B460;
    case 354u: goto L_0010B4F0;
    case 355u: goto L_0010B518;
    case 356u: goto L_0010B558;
    case 357u: goto L_0010B56C;
    case 358u: goto L_0010B5C0;
    case 359u: goto L_0010B5D0;
    case 360u: goto L_0010B5E8;
    case 361u: goto L_0010B618;
    case 362u: goto L_0010B6A0;
    case 363u: goto L_0010B6D8;
    case 364u: goto L_0010B730;
    case 365u: goto L_0010B768;
    case 366u: goto L_0010B7A0;
    case 367u: goto L_0010B7D0;
    case 368u: goto L_0010B800;
    case 369u: goto L_0010B808;
    case 370u: goto L_0010B810;
    case 371u: goto L_0010B818;
    case 372u: goto L_0010B820;
    case 373u: goto L_0010B828;
    case 374u: goto L_0010B830;
    case 375u: goto L_0010B838;
    case 376u: goto L_0010B840;
    case 377u: goto L_0010B848;
    case 378u: goto L_0010B850;
    case 379u: goto L_0010B858;
    case 380u: goto L_0010B860;
    case 381u: goto L_0010B868;
    case 382u: goto L_0010B870;
    case 383u: goto L_0010B878;
    case 384u: goto L_0010B880;
    case 385u: goto L_0010B888;
    case 386u: goto L_0010B890;
    case 387u: goto L_0010B898;
    case 388u: goto L_0010B8A0;
    case 389u: goto L_0010B8A8;
    case 390u: goto L_0010B8B0;
    case 391u: goto L_0010B8B8;
    case 392u: goto L_0010B8C0;
    case 393u: goto L_0010B8C8;
    case 394u: goto L_0010B8D0;
    case 395u: goto L_0010B8D8;
    case 396u: goto L_0010B8E0;
    case 397u: goto L_0010B8E8;
    case 398u: goto L_0010B8F0;
    case 399u: goto L_0010B8F8;
    case 400u: goto L_0010B900;
    case 401u: goto L_0010B908;
    case 402u: goto L_0010B910;
    case 403u: goto L_0010B918;
    case 404u: goto L_0010B920;
    case 405u: goto L_0010B928;
    case 406u: goto L_0010B930;
    case 407u: goto L_0010B938;
    case 408u: goto L_0010B940;
    case 409u: goto L_0010B948;
    case 410u: goto L_0010B950;
    case 411u: goto L_0010B958;
    case 412u: goto L_0010B960;
    case 413u: goto L_0010B968;
    case 414u: goto L_0010B970;
    case 415u: goto L_0010B978;
    case 416u: goto L_0010B980;
    case 417u: goto L_0010B988;
    case 418u: goto L_0010B990;
    case 419u: goto L_0010B998;
    case 420u: goto L_0010B9A0;
    case 421u: goto L_0010B9A8;
    case 422u: goto L_0010B9B0;
    case 423u: goto L_0010B9B8;
    case 424u: goto L_0010B9C0;
    case 425u: goto L_0010B9C8;
    case 426u: goto L_0010B9D0;
    case 427u: goto L_0010B9D8;
    case 428u: goto L_0010B9E0;
    case 429u: goto L_0010B9E8;
    case 430u: goto L_0010B9F0;
    case 431u: goto L_0010B9F8;
    case 432u: goto L_0010BA00;
    case 433u: goto L_0010BA08;
    case 434u: goto L_0010BA10;
    case 435u: goto L_0010BA18;
    case 436u: goto L_0010BA20;
    case 437u: goto L_0010BA28;
    case 438u: goto L_0010BA30;
    case 439u: goto L_0010BA38;
    case 440u: goto L_0010BA40;
    case 441u: goto L_0010BA48;
    case 442u: goto L_0010BA50;
    case 443u: goto L_0010BA58;
    case 444u: goto L_0010BA60;
    case 445u: goto L_0010BA68;
    case 446u: goto L_0010BA70;
    case 447u: goto L_0010BA78;
    case 448u: goto L_0010BA80;
    case 449u: goto L_0010BA88;
    case 450u: goto L_0010BA90;
    case 451u: goto L_0010BA98;
    case 452u: goto L_0010BAA0;
    case 453u: goto L_0010BAA8;
    case 454u: goto L_0010BAB0;
    case 455u: goto L_0010BAB8;
    case 456u: goto L_0010BAC0;
    case 457u: goto L_0010BAC8;
    case 458u: goto L_0010BAD0;
    case 459u: goto L_0010BAD8;
    case 460u: goto L_0010BAE0;
    case 461u: goto L_0010BAE8;
    case 462u: goto L_0010BAF0;
    case 463u: goto L_0010BAF8;
    case 464u: goto L_0010BB00;
    case 465u: goto L_0010BB08;
    case 466u: goto L_0010BB10;
    case 467u: goto L_0010BB18;
    case 468u: goto L_0010BB20;
    case 469u: goto L_0010BB28;
    case 470u: goto L_0010BB30;
    case 471u: goto L_0010BB38;
    case 472u: goto L_0010BB40;
    case 473u: goto L_0010BB48;
    case 474u: goto L_0010BB50;
    case 475u: goto L_0010BB58;
    case 476u: goto L_0010BB60;
    case 477u: goto L_0010BB68;
    case 478u: goto L_0010BB70;
    case 479u: goto L_0010BB78;
    case 480u: goto L_0010BB80;
    case 481u: goto L_0010BB88;
    case 482u: goto L_0010BB90;
    case 483u: goto L_0010BB98;
    case 484u: goto L_0010BBA0;
    case 485u: goto L_0010BBA8;
    case 486u: goto L_0010BBB0;
    case 487u: goto L_0010BBB8;
    case 488u: goto L_0010BBC0;
    case 489u: goto L_0010BBC8;
    case 490u: goto L_0010BBD0;
    case 491u: goto L_0010BBD8;
    case 492u: goto L_0010BBE0;
    case 493u: goto L_0010BBE8;
    case 494u: goto L_0010BBF0;
    case 495u: goto L_0010BBF8;
    case 496u: goto L_0010BC00;
    case 497u: goto L_0010BC08;
    case 498u: goto L_0010BC10;
    case 499u: goto L_0010BC18;
    case 500u: goto L_0010BC20;
    case 501u: goto L_0010BC28;
    case 502u: goto L_0010BC30;
    case 503u: goto L_0010BC38;
    case 504u: goto L_0010BC40;
    case 505u: goto L_0010BC48;
    case 506u: goto L_0010BC50;
    case 507u: goto L_0010BC58;
    case 508u: goto L_0010BC60;
    case 509u: goto L_0010BC68;
    case 510u: goto L_0010BC70;
    case 511u: goto L_0010BC78;
    case 512u: goto L_0010BC80;
    case 513u: goto L_0010BC88;
    case 514u: goto L_0010BC90;
    case 515u: goto L_0010BC98;
    case 516u: goto L_0010BCA0;
    case 517u: goto L_0010BCA8;
    case 518u: goto L_0010BCB0;
    case 519u: goto L_0010BCB8;
    case 520u: goto L_0010BCC0;
    case 521u: goto L_0010BCC8;
    case 522u: goto L_0010BCD0;
    case 523u: goto L_0010BCD8;
    case 524u: goto L_0010BCE0;
    case 525u: goto L_0010BCE8;
    case 526u: goto L_0010BCF0;
    case 527u: goto L_0010BCF8;
    case 528u: goto L_0010BD00;
    case 529u: goto L_0010BD08;
    case 530u: goto L_0010BD10;
    case 531u: goto L_0010BD18;
    case 532u: goto L_0010BD20;
    case 533u: goto L_0010BD28;
    case 534u: goto L_0010BD30;
    case 535u: goto L_0010BD38;
    case 536u: goto L_0010BD40;
    case 537u: goto L_0010BD48;
    case 538u: goto L_0010BD50;
    case 539u: goto L_0010BD58;
    case 540u: goto L_0010BD60;
    case 541u: goto L_0010BD68;
    case 542u: goto L_0010BD70;
    case 543u: goto L_0010BD78;
    case 544u: goto L_0010BD80;
    case 545u: goto L_0010BD88;
    case 546u: goto L_0010BD90;
    case 547u: goto L_0010BD98;
    case 548u: goto L_0010BDA0;
    case 549u: goto L_0010BDA8;
    case 550u: goto L_0010BDB0;
    case 551u: goto L_0010BDB8;
    case 552u: goto L_0010BDC0;
    case 553u: goto L_0010BDC8;
    case 554u: goto L_0010BDD0;
    case 555u: goto L_0010BDD8;
    case 556u: goto L_0010BDE0;
    case 557u: goto L_0010BDE8;
    case 558u: goto L_0010BDF0;
    case 559u: goto L_0010BDF8;
    case 560u: goto L_0010BE00;
    case 561u: goto L_0010BE08;
    case 562u: goto L_0010BE10;
    case 563u: goto L_0010BE18;
    case 564u: goto L_0010BE20;
    case 565u: goto L_0010BE28;
    case 566u: goto L_0010BE30;
    case 567u: goto L_0010BE38;
    case 568u: goto L_0010BE40;
    case 569u: goto L_0010BE48;
    case 570u: goto L_0010BE50;
    case 571u: goto L_0010BE58;
    case 572u: goto L_0010BE60;
    case 573u: goto L_0010BE68;
    case 574u: goto L_0010BE70;
    case 575u: goto L_0010BE78;
    case 576u: goto L_0010BE80;
    case 577u: goto L_0010BE88;
    case 578u: goto L_0010BE90;
    case 579u: goto L_0010BE98;
    case 580u: goto L_0010BEA0;
    case 581u: goto L_0010BEA8;
    case 582u: goto L_0010BEB0;
    case 583u: goto L_0010BEB8;
    case 584u: goto L_0010BEC0;
    case 585u: goto L_0010BEC8;
    case 586u: goto L_0010BED0;
    case 587u: goto L_0010BED8;
    case 588u: goto L_0010BEE0;
    case 589u: goto L_0010BEE8;
    case 590u: goto L_0010BEF0;
    case 591u: goto L_0010BEF8;
    case 592u: goto L_0010BF00;
    case 593u: goto L_0010BF08;
    case 594u: goto L_0010BF10;
    case 595u: goto L_0010BF18;
    case 596u: goto L_0010BF20;
    case 597u: goto L_0010BF28;
    case 598u: goto L_0010BF30;
    case 599u: goto L_0010BF38;
    case 600u: goto L_0010BF40;
    case 601u: goto L_0010BF48;
    case 602u: goto L_0010BF50;
    case 603u: goto L_0010BF58;
    case 604u: goto L_0010BF60;
    case 605u: goto L_0010BF68;
    case 606u: goto L_0010BF70;
    case 607u: goto L_0010BF78;
    case 608u: goto L_0010BF80;
    case 609u: goto L_0010BF88;
    case 610u: goto L_0010BF90;
    case 611u: goto L_0010BF98;
    case 612u: goto L_0010BFA0;
    case 613u: goto L_0010BFA8;
    case 614u: goto L_0010BFB0;
    case 615u: goto L_0010BFB8;
    case 616u: goto L_0010BFC0;
    case 617u: goto L_0010BFC8;
    case 618u: goto L_0010BFD0;
    case 619u: goto L_0010BFD8;
    case 620u: goto L_0010BFE0;
    case 621u: goto L_0010BFE8;
    case 622u: goto L_0010BFF0;
    case 623u: goto L_0010BFF8;
    default: bad_entry(c, 0x00108000u); return;
    }
L_00108000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108008u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108008u) [[unlikely]] return; }
L_00108008:
    st32((c.r[16].w[0] + 360u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108018u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108018u) [[unlikely]] return; }
L_00108018:
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108028u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108028u) [[unlikely]] return; }
L_00108028:
    st32((c.r[16].w[0] + 368u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108038u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108038u) [[unlikely]] return; }
L_00108038:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0010803C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFC0000u);
    c.budget -= 1;
L_00108040:
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108068u); st32((c.r[7].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108068u) [[unlikely]] return; }
L_00108068:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 372u), c.r[3].w[0]);  if (t) { goto L_0010807C; } }
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 1;
L_0010807C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00108080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108088u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108088u) [[unlikely]] return; }
L_00108088:
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108098u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108098u) [[unlikely]] return; }
L_00108098:
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001080A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001080A8u) [[unlikely]] return; }
L_001080A8:
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001080B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001080B8u) [[unlikely]] return; }
L_001080B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.budget -= 2;
L_001080C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 22);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001080E8u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001080E8u) [[unlikely]] return; }
L_001080E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 21);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
L_00108100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108118u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108118u) [[unlikely]] return; }
L_00108118:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 8208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] << 20);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 10;
L_00108140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108148u); st32((c.r[1].w[0] + 8208u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108148u) [[unlikely]] return; }
L_00108148:
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108158u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108158u) [[unlikely]] return; }
L_00108158:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108164u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108164u) [[unlikely]] return; }
L_00108164:
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108174u) [[unlikely]] return; }
L_00108174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001081C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00108180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108188u) [[unlikely]] return; }
L_00108188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108194u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108194u) [[unlikely]] return; }
L_00108194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001081A0u) [[unlikely]] return; }
L_001081A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081ACu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001081ACu) [[unlikely]] return; }
L_001081AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107AA8u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 210u, depth); }
L_001081C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001081D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001081F0; } }
    c.budget -= 1;
L_001081E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081F0u);  if (depth < kMaxDepth) unit_0001(c, 206u, depth + 1u); else { c.pc = 0x001079B8u; return; } if (c.pc != 0x001081F0u) [[unlikely]] return; }
L_001081F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001081FCu) [[unlikely]] return; }
L_001081FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00108200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001081E8u | kUnwind; return; } goto L_001081E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00108218:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 336u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00108250; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 2124u)));  goto L_00108254; }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { st32((c.r[6].w[0] + 2132u), 0u);  goto L_0010824C; }
    set32(c.r[2], ld32((c.r[6].w[0] + 2132u)));
    c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 2132u), 0u);
    c.budget -= 3;
L_0010824C:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00108250:
    set32(c.r[2], ld32((c.r[6].w[0] + 2124u)));
    c.budget -= 1;
L_00108254:
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0] + 428u), c.r[3].w[0]);  if (t) { goto L_00108274; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 2128u)));  goto L_00108278; }
    set32(c.r[2], c.r[3].w[0] + 1024u);
    st32((c.r[6].w[0] + 428u), c.r[2].w[0]);
    c.budget -= 2;
L_00108274:
    set32(c.r[2], ld32((c.r[6].w[0] + 2128u)));
    c.budget -= 1;
L_00108278:
    set32(c.r[4], ld32((c.r[6].w[0] + 428u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 2128u), c.r[2].w[0]);  c.pc = t; return; }
L_00108290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 232u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2128u)));
    st32((c.r[16].w[0] + 2132u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082C0u); st32((c.r[16].w[0] + 2124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082C0u) [[unlikely]] return; }
L_001082C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082CCu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082CCu) [[unlikely]] return; }
L_001082CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082D8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082D8u) [[unlikely]] return; }
L_001082D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082E4u) [[unlikely]] return; }
L_001082E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082F0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082F0u) [[unlikely]] return; }
L_001082F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082FCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001082FCu) [[unlikely]] return; }
L_001082FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108308u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108308u) [[unlikely]] return; }
L_00108308:
    st32((c.r[16].w[0] + 420u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108318u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108318u) [[unlikely]] return; }
L_00108318:
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107EB8u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 245u, depth); }
L_00108330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00108338:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108348u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108348u) [[unlikely]] return; }
L_00108348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2112u), c.r[2].w[0]);  if (t) { goto L_0010836C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x00108358u) [[unlikely]] return; }
L_00108358:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108364u); c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x00108364u) [[unlikely]] return; }
L_00108364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010836Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010836Cu) [[unlikely]] return; }
L_0010836C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108378u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108378u) [[unlikely]] return; }
L_00108378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2116u), c.r[2].w[0]);  if (t) { goto L_0010839C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x00108388u) [[unlikely]] return; }
L_00108388:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108394u); c.r[5].sd[0] = static_cast<std::int32_t>(0x58000000u);  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x00108394u) [[unlikely]] return; }
L_00108394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010839Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010839Cu) [[unlikely]] return; }
L_0010839C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001083A8u) [[unlikely]] return; }
L_001083A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_001083BC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083BCu); set32(c.r[5], c.r[5].w[0] + 14624u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x001083BCu) [[unlikely]] return; }
L_001083BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001083C8u) [[unlikely]] return; }
L_001083C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001083E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[5].w[0] + 14664u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0010A870; }
L_001083E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001083F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.budget -= 1;
L_001083FC:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 1;
L_00108400:
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 316u)));
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 372u)));  goto L_00108444; }
    set32(c.r[2], ld32((c.r[17].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_00108450; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 376u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[19].d[0] = c.r[2].d[0];  if (t) { goto L_00108460; } }
L_00108444:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 388u)));  goto L_00108458; }
L_00108450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00108460; } }
L_00108458:
    set32(c.r[19], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_00108460:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001084C8; } }
    set32(c.r[21], c.r[17].w[0] + 396u);
    set32(c.r[20], c.r[17].w[0] + 408u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_00108478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108480u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108480u) [[unlikely]] return; }
L_00108480:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108498u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108498u) [[unlikely]] return; }
L_00108498:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084A8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001084A8u) [[unlikely]] return; }
L_001084A8:
    set32(c.r[16], c.r[20].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x001084BCu) [[unlikely]] return; }
L_001084BC:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108478u | kUnwind; return; } goto L_00108478; } }
L_001084C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001084F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108508u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108508u) [[unlikely]] return; }
L_00108508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108514u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108514u) [[unlikely]] return; }
L_00108514:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108520u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108520u) [[unlikely]] return; }
L_00108520:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010852Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010852Cu) [[unlikely]] return; }
L_0010852C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108538u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108538u) [[unlikely]] return; }
L_00108538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108544u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108544u) [[unlikely]] return; }
L_00108544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108550u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108550u) [[unlikely]] return; }
L_00108550:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010855Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010855Cu) [[unlikely]] return; }
L_0010855C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108568u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x00108568u) [[unlikely]] return; }
L_00108568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 22u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107AA8u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 210u, depth); }
L_00108580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001085C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001085C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085BCu); set32(c.r[5], c.r[5].w[0] + 14712u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x001085BCu) [[unlikely]] return; }
L_001085BC:
    st32((c.r[16].w[0] + 288u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_001085C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00108604; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001085E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_001085FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 448u)));  if (t) { goto L_00108610; } }
L_001085E8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010860C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 448u)));  if (t) { goto L_0010861C; } }
L_001085FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 464u)));  if (t) { goto L_0010861C; } }
    goto L_00108604;
L_00108600:
    set32(c.r[17], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 1;
L_00108604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 480u)));  if (t) { goto L_0010861C; } }
L_0010860C:
    set32(c.r[17], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 1;
L_00108610:
    set32(c.r[5], c.r[5].w[0] + 14744u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010861Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010861Cu) [[unlikely]] return; }
L_0010861C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 130u, depth + 1u); else { c.pc = 0x00106888u; return; } if (c.pc != 0x00108624u) [[unlikely]] return; }
L_00108624:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00108634; } }
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_00108634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0010863C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00108650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001086BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[16].w[0] + 336u)));  if (t) { goto L_00108698; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 440u)));  goto L_00108684; }
    set32(c.r[5], ld32((c.r[16].w[0] + 452u)));
    c.budget -= 1;
L_00108684:
    set32(c.r[6], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 107u, depth + 1u); else { c.pc = 0x00108E80u; return; } if (c.pc != 0x00108690u) [[unlikely]] return; }
L_00108690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 248u)));  if (t) { goto L_001086C0; } }
L_00108698:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 456u)));  goto L_001086AC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 484u)));  if (t) { goto L_001086B0; } }
L_001086AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 472u)));
    c.budget -= 1;
L_001086B0:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108F90u; return; } if (c.pc != 0x001086BCu) [[unlikely]] return; }
L_001086BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 1;
L_001086C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001086D4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_001086D4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001086E0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], 0u + 4u);
    set32(c.r[9], ld32((c.r[7].w[0] + 372u)));
    set32(c.r[12], 0u + 2u);
    set32(c.r[10], ld32((c.r[7].w[0] + 336u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[9].d[0] ^ 3ull;
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 3u);
    c.budget -= 11;
    { const bool t = c.r[10].d[0] != c.r[14].d[0]; if (c.r[2].d[0] == 0) c.r[11].d[0] = c.r[12].d[0];  if (t) { goto L_00108818; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 452u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 484u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    st32((c.r[7].w[0] + 448u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 464u), c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 480u), c.r[4].w[0]);  if (t) { goto L_00108744; } }
    st32((c.r[7].w[0] + 232u), 0u);
    st32((c.r[7].w[0] + 424u), 0u);
    st32((c.r[7].w[0] + 420u), 0u);
    c.budget -= 3;
L_00108744:
    set32(c.r[2], ld32((c.r[7].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 420u)));  goto L_00108760; }
    set32(c.r[2], ld32((c.r[7].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[7].w[0] + 232u), 0u);  goto L_00108788; }
    set32(c.r[2], ld32((c.r[7].w[0] + 420u)));
    c.budget -= 1;
L_00108760:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[7].w[0] + 232u), 0u);  goto L_00108788; }
    set32(c.r[2], ld32((c.r[7].w[0] + 440u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 456u)));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0] + 472u)));
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 372u)));
    st32((c.r[7].w[0] + 232u), 0u);
    c.budget -= 8;
L_00108788:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0]; st32((c.r[7].w[0] + 424u), 0u);  if (t) { goto L_001087BC; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 440u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[7].w[0] + 444u)));  goto L_00108804; }
    set32(c.r[2], ld32((c.r[7].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001088D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 444u)));  if (t) { goto L_00108804; } }
L_001087BC:
    set32(c.r[2], ld32((c.r[7].w[0] + 456u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 420u)));  goto L_001087E4; }
    set32(c.r[2], ld32((c.r[7].w[0] + 472u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 460u)));  goto L_001087F0; }
    set32(c.r[2], ld32((c.r[7].w[0] + 420u)));
    c.budget -= 1;
L_001087E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001088D0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 460u)));
    c.budget -= 1;
L_001087F0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001088D0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 476u)));
    c.budget -= 1;
L_00108804:
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[13].d[0] = 0ull;  if (t) { goto L_001088CC; } }
L_00108818:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 444u)));  goto L_00108854; }
    set32(c.r[6], ld32((c.r[7].w[0] + 440u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 444u)));
    st32((c.r[7].w[0] + 444u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 456u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 460u)));
    st32((c.r[7].w[0] + 460u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 476u)));
    c.budget -= 8;
L_00108840:
    st32((c.r[7].w[0] + 440u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 456u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 472u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 476u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 444u)));
    c.budget -= 5;
L_00108854:
    set32(c.r[4], ld32((c.r[7].w[0] + 460u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 476u)));
    st32((c.r[7].w[0] + 448u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 464u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != c.r[14].d[0]; st32((c.r[7].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_00108880; } }
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[12].d[0]) { set32(c.r[13], 0u + 1u);  goto L_001088CC; }
    set32(c.r[2], ld32((c.r[7].w[0] + 440u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001088BC; } }
L_00108880:
    c.r[2].d[0] = c.r[9].d[0] ^ 1ull;
    set32(c.r[6], 0u + 1u);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != c.r[12].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001088C8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 456u)));  goto L_001088AC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[13], 0u + 1u);  goto L_001088CC; }
    set32(c.r[2], ld32((c.r[7].w[0] + 456u)));
    c.budget -= 1;
L_001088AC:
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001088D0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 472u)));
    c.budget -= 1;
L_001088BC:
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 1;
L_001088C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001088D0; } }
L_001088C8:
    set32(c.r[13], 0u + 1u);
    c.budget -= 1;
L_001088CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001088D0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_00108904; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001088F0; } }
    c.budget -= 2;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[8], ld32((c.r[7].w[0] + 464u)));  goto L_00108908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 40u), 0u);  if (t) { goto L_0010890C; } }
L_001088F0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[2].d[0]) { set32(c.r[8], ld32((c.r[7].w[0] + 448u)));  goto L_00108908; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 40u), 0u);  if (t) { goto L_0010890C; } }
    goto L_00108904;
L_00108900:
    st32((c.r[8].w[0] + 40u), 0u);
    c.budget -= 1;
L_00108904:
    set32(c.r[8], ld32((c.r[7].w[0] + 480u)));
    c.budget -= 1;
L_00108908:
    st32((c.r[8].w[0] + 40u), 0u);
    c.budget -= 1;
L_0010890C:
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[7].w[0] + 2088u));
    set32(c.r[4], ld32((c.r[7].w[0] + 336u)));
    st64((c.r[8].w[0] + 24u), c.r[3].d[0]);
    st32((c.r[8].w[0] + 44u), c.r[4].w[0]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 2096u));
    set32(c.r[4], ld32((c.r[7].w[0] + 372u)));
    st64((c.r[8].w[0] + 32u), c.r[3].d[0]);
    st32((c.r[8].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 316u)));
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 392u)));
    st32((c.r[8].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 376u)));
    st32((c.r[8].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 388u)));
    st32((c.r[8].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 396u)));
    st32((c.r[8].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 400u)));
    st32((c.r[8].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 404u)));
    st32((c.r[8].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 408u)));
    st32((c.r[8].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 412u)));
    st32((c.r[8].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 416u)));
    st32((c.r[8].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 328u)));
    st32((c.r[8].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 332u)));
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 96u), c.r[4].w[0]);  c.pc = t; return; }
L_00108998:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001089DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001089F4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_001089F4; } }
L_001089DC:
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
L_001089F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00108A24; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 14776u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A14u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00108A14u) [[unlikely]] return; }
L_00108A14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A20u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x00108A20u) [[unlikely]] return; }
L_00108A20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00108A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00108A38:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 372u)));
    c.r[18].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], 0u + 3u);
    c.budget -= 24;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00108AAC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00108AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0] + 16u)));  if (t) { goto L_00108AB8; } }
L_00108AAC:
    set32(c.r[7], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
L_00108AB8:
    set32(c.r[4], 0u + 384u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 4));  if (t) { goto L_00108AD4; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]); c.r[30].d[0] = c.lo.d[0];  if (t) { goto L_00108AD8; } }
L_00108AD4:
    c.r[30].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00108AD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00108B0C; } }
L_00108AE4:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[5], 0u + 384u);
    set32(c.r[3], 0u + 192u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[2].w[0], c.r[5].w[0]);
    c.r[21].d[0] = c.lo.d[1];
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 4));
    c.budget -= 10;
L_00108B0C:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00108C98; } }
    set32(c.r[6], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 2;
L_00108B20:
    set32(c.r[17], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00108C64; } }
    set32(c.r[23], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00108B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B38u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00108B38u) [[unlikely]] return; }
L_00108B38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    c.r[5].d[0] = c.r[5].d[0] | 54288ull;
    st32((c.r[3].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[18].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 54304ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[20].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 54272ull;
    set32(c.r[3], 0u + 257u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00108B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B7Cu);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x00108B7Cu) [[unlikely]] return; }
L_00108B7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00108B80:
    set32(c.r[19], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + c.r[30].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    c.budget -= 4;
L_00108B90:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108B90u | kUnwind; return; } goto L_00108B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BB4u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00108BB4u) [[unlikely]] return; }
L_00108BB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 53376ull;
    c.r[5].d[0] = c.r[5].d[0] | 53264ull;
    st32((c.r[3].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 53280ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[20].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 53248ull;
    set32(c.r[3], 0u + 256u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00108BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BF8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x00108BF8u) [[unlikely]] return; }
L_00108BF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00108BFC:
    set32(c.r[6], ld32((c.r[22].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | 53248ull;
    c.budget -= 3;
L_00108C08:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108C08u | kUnwind; return; } goto L_00108C08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 53280ull;
    c.budget -= 3;
L_00108C30:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108C30u | kUnwind; return; } goto L_00108C30; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108B30u | kUnwind; return; } goto L_00108B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0])));  if (t) { goto L_00108C6C; } }
L_00108C64:
    set32(c.r[23], c.r[5].w[0] + 1u);
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_00108C6C:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], 0u + 192u);
    set32(c.r[2], ld32((c.r[7].w[0] + 228u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    c.lo.d[0] = c.r[7].d[0];
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108B20u | kUnwind; return; } goto L_00108B20; } }
L_00108C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00108CC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00108CE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_00108CE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 2080u), c.r[2].w[0]);  c.pc = t; return; }
L_00108CF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[8].w[0]);  if (t) { goto L_00108DC8; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { st64((c.r[21].w[0]), c.r[2].d[0]);  goto L_00108DD0; }
    set32(c.r[23], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[23].sd[0] < 0) { st64((c.r[21].w[0]), c.r[2].d[0]);  goto L_00108DD0; }
    c.r[16].d[0] = ld64((c.r[19].w[0] + 136u));
    c.r[5].d[0] = ld64((c.r[19].w[0] + 120u));
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = c.r[16].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x00108D70u) [[unlikely]] return; }
L_00108D70:
    set32(c.r[22], ld32((c.r[19].w[0] + 144u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D80u); c.r[5].d[0] = c.r[22].d[0] & 1ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x00108D80u) [[unlikely]] return; }
L_00108D80:
    c.r[4].d[0] = ld64((c.r[19].w[0] + 120u));
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x00108D94u) [[unlikely]] return; }
L_00108D94:
    c.r[2].d[0] = c.r[2].d[0] << 31;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    st64((c.r[21].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = ld64((c.r[19].w[0] + 120u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108DB8u); c.r[5].d[0] = c.r[5].d[0] & 1ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x00108DB8u) [[unlikely]] return; }
L_00108DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] + 1u);  if (t) { goto L_00108DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_00108DD0; } }
L_00108DC8:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    st64((c.r[21].w[0]), c.r[2].d[0]);
    c.budget -= 2;
L_00108DD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 248u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 64u)));  goto L_00108E00; }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 240u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[5], ld32((c.r[20].w[0] + 64u)));  goto L_00108E00; }
    st64((c.r[21].w[0]), c.r[2].d[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 248u), 0u);
    st64((c.r[19].w[0] + 240u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 5;
L_00108E00:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.r[5].d[0] = c.r[5].d[0] << 5;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    set32(c.r[6], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 44u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[4].d[0] = ld64((c.r[20].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 3;
    c.r[3].d[0] = c.r[3].d[0] << 7;
    st64((c.r[30].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00108E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 2136u)));
    set32(c.r[8], c.r[7].w[0] + 32u);
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EACu); set32(c.r[7], c.r[7].w[0] + 24u);  if (depth < kMaxDepth) unit_0002(c, 102u, depth + 1u); else { c.pc = 0x00108CF0u; return; } if (c.pc != 0x00108EACu) [[unlikely]] return; }
L_00108EAC:
    set32(c.r[7], ld32((c.r[16].w[0] + 2136u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[6].w[0] - 23768u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[7].w[0] + 32u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] << 27;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 128u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 204u), c.r[3].w[0]);
    st64((c.r[16].w[0] + 136u), c.r[6].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[16].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[16].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F2Cu); st32((c.r[16].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 88u, depth + 1u); else { c.pc = 0x00108998u; return; } if (c.pc != 0x00108F2Cu) [[unlikely]] return; }
L_00108F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00108F7C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00108F80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00108F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 150u, depth + 1u); else { c.pc = 0x00109848u; return; } if (c.pc != 0x00108F54u) [[unlikely]] return; }
L_00108F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00108F68; } }
L_00108F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 91u, depth + 1u); else { c.pc = 0x00108A38u; return; } if (c.pc != 0x00108F64u) [[unlikely]] return; }
L_00108F64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00108F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108CC8u | kUnwind; return; } goto L_00108CC8; }
L_00108F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00108F80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00108F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00108FE0; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 64u);  if (t) { goto L_00108FE8; } }
L_00108FE0:
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00108FE8:
    set32(c.r[7], ld32((c.r[17].w[0] + 2136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], 0u + 1u);
    set32(c.r[8], c.r[7].w[0] + 32u);
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109008u); set32(c.r[7], c.r[7].w[0] + 24u);  if (depth < kMaxDepth) unit_0002(c, 102u, depth + 1u); else { c.pc = 0x00108CF0u; return; } if (c.pc != 0x00109008u) [[unlikely]] return; }
L_00109008:
    set32(c.r[7], ld32((c.r[17].w[0] + 2136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[8], c.r[7].w[0] + 56u);
    set32(c.r[6], c.r[7].w[0] + 40u);
    st64((c.r[17].w[0] + 136u), c.r[16].d[0]);
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109030u); set32(c.r[7], c.r[7].w[0] + 48u);  if (depth < kMaxDepth) unit_0002(c, 102u, depth + 1u); else { c.pc = 0x00108CF0u; return; } if (c.pc != 0x00109030u) [[unlikely]] return; }
L_00109030:
    set32(c.r[7], ld32((c.r[17].w[0] + 2136u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0010903C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00109040:
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    st64((c.r[17].w[0] + 136u), c.r[16].d[0]);
    st32((c.r[17].w[0] + 128u), c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[7].w[0] + 32u));
    set32(c.r[6], ld32((c.r[19].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.r[3].d[0] = ld64((c.r[7].w[0] + 56u));
    st32((c.r[17].w[0] + 204u), c.r[6].w[0]);
    st64((c.r[7].w[0] + 32u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    set32(c.r[6], ld32((c.r[19].w[0] + 96u)));
    st64((c.r[7].w[0] + 56u), c.r[3].d[0]);
    st32((c.r[17].w[0] + 208u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    st32((c.r[17].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 16;
L_00109080:
    st32((c.r[17].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[17].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109098u); st32((c.r[17].w[0] + 196u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 88u, depth + 1u); else { c.pc = 0x00108998u; return; } if (c.pc != 0x00109098u) [[unlikely]] return; }
L_00109098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00109120; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00109124; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00109128; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001090E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001090D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 150u, depth + 1u); else { c.pc = 0x00109848u; return; } if (c.pc != 0x001090D8u) [[unlikely]] return; }
L_001090D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (t) { goto L_001090EC; } }
L_001090E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001090E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 91u, depth + 1u); else { c.pc = 0x00108A38u; return; } if (c.pc != 0x001090E8u) [[unlikely]] return; }
L_001090E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001090EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108CC8u | kUnwind; return; } goto L_00108CC8; }
L_00109120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00109124:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00109128:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00109148:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 320u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], c.r[18].w[0] - 26432u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[24], ld32((c.r[16].w[0] + 2064u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    mmi::mult(c, 0, c.r[24].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[12], ld32((c.r[5].w[0] + 1724u)));
    c.budget -= 20;
    { const bool t = c.r[12].sd[0] <= 0; c.r[10].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_00109228; } }
    set32(c.r[15], c.r[16].w[0] + 1432u);
    set32(c.r[14], c.r[16].w[0] + 1448u);
    set32(c.r[13], c.r[12].w[0] - 1u);
    set32(c.r[17], c.r[16].w[0] + 1424u);
    c.budget -= 4;
L_001091A8:
    set32(c.r[3], 0u + 320u);
    c.r[2].d[0] = c.r[11].d[0] ^ c.r[13].d[0];
    mmi::mult(c, 0, c.r[24].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] << 2);
    set32(c.r[5], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 28;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[9].d[0] = c.r[9].d[0] | 48ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], 0u + 48u);
    set32(c.r[2], c.r[14].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[15].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[11].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st64((c.r[10].w[0]), c.r[2].d[0]);
    st64((c.r[10].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 30;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001091A8u | kUnwind; return; } goto L_001091A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010922C; } }
L_00109228:
    set32(c.r[17], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0010922C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109234u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109234u) [[unlikely]] return; }
L_00109234:
    set32(c.r[6], ld32((c.r[16].w[0] + 2064u)));
    set32(c.r[3], 0u + 320u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[7].d[0] | 54400ull;
    set32(c.r[10], c.r[18].w[0] - 26432u);
    c.r[8].d[0] = c.r[8].d[0] | 54320ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[9], 0u + 261u);
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    set32(c.r[6], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 54272ull;
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001092A0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_001092A0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001092B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x001092D4u) [[unlikely]] return; }
L_001092D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 45072ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 4));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[17].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 45056ull;
    set32(c.r[4], 0u + 256u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010932C; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010932C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00109340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[17], c.r[19].w[0] << 6);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
L_00109370:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109370u | kUnwind; return; } goto L_00109370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109394u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109394u) [[unlikely]] return; }
L_00109394:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | 45072ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[4].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 45056ull;
    set32(c.r[4], 0u + 256u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);  goto L_001093DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093D8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x001093D8u) [[unlikely]] return; }
L_001093D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_001093DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093E8u); c.r[5].d[0] = c.r[19].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x001093E8u) [[unlikely]] return; }
L_001093E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 2136u)));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093FCu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x001093FCu) [[unlikely]] return; }
L_001093FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 45056ull;
    c.budget -= 3;
L_00109408:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109408u | kUnwind; return; } goto L_00109408; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_00109430:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109430u | kUnwind; return; } goto L_00109430; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00109468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 8u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[9].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001094B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45056ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001094C8; } }
L_001094B4:
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    set_interrupts(c, true);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001094C8:
    set32(c.r[3], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010953C; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = 0ull | 65472ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], 0u + 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 20448u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 20480u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[2].d[0] = c.r[2].d[0] | 1023ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64512ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[2], ld32((c.r[9].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001095A0; } }
L_0010953C:
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[8], 0u + 256u);  if (t) { goto L_001095A0; } }
    set32(c.r[5], ld32((c.r[9].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] | 45072ull;
    set32(c.r[2], c.r[5].w[0] << 10);
    set32(c.r[6], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    set32(c.r[2], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 20448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 20480u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 22;
L_001095A0:
    set_interrupts(c, true);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001095B0:
    set32(c.r[7], 0u + 1023u);
    set32(c.r[29], c.r[29].w[0] - 128u);
    mmi::div(c, 0, c.r[6].w[0], c.r[7].w[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 64512ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 16;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x001095ECu);  goto L_001095F0; }
L_001095F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[8].w[0]);
    c.budget -= 12;
L_00109620:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109620u | kUnwind; return; } goto L_00109620; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] - 27544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109650u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 408u, depth + 1u); else { c.pc = 0x0010B940u; return; } if (c.pc != 0x00109650u) [[unlikely]] return; }
L_00109650:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010966Cu); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010C838u; return; } if (c.pc != 0x0010966Cu) [[unlikely]] return; }
L_0010966C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109674u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109674u) [[unlikely]] return; }
L_00109674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 45072ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 45088ull;
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    set32(c.r[3], 0u + 256u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001096C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096BCu);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x001096BCu) [[unlikely]] return; }
L_001096BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001096C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 1023ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], ld32((c.r[17].w[0] + 2136u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096E4u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x001096E4u) [[unlikely]] return; }
L_001096E4:
    set32(c.r[4], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
L_001096F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001096F0u | kUnwind; return; } goto L_001096F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00109720; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109720u); set32(c.r[5], c.r[5].w[0] + 14824u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x00109720u) [[unlikely]] return; }
L_00109720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 2;
L_00109728:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109728u | kUnwind; return; } goto L_00109728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010974Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0003(c, 79u, depth + 1u); else { c.pc = 0x0010C7D0u; return; } if (c.pc != 0x0010974Cu) [[unlikely]] return; }
L_0010974C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109758u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 410u, depth + 1u); else { c.pc = 0x0010B950u; return; } if (c.pc != 0x00109758u) [[unlikely]] return; }
L_00109758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00109770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = 0ull | 65535ull;  if (t) { goto L_001097A0; } }
    set_interrupts(c, true);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001097A0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00109804; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46080ull;
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65520ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00109834; } }
L_00109804:
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 257u);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 46080ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 12;
L_00109834:
    set_interrupts(c, true);
    c.budget -= 2;
L_0010983C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00109840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
    c.pc = 0x00109844u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00109848:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 14;
L_00109880:
    set32(c.r[4], ld32((c.r[16].w[0] + 2136u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109890u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x00109890u) [[unlikely]] return; }
L_00109890:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001098B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 8208u), c.r[2].w[0]);
    c.budget -= 2;
L_001098B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[21].d[0] = c.r[19].sd[0] < 1024ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 4;
L_001098C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001098C0u | kUnwind; return; } goto L_001098C0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001098E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x001098E8u) [[unlikely]] return; }
L_001098E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 4;
L_001098F8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_00109900:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001098F8u | kUnwind; return; } goto L_001098F8; } }
    set32(c.r[2], 0u + 24u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.r[20].d[0] = 0ull | 65535ull;
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00109A20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 26768u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109954u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 408u, depth + 1u); else { c.pc = 0x0010B940u; return; } if (c.pc != 0x00109954u) [[unlikely]] return; }
L_00109954:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109970u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 83u, depth + 1u); else { c.pc = 0x0010C838u; return; } if (c.pc != 0x00109970u) [[unlikely]] return; }
L_00109970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109978u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109978u) [[unlikely]] return; }
L_00109978:
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[4].w[0]), c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    set32(c.r[4], 0u + 257u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_001099B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001099B4u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x001099B4u) [[unlikely]] return; }
L_001099B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_001099B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    set32(c.r[4], c.r[4].w[0] - c.r[20].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_001099F4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001099ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 126u, depth + 1u); else { c.pc = 0x00109340u; return; } if (c.pc != 0x001099ECu) [[unlikely]] return; }
L_001099EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109A04; } }
L_001099F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 135u, depth + 1u); else { c.pc = 0x001095B0u; return; } if (c.pc != 0x00109A04u) [[unlikely]] return; }
L_00109A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A0Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 79u, depth + 1u); else { c.pc = 0x0010C7D0u; return; } if (c.pc != 0x00109A0Cu) [[unlikely]] return; }
L_00109A0C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A18u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 410u, depth + 1u); else { c.pc = 0x0010B950u; return; } if (c.pc != 0x00109A18u) [[unlikely]] return; }
L_00109A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 2136u)));  if (t) { goto L_00109A9C; } }
L_00109A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A28u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109A28u) [[unlikely]] return; }
L_00109A28:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46096ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[17].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 46112ull;
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    set32(c.r[5], 0u + 257u);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00109A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A68u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x00109A68u) [[unlikely]] return; }
L_00109A68:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 32u), 0u);  if (t) { goto L_00109A88; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 126u, depth + 1u); else { c.pc = 0x00109340u; return; } if (c.pc != 0x00109A80u) [[unlikely]] return; }
L_00109A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 2136u)));  if (t) { goto L_00109A9C; } }
L_00109A88:
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 135u, depth + 1u); else { c.pc = 0x001095B0u; return; } if (c.pc != 0x00109A98u) [[unlikely]] return; }
L_00109A98:
    set32(c.r[4], ld32((c.r[16].w[0] + 2136u)));
    c.budget -= 1;
L_00109A9C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109AACu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x00109AACu) [[unlikely]] return; }
L_00109AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00109AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109AE0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x00109AE0u) [[unlikely]] return; }
L_00109AE0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = c.r[9].d[0] | 62752ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.r[10].d[0] = c.r[10].d[0] | 62864ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 45056ull;
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 65279ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    st32((c.r[10].w[0]), c.r[4].w[0]);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00109B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B54u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x00109B54u) [[unlikely]] return; }
L_00109B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00109B58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45088ull;
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B70u); st32((c.r[3].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 358u, depth + 1u); else { c.pc = 0x0010B5C0u; return; } if (c.pc != 0x00109B70u) [[unlikely]] return; }
L_00109B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x00109BB0u) [[unlikely]] return; }
L_00109BB0:
    set32(c.r[3], c.r[16].w[0] + 3u);
    set32(c.r[3], c.r[3].w[0] >> 2);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[17].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(4288ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_00109BE4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BDCu); set32(c.r[5], c.r[5].w[0] + 14848u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x00109BDCu) [[unlikely]] return; }
L_00109BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00109D70; } }
L_00109BE4:
    set32(c.r[17], c.r[18].w[0] + 264u);
    st32((c.r[19].w[0] + 64u), c.r[18].w[0]);
    set32(c.r[6], c.r[6].w[0] - 4288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 4288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C00u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_0002(c, 217u, depth + 1u); else { c.pc = 0x0010A118u; return; } if (c.pc != 0x00109C00u) [[unlikely]] return; }
L_00109C00:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[8], c.r[8].w[0] - 20064u);
    st64((c.r[19].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[7], 0u + 8u);
    st64((c.r[19].w[0] + 24u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[19].w[0] + 32u), 0ull);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[19].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[6], 0u + 1536u);
    st64((c.r[19].w[0] + 48u), c.r[2].d[0]);
    st64((c.r[19].w[0] + 56u), 0ull);
    st32((c.r[18].w[0] + 180u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    st32((c.r[18].w[0] + 196u), 0u);
    st32((c.r[18].w[0] + 200u), 0u);
    st32((c.r[18].w[0] + 204u), 0u);
    st32((c.r[18].w[0] + 208u), 0u);
    st32((c.r[18].w[0] + 212u), 0u);
    st32((c.r[18].w[0] + 216u), 0u);
    st32((c.r[18].w[0] + 220u), 0u);
    st32((c.r[18].w[0] + 224u), 0u);
    st32((c.r[18].w[0] + 228u), 0u);
    st32((c.r[18].w[0] + 232u), 0u);
    st32((c.r[18].w[0] + 248u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 60u), 0u);
    st64((c.r[18].w[0] + 240u), c.r[2].d[0]);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CA8u); st32((c.r[18].w[0] + 36u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0002(c, 220u, depth + 1u); else { c.pc = 0x0010A150u; return; } if (c.pc != 0x00109CA8u) [[unlikely]] return; }
L_00109CA8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 252u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 256u), 0u);
    st32((c.r[18].w[0] + 260u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    st64((c.r[18].w[0] + 120u), 0ull);
    st32((c.r[18].w[0] + 128u), c.r[16].w[0]);
    st64((c.r[18].w[0] + 136u), 0ull);
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 172u), 0u);
    st32((c.r[18].w[0] + 148u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 152u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 156u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 2136u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CF4u); st32((c.r[18].w[0] + 176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 261u, depth + 1u); else { c.pc = 0x0010A700u; return; } if (c.pc != 0x00109CF4u) [[unlikely]] return; }
L_00109CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109CFCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 197u, depth + 1u); else { c.pc = 0x00109F20u; return; } if (c.pc != 0x00109CFCu) [[unlikely]] return; }
L_00109CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 200u, depth + 1u); else { c.pc = 0x00109F78u; return; } if (c.pc != 0x00109D04u) [[unlikely]] return; }
L_00109D04:
    set32(c.r[3], c.r[18].w[0] + 488u);
    set32(c.r[2], c.r[18].w[0] + 592u);
    set32(c.r[5], c.r[18].w[0] + 696u);
    set32(c.r[6], c.r[18].w[0] + 800u);
    set32(c.r[7], c.r[18].w[0] + 904u);
    set32(c.r[8], c.r[18].w[0] + 1008u);
    set32(c.r[9], c.r[18].w[0] + 1112u);
    set32(c.r[10], c.r[18].w[0] + 1216u);
    set32(c.r[11], c.r[18].w[0] + 1320u);
    st32((c.r[18].w[0] + 440u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 444u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 452u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 456u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 460u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 468u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 472u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 476u), c.r[10].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D54u); st32((c.r[18].w[0] + 484u), c.r[11].w[0]);  if (depth < kMaxDepth) unit_0002(c, 218u, depth + 1u); else { c.pc = 0x0010A130u; return; } if (c.pc != 0x00109D54u) [[unlikely]] return; }
L_00109D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[18].w[0] + 2128u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13824ull;
    st32((c.r[18].w[0] + 2132u), 0u);
    st32((c.r[18].w[0] + 2076u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2124u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_00109D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00109D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00109D98:
    set32(c.r[3], c.r[6].w[0] + 19u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 34u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DC4u); set32(c.r[6], c.r[6].w[0] << 4);  if (depth < kMaxDepth) unit_0002(c, 274u, depth + 1u); else { c.pc = 0x0010A8C8u; return; } if (c.pc != 0x00109DC4u) [[unlikely]] return; }
L_00109DC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109DD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 64u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[7].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 228u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 220u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E14u); st32((c.r[7].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x0010A1D8u; return; } if (c.pc != 0x00109E14u) [[unlikely]] return; }
L_00109E14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 64u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 228u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 220u), 0u);
    st32((c.r[7].w[0] + 176u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E58u); st32((c.r[7].w[0] + 224u), 0u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x0010A1D8u; return; } if (c.pc != 0x00109E58u) [[unlikely]] return; }
L_00109E58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109E68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], c.r[6].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 224u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 216u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 228u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 220u), c.r[6].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109EACu); st32((c.r[3].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x0010A1D8u; return; } if (c.pc != 0x00109EACu) [[unlikely]] return; }
L_00109EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109EB8:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4256u), c.r[2].w[0]);  c.pc = t; return; }
L_00109EC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st32((c.r[2].w[0] + 156u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 152u), c.r[6].w[0]);  c.pc = t; return; }
L_00109EE0:
    set32(c.r[8], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 148u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 152u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 156u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00109F00:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0])));  c.pc = t; return; }
L_00109F10:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00109F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[16].w[0]), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F58u); st32((c.r[16].w[0] + 128u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 263u, depth + 1u); else { c.pc = 0x0010A760u; return; } if (c.pc != 0x00109F58u) [[unlikely]] return; }
L_00109F58:
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 256u, depth + 1u); else { c.pc = 0x0010A670u; return; } if (c.pc != 0x00109F64u) [[unlikely]] return; }
L_00109F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00109F78:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 440u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109F88; }
L_00109F88:
    set32(c.r[2], ld32((c.r[3].w[0] + 456u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109F94; }
L_00109F94:
    set32(c.r[2], ld32((c.r[3].w[0] + 472u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109FA0; }
L_00109FA0:
    set32(c.r[2], ld32((c.r[3].w[0] + 444u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109FAC; }
L_00109FAC:
    set32(c.r[2], ld32((c.r[3].w[0] + 460u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109FB8; }
L_00109FB8:
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), 0u);  goto L_00109FC4; }
L_00109FC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00109FD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00109FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010A038; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_0010A00C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010A03C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_0010A03C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A034u); set32(c.r[6], ld32((c.r[2].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010A034u) [[unlikely]] return; }
L_0010A034:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010A038:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010A03C:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010A048:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A060u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x0010A060u) [[unlikely]] return; }
L_0010A060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010A070:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[3].w[0] + 120u), c.r[5].d[0]);
    c.budget -= 4;
L_0010A080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 112u), c.r[4].w[0]);  c.pc = t; return; }
L_0010A088:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    st64((c.r[3].w[0] + 120u), 0ull);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 112u), 0u);  c.pc = t; return; }
L_0010A0A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 216u), c.r[5].w[0]);  c.pc = t; return; }
L_0010A0B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 204u)));  c.pc = t; return; }
L_0010A0C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 208u)));  c.pc = t; return; }
L_0010A0D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 180u);  c.pc = t; return; }
L_0010A0E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 180u);  c.pc = t; return; }
L_0010A0F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 232u), c.r[5].w[0]);  c.pc = t; return; }
L_0010A100:
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 248u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[6].w[0] + 240u), c.r[5].d[0]);  c.pc = t; return; }
L_0010A118:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_0010A130:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_0010A140:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_0010A150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0010A160u);  goto L_0010A164; }
L_0010A164:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  goto L_0010A1A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0010A1B0; } }
L_0010A1A0:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1ACu); set32(c.r[5], c.r[5].w[0] + 14888u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010A1ACu) [[unlikely]] return; }
L_0010A1AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010A1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010A1C0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);  c.pc = t; return; }
L_0010A1D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 216u)));
    c.r[2].d[0] = c.r[6].d[0] & 63ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0010A228; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A220u); set32(c.r[5], c.r[5].w[0] + 14920u);  if (depth < kMaxDepth) unit_0002(c, 267u, depth + 1u); else { c.pc = 0x0010A838u; return; } if (c.pc != 0x0010A220u) [[unlikely]] return; }
L_0010A220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010A32C; } }
L_0010A228:
    st32((c.r[16].w[0] + 2080u), 0u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0010A230:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0010A268; } }
L_0010A238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 227u, depth + 1u); else { c.pc = 0x00107CE0u; return; } if (c.pc != 0x0010A240u) [[unlikely]] return; }
L_0010A240:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0010A268; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { goto L_0010A268; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A238u | kUnwind; return; } goto L_0010A238; } }
L_0010A268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010A310; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14992u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00108000u < 16384u) { entry = entries_0002[(t - 0x00108000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010A288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 254u, depth + 1u); else { c.pc = 0x0010A608u; return; } if (c.pc != 0x0010A290u) [[unlikely]] return; }
L_0010A290:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0010A310; } }
L_0010A29C:
    st32((c.r[16].w[0] + 168u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 164u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 160u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2B8u); set32(c.r[6], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_0002(c, 242u, depth + 1u); else { c.pc = 0x0010A460u; return; } if (c.pc != 0x0010A2B8u) [[unlikely]] return; }
L_0010A2B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0010A310; } }
L_0010A2CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2DCu); set32(c.r[6], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0002(c, 242u, depth + 1u); else { c.pc = 0x0010A460u; return; } if (c.pc != 0x0010A2DCu) [[unlikely]] return; }
L_0010A2DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0010A310; } }
L_0010A2F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A300u); set32(c.r[6], ld32((c.r[16].w[0] + 156u)));  if (depth < kMaxDepth) unit_0002(c, 242u, depth + 1u); else { c.pc = 0x0010A460u; return; } if (c.pc != 0x0010A300u) [[unlikely]] return; }
L_0010A300:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 4;
L_0010A310:
    set32(c.r[2], ld32((c.r[16].w[0] + 2080u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010A32C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A230u | kUnwind; return; } goto L_0010A230; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010A32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010A348:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[16], ld32((c.r[17].w[0] + 64u)));  if (t) { goto L_0010A380; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010A3BC; } }
L_0010A380:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010A398; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0010A398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 83u, depth + 1u); else { c.pc = 0x001086E0u; return; } if (c.pc != 0x0010A3A0u) [[unlikely]] return; }
L_0010A3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0010A3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 74u, depth + 1u); else { c.pc = 0x00108580u; return; } if (c.pc != 0x0010A3B0u) [[unlikely]] return; }
L_0010A3B0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010A3B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010A3D4; } }
L_0010A3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 83u, depth + 1u); else { c.pc = 0x001086E0u; return; } if (c.pc != 0x0010A3C4u) [[unlikely]] return; }
L_0010A3C4:
    set32(c.r[19], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x0010A048u; return; } if (c.pc != 0x0010A3D4u) [[unlikely]] return; }
L_0010A3D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3E4u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0002(c, 80u, depth + 1u); else { c.pc = 0x00108650u; return; } if (c.pc != 0x0010A3E4u) [[unlikely]] return; }
L_0010A3E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  goto L_0010A40C; }
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  goto L_0010A40C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 4;
L_0010A40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010A440; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_0010A440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010A460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[7].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0010A490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A488u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 245u, depth + 1u); else { c.pc = 0x0010A4A8u; return; } if (c.pc != 0x0010A488u) [[unlikely]] return; }
L_0010A488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010A49C; } }
L_0010A490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A498u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 236u, depth + 1u); else { c.pc = 0x0010A348u; return; } if (c.pc != 0x0010A498u) [[unlikely]] return; }
L_0010A498:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010A49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010A4A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 288u), 0u);  if (t) { goto L_0010A4E8; } }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0010A4F0; }
L_0010A4E8:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_0010A4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010A504; } }
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0010A504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A50Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 83u, depth + 1u); else { c.pc = 0x001086E0u; return; } if (c.pc != 0x0010A50Cu) [[unlikely]] return; }
L_0010A50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0010A528; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010A52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 74u, depth + 1u); else { c.pc = 0x00108580u; return; } if (c.pc != 0x0010A524u) [[unlikely]] return; }
L_0010A524:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0010A528:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010A52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A534u); st32((c.r[16].w[0] + 288u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 227u, depth + 1u); else { c.pc = 0x00107CE0u; return; } if (c.pc != 0x0010A534u) [[unlikely]] return; }
L_0010A534:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 212u)));  goto L_0010A550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A544u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 254u, depth + 1u); else { c.pc = 0x0010A608u; return; } if (c.pc != 0x0010A544u) [[unlikely]] return; }
L_0010A544:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010A5E4; } }
L_0010A550:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 372u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[17].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010A5E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A574u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 83u, depth + 1u); else { c.pc = 0x001086E0u; return; } if (c.pc != 0x0010A574u) [[unlikely]] return; }
L_0010A574:
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[17].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010A598; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 280u)));  goto L_0010A59C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 74u, depth + 1u); else { c.pc = 0x00108580u; return; } if (c.pc != 0x0010A594u) [[unlikely]] return; }
L_0010A594:
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[17].d[0];
    c.budget -= 1;
L_0010A598:
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 1;
L_0010A59C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5A8u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0002(c, 80u, depth + 1u); else { c.pc = 0x00108650u; return; } if (c.pc != 0x0010A5A8u) [[unlikely]] return; }
L_0010A5A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    st32((c.r[16].w[0] + 288u), 0u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0010A5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x0010A048u; return; } if (c.pc != 0x0010A5E0u) [[unlikely]] return; }
L_0010A5E0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0010A5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010A608:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010A658; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010A65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 257u, depth + 1u); else { c.pc = 0x0010A680u; return; } if (c.pc != 0x0010A640u) [[unlikely]] return; }
L_0010A640:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
L_0010A658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010A65C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010A670:
    st32((c.r[4].w[0] + 2120u), 0u);
    c.budget -= 3;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106308u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 106u, depth); }
L_0010A680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 280u)));  if (t) { goto L_0010A6B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6A8u); set32(c.r[5], c.r[5].w[0] + 15016u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010A6A8u) [[unlikely]] return; }
L_0010A6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 288u), 0u);  if (t) { goto L_0010A6EC; } }
L_0010A6B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 372u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[6].w[0] - 1u);  if (t) { goto L_0010A6D8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 444u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 107u, depth + 1u); else { c.pc = 0x00108E80u; return; } if (c.pc != 0x0010A6D0u) [[unlikely]] return; }
L_0010A6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 288u), 0u);  if (t) { goto L_0010A6EC; } }
L_0010A6D8:
    set32(c.r[5], ld32((c.r[16].w[0] + 460u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108F90u; return; } if (c.pc != 0x0010A6E8u) [[unlikely]] return; }
L_0010A6E8:
    st32((c.r[16].w[0] + 288u), 0u);
    c.budget -= 1;
L_0010A6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010A700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A71Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x00106308u; return; } if (c.pc != 0x0010A71Cu) [[unlikely]] return; }
L_0010A71C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 6144ull;
    c.r[3].d[0] = c.r[3].d[0] | 6912ull;
    c.r[4].d[0] = c.r[4].d[0] | 13056ull;
    st32((c.r[16].w[0] + 1424u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 1428u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1744u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1748u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 2064u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010A760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 2072u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A778u); st32((c.r[4].w[0] + 432u), 0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010A778u) [[unlikely]] return; }
L_0010A778:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 54272ull;
    st32((c.r[3].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010A7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7E0u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010A7E0u) [[unlikely]] return; }
L_0010A7E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0010A7E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45088ull;
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 54304ull;
    st32((c.r[3].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0010B4F0; }
L_0010A828:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 15048u);  [[clang::musttail]] return unit_0003(c, 243u, depth); }
L_0010A838:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.budget -= 1;
L_0010A83C:
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A850u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0010A850u) [[unlikely]] return; }
L_0010A850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A85Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010A85Cu) [[unlikely]] return; }
L_0010A85C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0010A870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2136u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A8B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010A8B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010A8B0; } }
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8A8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x0010A8A8u) [[unlikely]] return; }
L_0010A8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010A8BC; } }
L_0010A8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8B8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 266u, depth + 1u); else { c.pc = 0x0010A828u; return; } if (c.pc != 0x0010A8B8u) [[unlikely]] return; }
L_0010A8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010A8BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010A8C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 2191u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] >> 4);
    set32(c.r[16], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[8].sd[0] <= 0; c.r[10].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010A964; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[9].d[0] = c.r[9].d[0] | 65344ull;
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    set32(c.r[14], 0u + 3u);
    set32(c.r[13], 0u - 1u);
    c.budget -= 6;
L_0010A908:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[8].d[0];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[7].w[0] + 15u);
    set32(c.r[2], c.r[7].w[0] + 30u);
    c.r[5].d[0] = c.r[13].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] - c.r[7].w[0]);
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[4].d[0] = c.r[11].d[0] & c.r[12].d[0];
    if (c.r[8].d[0] != 0) c.r[3].d[0] = c.r[14].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 28;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st64((c.r[10].w[0]), c.r[4].d[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[7].w[0]);
    c.budget -= 23;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[10], c.r[10].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A908u | kUnwind; return; } goto L_0010A908; } }
L_0010A964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A96Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x0010A96Cu) [[unlikely]] return; }
L_0010A96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A974u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010A974u) [[unlikely]] return; }
L_0010A974:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | 46128ull;
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    set32(c.r[4], 0u + 261u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010A9BC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010A9BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010A9C8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[6].w[0]);  c.pc = t; return; }
L_0010A9E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA04u); st32((c.r[16].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010AA04u) [[unlikely]] return; }
L_0010AA04:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[3], c.r[3].w[0] >> 20);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].sd[0] < 2801ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 296u), c.r[2].w[0]);  if (t) { goto L_0010AA34; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA34u); set32(c.r[5], c.r[5].w[0] + 15064u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010AA34u) [[unlikely]] return; }
L_0010AA34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA40u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010AA40u) [[unlikely]] return; }
L_0010AA40:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & 1023ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA64u); st32((c.r[16].w[0] + 312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010AA64u) [[unlikely]] return; }
L_0010AA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2112u), c.r[2].w[0]);  if (t) { goto L_0010AA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AA74u) [[unlikely]] return; }
L_0010AA74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA80u); c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x0010AA80u) [[unlikely]] return; }
L_0010AA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AA88u) [[unlikely]] return; }
L_0010AA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010AAA8; } }
L_0010AA90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAA4u); c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);  if (depth < kMaxDepth) unit_0002(c, 309u, depth + 1u); else { c.pc = 0x0010AE98u; return; } if (c.pc != 0x0010AAA4u) [[unlikely]] return; }
L_0010AAA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010AAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010AAB0u) [[unlikely]] return; }
L_0010AAB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2116u), c.r[2].w[0]);  if (t) { goto L_0010AADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AAC0u) [[unlikely]] return; }
L_0010AAC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AACCu); c.r[5].sd[0] = static_cast<std::int32_t>(0x58000000u);  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x0010AACCu) [[unlikely]] return; }
L_0010AACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AAD4u) [[unlikely]] return; }
L_0010AAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010AAF0; } }
L_0010AADC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAF0u); c.r[5].sd[0] = static_cast<std::int32_t>(0x58000000u);  if (depth < kMaxDepth) unit_0002(c, 309u, depth + 1u); else { c.pc = 0x0010AE98u; return; } if (c.pc != 0x0010AAF0u) [[unlikely]] return; }
L_0010AAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 245u, depth + 1u); else { c.pc = 0x00107EB8u; return; } if (c.pc != 0x0010AAF8u) [[unlikely]] return; }
L_0010AAF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 2136u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0010AB10; }
L_0010AB10:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[30].d[0]);
    set32(c.r[30], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[30].w[0] + 2120u)));
    c.budget -= 16;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 292u)));  goto L_0010AB78; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 5u);
    st32((c.r[30].w[0] + 372u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 380u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 324u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 320u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 292u)));
    c.budget -= 10;
L_0010AB78:
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[30].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0010ABA4; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[30].w[0] + 296u)));  if (t) { goto L_0010ABA8; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_0010ABB0; } }
L_0010ABA4:
    set32(c.r[2], ld32((c.r[30].w[0] + 296u)));
    c.budget -= 1;
L_0010ABA8:
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0010ABB0:
    st32((c.r[30].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[22], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[30].w[0] + 300u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[23], c.r[2].w[0] << 4);
    c.budget -= 7;
    { const bool t = c.r[23].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[30].w[0] + 1320u);  if (t) { goto L_0010ABD8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[30].w[0] + 1320u);  if (t) { goto L_0010AD88; } }
L_0010ABD8:
    st32((c.r[5].w[0] + 4u), c.r[22].w[0]);
    set32(c.r[16], 0u + 384u);
    st32((c.r[5].w[0]), c.r[23].w[0]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[17], c.r[30].w[0] + 264u);
    set32(c.r[2], c.r[30].w[0] + 800u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[19], c.r[30].w[0] + 488u);
    set32(c.r[2], c.r[30].w[0] + 904u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[20], c.r[30].w[0] + 592u);
    set32(c.r[2], c.r[30].w[0] + 1008u);
    set32(c.r[21], c.r[30].w[0] + 696u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 1));
    set32(c.r[2], c.r[30].w[0] + 1112u);
    set32(c.r[16], c.r[16].w[0] >> 8);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[30].w[0] + 1216u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC38u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 219u, depth + 1u); else { c.pc = 0x0010A140u; return; } if (c.pc != 0x0010AC38u) [[unlikely]] return; }
L_0010AC38:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC4Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 220u, depth + 1u); else { c.pc = 0x0010A150u; return; } if (c.pc != 0x0010AC4Cu) [[unlikely]] return; }
L_0010AC4C:
    st32((c.r[30].w[0] + 252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC64u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 220u, depth + 1u); else { c.pc = 0x0010A150u; return; } if (c.pc != 0x0010AC64u) [[unlikely]] return; }
L_0010AC64:
    st32((c.r[30].w[0] + 256u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC7Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 220u, depth + 1u); else { c.pc = 0x0010A150u; return; } if (c.pc != 0x0010AC7Cu) [[unlikely]] return; }
L_0010AC7C:
    set32(c.r[8], ld32((c.r[29].w[0] + 52u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 56u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[30].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 252u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[30].w[0] + 256u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 260u)));
    st32((c.r[29].w[0] + 32u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[22].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACCCu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 308u, depth + 1u); else { c.pc = 0x0010ADB8u; return; } if (c.pc != 0x0010ACCCu) [[unlikely]] return; }
L_0010ACCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACDCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010ACDCu) [[unlikely]] return; }
L_0010ACDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACECu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010ACECu) [[unlikely]] return; }
L_0010ACEC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACFCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010ACFCu) [[unlikely]] return; }
L_0010ACFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD0Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010AD0Cu) [[unlikely]] return; }
L_0010AD0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD1Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010AD1Cu) [[unlikely]] return; }
L_0010AD1C:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD2Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010AD2Cu) [[unlikely]] return; }
L_0010AD2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD3Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010AD3Cu) [[unlikely]] return; }
L_0010AD3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 278u, depth + 1u); else { c.pc = 0x0010A9C8u; return; } if (c.pc != 0x0010AD4Cu) [[unlikely]] return; }
L_0010AD4C:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 15;
    { set32(c.r[29], c.r[29].w[0] + 240u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A9C8u | kUnwind; return; } goto L_0010A9C8; }
L_0010AD88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0010ADB8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], 0u + 384u);
    set32(c.r[12], ld32((c.r[29].w[0] + 88u)));
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 511u);
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.r[17].d[0] = c.r[12].d[0] & c.r[14].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[13], ld32((c.r[29].w[0] + 96u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 104u)));
    c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];
    c.r[15].d[0] = c.r[13].d[0] & c.r[14].d[0];
    st32((c.r[4].w[0]), c.r[17].w[0]);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[5].w[0]), c.r[15].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & c.r[14].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[19].d[0];
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = c.r[20].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[19].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[14].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[13].d[0] = c.r[13].d[0] | c.r[19].d[0];
    st32((c.r[7].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[19].d[0];
    st32((c.r[8].w[0]), c.r[15].w[0]);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[11].w[0]), c.r[13].w[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010AE98:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2136u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AECCu); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x0010AECCu) [[unlikely]] return; }
L_0010AECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AED4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AED4u) [[unlikely]] return; }
L_0010AED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEE8u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AEE8u) [[unlikely]] return; }
L_0010AEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEF0u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010AEF0u) [[unlikely]] return; }
L_0010AEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 46096ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[4].w[0]), c.r[16].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46112ull;
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    set32(c.r[4], 0u + 257u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 16;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0010AF3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF38u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0010AF38u) [[unlikely]] return; }
L_0010AF38:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0010AF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 190u, depth + 1u); else { c.pc = 0x001075B0u; return; } if (c.pc != 0x0010AF44u) [[unlikely]] return; }
L_0010AF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 191u, depth + 1u); else { c.pc = 0x001075E0u; return; } if (c.pc != 0x0010AF4Cu) [[unlikely]] return; }
L_0010AF4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2136u)));
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF60u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 202u, depth + 1u); else { c.pc = 0x00109FF8u; return; } if (c.pc != 0x0010AF60u) [[unlikely]] return; }
L_0010AF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010AF78:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFACu); st32((c.r[17].w[0] + 2120u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0001(c, 106u, depth + 1u); else { c.pc = 0x00106308u; return; } if (c.pc != 0x0010AFACu) [[unlikely]] return; }
L_0010AFAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFB8u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010AFB8u) [[unlikely]] return; }
L_0010AFB8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] >> 1);
    set32(c.r[2], c.r[18].w[0] >> 17);
    c.r[21].d[0] = c.r[3].d[0] & 4095ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[18].w[0] >> 13);
    set32(c.r[3], c.r[18].w[0] >> 15);
    c.r[20].d[0] = c.r[4].d[0] & 3ull;
    c.r[19].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; st32((c.r[17].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_0010AFF4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFF4u); set32(c.r[5], c.r[5].w[0] + 15088u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010AFF4u) [[unlikely]] return; }
L_0010AFF4:
    set32(c.r[2], c.r[18].w[0] >> 19);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], 0u + 16u);
    st32((c.r[17].w[0] + 316u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B010u); set32(c.r[16], c.r[18].w[0] >> 20);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B010u) [[unlikely]] return; }
L_0010B010:
    set32(c.r[18], c.r[2].w[0] >> 8);
    set32(c.r[2], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 88u);  if (t) { goto L_0010B03C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 68u);  if (t) { goto L_0010B03C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0010B03C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B03Cu); set32(c.r[5], c.r[5].w[0] + 15128u);  if (depth < kMaxDepth) unit_0002(c, 271u, depth + 1u); else { c.pc = 0x0010A870u; return; } if (c.pc != 0x0010B03Cu) [[unlikely]] return; }
L_0010B03C:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[8], c.r[21].w[0] << 18);
    set32(c.r[3], ld32((c.r[17].w[0] + 296u)));
    set32(c.r[9], c.r[18].w[0] << 10);
    set32(c.r[6], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[7], c.r[19].w[0] << 12);
    set32(c.r[2], ld32((c.r[17].w[0] + 312u)));
    set32(c.r[5], c.r[20].w[0] << 12);
    c.r[4].d[0] = c.r[4].d[0] & 4095ull;
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    st32((c.r[17].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 292u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 296u), c.r[5].w[0]);
    c.budget -= 17;
L_0010B080:
    st32((c.r[17].w[0] + 308u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010B0A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0C0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B0C0u) [[unlikely]] return; }
L_0010B0C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B0CCu) [[unlikely]] return; }
L_0010B0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0DCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B0DCu) [[unlikely]] return; }
L_0010B0DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0E8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B0E8u) [[unlikely]] return; }
L_0010B0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0F4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B0F4u) [[unlikely]] return; }
L_0010B0F4:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 1;
L_0010B0F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B104u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B104u) [[unlikely]] return; }
L_0010B104:
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B114u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B114u) [[unlikely]] return; }
L_0010B114:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B120u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0001(c, 210u, depth + 1u); else { c.pc = 0x00107AA8u; return; } if (c.pc != 0x0010B120u) [[unlikely]] return; }
L_0010B120:
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 15160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A870u | kUnwind; return; } goto L_0010A870; }
L_0010B148:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 15208u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A870u | kUnwind; return; } goto L_0010A870; }
L_0010B158:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 15232u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A870u | kUnwind; return; } goto L_0010A870; }
L_0010B168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] + 15288u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A870u | kUnwind; return; } goto L_0010A870; }
L_0010B178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B18Cu); set32(c.r[4], c.r[4].w[0] + 76u);  if (depth < kMaxDepth) unit_0002(c, 346u, depth + 1u); else { c.pc = 0x0010B2B8u; return; } if (c.pc != 0x0010B18Cu) [[unlikely]] return; }
L_0010B18C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B1B4u); set32(c.r[4], c.r[4].w[0] + 76u);  if (depth < kMaxDepth) unit_0002(c, 350u, depth + 1u); else { c.pc = 0x0010B3A0u; return; } if (c.pc != 0x0010B1B4u) [[unlikely]] return; }
L_0010B1B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B1C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B1DCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010B1DCu) [[unlikely]] return; }
L_0010B1DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 45056ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010B230; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010B230:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010B254u) [[unlikely]] return; }
L_0010B254:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] | 62752ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 62864ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 46080ull;
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010B2A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010B2A8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B2B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 344u, depth + 1u); else { c.pc = 0x0010B240u; return; } if (c.pc != 0x0010B2D0u) [[unlikely]] return; }
L_0010B2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[6].d[0] = c.r[6].d[0] | 46128ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] | 46112ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 46080ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 18;
L_0010B318:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B318u | kUnwind; return; } goto L_0010B318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B33Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 342u, depth + 1u); else { c.pc = 0x0010B1C8u; return; } if (c.pc != 0x0010B33Cu) [[unlikely]] return; }
L_0010B33C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[7].d[0] = c.r[7].d[0] | 45088ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].d[0] = c.r[5].d[0] | 45056ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 8224ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B3A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[19].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] - c.r[2].w[0]);  if (t) { goto L_0010B424; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0010B424; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 45072ull;
    c.r[4].d[0] = c.r[4].d[0] | 45088ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B424u); c.r[4].d[0] = c.r[4].d[0] | 256ull;  if (depth < kMaxDepth) unit_0002(c, 342u, depth + 1u); else { c.pc = 0x0010B1C8u; return; } if (c.pc != 0x0010B424u) [[unlikely]] return; }
L_0010B424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_0010B430:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B430u | kUnwind; return; } goto L_0010B430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 5;
L_0010B460:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B460u | kUnwind; return; } goto L_0010B460; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0010B4D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010B4DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 46096ull;
    c.r[4].d[0] = c.r[4].d[0] | 46128ull;
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 46112ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B240u | kUnwind; return; } goto L_0010B240; }
L_0010B4D8:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010B4DC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010B4F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0010B50C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010B53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B550; } }
L_0010B50C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    c.budget -= 3;
L_0010B518:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B518u | kUnwind; return; } goto L_0010B518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0010B54C; } }
L_0010B53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.budget -= 4;
L_0010B54C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0010B550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B558:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B56Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0010B56Cu) [[unlikely]] return; }
L_0010B56C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] | 62752ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 62864ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 46080ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0010B5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B5D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010B558u; return; } if (c.pc != 0x0010B5D0u) [[unlikely]] return; }
L_0010B5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 6;
L_0010B5E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B5E8u | kUnwind; return; } goto L_0010B5E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0010B618:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B618u | kUnwind; return; } goto L_0010B618; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], c.r[5].w[0] - 23536u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[6].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[8].d[0] = c.r[8].d[0] | 8208ull;
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 27;
L_0010B6A0:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B6A0u | kUnwind; return; } goto L_0010B6A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x58000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0010B6D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B6D8u | kUnwind; return; } goto L_0010B6D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] - 23456u);
    c.r[4].d[0] = c.r[4].d[0] | 28688ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[5].d[0] = c.r[5].d[0] | 8192ull;
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[7].d[0] = c.r[7].d[0] | 8208ull;
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 15;
L_0010B730:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B730u | kUnwind; return; } goto L_0010B730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x90000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0010B768:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B768u | kUnwind; return; } goto L_0010B768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8208ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8208ull;
    c.budget -= 7;
L_0010B7A0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B7A0u | kUnwind; return; } goto L_0010B7A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[3].d[0] = c.r[3].d[0] | 8208ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_0010B7D0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B7D0u | kUnwind; return; } goto L_0010B7D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B800:
    set32(c.r[3], 0u);
    c.budget -= 1;
    c.pc = 0x0010B808u; syscall(c, 0x0010B804u); if (c.pc != 0x0010B808u) return;
    c.budget -= 1;
L_0010B808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B810:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
    c.pc = 0x0010B818u; syscall(c, 0x0010B814u); if (c.pc != 0x0010B818u) return;
    c.budget -= 1;
L_0010B818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B820:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
    c.pc = 0x0010B828u; syscall(c, 0x0010B824u); if (c.pc != 0x0010B828u) return;
    c.budget -= 1;
L_0010B828:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B830:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
    c.pc = 0x0010B838u; syscall(c, 0x0010B834u); if (c.pc != 0x0010B838u) return;
    c.budget -= 1;
L_0010B838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B840:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    c.pc = 0x0010B848u; syscall(c, 0x0010B844u); if (c.pc != 0x0010B848u) return;
    c.budget -= 1;
L_0010B848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B850:
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
    c.pc = 0x0010B858u; syscall(c, 0x0010B854u); if (c.pc != 0x0010B858u) return;
    c.budget -= 1;
L_0010B858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B860:
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
    c.pc = 0x0010B868u; syscall(c, 0x0010B864u); if (c.pc != 0x0010B868u) return;
    c.budget -= 1;
L_0010B868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B870:
    set32(c.r[3], 0u + 7u);
    c.budget -= 1;
    c.pc = 0x0010B878u; syscall(c, 0x0010B874u); if (c.pc != 0x0010B878u) return;
    c.budget -= 1;
L_0010B878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B880:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
    c.pc = 0x0010B888u; syscall(c, 0x0010B884u); if (c.pc != 0x0010B888u) return;
    c.budget -= 1;
L_0010B888:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B890:
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
    c.pc = 0x0010B898u; syscall(c, 0x0010B894u); if (c.pc != 0x0010B898u) return;
    c.budget -= 1;
L_0010B898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8A0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
    c.pc = 0x0010B8A8u; syscall(c, 0x0010B8A4u); if (c.pc != 0x0010B8A8u) return;
    c.budget -= 1;
L_0010B8A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8B0:
    set32(c.r[3], 0u + 11u);
    c.budget -= 1;
    c.pc = 0x0010B8B8u; syscall(c, 0x0010B8B4u); if (c.pc != 0x0010B8B8u) return;
    c.budget -= 1;
L_0010B8B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8C0:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
    c.pc = 0x0010B8C8u; syscall(c, 0x0010B8C4u); if (c.pc != 0x0010B8C8u) return;
    c.budget -= 1;
L_0010B8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8D0:
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
    c.pc = 0x0010B8D8u; syscall(c, 0x0010B8D4u); if (c.pc != 0x0010B8D8u) return;
    c.budget -= 1;
L_0010B8D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8E0:
    set32(c.r[3], 0u + 14u);
    c.budget -= 1;
    c.pc = 0x0010B8E8u; syscall(c, 0x0010B8E4u); if (c.pc != 0x0010B8E8u) return;
    c.budget -= 1;
L_0010B8E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B8F0:
    set32(c.r[3], 0u + 15u);
    c.budget -= 1;
    c.pc = 0x0010B8F8u; syscall(c, 0x0010B8F4u); if (c.pc != 0x0010B8F8u) return;
    c.budget -= 1;
L_0010B8F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B900:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x0010B908u; syscall(c, 0x0010B904u); if (c.pc != 0x0010B908u) return;
    c.budget -= 1;
L_0010B908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B910:
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
    c.pc = 0x0010B918u; syscall(c, 0x0010B914u); if (c.pc != 0x0010B918u) return;
    c.budget -= 1;
L_0010B918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B920:
    set32(c.r[3], 0u + 17u);
    c.budget -= 1;
    c.pc = 0x0010B928u; syscall(c, 0x0010B924u); if (c.pc != 0x0010B928u) return;
    c.budget -= 1;
L_0010B928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B930:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x0010B938u; syscall(c, 0x0010B934u); if (c.pc != 0x0010B938u) return;
    c.budget -= 1;
L_0010B938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B940:
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
    c.pc = 0x0010B948u; syscall(c, 0x0010B944u); if (c.pc != 0x0010B948u) return;
    c.budget -= 1;
L_0010B948:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B950:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
    c.pc = 0x0010B958u; syscall(c, 0x0010B954u); if (c.pc != 0x0010B958u) return;
    c.budget -= 1;
L_0010B958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B960:
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
    c.pc = 0x0010B968u; syscall(c, 0x0010B964u); if (c.pc != 0x0010B968u) return;
    c.budget -= 1;
L_0010B968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B970:
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
    c.pc = 0x0010B978u; syscall(c, 0x0010B974u); if (c.pc != 0x0010B978u) return;
    c.budget -= 1;
L_0010B978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B980:
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
    c.pc = 0x0010B988u; syscall(c, 0x0010B984u); if (c.pc != 0x0010B988u) return;
    c.budget -= 1;
L_0010B988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B990:
    set32(c.r[3], 0u + 23u);
    c.budget -= 1;
    c.pc = 0x0010B998u; syscall(c, 0x0010B994u); if (c.pc != 0x0010B998u) return;
    c.budget -= 1;
L_0010B998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9A0:
    set32(c.r[3], 0u + 252u);
    c.budget -= 1;
    c.pc = 0x0010B9A8u; syscall(c, 0x0010B9A4u); if (c.pc != 0x0010B9A8u) return;
    c.budget -= 1;
L_0010B9A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9B0:
    set32(c.r[3], 0u + 253u);
    c.budget -= 1;
    c.pc = 0x0010B9B8u; syscall(c, 0x0010B9B4u); if (c.pc != 0x0010B9B8u) return;
    c.budget -= 1;
L_0010B9B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9C0:
    set32(c.r[3], 0u - 26u);
    c.budget -= 1;
    c.pc = 0x0010B9C8u; syscall(c, 0x0010B9C4u); if (c.pc != 0x0010B9C8u) return;
    c.budget -= 1;
L_0010B9C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9D0:
    set32(c.r[3], 0u - 27u);
    c.budget -= 1;
    c.pc = 0x0010B9D8u; syscall(c, 0x0010B9D4u); if (c.pc != 0x0010B9D8u) return;
    c.budget -= 1;
L_0010B9D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9E0:
    set32(c.r[3], 0u - 28u);
    c.budget -= 1;
    c.pc = 0x0010B9E8u; syscall(c, 0x0010B9E4u); if (c.pc != 0x0010B9E8u) return;
    c.budget -= 1;
L_0010B9E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B9F0:
    set32(c.r[3], 0u - 29u);
    c.budget -= 1;
    c.pc = 0x0010B9F8u; syscall(c, 0x0010B9F4u); if (c.pc != 0x0010B9F8u) return;
    c.budget -= 1;
L_0010B9F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA00:
    set32(c.r[3], 0u - 254u);
    c.budget -= 1;
    c.pc = 0x0010BA08u; syscall(c, 0x0010BA04u); if (c.pc != 0x0010BA08u) return;
    c.budget -= 1;
L_0010BA08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA10:
    set32(c.r[3], 0u - 255u);
    c.budget -= 1;
    c.pc = 0x0010BA18u; syscall(c, 0x0010BA14u); if (c.pc != 0x0010BA18u) return;
    c.budget -= 1;
L_0010BA18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA20:
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
    c.pc = 0x0010BA28u; syscall(c, 0x0010BA24u); if (c.pc != 0x0010BA28u) return;
    c.budget -= 1;
L_0010BA28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA30:
    set32(c.r[3], 0u + 33u);
    c.budget -= 1;
    c.pc = 0x0010BA38u; syscall(c, 0x0010BA34u); if (c.pc != 0x0010BA38u) return;
    c.budget -= 1;
L_0010BA38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA40:
    set32(c.r[3], 0u + 34u);
    c.budget -= 1;
    c.pc = 0x0010BA48u; syscall(c, 0x0010BA44u); if (c.pc != 0x0010BA48u) return;
    c.budget -= 1;
L_0010BA48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA50:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x0010BA58u; syscall(c, 0x0010BA54u); if (c.pc != 0x0010BA58u) return;
    c.budget -= 1;
L_0010BA58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA60:
    set32(c.r[3], 0u + 36u);
    c.budget -= 1;
    c.pc = 0x0010BA68u; syscall(c, 0x0010BA64u); if (c.pc != 0x0010BA68u) return;
    c.budget -= 1;
L_0010BA68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA70:
    set32(c.r[3], 0u + 37u);
    c.budget -= 1;
    c.pc = 0x0010BA78u; syscall(c, 0x0010BA74u); if (c.pc != 0x0010BA78u) return;
    c.budget -= 1;
L_0010BA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA80:
    set32(c.r[3], 0u - 38u);
    c.budget -= 1;
    c.pc = 0x0010BA88u; syscall(c, 0x0010BA84u); if (c.pc != 0x0010BA88u) return;
    c.budget -= 1;
L_0010BA88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BA90:
    set32(c.r[3], 0u + 39u);
    c.budget -= 1;
    c.pc = 0x0010BA98u; syscall(c, 0x0010BA94u); if (c.pc != 0x0010BA98u) return;
    c.budget -= 1;
L_0010BA98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAA0:
    set32(c.r[3], 0u + 40u);
    c.budget -= 1;
    c.pc = 0x0010BAA8u; syscall(c, 0x0010BAA4u); if (c.pc != 0x0010BAA8u) return;
    c.budget -= 1;
L_0010BAA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAB0:
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
    c.pc = 0x0010BAB8u; syscall(c, 0x0010BAB4u); if (c.pc != 0x0010BAB8u) return;
    c.budget -= 1;
L_0010BAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAC0:
    set32(c.r[3], 0u - 42u);
    c.budget -= 1;
    c.pc = 0x0010BAC8u; syscall(c, 0x0010BAC4u); if (c.pc != 0x0010BAC8u) return;
    c.budget -= 1;
L_0010BAC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAD0:
    set32(c.r[3], 0u + 43u);
    c.budget -= 1;
    c.pc = 0x0010BAD8u; syscall(c, 0x0010BAD4u); if (c.pc != 0x0010BAD8u) return;
    c.budget -= 1;
L_0010BAD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAE0:
    set32(c.r[3], 0u - 44u);
    c.budget -= 1;
    c.pc = 0x0010BAE8u; syscall(c, 0x0010BAE4u); if (c.pc != 0x0010BAE8u) return;
    c.budget -= 1;
L_0010BAE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BAF0:
    set32(c.r[3], 0u + 45u);
    c.budget -= 1;
    c.pc = 0x0010BAF8u; syscall(c, 0x0010BAF4u); if (c.pc != 0x0010BAF8u) return;
    c.budget -= 1;
L_0010BAF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB00:
    set32(c.r[3], 0u - 46u);
    c.budget -= 1;
    c.pc = 0x0010BB08u; syscall(c, 0x0010BB04u); if (c.pc != 0x0010BB08u) return;
    c.budget -= 1;
L_0010BB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB10:
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
    c.pc = 0x0010BB18u; syscall(c, 0x0010BB14u); if (c.pc != 0x0010BB18u) return;
    c.budget -= 1;
L_0010BB18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB20:
    set32(c.r[3], 0u + 48u);
    c.budget -= 1;
    c.pc = 0x0010BB28u; syscall(c, 0x0010BB24u); if (c.pc != 0x0010BB28u) return;
    c.budget -= 1;
L_0010BB28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB30:
    set32(c.r[3], 0u - 49u);
    c.budget -= 1;
    c.pc = 0x0010BB38u; syscall(c, 0x0010BB34u); if (c.pc != 0x0010BB38u) return;
    c.budget -= 1;
L_0010BB38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB40:
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
    c.pc = 0x0010BB48u; syscall(c, 0x0010BB44u); if (c.pc != 0x0010BB48u) return;
    c.budget -= 1;
L_0010BB48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB50:
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
    c.pc = 0x0010BB58u; syscall(c, 0x0010BB54u); if (c.pc != 0x0010BB58u) return;
    c.budget -= 1;
L_0010BB58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB60:
    set32(c.r[3], 0u - 52u);
    c.budget -= 1;
    c.pc = 0x0010BB68u; syscall(c, 0x0010BB64u); if (c.pc != 0x0010BB68u) return;
    c.budget -= 1;
L_0010BB68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB70:
    set32(c.r[3], 0u + 53u);
    c.budget -= 1;
    c.pc = 0x0010BB78u; syscall(c, 0x0010BB74u); if (c.pc != 0x0010BB78u) return;
    c.budget -= 1;
L_0010BB78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB80:
    set32(c.r[3], 0u - 54u);
    c.budget -= 1;
    c.pc = 0x0010BB88u; syscall(c, 0x0010BB84u); if (c.pc != 0x0010BB88u) return;
    c.budget -= 1;
L_0010BB88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BB90:
    set32(c.r[3], 0u + 55u);
    c.budget -= 1;
    c.pc = 0x0010BB98u; syscall(c, 0x0010BB94u); if (c.pc != 0x0010BB98u) return;
    c.budget -= 1;
L_0010BB98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBA0:
    set32(c.r[3], 0u - 56u);
    c.budget -= 1;
    c.pc = 0x0010BBA8u; syscall(c, 0x0010BBA4u); if (c.pc != 0x0010BBA8u) return;
    c.budget -= 1;
L_0010BBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBB0:
    set32(c.r[3], 0u + 57u);
    c.budget -= 1;
    c.pc = 0x0010BBB8u; syscall(c, 0x0010BBB4u); if (c.pc != 0x0010BBB8u) return;
    c.budget -= 1;
L_0010BBB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBC0:
    set32(c.r[3], 0u - 58u);
    c.budget -= 1;
    c.pc = 0x0010BBC8u; syscall(c, 0x0010BBC4u); if (c.pc != 0x0010BBC8u) return;
    c.budget -= 1;
L_0010BBC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBD0:
    set32(c.r[3], 0u + 59u);
    c.budget -= 1;
    c.pc = 0x0010BBD8u; syscall(c, 0x0010BBD4u); if (c.pc != 0x0010BBD8u) return;
    c.budget -= 1;
L_0010BBD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBE0:
    set32(c.r[3], 0u + 60u);
    c.budget -= 1;
    c.pc = 0x0010BBE8u; syscall(c, 0x0010BBE4u); if (c.pc != 0x0010BBE8u) return;
    c.budget -= 1;
L_0010BBE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BBF0:
    set32(c.r[3], 0u + 61u);
    c.budget -= 1;
    c.pc = 0x0010BBF8u; syscall(c, 0x0010BBF4u); if (c.pc != 0x0010BBF8u) return;
    c.budget -= 1;
L_0010BBF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC00:
    set32(c.r[3], 0u + 62u);
    c.budget -= 1;
    c.pc = 0x0010BC08u; syscall(c, 0x0010BC04u); if (c.pc != 0x0010BC08u) return;
    c.budget -= 1;
L_0010BC08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC10:
    set32(c.r[3], 0u + 63u);
    c.budget -= 1;
    c.pc = 0x0010BC18u; syscall(c, 0x0010BC14u); if (c.pc != 0x0010BC18u) return;
    c.budget -= 1;
L_0010BC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC20:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
    c.pc = 0x0010BC28u; syscall(c, 0x0010BC24u); if (c.pc != 0x0010BC28u) return;
    c.budget -= 1;
L_0010BC28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC30:
    set32(c.r[3], 0u + 65u);
    c.budget -= 1;
    c.pc = 0x0010BC38u; syscall(c, 0x0010BC34u); if (c.pc != 0x0010BC38u) return;
    c.budget -= 1;
L_0010BC38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC40:
    set32(c.r[3], 0u + 66u);
    c.budget -= 1;
    c.pc = 0x0010BC48u; syscall(c, 0x0010BC44u); if (c.pc != 0x0010BC48u) return;
    c.budget -= 1;
L_0010BC48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC50:
    set32(c.r[3], 0u - 67u);
    c.budget -= 1;
    c.pc = 0x0010BC58u; syscall(c, 0x0010BC54u); if (c.pc != 0x0010BC58u) return;
    c.budget -= 1;
L_0010BC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC60:
    set32(c.r[3], 0u + 68u);
    c.budget -= 1;
    c.pc = 0x0010BC68u; syscall(c, 0x0010BC64u); if (c.pc != 0x0010BC68u) return;
    c.budget -= 1;
L_0010BC68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC70:
    set32(c.r[3], 0u + 69u);
    c.budget -= 1;
    c.pc = 0x0010BC78u; syscall(c, 0x0010BC74u); if (c.pc != 0x0010BC78u) return;
    c.budget -= 1;
L_0010BC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC80:
    set32(c.r[3], 0u - 70u);
    c.budget -= 1;
    c.pc = 0x0010BC88u; syscall(c, 0x0010BC84u); if (c.pc != 0x0010BC88u) return;
    c.budget -= 1;
L_0010BC88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC90:
    set32(c.r[3], 0u + 71u);
    c.budget -= 1;
    c.pc = 0x0010BC98u; syscall(c, 0x0010BC94u); if (c.pc != 0x0010BC98u) return;
    c.budget -= 1;
L_0010BC98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCA0:
    set32(c.r[3], 0u - 72u);
    c.budget -= 1;
    c.pc = 0x0010BCA8u; syscall(c, 0x0010BCA4u); if (c.pc != 0x0010BCA8u) return;
    c.budget -= 1;
L_0010BCA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCB0:
    set32(c.r[3], 0u + 73u);
    c.budget -= 1;
    c.pc = 0x0010BCB8u; syscall(c, 0x0010BCB4u); if (c.pc != 0x0010BCB8u) return;
    c.budget -= 1;
L_0010BCB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCC0:
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
    c.pc = 0x0010BCC8u; syscall(c, 0x0010BCC4u); if (c.pc != 0x0010BCC8u) return;
    c.budget -= 1;
L_0010BCC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCD0:
    set32(c.r[3], 0u + 75u);
    c.budget -= 1;
    c.pc = 0x0010BCD8u; syscall(c, 0x0010BCD4u); if (c.pc != 0x0010BCD8u) return;
    c.budget -= 1;
L_0010BCD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCE0:
    set32(c.r[3], 0u + 76u);
    c.budget -= 1;
    c.pc = 0x0010BCE8u; syscall(c, 0x0010BCE4u); if (c.pc != 0x0010BCE8u) return;
    c.budget -= 1;
L_0010BCE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BCF0:
    set32(c.r[3], 0u + 77u);
    c.budget -= 1;
    c.pc = 0x0010BCF8u; syscall(c, 0x0010BCF4u); if (c.pc != 0x0010BCF8u) return;
    c.budget -= 1;
L_0010BCF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD00:
    set32(c.r[3], 0u + 78u);
    c.budget -= 1;
    c.pc = 0x0010BD08u; syscall(c, 0x0010BD04u); if (c.pc != 0x0010BD08u) return;
    c.budget -= 1;
L_0010BD08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD10:
    set32(c.r[3], 0u + 79u);
    c.budget -= 1;
    c.pc = 0x0010BD18u; syscall(c, 0x0010BD14u); if (c.pc != 0x0010BD18u) return;
    c.budget -= 1;
L_0010BD18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD20:
    set32(c.r[3], 0u + 80u);
    c.budget -= 1;
    c.pc = 0x0010BD28u; syscall(c, 0x0010BD24u); if (c.pc != 0x0010BD28u) return;
    c.budget -= 1;
L_0010BD28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD30:
    set32(c.r[3], 0u + 81u);
    c.budget -= 1;
    c.pc = 0x0010BD38u; syscall(c, 0x0010BD34u); if (c.pc != 0x0010BD38u) return;
    c.budget -= 1;
L_0010BD38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD40:
    set32(c.r[3], 0u + 82u);
    c.budget -= 1;
    c.pc = 0x0010BD48u; syscall(c, 0x0010BD44u); if (c.pc != 0x0010BD48u) return;
    c.budget -= 1;
L_0010BD48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD50:
    set32(c.r[3], 0u - 83u);
    c.budget -= 1;
    c.pc = 0x0010BD58u; syscall(c, 0x0010BD54u); if (c.pc != 0x0010BD58u) return;
    c.budget -= 1;
L_0010BD58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD60:
    set32(c.r[3], 0u + 84u);
    c.budget -= 1;
    c.pc = 0x0010BD68u; syscall(c, 0x0010BD64u); if (c.pc != 0x0010BD68u) return;
    c.budget -= 1;
L_0010BD68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD70:
    set32(c.r[3], 0u - 85u);
    c.budget -= 1;
    c.pc = 0x0010BD78u; syscall(c, 0x0010BD74u); if (c.pc != 0x0010BD78u) return;
    c.budget -= 1;
L_0010BD78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD80:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x0010BD88u; syscall(c, 0x0010BD84u); if (c.pc != 0x0010BD88u) return;
    c.budget -= 1;
L_0010BD88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BD90:
    set32(c.r[3], 0u + 87u);
    c.budget -= 1;
    c.pc = 0x0010BD98u; syscall(c, 0x0010BD94u); if (c.pc != 0x0010BD98u) return;
    c.budget -= 1;
L_0010BD98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDA0:
    set32(c.r[3], 0u - 88u);
    c.budget -= 1;
    c.pc = 0x0010BDA8u; syscall(c, 0x0010BDA4u); if (c.pc != 0x0010BDA8u) return;
    c.budget -= 1;
L_0010BDA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDB0:
    set32(c.r[3], 0u + 89u);
    c.budget -= 1;
    c.pc = 0x0010BDB8u; syscall(c, 0x0010BDB4u); if (c.pc != 0x0010BDB8u) return;
    c.budget -= 1;
L_0010BDB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDC0:
    set32(c.r[3], 0u - 90u);
    c.budget -= 1;
    c.pc = 0x0010BDC8u; syscall(c, 0x0010BDC4u); if (c.pc != 0x0010BDC8u) return;
    c.budget -= 1;
L_0010BDC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDD0:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x0010BDD8u; syscall(c, 0x0010BDD4u); if (c.pc != 0x0010BDD8u) return;
    c.budget -= 1;
L_0010BDD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDE0:
    set32(c.r[3], 0u + 92u);
    c.budget -= 1;
    c.pc = 0x0010BDE8u; syscall(c, 0x0010BDE4u); if (c.pc != 0x0010BDE8u) return;
    c.budget -= 1;
L_0010BDE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BDF0:
    set32(c.r[3], 0u - 92u);
    c.budget -= 1;
    c.pc = 0x0010BDF8u; syscall(c, 0x0010BDF4u); if (c.pc != 0x0010BDF8u) return;
    c.budget -= 1;
L_0010BDF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE00:
    set32(c.r[3], 0u + 93u);
    c.budget -= 1;
    c.pc = 0x0010BE08u; syscall(c, 0x0010BE04u); if (c.pc != 0x0010BE08u) return;
    c.budget -= 1;
L_0010BE08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE10:
    set32(c.r[3], 0u - 93u);
    c.budget -= 1;
    c.pc = 0x0010BE18u; syscall(c, 0x0010BE14u); if (c.pc != 0x0010BE18u) return;
    c.budget -= 1;
L_0010BE18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE20:
    set32(c.r[3], 0u + 94u);
    c.budget -= 1;
    c.pc = 0x0010BE28u; syscall(c, 0x0010BE24u); if (c.pc != 0x0010BE28u) return;
    c.budget -= 1;
L_0010BE28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE30:
    set32(c.r[3], 0u - 94u);
    c.budget -= 1;
    c.pc = 0x0010BE38u; syscall(c, 0x0010BE34u); if (c.pc != 0x0010BE38u) return;
    c.budget -= 1;
L_0010BE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE40:
    set32(c.r[3], 0u + 95u);
    c.budget -= 1;
    c.pc = 0x0010BE48u; syscall(c, 0x0010BE44u); if (c.pc != 0x0010BE48u) return;
    c.budget -= 1;
L_0010BE48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE50:
    set32(c.r[3], 0u - 95u);
    c.budget -= 1;
    c.pc = 0x0010BE58u; syscall(c, 0x0010BE54u); if (c.pc != 0x0010BE58u) return;
    c.budget -= 1;
L_0010BE58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE60:
    set32(c.r[3], 0u + 96u);
    c.budget -= 1;
    c.pc = 0x0010BE68u; syscall(c, 0x0010BE64u); if (c.pc != 0x0010BE68u) return;
    c.budget -= 1;
L_0010BE68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE70:
    set32(c.r[3], 0u + 97u);
    c.budget -= 1;
    c.pc = 0x0010BE78u; syscall(c, 0x0010BE74u); if (c.pc != 0x0010BE78u) return;
    c.budget -= 1;
L_0010BE78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE80:
    set32(c.r[3], 0u + 98u);
    c.budget -= 1;
    c.pc = 0x0010BE88u; syscall(c, 0x0010BE84u); if (c.pc != 0x0010BE88u) return;
    c.budget -= 1;
L_0010BE88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BE90:
    set32(c.r[3], 0u + 99u);
    c.budget -= 1;
    c.pc = 0x0010BE98u; syscall(c, 0x0010BE94u); if (c.pc != 0x0010BE98u) return;
    c.budget -= 1;
L_0010BE98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BEA0:
    set32(c.r[3], 0u + 100u);
    c.budget -= 1;
    c.pc = 0x0010BEA8u; syscall(c, 0x0010BEA4u); if (c.pc != 0x0010BEA8u) return;
    c.budget -= 1;
L_0010BEA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BEB0:
    set32(c.r[3], 0u + 102u);
    c.budget -= 1;
    c.pc = 0x0010BEB8u; syscall(c, 0x0010BEB4u); if (c.pc != 0x0010BEB8u) return;
    c.budget -= 1;
L_0010BEB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BEC0:
    set32(c.r[3], 0u - 103u);
    c.budget -= 1;
    c.pc = 0x0010BEC8u; syscall(c, 0x0010BEC4u); if (c.pc != 0x0010BEC8u) return;
    c.budget -= 1;
L_0010BEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BED0:
    set32(c.r[3], 0u - 104u);
    c.budget -= 1;
    c.pc = 0x0010BED8u; syscall(c, 0x0010BED4u); if (c.pc != 0x0010BED8u) return;
    c.budget -= 1;
L_0010BED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BEE0:
    set32(c.r[3], 0u - 106u);
    c.budget -= 1;
    c.pc = 0x0010BEE8u; syscall(c, 0x0010BEE4u); if (c.pc != 0x0010BEE8u) return;
    c.budget -= 1;
L_0010BEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BEF0:
    set32(c.r[3], 0u + 107u);
    c.budget -= 1;
    c.pc = 0x0010BEF8u; syscall(c, 0x0010BEF4u); if (c.pc != 0x0010BEF8u) return;
    c.budget -= 1;
L_0010BEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF00:
    set32(c.r[3], 0u + 108u);
    c.budget -= 1;
    c.pc = 0x0010BF08u; syscall(c, 0x0010BF04u); if (c.pc != 0x0010BF08u) return;
    c.budget -= 1;
L_0010BF08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF10:
    set32(c.r[3], 0u + 109u);
    c.budget -= 1;
    c.pc = 0x0010BF18u; syscall(c, 0x0010BF14u); if (c.pc != 0x0010BF18u) return;
    c.budget -= 1;
L_0010BF18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF20:
    set32(c.r[3], 0u + 110u);
    c.budget -= 1;
    c.pc = 0x0010BF28u; syscall(c, 0x0010BF24u); if (c.pc != 0x0010BF28u) return;
    c.budget -= 1;
L_0010BF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF30:
    set32(c.r[3], 0u + 111u);
    c.budget -= 1;
    c.pc = 0x0010BF38u; syscall(c, 0x0010BF34u); if (c.pc != 0x0010BF38u) return;
    c.budget -= 1;
L_0010BF38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF40:
    set32(c.r[3], 0u + 112u);
    c.budget -= 1;
    c.pc = 0x0010BF48u; syscall(c, 0x0010BF44u); if (c.pc != 0x0010BF48u) return;
    c.budget -= 1;
L_0010BF48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF50:
    set32(c.r[3], 0u - 112u);
    c.budget -= 1;
    c.pc = 0x0010BF58u; syscall(c, 0x0010BF54u); if (c.pc != 0x0010BF58u) return;
    c.budget -= 1;
L_0010BF58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF60:
    set32(c.r[3], 0u + 113u);
    c.budget -= 1;
    c.pc = 0x0010BF68u; syscall(c, 0x0010BF64u); if (c.pc != 0x0010BF68u) return;
    c.budget -= 1;
L_0010BF68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF70:
    set32(c.r[3], 0u - 113u);
    c.budget -= 1;
    c.pc = 0x0010BF78u; syscall(c, 0x0010BF74u); if (c.pc != 0x0010BF78u) return;
    c.budget -= 1;
L_0010BF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF80:
    set32(c.r[3], 0u + 114u);
    c.budget -= 1;
    c.pc = 0x0010BF88u; syscall(c, 0x0010BF84u); if (c.pc != 0x0010BF88u) return;
    c.budget -= 1;
L_0010BF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BF90:
    set32(c.r[3], 0u + 115u);
    c.budget -= 1;
    c.pc = 0x0010BF98u; syscall(c, 0x0010BF94u); if (c.pc != 0x0010BF98u) return;
    c.budget -= 1;
L_0010BF98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFA0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x0010BFA8u; syscall(c, 0x0010BFA4u); if (c.pc != 0x0010BFA8u) return;
    c.budget -= 1;
L_0010BFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFB0:
    set32(c.r[3], 0u + 117u);
    c.budget -= 1;
    c.pc = 0x0010BFB8u; syscall(c, 0x0010BFB4u); if (c.pc != 0x0010BFB8u) return;
    c.budget -= 1;
L_0010BFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFC0:
    set32(c.r[3], 0u + 118u);
    c.budget -= 1;
    c.pc = 0x0010BFC8u; syscall(c, 0x0010BFC4u); if (c.pc != 0x0010BFC8u) return;
    c.budget -= 1;
L_0010BFC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFD0:
    set32(c.r[3], 0u - 118u);
    c.budget -= 1;
    c.pc = 0x0010BFD8u; syscall(c, 0x0010BFD4u); if (c.pc != 0x0010BFD8u) return;
    c.budget -= 1;
L_0010BFD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFE0:
    set32(c.r[3], 0u + 119u);
    c.budget -= 1;
    c.pc = 0x0010BFE8u; syscall(c, 0x0010BFE4u); if (c.pc != 0x0010BFE8u) return;
    c.budget -= 1;
L_0010BFE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BFF0:
    set32(c.r[3], 0u - 119u);
    c.budget -= 1;
    c.pc = 0x0010BFF8u; syscall(c, 0x0010BFF4u); if (c.pc != 0x0010BFF8u) return;
    c.budget -= 1;
L_0010BFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
