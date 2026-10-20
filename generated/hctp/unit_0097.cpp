#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0097[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148,
    0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0,
    0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0,
    225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0,
    0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
};

void unit_0097(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C004;
    case 3u: goto L_0035C010;
    case 4u: goto L_0035C030;
    case 5u: goto L_0035C04C;
    case 6u: goto L_0035C08C;
    case 7u: goto L_0035C094;
    case 8u: goto L_0035C09C;
    case 9u: goto L_0035C0B0;
    case 10u: goto L_0035C0CC;
    case 11u: goto L_0035C114;
    case 12u: goto L_0035C120;
    case 13u: goto L_0035C158;
    case 14u: goto L_0035C160;
    case 15u: goto L_0035C168;
    case 16u: goto L_0035C180;
    case 17u: goto L_0035C19C;
    case 18u: goto L_0035C1DC;
    case 19u: goto L_0035C1E4;
    case 20u: goto L_0035C1F4;
    case 21u: goto L_0035C210;
    case 22u: goto L_0035C228;
    case 23u: goto L_0035C230;
    case 24u: goto L_0035C240;
    case 25u: goto L_0035C254;
    case 26u: goto L_0035C2B0;
    case 27u: goto L_0035C2C0;
    case 28u: goto L_0035C2D8;
    case 29u: goto L_0035C3B0;
    case 30u: goto L_0035C3C0;
    case 31u: goto L_0035C3D8;
    case 32u: goto L_0035C4B0;
    case 33u: goto L_0035C584;
    case 34u: goto L_0035C590;
    case 35u: goto L_0035C654;
    case 36u: goto L_0035C72C;
    case 37u: goto L_0035C738;
    case 38u: goto L_0035C800;
    case 39u: goto L_0035C8C8;
    case 40u: goto L_0035C930;
    case 41u: goto L_0035CA10;
    case 42u: goto L_0035CA38;
    case 43u: goto L_0035CBB0;
    case 44u: goto L_0035CC34;
    case 45u: goto L_0035CC58;
    case 46u: goto L_0035CCDC;
    case 47u: goto L_0035CD00;
    case 48u: goto L_0035CD1C;
    case 49u: goto L_0035CD60;
    case 50u: goto L_0035CDE4;
    case 51u: goto L_0035CE20;
    case 52u: goto L_0035CE34;
    case 53u: goto L_0035CE78;
    case 54u: goto L_0035CE8C;
    case 55u: goto L_0035CEB0;
    case 56u: goto L_0035CED0;
    case 57u: goto L_0035CEE4;
    case 58u: goto L_0035CF10;
    case 59u: goto L_0035CF4C;
    case 60u: goto L_0035CF64;
    case 61u: goto L_0035CF80;
    case 62u: goto L_0035CF90;
    case 63u: goto L_0035CFA0;
    case 64u: goto L_0035CFB0;
    case 65u: goto L_0035CFC0;
    case 66u: goto L_0035CFD0;
    case 67u: goto L_0035CFE0;
    case 68u: goto L_0035CFF0;
    case 69u: goto L_0035D010;
    case 70u: goto L_0035D050;
    case 71u: goto L_0035D08C;
    case 72u: goto L_0035D0A4;
    case 73u: goto L_0035D0BC;
    case 74u: goto L_0035D0E0;
    case 75u: goto L_0035D104;
    case 76u: goto L_0035D118;
    case 77u: goto L_0035D12C;
    case 78u: goto L_0035D138;
    case 79u: goto L_0035D144;
    case 80u: goto L_0035D158;
    case 81u: goto L_0035D17C;
    case 82u: goto L_0035D184;
    case 83u: goto L_0035D1A0;
    case 84u: goto L_0035D1D4;
    case 85u: goto L_0035D1E8;
    case 86u: goto L_0035D208;
    case 87u: goto L_0035D280;
    case 88u: goto L_0035D2A0;
    case 89u: goto L_0035D2AC;
    case 90u: goto L_0035D2C8;
    case 91u: goto L_0035D2DC;
    case 92u: goto L_0035D2F4;
    case 93u: goto L_0035D2FC;
    case 94u: goto L_0035D328;
    case 95u: goto L_0035D35C;
    case 96u: goto L_0035D390;
    case 97u: goto L_0035D3BC;
    case 98u: goto L_0035D3C8;
    case 99u: goto L_0035D3D0;
    case 100u: goto L_0035D420;
    case 101u: goto L_0035D460;
    case 102u: goto L_0035D47C;
    case 103u: goto L_0035D494;
    case 104u: goto L_0035D4B0;
    case 105u: goto L_0035D530;
    case 106u: goto L_0035D540;
    case 107u: goto L_0035D558;
    case 108u: goto L_0035D560;
    case 109u: goto L_0035D5B0;
    case 110u: goto L_0035D5D0;
    case 111u: goto L_0035D5F0;
    case 112u: goto L_0035D62C;
    case 113u: goto L_0035D644;
    case 114u: goto L_0035D660;
    case 115u: goto L_0035D690;
    case 116u: goto L_0035D6A0;
    case 117u: goto L_0035D6D8;
    case 118u: goto L_0035D6E8;
    case 119u: goto L_0035D720;
    case 120u: goto L_0035D740;
    case 121u: goto L_0035D750;
    case 122u: goto L_0035D770;
    case 123u: goto L_0035D7A4;
    case 124u: goto L_0035D7B8;
    case 125u: goto L_0035D7C8;
    case 126u: goto L_0035D7F0;
    case 127u: goto L_0035D82C;
    case 128u: goto L_0035D844;
    case 129u: goto L_0035D860;
    case 130u: goto L_0035D8F0;
    case 131u: goto L_0035D910;
    case 132u: goto L_0035D930;
    case 133u: goto L_0035D940;
    case 134u: goto L_0035D94C;
    case 135u: goto L_0035D960;
    case 136u: goto L_0035D970;
    case 137u: goto L_0035D980;
    case 138u: goto L_0035D9B0;
    case 139u: goto L_0035D9D0;
    case 140u: goto L_0035D9DC;
    case 141u: goto L_0035D9E4;
    case 142u: goto L_0035DA20;
    case 143u: goto L_0035DA54;
    case 144u: goto L_0035DA70;
    case 145u: goto L_0035DAA8;
    case 146u: goto L_0035DAE8;
    case 147u: goto L_0035DAF4;
    case 148u: goto L_0035DAFC;
    case 149u: goto L_0035DB08;
    case 150u: goto L_0035DB10;
    case 151u: goto L_0035DB38;
    case 152u: goto L_0035DB98;
    case 153u: goto L_0035DBD0;
    case 154u: goto L_0035DBEC;
    case 155u: goto L_0035DC40;
    case 156u: goto L_0035DC60;
    case 157u: goto L_0035DC78;
    case 158u: goto L_0035DCB0;
    case 159u: goto L_0035DCE0;
    case 160u: goto L_0035DCF8;
    case 161u: goto L_0035DD10;
    case 162u: goto L_0035DD20;
    case 163u: goto L_0035DD34;
    case 164u: goto L_0035DD3C;
    case 165u: goto L_0035DD4C;
    case 166u: goto L_0035DD5C;
    case 167u: goto L_0035DD70;
    case 168u: goto L_0035DDA4;
    case 169u: goto L_0035DDB0;
    case 170u: goto L_0035DDD0;
    case 171u: goto L_0035DDE0;
    case 172u: goto L_0035DDEC;
    case 173u: goto L_0035DDF8;
    case 174u: goto L_0035DE04;
    case 175u: goto L_0035DE10;
    case 176u: goto L_0035DE3C;
    case 177u: goto L_0035DEC0;
    case 178u: goto L_0035DECC;
    case 179u: goto L_0035DEE8;
    case 180u: goto L_0035DF14;
    case 181u: goto L_0035DF30;
    case 182u: goto L_0035DF5C;
    case 183u: goto L_0035DF60;
    case 184u: goto L_0035DFA8;
    case 185u: goto L_0035DFBC;
    case 186u: goto L_0035DFCC;
    case 187u: goto L_0035DFE4;
    case 188u: goto L_0035E004;
    case 189u: goto L_0035E034;
    case 190u: goto L_0035E148;
    case 191u: goto L_0035E15C;
    case 192u: goto L_0035E16C;
    case 193u: goto L_0035E188;
    case 194u: goto L_0035E194;
    case 195u: goto L_0035E220;
    case 196u: goto L_0035E244;
    case 197u: goto L_0035E24C;
    case 198u: goto L_0035E260;
    case 199u: goto L_0035E288;
    case 200u: goto L_0035E298;
    case 201u: goto L_0035E2C0;
    case 202u: goto L_0035E2F0;
    case 203u: goto L_0035E320;
    case 204u: goto L_0035E34C;
    case 205u: goto L_0035E368;
    case 206u: goto L_0035E3E4;
    case 207u: goto L_0035E40C;
    case 208u: goto L_0035E428;
    case 209u: goto L_0035E440;
    case 210u: goto L_0035E458;
    case 211u: goto L_0035E494;
    case 212u: goto L_0035E4BC;
    case 213u: goto L_0035E4D8;
    case 214u: goto L_0035E4E8;
    case 215u: goto L_0035E4F8;
    case 216u: goto L_0035E500;
    case 217u: goto L_0035E518;
    case 218u: goto L_0035E538;
    case 219u: goto L_0035E568;
    case 220u: goto L_0035E5AC;
    case 221u: goto L_0035E5D0;
    case 222u: goto L_0035E5E0;
    case 223u: goto L_0035E5F0;
    case 224u: goto L_0035E5F8;
    case 225u: goto L_0035E600;
    case 226u: goto L_0035E608;
    case 227u: goto L_0035E620;
    case 228u: goto L_0035E63C;
    case 229u: goto L_0035E65C;
    case 230u: goto L_0035E68C;
    case 231u: goto L_0035E69C;
    case 232u: goto L_0035E6AC;
    case 233u: goto L_0035E6B4;
    case 234u: goto L_0035E6CC;
    case 235u: goto L_0035E6E4;
    case 236u: goto L_0035E708;
    case 237u: goto L_0035E724;
    case 238u: goto L_0035E72C;
    case 239u: goto L_0035E73C;
    case 240u: goto L_0035E74C;
    case 241u: goto L_0035E764;
    case 242u: goto L_0035E774;
    case 243u: goto L_0035E784;
    case 244u: goto L_0035E78C;
    case 245u: goto L_0035E7A4;
    case 246u: goto L_0035E7FC;
    case 247u: goto L_0035E820;
    case 248u: goto L_0035E830;
    case 249u: goto L_0035E844;
    case 250u: goto L_0035E8BC;
    case 251u: goto L_0035E8E4;
    case 252u: goto L_0035E908;
    case 253u: goto L_0035E918;
    case 254u: goto L_0035E920;
    case 255u: goto L_0035E958;
    case 256u: goto L_0035E968;
    case 257u: goto L_0035E984;
    case 258u: goto L_0035E994;
    case 259u: goto L_0035E9A4;
    case 260u: goto L_0035E9B4;
    case 261u: goto L_0035E9BC;
    case 262u: goto L_0035E9C4;
    case 263u: goto L_0035E9CC;
    case 264u: goto L_0035E9D4;
    case 265u: goto L_0035E9DC;
    case 266u: goto L_0035E9E8;
    case 267u: goto L_0035E9F4;
    case 268u: goto L_0035EA14;
    case 269u: goto L_0035EA8C;
    case 270u: goto L_0035EAB4;
    case 271u: goto L_0035EADC;
    case 272u: goto L_0035EB00;
    case 273u: goto L_0035EB10;
    case 274u: goto L_0035EB44;
    case 275u: goto L_0035EB54;
    case 276u: goto L_0035EB80;
    case 277u: goto L_0035EB9C;
    case 278u: goto L_0035EBA8;
    case 279u: goto L_0035EBC4;
    case 280u: goto L_0035EBD4;
    case 281u: goto L_0035EBDC;
    case 282u: goto L_0035EC1C;
    case 283u: goto L_0035EC38;
    case 284u: goto L_0035EC50;
    case 285u: goto L_0035EC6C;
    case 286u: goto L_0035EC7C;
    case 287u: goto L_0035EC84;
    case 288u: goto L_0035ECA8;
    case 289u: goto L_0035ECC4;
    case 290u: goto L_0035ECDC;
    case 291u: goto L_0035ECF8;
    case 292u: goto L_0035ED08;
    case 293u: goto L_0035ED10;
    case 294u: goto L_0035ED2C;
    case 295u: goto L_0035ED34;
    case 296u: goto L_0035ED50;
    case 297u: goto L_0035ED6C;
    case 298u: goto L_0035ED7C;
    case 299u: goto L_0035ED8C;
    case 300u: goto L_0035EDB0;
    case 301u: goto L_0035EDCC;
    case 302u: goto L_0035EDE0;
    case 303u: goto L_0035EDFC;
    case 304u: goto L_0035EE0C;
    case 305u: goto L_0035EE14;
    case 306u: goto L_0035EE1C;
    case 307u: goto L_0035EE24;
    case 308u: goto L_0035EE2C;
    case 309u: goto L_0035EE34;
    case 310u: goto L_0035EE3C;
    case 311u: goto L_0035EE44;
    case 312u: goto L_0035EE5C;
    case 313u: goto L_0035EE74;
    case 314u: goto L_0035EEC4;
    case 315u: goto L_0035EEE8;
    case 316u: goto L_0035EF0C;
    case 317u: goto L_0035EF1C;
    case 318u: goto L_0035EF2C;
    case 319u: goto L_0035EF34;
    case 320u: goto L_0035EF4C;
    case 321u: goto L_0035EF68;
    case 322u: goto L_0035EF78;
    case 323u: goto L_0035EF84;
    case 324u: goto L_0035EFAC;
    case 325u: goto L_0035EFBC;
    case 326u: goto L_0035F030;
    case 327u: goto L_0035F07C;
    case 328u: goto L_0035F11C;
    case 329u: goto L_0035F12C;
    case 330u: goto L_0035F1C8;
    case 331u: goto L_0035F1EC;
    case 332u: goto L_0035F210;
    case 333u: goto L_0035F220;
    case 334u: goto L_0035F230;
    case 335u: goto L_0035F240;
    case 336u: goto L_0035F254;
    case 337u: goto L_0035F278;
    case 338u: goto L_0035F288;
    case 339u: goto L_0035F2A4;
    case 340u: goto L_0035F2C8;
    case 341u: goto L_0035F2EC;
    case 342u: goto L_0035F2FC;
    case 343u: goto L_0035F30C;
    case 344u: goto L_0035F31C;
    case 345u: goto L_0035F38C;
    case 346u: goto L_0035F3B0;
    case 347u: goto L_0035F3D4;
    case 348u: goto L_0035F3F8;
    case 349u: goto L_0035F41C;
    case 350u: goto L_0035F428;
    case 351u: goto L_0035F438;
    case 352u: goto L_0035F45C;
    case 353u: goto L_0035F480;
    case 354u: goto L_0035F4A4;
    case 355u: goto L_0035F4B0;
    case 356u: goto L_0035F4C0;
    case 357u: goto L_0035F4CC;
    case 358u: goto L_0035F4DC;
    case 359u: goto L_0035F4EC;
    case 360u: goto L_0035F510;
    case 361u: goto L_0035F550;
    case 362u: goto L_0035F568;
    case 363u: goto L_0035F598;
    case 364u: goto L_0035F5BC;
    case 365u: goto L_0035F5DC;
    case 366u: goto L_0035F5FC;
    case 367u: goto L_0035F608;
    case 368u: goto L_0035F624;
    case 369u: goto L_0035F634;
    case 370u: goto L_0035F64C;
    case 371u: goto L_0035F65C;
    case 372u: goto L_0035F66C;
    case 373u: goto L_0035F690;
    case 374u: goto L_0035F704;
    case 375u: goto L_0035F798;
    case 376u: goto L_0035F7BC;
    case 377u: goto L_0035F7E4;
    case 378u: goto L_0035F80C;
    case 379u: goto L_0035F830;
    case 380u: goto L_0035F840;
    case 381u: goto L_0035F858;
    case 382u: goto L_0035F874;
    case 383u: goto L_0035F8E0;
    case 384u: goto L_0035F8FC;
    case 385u: goto L_0035F90C;
    case 386u: goto L_0035F920;
    case 387u: goto L_0035F92C;
    case 388u: goto L_0035F938;
    case 389u: goto L_0035F954;
    case 390u: goto L_0035F9BC;
    case 391u: goto L_0035F9D4;
    case 392u: goto L_0035FA60;
    case 393u: goto L_0035FA88;
    case 394u: goto L_0035FAAC;
    case 395u: goto L_0035FAD0;
    case 396u: goto L_0035FAE0;
    case 397u: goto L_0035FB28;
    case 398u: goto L_0035FB3C;
    case 399u: goto L_0035FB58;
    case 400u: goto L_0035FB7C;
    case 401u: goto L_0035FB98;
    case 402u: goto L_0035FBA8;
    case 403u: goto L_0035FC3C;
    case 404u: goto L_0035FC48;
    case 405u: goto L_0035FC60;
    case 406u: goto L_0035FD00;
    case 407u: goto L_0035FD34;
    case 408u: goto L_0035FD40;
    case 409u: goto L_0035FD5C;
    case 410u: goto L_0035FD78;
    case 411u: goto L_0035FD90;
    case 412u: goto L_0035FDA0;
    case 413u: goto L_0035FDB8;
    case 414u: goto L_0035FE00;
    case 415u: goto L_0035FE10;
    case 416u: goto L_0035FE2C;
    case 417u: goto L_0035FE58;
    case 418u: goto L_0035FE7C;
    case 419u: goto L_0035FEAC;
    case 420u: goto L_0035FEC8;
    case 421u: goto L_0035FEE0;
    case 422u: goto L_0035FEFC;
    case 423u: goto L_0035FF24;
    case 424u: goto L_0035FF34;
    case 425u: goto L_0035FF44;
    case 426u: goto L_0035FF60;
    case 427u: goto L_0035FFFC;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0035C004:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C010u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0035C010u) [[unlikely]] return; }
L_0035C010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035C030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
L_0035C04C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = c.r[4].w[0];
    c.r[2].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 200u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C04Cu | kUnwind; return; } goto L_0035C04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 26u, depth + 1u); else { c.pc = 0x0035C2B0u; return; } if (c.pc != 0x0035C08Cu) [[unlikely]] return; }
L_0035C08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 24u, depth + 1u); else { c.pc = 0x0035C240u; return; } if (c.pc != 0x0035C094u) [[unlikely]] return; }
L_0035C094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C09Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 21u, depth + 1u); else { c.pc = 0x0035C210u; return; } if (c.pc != 0x0035C09Cu) [[unlikely]] return; }
L_0035C09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
L_0035C0CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[6].w[0] + 19u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 84u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 200u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C0CCu | kUnwind; return; } goto L_0035C0CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 29u, depth + 1u); else { c.pc = 0x0035C3B0u; return; } if (c.pc != 0x0035C114u) [[unlikely]] return; }
L_0035C114:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
L_0035C120:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 200u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C120u | kUnwind; return; } goto L_0035C120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 26u, depth + 1u); else { c.pc = 0x0035C2B0u; return; } if (c.pc != 0x0035C158u) [[unlikely]] return; }
L_0035C158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 24u, depth + 1u); else { c.pc = 0x0035C240u; return; } if (c.pc != 0x0035C160u) [[unlikely]] return; }
L_0035C160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 21u, depth + 1u); else { c.pc = 0x0035C210u; return; } if (c.pc != 0x0035C168u) [[unlikely]] return; }
L_0035C168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
L_0035C19C:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 84u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = c.r[4].w[0];
    c.r[2].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 200u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C19Cu | kUnwind; return; } goto L_0035C19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 26u, depth + 1u); else { c.pc = 0x0035C2B0u; return; } if (c.pc != 0x0035C1DCu) [[unlikely]] return; }
L_0035C1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 24u, depth + 1u); else { c.pc = 0x0035C240u; return; } if (c.pc != 0x0035C1E4u) [[unlikely]] return; }
L_0035C1E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1F4u); set32(c.r[6], 0u + 84u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0035C1F4u) [[unlikely]] return; }
L_0035C1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C228u); set32(c.r[6], 0u + 84u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0035C228u) [[unlikely]] return; }
L_0035C228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C230u);  if (depth < kMaxDepth) unit_007A(c, 324u, depth + 1u); else { c.pc = 0x002EA9F0u; return; } if (c.pc != 0x0035C230u) [[unlikely]] return; }
L_0035C230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C240:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 5;
L_0035C254:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.f[3] = ld32((c.r[3].w[0] + 376u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = ld32((c.r[3].w[0] + 292u));  if (t) { goto L_0035C278; } }
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.f[0]);  if (t) { goto L_0035C298; } }
L_0035C278:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C294; } }
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.f[0]);  if (t) { goto L_0035C298; } }
L_0035C294:
    st32((c.r[3].w[0] + 32u), c.f[2]);
    c.budget -= 1;
L_0035C298:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C254u | kUnwind; return; } goto L_0035C254; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C2B0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.budget -= 4;
L_0035C2C0:
    c.f[5] = 0u;
    set32(c.r[3], c.r[8].w[0] << 2);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.f[4] = c.f[5];
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 6;
L_0035C2D8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 200u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[7].w[0] << 3);  if (t) { goto L_0035C314; } }
    set32(c.r[5], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 460u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0035C340; } }
L_0035C314:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[7].w[0] << 3);  if (t) { goto L_0035C340; } }
    set32(c.r[5], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 544u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 8;
L_0035C340:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0035C360; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0035C37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[0];  if (t) { goto L_0035C37C; } }
L_0035C360:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C37C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C37C; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_0035C37C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C2D8u | kUnwind; return; } goto L_0035C2D8; } }
    c.f[0] = fp::add(c.f[5], c.f[4]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0] + 116u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C2C0u | kUnwind; return; } goto L_0035C2C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C3B0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.budget -= 4;
L_0035C3C0:
    c.f[5] = 0u;
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.f[4] = c.f[5];
    set32(c.r[3], c.r[6].w[0] << 2);
    c.budget -= 6;
L_0035C3D8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 276u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[6].w[0] << 1);  if (t) { goto L_0035C414; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 3652u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0035C440; } }
L_0035C414:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[6].w[0] << 1);  if (t) { goto L_0035C440; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 3744u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 8;
L_0035C440:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0035C460; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0035C47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[0];  if (t) { goto L_0035C47C; } }
L_0035C460:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C47C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0035C47C; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_0035C47C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3D8u | kUnwind; return; } goto L_0035C3D8; } }
    c.f[0] = fp::add(c.f[5], c.f[4]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 200u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035C3C0u | kUnwind; return; } goto L_0035C3C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035C4B0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[3] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[2] = c.r[5].w[0];
    st32((c.r[29].w[0] + 640u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 107u)));
    c.f[0] = ld32((c.r[29].w[0] + 640u));
    c.f[1] = c.r[4].w[0];
    st32((c.r[29].w[0] + 644u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 640u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 648u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 139u)));
    c.f[0] = ld32((c.r[29].w[0] + 648u));
    c.f[1] = c.r[4].w[0];
    st32((c.r[29].w[0] + 652u), c.r[5].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 648u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 628u), c.f[0]);
    set32(c.r[18], ld32((c.r[6].w[0] + 128u)));
    c.f[21] = ld32((c.r[7].w[0] + 8u));
    c.f[20] = ld32((c.r[7].w[0] + 12u));
    c.budget -= 50;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0035C700; } }
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C584u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x0035C584u) [[unlikely]] return; }
L_0035C584:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C590u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0035C590u) [[unlikely]] return; }
L_0035C590:
    set32(c.r[3], c.r[29].w[0] + 496u);
    set32(c.r[2], c.r[29].w[0] + 560u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[3], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0] + 496u));
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 496u), c.f[2]);
    st32((c.r[29].w[0] + 516u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C654u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0035C654u) [[unlikely]] return; }
L_0035C654:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[3], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 43;
L_0035C700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[18], ld32((c.r[20].w[0] + 132u)));
    c.f[0] = c.r[3].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0035C8AC; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C72Cu); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x0035C72Cu) [[unlikely]] return; }
L_0035C72C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C738u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0035C738u) [[unlikely]] return; }
L_0035C738:
    set32(c.r[3], c.r[29].w[0] + 368u);
    set32(c.r[2], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C800u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0035C800u) [[unlikely]] return; }
L_0035C800:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 43;
L_0035C8AC:
    set32(c.r[18], ld32((c.r[20].w[0] + 136u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_0035C9DC; } }
    c.f[12] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8C8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x0035C8C8u) [[unlikely]] return; }
L_0035C8C8:
    c.f[3] = ld32((c.r[19].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[2] = fp::add(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C930u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 77u, depth + 1u); else { c.pc = 0x00145760u; return; } if (c.pc != 0x0035C930u) [[unlikely]] return; }
L_0035C930:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[4], c.r[18].w[0] << 6);
    set32(c.r[3], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[6]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 43;
L_0035C9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0035CA10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA38u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x0035CA38u) [[unlikely]] return; }
L_0035CA38:
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 94;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0035CBB0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 432u);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u - 1u);
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 140u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CC34; } }
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC34u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CC34u) [[unlikely]] return; }
L_0035CC34:
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CC58; } }
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 432u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC58u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CC58u) [[unlikely]] return; }
L_0035CC58:
    set32(c.r[16], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0035CD00; } }
    set32(c.r[2], c.r[29].w[0] + 368u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] << 6);
    st32((c.r[29].w[0] + 368u), c.f[2]);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCDCu); st32((c.r[29].w[0] + 408u), c.f[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CCDCu) [[unlikely]] return; }
L_0035CCDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] << 6);  if (t) { goto L_0035CD00; } }
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD00u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CD00u) [[unlikely]] return; }
L_0035CD00:
    set32(c.r[16], ld32((c.r[18].w[0] + 148u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0035CD60; } }
    c.f[12] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD1Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x0035CD1Cu) [[unlikely]] return; }
L_0035CD1C:
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[2], c.r[16].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.f[3] = c.r[3].w[0];
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD60u); st32((c.r[29].w[0] + 344u), c.f[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CD60u) [[unlikely]] return; }
L_0035CD60:
    set32(c.r[5], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035CDE4; } }
    set32(c.r[2], c.r[29].w[0] + 240u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 6);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDE4u); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CDE4u) [[unlikely]] return; }
L_0035CDE4:
    set32(c.r[16], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.f[20] = ld32((c.r[17].w[0] + 80u));  if (t) { goto L_0035CE34; } }
    set32(c.r[2], c.r[29].w[0] + 176u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0035CE20u) [[unlikely]] return; }
L_0035CE20:
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE34u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CE34u) [[unlikely]] return; }
L_0035CE34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 164u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.f[20] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0035CE8C; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE78u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x0035CE78u) [[unlikely]] return; }
L_0035CE78:
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE8Cu); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 41u, depth + 1u); else { c.pc = 0x0035CA10u; return; } if (c.pc != 0x0035CE8Cu) [[unlikely]] return; }
L_0035CE8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0035CEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 1392u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0035CED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x0035CEE4u) [[unlikely]] return; }
L_0035CEE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29136u);
    set32(c.r[3], c.r[3].w[0] + 29152u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035CF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035CF64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29136u);
    set32(c.r[2], c.r[2].w[0] + 29152u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF4Cu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x0035CF4Cu) [[unlikely]] return; }
L_0035CF4C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035CF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035CF64u) [[unlikely]] return; }
L_0035CF64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035CF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035CF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0035CF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CFA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035CFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0035CFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0035CFD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CFA0u | kUnwind; return; } goto L_0035CFA0; }
L_0035CFE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0035CF10u | kUnwind; return; } goto L_0035CF10; }
L_0035CFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D010u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 40u, depth + 1u); else { c.pc = 0x00148710u; return; } if (c.pc != 0x0035D010u) [[unlikely]] return; }
L_0035D010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] + 29200u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[1].w[0] - 744u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035D0BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29200u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D08Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0035D08Cu) [[unlikely]] return; }
L_0035D08C:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0A4u); st32((c.r[1].w[0] - 744u), 0u);  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0035D0A4u) [[unlikely]] return; }
L_0035D0A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035D0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035D0BCu) [[unlikely]] return; }
L_0035D0BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035D0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D0E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D104u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0035D104u) [[unlikely]] return; }
L_0035D104:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D118u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035D118u) [[unlikely]] return; }
L_0035D118:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D12Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0035D12Cu) [[unlikely]] return; }
L_0035D12C:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D138u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x0035D138u) [[unlikely]] return; }
L_0035D138:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0035D144u) [[unlikely]] return; }
L_0035D144:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D158u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x0035D158u) [[unlikely]] return; }
L_0035D158:
    set32(c.r[2], c.r[17].w[0] - 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] >> 5);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D17Cu); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0035D17Cu) [[unlikely]] return; }
L_0035D17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D184u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035D184u) [[unlikely]] return; }
L_0035D184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035D1A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0035D1D4u) [[unlikely]] return; }
L_0035D1D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1E8u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035D1E8u) [[unlikely]] return; }
L_0035D1E8:
    st32((c.r[17].w[0] + 220u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035D230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D208u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x0035D208u) [[unlikely]] return; }
L_0035D208:
    c.r[1].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0035D220; } }
    st32((c.r[17].w[0] + 216u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0035D25C; } }
L_0035D220:
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 7040u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_0035D25C; } }
L_0035D230:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D244; } }
    st32((c.r[17].w[0] + 216u), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0035D25C; } }
L_0035D244:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0035D25C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], 0u + 33u);
    set32(c.r[16], c.r[16].w[0] - 7008u);
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 4;
L_0035D25C:
    st32((c.r[17].w[0] + 212u), c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 216u)));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D280u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0035D280u) [[unlikely]] return; }
L_0035D280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10832u);
    set32(c.r[6], c.r[6].w[0] - 10768u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2A0u); set32(c.r[7], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0035D2A0u) [[unlikely]] return; }
L_0035D2A0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2ACu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0035D2ACu) [[unlikely]] return; }
L_0035D2AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D2C8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2C8u); set32(c.r[7], 0u + 50u);  if (depth < kMaxDepth) unit_0097(c, 122u, depth + 1u); else { c.pc = 0x0035D770u; return; } if (c.pc != 0x0035D2C8u) [[unlikely]] return; }
L_0035D2C8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0035D344; } }
L_0035D2DC:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0035D338; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2F4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 116u, depth + 1u); else { c.pc = 0x0035D6A0u; return; } if (c.pc != 0x0035D2F4u) [[unlikely]] return; }
L_0035D2F4:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_0035D2FC:
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0035D328; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D328u); set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 119u, depth + 1u); else { c.pc = 0x0035D720u; return; } if (c.pc != 0x0035D328u) [[unlikely]] return; }
L_0035D328:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D2FCu | kUnwind; return; } goto L_0035D2FC; } }
L_0035D338:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 44u);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
L_0035D344:
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D2DCu | kUnwind; return; } goto L_0035D2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D35Cu); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035D35Cu) [[unlikely]] return; }
L_0035D35C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0035D390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 216u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 212u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0035D3BCu) [[unlikely]] return; }
L_0035D3BC:
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035D3E8; } }
L_0035D3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3D0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 19u, depth + 1u); else { c.pc = 0x00128400u; return; } if (c.pc != 0x0035D3D0u) [[unlikely]] return; }
L_0035D3D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_0035D3F8; } }
L_0035D3E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 2;
L_0035D3E8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D3C8u | kUnwind; return; } goto L_0035D3C8; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0035D3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0035D420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035D494; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D460; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D460; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D460u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035D460u) [[unlikely]] return; }
L_0035D460:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0035D480; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D47Cu); set32(c.r[5], c.r[5].w[0] - 10768u);  if (depth < kMaxDepth) unit_0000(c, 82u, depth + 1u); else { c.pc = 0x00100680u; return; } if (c.pc != 0x0035D47Cu) [[unlikely]] return; }
L_0035D47C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0035D480:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_0035D494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035D494u) [[unlikely]] return; }
L_0035D494:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D4B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035D4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035D590; } }
L_0035D4DC:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0035D4F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0035D4F8; } }
L_0035D4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035D590; } }
L_0035D4F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0035D50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035D590; } }
L_0035D50C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D530; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 16u);  if (t) { goto L_0035D530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D530u); set32(c.r[6], 0u + 500u);  if (depth < kMaxDepth) unit_0097(c, 142u, depth + 1u); else { c.pc = 0x0035DA20u; return; } if (c.pc != 0x0035D530u) [[unlikely]] return; }
L_0035D530:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D540u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 144u, depth + 1u); else { c.pc = 0x0035DA70u; return; } if (c.pc != 0x0035D540u) [[unlikely]] return; }
L_0035D540:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D558u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0035D558u) [[unlikely]] return; }
L_0035D558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0035D580; } }
L_0035D560:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 8;
L_0035D580:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D560u | kUnwind; return; } goto L_0035D560; } }
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0035D590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035D5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29232u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D5D0u); st32((c.r[4].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 114u, depth + 1u); else { c.pc = 0x0035D660u; return; } if (c.pc != 0x0035D5D0u) [[unlikely]] return; }
L_0035D5D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035D5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035D644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29232u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0035D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D62Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0035D62Cu) [[unlikely]] return; }
L_0035D62C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0035D630:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_0035D644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035D644u) [[unlikely]] return; }
L_0035D644:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D660:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0035D690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[5].w[0]);  c.pc = t; return; }
L_0035D6A0:
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
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], c.r[5].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0035D6D8u) [[unlikely]] return; }
L_0035D6D8:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0035D6E8u) [[unlikely]] return; }
L_0035D6E8:
    st32((c.r[20].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 24u), c.r[18].w[0]);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 36u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0035D720:
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_0035D740:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035D750:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D768; } }
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 3;
L_0035D768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035D770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7A4u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0035D7A4u) [[unlikely]] return; }
L_0035D7A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035D7CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7B8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0035D7B8u) [[unlikely]] return; }
L_0035D7B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D7C8u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x0035D7C8u) [[unlikely]] return; }
L_0035D7C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0035D7CC:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035D844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_0035D830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D82Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x0035D82Cu) [[unlikely]] return; }
L_0035D82C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0035D830:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035D844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035D844u) [[unlikely]] return; }
L_0035D844:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035D88C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[6].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), 0u);  if (t) { goto L_0035D8E4; } }
L_0035D88C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[6].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 24u);  if (t) { goto L_0035D8B4; } }
    set32(c.r[7], c.r[6].w[0] + 24u);
    c.budget -= 1;
L_0035D8B4:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035D8C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + 24u);  if (t) { goto L_0035D8CC; } }
L_0035D8C8:
    set32(c.r[2], c.r[5].w[0] + 24u);
    c.budget -= 1;
L_0035D8CC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
L_0035D8E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0035D8F0u) [[unlikely]] return; }
L_0035D8F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035D910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 120u, depth + 1u); else { c.pc = 0x0035D740u; return; } if (c.pc != 0x0035D930u) [[unlikely]] return; }
L_0035D930:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D940u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 33u, depth + 1u); else { c.pc = 0x0014C5E0u; return; } if (c.pc != 0x0035D940u) [[unlikely]] return; }
L_0035D940:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D94Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 32u, depth + 1u); else { c.pc = 0x0014C590u; return; } if (c.pc != 0x0035D94Cu) [[unlikely]] return; }
L_0035D94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D960:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 12u)));  c.pc = t; return; }
L_0035D970:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0035D980:
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_0035D9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9D0u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 16u, depth + 1u); else { c.pc = 0x0014C330u; return; } if (c.pc != 0x0035D9D0u) [[unlikely]] return; }
L_0035D9D0:
    set32(c.r[17], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035D9EC; } }
L_0035D9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 121u, depth + 1u); else { c.pc = 0x0035D750u; return; } if (c.pc != 0x0035D9E4u) [[unlikely]] return; }
L_0035D9E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    c.budget -= 2;
L_0035D9EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D9DCu | kUnwind; return; } goto L_0035D9DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035DA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035DA58; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA54u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0097(c, 115u, depth + 1u); else { c.pc = 0x0035D690u; return; } if (c.pc != 0x0035DA54u) [[unlikely]] return; }
L_0035DA54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0035DA58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DA70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAA8u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 138u, depth + 1u); else { c.pc = 0x0035D9B0u; return; } if (c.pc != 0x0035DAA8u) [[unlikely]] return; }
L_0035DAA8:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0097(c, 129u, depth + 1u); else { c.pc = 0x0035D860u; return; } if (c.pc != 0x0035DAE8u) [[unlikely]] return; }
L_0035DAE8:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0035DBFC; } }
L_0035DAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAFCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 135u, depth + 1u); else { c.pc = 0x0035D960u; return; } if (c.pc != 0x0035DAFCu) [[unlikely]] return; }
L_0035DAFC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035DBF0; } }
L_0035DB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB10u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 136u, depth + 1u); else { c.pc = 0x0035D970u; return; } if (c.pc != 0x0035DB10u) [[unlikely]] return; }
L_0035DB10:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0035DBEC; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035DB30; } }
    c.r[19].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0035DBEC; } }
L_0035DB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_0035DBD8; } }
L_0035DB38:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035DBD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035DBD0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DBD0; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035DBA4; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DBA0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 34u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035DBA0; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB98u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 129u, depth + 1u); else { c.pc = 0x0035D860u; return; } if (c.pc != 0x0035DB98u) [[unlikely]] return; }
L_0035DB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0035DBD4; } }
L_0035DBA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0035DBA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0035DBD0; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0035DBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBD0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035D980u; return; } if (c.pc != 0x0035DBD0u) [[unlikely]] return; }
L_0035DBD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0035DBD4:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_0035DBD8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DB38u | kUnwind; return; } goto L_0035DB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBECu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 131u, depth + 1u); else { c.pc = 0x0035D910u; return; } if (c.pc != 0x0035DBECu) [[unlikely]] return; }
L_0035DBEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0035DBF0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DB08u | kUnwind; return; } goto L_0035DB08; } }
L_0035DBFC:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DAF4u | kUnwind; return; } goto L_0035DAF4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0035DC40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DC58; } }
    st32((c.r[4].w[0] + 224u), c.f[12]);
    st32((c.r[4].w[0] + 228u), c.f[13]);
    st32((c.r[4].w[0] + 232u), c.f[14]);
    st32((c.r[4].w[0] + 212u), c.f[15]);
    c.budget -= 4;
L_0035DC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035DC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0035DC78u) [[unlikely]] return; }
L_0035DC78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 29248u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035DCF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 29248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCE0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0035DCE0u) [[unlikely]] return; }
L_0035DCE0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035DCFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0035DCF8u) [[unlikely]] return; }
L_0035DCF8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035DCFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035DD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD20u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0035DD20u) [[unlikely]] return; }
L_0035DD20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD34u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035DD34u) [[unlikely]] return; }
L_0035DD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD3Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0035DD3Cu) [[unlikely]] return; }
L_0035DD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0035DD4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD4Cu);  if (depth < kMaxDepth) unit_0097(c, 156u, depth + 1u); else { c.pc = 0x0035DC60u; return; } if (c.pc != 0x0035DD4Cu) [[unlikely]] return; }
L_0035DD4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD5Cu); st32((c.r[1].w[0] - 736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0035DD5Cu) [[unlikely]] return; }
L_0035DD5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035DDB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035DDB8; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDA4u); st32((c.r[16].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0097(c, 175u, depth + 1u); else { c.pc = 0x0035DE10u; return; } if (c.pc != 0x0035DDA4u) [[unlikely]] return; }
L_0035DDA4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035DDB0u) [[unlikely]] return; }
L_0035DDB0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0035DDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDE0u);  if (depth < kMaxDepth) unit_0097(c, 175u, depth + 1u); else { c.pc = 0x0035DE10u; return; } if (c.pc != 0x0035DDE0u) [[unlikely]] return; }
L_0035DDE0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035DDECu) [[unlikely]] return; }
L_0035DDEC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DDF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035DDF8u) [[unlikely]] return; }
L_0035DDF8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035DE04u) [[unlikely]] return; }
L_0035DE04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DE10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0035DE58; } }
L_0035DE3C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DE3Cu | kUnwind; return; } goto L_0035DE3C; } }
L_0035DE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 28320u)));
    set32(c.r[4], c.r[4].w[0] + 1424u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 112u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 28324u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 28328u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 28352u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DEC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DEC0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DEC0u) [[unlikely]] return; }
L_0035DEC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DECCu); st32((c.r[1].w[0] + 28352u), 0u);  if (depth < kMaxDepth) unit_00A2(c, 35u, depth + 1u); else { c.pc = 0x003883B0u; return; } if (c.pc != 0x0035DECCu) [[unlikely]] return; }
L_0035DECC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x54410000u);  if (t) { goto L_0035DEE0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035DEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEE8u); c.r[5].d[0] = c.r[2].d[0] | 21076ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035DEE8u) [[unlikely]] return; }
L_0035DEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035DEF4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035DEF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DF14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DF14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DF14u) [[unlikely]] return; }
L_0035DF14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D590000u);  if (t) { goto L_0035DF28; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035DF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF30u); c.r[5].d[0] = c.r[2].d[0] | 21076ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035DF30u) [[unlikely]] return; }
L_0035DF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035DF3C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035DF3C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035DF60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035DF5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035DF5Cu) [[unlikely]] return; }
L_0035DF5C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035DF60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[19], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035E16C; } }
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 100u);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[16].w[0] + 380u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035DF9C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035DF9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFA8u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035DFA8u) [[unlikely]] return; }
L_0035DFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0035DFB4; } }
    set32(c.r[20], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035DFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFBCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x0035DFBCu) [[unlikely]] return; }
L_0035DFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035DFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFCCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 100u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x0035DFCCu) [[unlikely]] return; }
L_0035DFCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0035DFD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_0035DFDC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035DFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFE4u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035DFE4u) [[unlikely]] return; }
L_0035DFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0035DFF8; } }
L_0035DFF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035DFF8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E004u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035E004u) [[unlikely]] return; }
L_0035E004:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[15] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E034u); c.f[14] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x0035E034u) [[unlikely]] return; }
L_0035E034:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[9]);
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[10], c.r[19].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = 0ull & 7ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[12], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[24], 0u - 2u);
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[19], c.r[7].w[0] << 5);
    set32(c.r[14], c.r[7].w[0] << 1);
    set32(c.r[2], 0u - 129u);
    set32(c.r[15], 0u - 33u);
    st128((c.r[8].w[0]) & ~15u, c.r[9]);
    set32(c.r[13], 0u - 3u);
    c.r[25].d[0] = ld8((c.r[16].w[0] + 395u));
    set32(c.r[11], 0u - 29u);
    set32(c.r[8], c.r[10].w[0] + 112u);
    set32(c.r[9], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[25].d[0] = c.r[25].d[0] & c.r[5].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[24].d[0] = c.r[25].d[0] & c.r[24].d[0];
    c.r[7].d[0] = c.r[24].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[15].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[19].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0] + 96u)));
    st32((c.r[16].w[0] + 980u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 980u), c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[16].w[0] + 984u), c.r[2].w[0]);
    c.budget -= 65;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 988u), c.r[17].w[0]);  if (t) { goto L_0035E13C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035E13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E148u); c.r[5].d[0] = c.r[2].d[0] | 16726ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035E148u) [[unlikely]] return; }
L_0035E148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035E154; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035E154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E15Cu);  if (depth < kMaxDepth) unit_0033(c, 4u, depth + 1u); else { c.pc = 0x001CC060u; return; } if (c.pc != 0x0035E15Cu) [[unlikely]] return; }
L_0035E15C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E16Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E16Cu) [[unlikely]] return; }
L_0035E16C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DF60u | kUnwind; return; } goto L_0035DF60; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035E188u) [[unlikely]] return; }
L_0035E188:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E194u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035E194u) [[unlikely]] return; }
L_0035E194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], ld32((c.r[1].w[0] + 28320u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], 0u - 5u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0035E1D8; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0035E1D8:
    set32(c.r[6], ld32((c.r[1].w[0] + 28328u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035E1FC; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0035E1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0035E220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035E250; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035E244u) [[unlikely]] return; }
L_0035E244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E24Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 202u, depth + 1u); else { c.pc = 0x0035E2F0u; return; } if (c.pc != 0x0035E24Cu) [[unlikely]] return; }
L_0035E24C:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0035E250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0035E2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035E29C; } }
L_0035E288:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E298u) [[unlikely]] return; }
L_0035E298:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0035E29C:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035E288u | kUnwind; return; } goto L_0035E288; } }
L_0035E2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035E2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 28324u)));
    st32((c.r[4].w[0] + 980u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 980u), 0u);
    st32((c.r[4].w[0] + 984u), c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 984u), c.r[4].w[0]);  c.pc = t; return; }
L_0035E2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[1].w[0] + 28320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E320u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 108u, depth + 1u); else { c.pc = 0x003610E0u; return; } if (c.pc != 0x0035E320u) [[unlikely]] return; }
L_0035E320:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0035EFBC; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035E34C:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E368u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E368u) [[unlikely]] return; }
L_0035E368:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 980u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < 7040ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0035E3C4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 7210ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035E3C0; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 129u);
    set32(c.r[5], c.r[2].w[0] << 7);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_0035E3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0035E3C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[14] = c.r[2].w[0];
    c.f[15] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x0035E3E4u) [[unlikely]] return; }
L_0035E3E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[15] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E40Cu); set32(c.r[4], ld32((c.r[1].w[0] + 28328u)));  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x0035E40Cu) [[unlikely]] return; }
L_0035E40C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035EFBC; } }
L_0035E428:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E440u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E440u) [[unlikely]] return; }
L_0035E440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E458u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E458u) [[unlikely]] return; }
L_0035E458:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3092u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3208u);  if (t) { goto L_0035E470; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035E49C; } }
L_0035E470:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E494u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E494u) [[unlikely]] return; }
L_0035E494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E4BC; } }
L_0035E49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E4BCu) [[unlikely]] return; }
L_0035E4BC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E4D8u) [[unlikely]] return; }
L_0035E4D8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E4E8u) [[unlikely]] return; }
L_0035E4E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E4F8u) [[unlikely]] return; }
L_0035E4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0035EFC0; } }
L_0035E500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E518u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E518u) [[unlikely]] return; }
L_0035E518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E538u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E538u) [[unlikely]] return; }
L_0035E538:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 397u));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E568u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E568u) [[unlikely]] return; }
L_0035E568:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3308u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);  if (t) { goto L_0035E590; } }
    set32(c.r[2], 0u + 3310u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3323u);  if (t) { goto L_0035E58C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035E5B4; } }
L_0035E58C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.budget -= 1;
L_0035E590:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[6], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E5ACu) [[unlikely]] return; }
L_0035E5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_0035E5D4; } }
L_0035E5B4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 15u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E5D0u) [[unlikely]] return; }
L_0035E5D0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0035E5D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E5E0u) [[unlikely]] return; }
L_0035E5E0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E5F0u) [[unlikely]] return; }
L_0035E5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E600u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 360u, depth + 1u); else { c.pc = 0x0035F510u; return; } if (c.pc != 0x0035E600u) [[unlikely]] return; }
L_0035E600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E620u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E620u) [[unlikely]] return; }
L_0035E620:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E63Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E63Cu) [[unlikely]] return; }
L_0035E63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E65Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E65Cu) [[unlikely]] return; }
L_0035E65C:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    st32((c.r[17].w[0] + 980u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 980u), 0u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E68Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x0035E68Cu) [[unlikely]] return; }
L_0035E68C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E69Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E69Cu) [[unlikely]] return; }
L_0035E69C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6ACu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E6ACu) [[unlikely]] return; }
L_0035E6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E6B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E6CCu) [[unlikely]] return; }
L_0035E6CC:
    set32(c.r[2], 0u + 1000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6E4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E6E4u) [[unlikely]] return; }
L_0035E6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E708u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E708u) [[unlikely]] return; }
L_0035E708:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E724u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E724u) [[unlikely]] return; }
L_0035E724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E72Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 201u, depth + 1u); else { c.pc = 0x0035E2C0u; return; } if (c.pc != 0x0035E72Cu) [[unlikely]] return; }
L_0035E72C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E73Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E73Cu) [[unlikely]] return; }
L_0035E73C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E74Cu) [[unlikely]] return; }
L_0035E74C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E764u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x0035E764u) [[unlikely]] return; }
L_0035E764:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E774u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E774u) [[unlikely]] return; }
L_0035E774:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E784u); set32(c.r[6], 0u + 15u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E784u) [[unlikely]] return; }
L_0035E784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E78C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035E7A4u) [[unlikely]] return; }
L_0035E7A4:
    set32(c.r[2], 0u + 1000u);
    set32(c.r[3], 0u - 129u);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 394u));
    set32(c.r[2], 0u + 3770u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0035E7DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E804; } }
L_0035E7DC:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[6], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E7FCu) [[unlikely]] return; }
L_0035E7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0035E824; } }
L_0035E804:
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E820u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E820u) [[unlikely]] return; }
L_0035E820:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035E824:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E830u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E830u) [[unlikely]] return; }
L_0035E830:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035E844u) [[unlikely]] return; }
L_0035E844:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3885u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0035E8C8; } }
    set32(c.r[2], 0u + 3891u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3883u);  if (t) { goto L_0035E8C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E8C4; } }
    set32(c.r[2], 0u + 3882u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3894u);  if (t) { goto L_0035E8C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E89C; } }
    set32(c.r[2], 0u + 3934u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);  if (t) { goto L_0035E8A0; } }
    set32(c.r[2], 0u + 3932u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E89C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E8EC; } }
L_0035E89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.budget -= 1;
L_0035E8A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[6], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E8BCu) [[unlikely]] return; }
L_0035E8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035E90C; } }
L_0035E8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0035E8C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[6], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E8E4u) [[unlikely]] return; }
L_0035E8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E908; } }
L_0035E8EC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 15u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E908u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E908u) [[unlikely]] return; }
L_0035E908:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0035E90C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E918u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035E918u) [[unlikely]] return; }
L_0035E918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E920:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E958u); st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E958u) [[unlikely]] return; }
L_0035E958:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E968u) [[unlikely]] return; }
L_0035E968:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E984u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035E984u) [[unlikely]] return; }
L_0035E984:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E994u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x0035E994u) [[unlikely]] return; }
L_0035E994:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E9A4u) [[unlikely]] return; }
L_0035E9A4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035E9B4u) [[unlikely]] return; }
L_0035E9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 326u, depth + 1u); else { c.pc = 0x0035F030u; return; } if (c.pc != 0x0035E9C4u) [[unlikely]] return; }
L_0035E9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 373u, depth + 1u); else { c.pc = 0x0035F690u; return; } if (c.pc != 0x0035E9D4u) [[unlikely]] return; }
L_0035E9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035E9DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035E9E8u) [[unlikely]] return; }
L_0035E9E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035E9F4u) [[unlikely]] return; }
L_0035E9F4:
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA14u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035EA14u) [[unlikely]] return; }
L_0035EA14:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3703u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2080000u);  if (t) { goto L_0035EAC0; } }
    set32(c.r[2], 0u + 3704u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3700u);  if (t) { goto L_0035EABC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EA94; } }
    set32(c.r[2], 0u + 3753u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);  if (t) { goto L_0035EA70; } }
    set32(c.r[2], 0u + 3751u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3701u);  if (t) { goto L_0035EA6C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EA6C; } }
    set32(c.r[2], 0u + 3750u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EA6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);  if (t) { goto L_0035EAE4; } }
L_0035EA6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.budget -= 1;
L_0035EA70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA8Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EA8Cu) [[unlikely]] return; }
L_0035EA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0035EB04; } }
L_0035EA94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1900000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 11u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EAB4u) [[unlikely]] return; }
L_0035EAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EB00; } }
L_0035EABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2080000u);
    c.budget -= 1;
L_0035EAC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EADCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EADCu) [[unlikely]] return; }
L_0035EADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EB00; } }
L_0035EAE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EB00u) [[unlikely]] return; }
L_0035EB00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035EB04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB10u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EB10u) [[unlikely]] return; }
L_0035EB10:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 397u));
    set32(c.r[2], 0u - 65u);
    c.f[12] = 0u;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB44u); st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EB44u) [[unlikely]] return; }
L_0035EB44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB54u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EB54u) [[unlikely]] return; }
L_0035EB54:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035EB74; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035EB74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB80u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035EB80u) [[unlikely]] return; }
L_0035EB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035EB8C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035EB8C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB9Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035EB9Cu) [[unlikely]] return; }
L_0035EB9C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035EBA8u) [[unlikely]] return; }
L_0035EBA8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EBC4u) [[unlikely]] return; }
L_0035EBC4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBD4u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EBD4u) [[unlikely]] return; }
L_0035EBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EBDC:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 396u));
    set32(c.r[2], 0u - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC1Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035EC1Cu) [[unlikely]] return; }
L_0035EC1C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EC38u) [[unlikely]] return; }
L_0035EC38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035EC44; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035EC44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC50u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035EC50u) [[unlikely]] return; }
L_0035EC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035EC5C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035EC5C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC6Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035EC6Cu) [[unlikely]] return; }
L_0035EC6C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC7Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EC7Cu) [[unlikely]] return; }
L_0035EC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EC84:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035ECA8u) [[unlikely]] return; }
L_0035ECA8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035ECC4u) [[unlikely]] return; }
L_0035ECC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035ECD0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035ECD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECDCu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035ECDCu) [[unlikely]] return; }
L_0035ECDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035ECE8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035ECE8:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECF8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035ECF8u) [[unlikely]] return; }
L_0035ECF8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED08u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035ED08u) [[unlikely]] return; }
L_0035ED08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035ED10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13128u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED2Cu); st32((c.r[2].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A2(c, 29u, depth + 1u); else { c.pc = 0x00388340u; return; } if (c.pc != 0x0035ED2Cu) [[unlikely]] return; }
L_0035ED2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED34u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 38u, depth + 1u); else { c.pc = 0x00388400u; return; } if (c.pc != 0x0035ED34u) [[unlikely]] return; }
L_0035ED34:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 20u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED50u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035ED50u) [[unlikely]] return; }
L_0035ED50:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 21u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035ED6Cu) [[unlikely]] return; }
L_0035ED6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED7Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035ED7Cu) [[unlikely]] return; }
L_0035ED7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED8Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035ED8Cu) [[unlikely]] return; }
L_0035ED8C:
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035EDA4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035EDA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDB0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035EDB0u) [[unlikely]] return; }
L_0035EDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035EDBC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035EDBC:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDCCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035EDCCu) [[unlikely]] return; }
L_0035EDCC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x0035EDE0u) [[unlikely]] return; }
L_0035EDE0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EDFCu) [[unlikely]] return; }
L_0035EDFC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035EE0Cu) [[unlikely]] return; }
L_0035EE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 33u, depth + 1u); else { c.pc = 0x003603B0u; return; } if (c.pc != 0x0035EE1Cu) [[unlikely]] return; }
L_0035EE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 426u, depth + 1u); else { c.pc = 0x0035FF60u; return; } if (c.pc != 0x0035EE2Cu) [[unlikely]] return; }
L_0035EE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 406u, depth + 1u); else { c.pc = 0x0035FD00u; return; } if (c.pc != 0x0035EE3Cu) [[unlikely]] return; }
L_0035EE3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EE44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE5Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035EE5Cu) [[unlikely]] return; }
L_0035EE5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE74u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035EE74u) [[unlikely]] return; }
L_0035EE74:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3381u);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_0035EEA8; } }
    set32(c.r[2], 0u + 3418u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3429u);  if (t) { goto L_0035EEA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0035EECC; } }
L_0035EEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_0035EEA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[6], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEC4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EEC4u) [[unlikely]] return; }
L_0035EEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);  if (t) { goto L_0035EEEC; } }
L_0035EECC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 14u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EEE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EEE8u) [[unlikely]] return; }
L_0035EEE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.budget -= 1;
L_0035EEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF0Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EF0Cu) [[unlikely]] return; }
L_0035EF0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF1Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EF1Cu) [[unlikely]] return; }
L_0035EF1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF2Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EF2Cu) [[unlikely]] return; }
L_0035EF2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EFBC; } }
L_0035EF34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF4Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035EF4Cu) [[unlikely]] return; }
L_0035EF4C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 5u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EF68u) [[unlikely]] return; }
L_0035EF68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF78u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EF78u) [[unlikely]] return; }
L_0035EF78:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035EF84u) [[unlikely]] return; }
L_0035EF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 14u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035EFACu) [[unlikely]] return; }
L_0035EFAC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EFBCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035EFBCu) [[unlikely]] return; }
L_0035EFBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0035EFC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0035EFE4; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0035EFE4:
    set32(c.r[6], ld32((c.r[1].w[0] + 28328u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0035F008; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0035F008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035F030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u - 129u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 150u);
    set32(c.r[16], ld32((c.r[1].w[0] + 28320u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F07Cu); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F07Cu) [[unlikely]] return; }
L_0035F07C:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(0u));
    set32(c.r[14], 0u - 129u);
    c.r[13].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[11], 0u - 33u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[10], 0u + 1000u);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u + 160u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.f[13] = c.f[12];
    c.r[13].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[17].w[0] + 396u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 396u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[17].w[0] + 640u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[14].d[0];
    c.r[2].d[0] = c.r[10].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F11Cu); st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F11Cu) [[unlikely]] return; }
L_0035F11C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F12Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F12Cu) [[unlikely]] return; }
L_0035F12C:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u + 74u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035F440; } }
    c.r[3].d[0] = c.r[4].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_0035F158; } }
    c.r[3].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F324; } }
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035F158:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;  if (t) { goto L_0035F170; } }
    c.r[3].d[0] = c.r[4].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F248; } }
    c.r[3].d[0] = c.r[4].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035F170:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_0035F188; } }
    c.r[3].d[0] = c.r[4].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0035F1A8; } }
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035F188:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F4EC; } }
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035F4F0; } }
L_0035F1A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0035F1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F1C8u) [[unlikely]] return; }
L_0035F1C8:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035F1E0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035F1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1ECu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035F1ECu) [[unlikely]] return; }
L_0035F1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0035F200; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035F200:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F210u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035F210u) [[unlikely]] return; }
L_0035F210:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F220u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x0035F220u) [[unlikely]] return; }
L_0035F220:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F230u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F230u) [[unlikely]] return; }
L_0035F230:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F240u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F240u) [[unlikely]] return; }
L_0035F240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F4EC; } }
L_0035F248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F254u); set32(c.r[5], 0u + 151u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F254u) [[unlikely]] return; }
L_0035F254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F278u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F278u) [[unlikely]] return; }
L_0035F278:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F288u) [[unlikely]] return; }
L_0035F288:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F2A4u) [[unlikely]] return; }
L_0035F2A4:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035F2BC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035F2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2C8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035F2C8u) [[unlikely]] return; }
L_0035F2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0035F2DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035F2DC:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2ECu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035F2ECu) [[unlikely]] return; }
L_0035F2EC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x0035F2FCu) [[unlikely]] return; }
L_0035F2FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F30Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F30Cu) [[unlikely]] return; }
L_0035F30C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F31Cu); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F31Cu) [[unlikely]] return; }
L_0035F31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F4EC; } }
L_0035F324:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 3363u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F394; } }
    set32(c.r[2], 0u + 3364u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F394; } }
    set32(c.r[2], 0u + 3412u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F394; } }
    set32(c.r[2], 0u + 3383u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F394; } }
    set32(c.r[2], 0u + 3384u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_0035F370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.budget -= 1;
L_0035F370:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F38Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F38Cu) [[unlikely]] return; }
L_0035F38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_0035F3D8; } }
L_0035F394:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 9u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F3B0u) [[unlikely]] return; }
L_0035F3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F3D4; } }
L_0035F3B8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F3D4u) [[unlikely]] return; }
L_0035F3D4:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 1;
L_0035F3D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035F3EC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035F3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3F8u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035F3F8u) [[unlikely]] return; }
L_0035F3F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0035F40C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035F40C:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F41Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035F41Cu) [[unlikely]] return; }
L_0035F41C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F428u) [[unlikely]] return; }
L_0035F428:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F438u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F438u) [[unlikely]] return; }
L_0035F438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F4EC; } }
L_0035F440:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F45Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F45Cu) [[unlikely]] return; }
L_0035F45C:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035F474; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035F474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F480u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035F480u) [[unlikely]] return; }
L_0035F480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0035F494; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035F494:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4A4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035F4A4u) [[unlikely]] return; }
L_0035F4A4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F4B0u) [[unlikely]] return; }
L_0035F4B0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F4C0u) [[unlikely]] return; }
L_0035F4C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4CCu); set32(c.r[5], 0u + 152u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F4CCu) [[unlikely]] return; }
L_0035F4CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4DCu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F4DCu) [[unlikely]] return; }
L_0035F4DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4ECu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F4ECu) [[unlikely]] return; }
L_0035F4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035F4F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035F510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1700u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] + 28320u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035F550u) [[unlikely]] return; }
L_0035F550:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1700u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F568u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035F568u) [[unlikely]] return; }
L_0035F568:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 6276u);
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);  if (t) { goto L_0035F5C4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F598u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F598u) [[unlikely]] return; }
L_0035F598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F5BCu) [[unlikely]] return; }
L_0035F5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0035F600; } }
L_0035F5C4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5DCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F5DCu) [[unlikely]] return; }
L_0035F5DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F5FCu) [[unlikely]] return; }
L_0035F5FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0035F600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F608u);  if (depth < kMaxDepth) unit_0097(c, 201u, depth + 1u); else { c.pc = 0x0035E2C0u; return; } if (c.pc != 0x0035F608u) [[unlikely]] return; }
L_0035F608:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F624u) [[unlikely]] return; }
L_0035F624:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F634u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F634u) [[unlikely]] return; }
L_0035F634:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F64Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x0035F64Cu) [[unlikely]] return; }
L_0035F64C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F65Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F65Cu) [[unlikely]] return; }
L_0035F65C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F66Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F66Cu) [[unlikely]] return; }
L_0035F66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035F690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], 0u + 78u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 28320u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));  if (t) { goto L_0035F9AC; } }
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 75u);  if (t) { goto L_0035F9AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035F9AC; } }
    set32(c.r[3], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 77u);  if (t) { goto L_0035F6F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035F6F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0035FCE0; } }
L_0035F6F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F704u); set32(c.r[5], 0u + 1700u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F704u) [[unlikely]] return; }
L_0035F704:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 3510u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0035F7F0; } }
    set32(c.r[2], 0u + 3508u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3503u);  if (t) { goto L_0035F7EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F7EC; } }
    set32(c.r[2], 0u + 3527u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3501u);  if (t) { goto L_0035F7EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F7C4; } }
    set32(c.r[2], 0u + 3502u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0035F7C8; } }
    set32(c.r[2], 0u + 3526u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3528u);  if (t) { goto L_0035F7C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F7C4; } }
    set32(c.r[2], 0u + 3509u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);  if (t) { goto L_0035F7A0; } }
    set32(c.r[2], 0u + 3507u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);  if (t) { goto L_0035F77C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F814; } }
L_0035F77C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F798u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F798u) [[unlikely]] return; }
L_0035F798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_0035F834; } }
L_0035F7A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7BCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F7BCu) [[unlikely]] return; }
L_0035F7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F830; } }
L_0035F7C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0035F7C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7E4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F7E4u) [[unlikely]] return; }
L_0035F7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F830; } }
L_0035F7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0035F7F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F80Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F80Cu) [[unlikely]] return; }
L_0035F80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F830; } }
L_0035F814:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 8u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F830u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F830u) [[unlikely]] return; }
L_0035F830:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0035F834:
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F840u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035F840u) [[unlikely]] return; }
L_0035F840:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 153u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F858u); st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F858u) [[unlikely]] return; }
L_0035F858:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F874u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F874u) [[unlikely]] return; }
L_0035F874:
    c.r[9].d[0] = ld8((c.r[18].w[0] + 392u));
    set32(c.r[6], 0u - 33u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[5], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 23;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035F8D4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035F8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8E0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035F8E0u) [[unlikely]] return; }
L_0035F8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035F8EC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035F8EC:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8FCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035F8FCu) [[unlikely]] return; }
L_0035F8FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F90Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F90Cu) [[unlikely]] return; }
L_0035F90C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F920u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035F920u) [[unlikely]] return; }
L_0035F920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035F92Cu) [[unlikely]] return; }
L_0035F92C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F938u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035F938u) [[unlikely]] return; }
L_0035F938:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F954u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035F954u) [[unlikely]] return; }
L_0035F954:
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], 0u - 33u);
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 2u);
    c.r[9].d[0] = ld8((c.r[18].w[0] + 392u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035FCDC; } }
L_0035F9AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9BCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035F9BCu) [[unlikely]] return; }
L_0035F9BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F9D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035F9D4u) [[unlikely]] return; }
L_0035F9D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 3611u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);  if (t) { goto L_0035FA90; } }
    set32(c.r[2], 0u + 3571u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);  if (t) { goto L_0035FA6C; } }
    set32(c.r[2], 0u + 3621u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3614u);  if (t) { goto L_0035FA68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FA68; } }
    set32(c.r[2], 0u + 3618u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3572u);  if (t) { goto L_0035FA68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FA40; } }
    set32(c.r[2], 0u + 3586u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0035FA44; } }
    set32(c.r[2], 0u + 3551u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3560u);  if (t) { goto L_0035FA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FAB4; } }
L_0035FA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0035FA44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA60u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FA60u) [[unlikely]] return; }
L_0035FA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0035FAD4; } }
L_0035FA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.budget -= 1;
L_0035FA6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA88u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FA88u) [[unlikely]] return; }
L_0035FA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FAD0; } }
L_0035FA90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAACu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FAACu) [[unlikely]] return; }
L_0035FAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FAD0; } }
L_0035FAB4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAD0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FAD0u) [[unlikely]] return; }
L_0035FAD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0035FAD4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAE0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035FAE0u) [[unlikely]] return; }
L_0035FAE0:
    set32(c.r[2], 0u + 1000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3600ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0035FB30; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB28u); set32(c.r[5], 0u + 154u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035FB28u) [[unlikely]] return; }
L_0035FB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0035FB3C; } }
L_0035FB30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB3Cu); set32(c.r[5], 0u + 153u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035FB3Cu) [[unlikely]] return; }
L_0035FB3C:
    c.f[12] = 0u;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB58u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FB58u) [[unlikely]] return; }
L_0035FB58:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035FB70; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035FB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB7Cu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035FB7Cu) [[unlikely]] return; }
L_0035FB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035FB88; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035FB88:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB98u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035FB98u) [[unlikely]] return; }
L_0035FB98:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBA8u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035FBA8u) [[unlikely]] return; }
L_0035FBA8:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 392u));
    set32(c.r[5], 0u - 33u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[11], 0u - 2u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[9], 0u - 9u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[12].d[0];
    set32(c.r[6], c.r[4].w[0] << 2);
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[12].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[12].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC3Cu); st32((c.r[17].w[0] + 980u), 0u);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035FC3Cu) [[unlikely]] return; }
L_0035FC3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035FC48u) [[unlikely]] return; }
L_0035FC48:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0035FC60u) [[unlikely]] return; }
L_0035FC60:
    c.r[13].d[0] = ld8((c.r[18].w[0] + 392u));
    set32(c.r[10], 0u - 33u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[9], 0u - 2u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 9u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 5u);
    c.r[10].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[18].w[0] + 393u));
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 397u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 397u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 31;
L_0035FCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0035FCE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035FD00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 28320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035FD34u) [[unlikely]] return; }
L_0035FD34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x0035FD40u) [[unlikely]] return; }
L_0035FD40:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FD5Cu) [[unlikely]] return; }
L_0035FD5C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 14u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FD78u) [[unlikely]] return; }
L_0035FD78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 540u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD90u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035FD90u) [[unlikely]] return; }
L_0035FD90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDA0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x0035FDA0u) [[unlikely]] return; }
L_0035FDA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 710u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FDB8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0035FDB8u) [[unlikely]] return; }
L_0035FDB8:
    set32(c.r[2], 0u + 2000u);
    set32(c.r[5], 0u - 129u);
    st32((c.r[17].w[0] + 640u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FE00u) [[unlikely]] return; }
L_0035FE00:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FE10u) [[unlikely]] return; }
L_0035FE10:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FE2Cu) [[unlikely]] return; }
L_0035FE2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 5854u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_0035FE60; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 14u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FE58u) [[unlikely]] return; }
L_0035FE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_0035FE80; } }
L_0035FE60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[13] = 0u;
    set32(c.r[6], 0u + 14u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE7Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0035FE7Cu) [[unlikely]] return; }
L_0035FE7C:
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 1;
L_0035FE80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0035FEA0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035FEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEACu); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035FEACu) [[unlikely]] return; }
L_0035FEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035FEB8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035FEB8:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEC8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035FEC8u) [[unlikely]] return; }
L_0035FEC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0035FED4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_0035FED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEE0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0035FEE0u) [[unlikely]] return; }
L_0035FEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0035FEEC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0035FEEC:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FEFCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x0035FEFCu) [[unlikely]] return; }
L_0035FEFC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x0035FF24u) [[unlikely]] return; }
L_0035FF24:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FF34u) [[unlikely]] return; }
L_0035FF34:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035FF44u) [[unlikely]] return; }
L_0035FF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035FF60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[1].w[0] + 28320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 28328u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 13136u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 98ll ? 1ull : 0ull;  if (t) { goto L_0035FFD0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 109ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
    c.r[3].d[0] = c.r[4].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035FFD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 31u, depth); } }
    c.r[3].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035FFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { [[clang::musttail]] return unit_0098(c, 32u, depth); } }
L_0035FFEC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFFCu); st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x0035FFFCu) [[unlikely]] return; }
L_0035FFFC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0098(c, 1u, depth);
}

}
