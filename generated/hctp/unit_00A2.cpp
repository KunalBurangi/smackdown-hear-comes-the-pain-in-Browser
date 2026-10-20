#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A2[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0,
    0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0,
    371, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00388000;
    case 2u: goto L_00388018;
    case 3u: goto L_00388020;
    case 4u: goto L_00388034;
    case 5u: goto L_00388048;
    case 6u: goto L_00388058;
    case 7u: goto L_00388070;
    case 8u: goto L_003880B0;
    case 9u: goto L_003880C8;
    case 10u: goto L_003880E0;
    case 11u: goto L_00388114;
    case 12u: goto L_00388130;
    case 13u: goto L_00388160;
    case 14u: goto L_00388168;
    case 15u: goto L_0038817C;
    case 16u: goto L_00388190;
    case 17u: goto L_003881A0;
    case 18u: goto L_003881C0;
    case 19u: goto L_003881D4;
    case 20u: goto L_00388200;
    case 21u: goto L_0038823C;
    case 22u: goto L_00388258;
    case 23u: goto L_00388270;
    case 24u: goto L_00388290;
    case 25u: goto L_003882B8;
    case 26u: goto L_003882D0;
    case 27u: goto L_003882F4;
    case 28u: goto L_0038830C;
    case 29u: goto L_00388340;
    case 30u: goto L_0038836C;
    case 31u: goto L_00388374;
    case 32u: goto L_00388384;
    case 33u: goto L_00388394;
    case 34u: goto L_0038839C;
    case 35u: goto L_003883B0;
    case 36u: goto L_003883E0;
    case 37u: goto L_003883EC;
    case 38u: goto L_00388400;
    case 39u: goto L_00388420;
    case 40u: goto L_0038844C;
    case 41u: goto L_00388468;
    case 42u: goto L_00388474;
    case 43u: goto L_003884CC;
    case 44u: goto L_003884DC;
    case 45u: goto L_003884EC;
    case 46u: goto L_00388500;
    case 47u: goto L_00388510;
    case 48u: goto L_00388520;
    case 49u: goto L_00388530;
    case 50u: goto L_0038853C;
    case 51u: goto L_0038854C;
    case 52u: goto L_0038856C;
    case 53u: goto L_003885A0;
    case 54u: goto L_003885EC;
    case 55u: goto L_00388614;
    case 56u: goto L_0038863C;
    case 57u: goto L_00388664;
    case 58u: goto L_0038868C;
    case 59u: goto L_003886A8;
    case 60u: goto L_003886B4;
    case 61u: goto L_003886CC;
    case 62u: goto L_003886F0;
    case 63u: goto L_00388744;
    case 64u: goto L_00388794;
    case 65u: goto L_003887D0;
    case 66u: goto L_0038880C;
    case 67u: goto L_00388820;
    case 68u: goto L_00388848;
    case 69u: goto L_00388888;
    case 70u: goto L_003888B0;
    case 71u: goto L_003888F4;
    case 72u: goto L_00388908;
    case 73u: goto L_0038893C;
    case 74u: goto L_00388960;
    case 75u: goto L_00388984;
    case 76u: goto L_00388998;
    case 77u: goto L_00388A44;
    case 78u: goto L_00388A58;
    case 79u: goto L_00388A64;
    case 80u: goto L_00388A6C;
    case 81u: goto L_00388A80;
    case 82u: goto L_00388AE8;
    case 83u: goto L_00388B00;
    case 84u: goto L_00388B10;
    case 85u: goto L_00388B20;
    case 86u: goto L_00388B90;
    case 87u: goto L_00388BBC;
    case 88u: goto L_00388BE0;
    case 89u: goto L_00388BEC;
    case 90u: goto L_00388C24;
    case 91u: goto L_00388C28;
    case 92u: goto L_00388C48;
    case 93u: goto L_00388C58;
    case 94u: goto L_00388C74;
    case 95u: goto L_00388CA0;
    case 96u: goto L_00388CB0;
    case 97u: goto L_00388CC0;
    case 98u: goto L_00388CD0;
    case 99u: goto L_00388CDC;
    case 100u: goto L_00388CEC;
    case 101u: goto L_00388CF8;
    case 102u: goto L_00388D08;
    case 103u: goto L_00388D30;
    case 104u: goto L_00388D64;
    case 105u: goto L_00388D90;
    case 106u: goto L_00388DCC;
    case 107u: goto L_00388DF4;
    case 108u: goto L_00388E1C;
    case 109u: goto L_00388E44;
    case 110u: goto L_00388E6C;
    case 111u: goto L_00388E88;
    case 112u: goto L_00388E94;
    case 113u: goto L_00388EAC;
    case 114u: goto L_00388ED0;
    case 115u: goto L_00388EFC;
    case 116u: goto L_00388F24;
    case 117u: goto L_00388F40;
    case 118u: goto L_00388FE0;
    case 119u: goto L_00389010;
    case 120u: goto L_00389024;
    case 121u: goto L_003890B8;
    case 122u: goto L_003890E0;
    case 123u: goto L_003890F0;
    case 124u: goto L_00389124;
    case 125u: goto L_00389164;
    case 126u: goto L_0038918C;
    case 127u: goto L_003891CC;
    case 128u: goto L_003891E0;
    case 129u: goto L_003891F4;
    case 130u: goto L_003891FC;
    case 131u: goto L_00389258;
    case 132u: goto L_00389274;
    case 133u: goto L_00389290;
    case 134u: goto L_003892A4;
    case 135u: goto L_003892CC;
    case 136u: goto L_003892E0;
    case 137u: goto L_003892FC;
    case 138u: goto L_00389310;
    case 139u: goto L_00389324;
    case 140u: goto L_003893A0;
    case 141u: goto L_003893B4;
    case 142u: goto L_00389404;
    case 143u: goto L_00389418;
    case 144u: goto L_0038942C;
    case 145u: goto L_003894D8;
    case 146u: goto L_003894EC;
    case 147u: goto L_003894F8;
    case 148u: goto L_00389584;
    case 149u: goto L_00389590;
    case 150u: goto L_00389598;
    case 151u: goto L_003895DC;
    case 152u: goto L_00389624;
    case 153u: goto L_00389668;
    case 154u: goto L_0038967C;
    case 155u: goto L_003896B0;
    case 156u: goto L_003896C0;
    case 157u: goto L_003896D0;
    case 158u: goto L_003896E0;
    case 159u: goto L_00389750;
    case 160u: goto L_00389778;
    case 161u: goto L_00389784;
    case 162u: goto L_003897B8;
    case 163u: goto L_003897C0;
    case 164u: goto L_003897EC;
    case 165u: goto L_003897FC;
    case 166u: goto L_0038981C;
    case 167u: goto L_0038982C;
    case 168u: goto L_00389834;
    case 169u: goto L_00389844;
    case 170u: goto L_00389858;
    case 171u: goto L_00389878;
    case 172u: goto L_00389880;
    case 173u: goto L_00389890;
    case 174u: goto L_003898B4;
    case 175u: goto L_0038990C;
    case 176u: goto L_00389914;
    case 177u: goto L_00389930;
    case 178u: goto L_0038993C;
    case 179u: goto L_00389994;
    case 180u: goto L_0038999C;
    case 181u: goto L_003899B0;
    case 182u: goto L_003899BC;
    case 183u: goto L_003899E4;
    case 184u: goto L_003899EC;
    case 185u: goto L_00389A44;
    case 186u: goto L_00389A58;
    case 187u: goto L_00389A64;
    case 188u: goto L_00389A74;
    case 189u: goto L_00389A88;
    case 190u: goto L_00389A94;
    case 191u: goto L_00389AA4;
    case 192u: goto L_00389AB8;
    case 193u: goto L_00389AC4;
    case 194u: goto L_00389AD4;
    case 195u: goto L_00389AE8;
    case 196u: goto L_00389AF4;
    case 197u: goto L_00389B20;
    case 198u: goto L_00389B80;
    case 199u: goto L_00389BA8;
    case 200u: goto L_00389BD0;
    case 201u: goto L_00389BF8;
    case 202u: goto L_00389C00;
    case 203u: goto L_00389C2C;
    case 204u: goto L_00389C40;
    case 205u: goto L_00389C6C;
    case 206u: goto L_00389C80;
    case 207u: goto L_00389CAC;
    case 208u: goto L_00389CC0;
    case 209u: goto L_00389CEC;
    case 210u: goto L_00389D08;
    case 211u: goto L_00389D14;
    case 212u: goto L_00389D20;
    case 213u: goto L_00389D38;
    case 214u: goto L_00389D60;
    case 215u: goto L_00389D80;
    case 216u: goto L_00389DA0;
    case 217u: goto L_00389DB4;
    case 218u: goto L_00389E10;
    case 219u: goto L_00389E20;
    case 220u: goto L_00389E30;
    case 221u: goto L_00389E44;
    case 222u: goto L_00389E78;
    case 223u: goto L_00389E90;
    case 224u: goto L_00389EA4;
    case 225u: goto L_00389ED8;
    case 226u: goto L_00389EF0;
    case 227u: goto L_00389F04;
    case 228u: goto L_00389F20;
    case 229u: goto L_00389F80;
    case 230u: goto L_00389F90;
    case 231u: goto L_00389FB4;
    case 232u: goto L_00389FC4;
    case 233u: goto L_00389FD4;
    case 234u: goto L_00389FE4;
    case 235u: goto L_00389FF4;
    case 236u: goto L_0038A004;
    case 237u: goto L_0038A014;
    case 238u: goto L_0038A034;
    case 239u: goto L_0038A044;
    case 240u: goto L_0038A0E0;
    case 241u: goto L_0038A134;
    case 242u: goto L_0038A140;
    case 243u: goto L_0038A150;
    case 244u: goto L_0038A1A4;
    case 245u: goto L_0038A1E0;
    case 246u: goto L_0038A1E4;
    case 247u: goto L_0038A24C;
    case 248u: goto L_0038A27C;
    case 249u: goto L_0038A28C;
    case 250u: goto L_0038A2F4;
    case 251u: goto L_0038A324;
    case 252u: goto L_0038A354;
    case 253u: goto L_0038A3A0;
    case 254u: goto L_0038A3C0;
    case 255u: goto L_0038A414;
    case 256u: goto L_0038A434;
    case 257u: goto L_0038A458;
    case 258u: goto L_0038A4B8;
    case 259u: goto L_0038A4D8;
    case 260u: goto L_0038A4F8;
    case 261u: goto L_0038A588;
    case 262u: goto L_0038A598;
    case 263u: goto L_0038A5FC;
    case 264u: goto L_0038A60C;
    case 265u: goto L_0038A650;
    case 266u: goto L_0038A670;
    case 267u: goto L_0038A704;
    case 268u: goto L_0038A724;
    case 269u: goto L_0038A768;
    case 270u: goto L_0038A77C;
    case 271u: goto L_0038A78C;
    case 272u: goto L_0038A81C;
    case 273u: goto L_0038A82C;
    case 274u: goto L_0038A8A4;
    case 275u: goto L_0038A8C4;
    case 276u: goto L_0038A8E0;
    case 277u: goto L_0038A8F0;
    case 278u: goto L_0038A900;
    case 279u: goto L_0038A914;
    case 280u: goto L_0038A920;
    case 281u: goto L_0038A92C;
    case 282u: goto L_0038A940;
    case 283u: goto L_0038A950;
    case 284u: goto L_0038A960;
    case 285u: goto L_0038A980;
    case 286u: goto L_0038A990;
    case 287u: goto L_0038A9A4;
    case 288u: goto L_0038A9C0;
    case 289u: goto L_0038A9D0;
    case 290u: goto L_0038A9E4;
    case 291u: goto L_0038AA00;
    case 292u: goto L_0038AA18;
    case 293u: goto L_0038AA2C;
    case 294u: goto L_0038AA38;
    case 295u: goto L_0038AA50;
    case 296u: goto L_0038AA74;
    case 297u: goto L_0038AA80;
    case 298u: goto L_0038AAB4;
    case 299u: goto L_0038AAC4;
    case 300u: goto L_0038AAEC;
    case 301u: goto L_0038AB0C;
    case 302u: goto L_0038AB14;
    case 303u: goto L_0038AB28;
    case 304u: goto L_0038AB34;
    case 305u: goto L_0038AB88;
    case 306u: goto L_0038AB90;
    case 307u: goto L_0038ABA4;
    case 308u: goto L_0038ABB0;
    case 309u: goto L_0038AC04;
    case 310u: goto L_0038AC20;
    case 311u: goto L_0038AC78;
    case 312u: goto L_0038ACA0;
    case 313u: goto L_0038ACC8;
    case 314u: goto L_0038ACD8;
    case 315u: goto L_0038ACE4;
    case 316u: goto L_0038ACFC;
    case 317u: goto L_0038AD20;
    case 318u: goto L_0038AE84;
    case 319u: goto L_0038AF88;
    case 320u: goto L_0038AFE0;
    case 321u: goto L_0038AFF4;
    case 322u: goto L_0038B038;
    case 323u: goto L_0038B08C;
    case 324u: goto L_0038B0A0;
    case 325u: goto L_0038B0E4;
    case 326u: goto L_0038B100;
    case 327u: goto L_0038B124;
    case 328u: goto L_0038B144;
    case 329u: goto L_0038B16C;
    case 330u: goto L_0038B194;
    case 331u: goto L_0038B1B8;
    case 332u: goto L_0038B1DC;
    case 333u: goto L_0038B204;
    case 334u: goto L_0038B22C;
    case 335u: goto L_0038B24C;
    case 336u: goto L_0038B26C;
    case 337u: goto L_0038B294;
    case 338u: goto L_0038B2BC;
    case 339u: goto L_0038B2D0;
    case 340u: goto L_0038B314;
    case 341u: goto L_0038B350;
    case 342u: goto L_0038B368;
    case 343u: goto L_0038B390;
    case 344u: goto L_0038B3C0;
    case 345u: goto L_0038B3D8;
    case 346u: goto L_0038B3F0;
    case 347u: goto L_0038B400;
    case 348u: goto L_0038B448;
    case 349u: goto L_0038B47C;
    case 350u: goto L_0038B484;
    case 351u: goto L_0038B4AC;
    case 352u: goto L_0038B4CC;
    case 353u: goto L_0038B4E0;
    case 354u: goto L_0038B4F0;
    case 355u: goto L_0038B500;
    case 356u: goto L_0038B510;
    case 357u: goto L_0038B520;
    case 358u: goto L_0038B54C;
    case 359u: goto L_0038B558;
    case 360u: goto L_0038B57C;
    case 361u: goto L_0038B584;
    case 362u: goto L_0038B594;
    case 363u: goto L_0038B59C;
    case 364u: goto L_0038B5A8;
    case 365u: goto L_0038B5B8;
    case 366u: goto L_0038B5C0;
    case 367u: goto L_0038B5CC;
    case 368u: goto L_0038B5DC;
    case 369u: goto L_0038B5E4;
    case 370u: goto L_0038B5F0;
    case 371u: goto L_0038B600;
    case 372u: goto L_0038B610;
    case 373u: goto L_0038B618;
    case 374u: goto L_0038B620;
    case 375u: goto L_0038B6E0;
    case 376u: goto L_0038B73C;
    case 377u: goto L_0038B74C;
    case 378u: goto L_0038B75C;
    case 379u: goto L_0038B79C;
    case 380u: goto L_0038B7A8;
    case 381u: goto L_0038B7C8;
    case 382u: goto L_0038B7D0;
    case 383u: goto L_0038B844;
    case 384u: goto L_0038B850;
    case 385u: goto L_0038B924;
    case 386u: goto L_0038B930;
    case 387u: goto L_0038BA00;
    case 388u: goto L_0038BA58;
    case 389u: goto L_0038BA78;
    case 390u: goto L_0038BA84;
    case 391u: goto L_0038BA90;
    case 392u: goto L_0038BA9C;
    case 393u: goto L_0038BAA8;
    case 394u: goto L_0038BAB4;
    case 395u: goto L_0038BAC0;
    case 396u: goto L_0038BACC;
    case 397u: goto L_0038BAD8;
    case 398u: goto L_0038BAF0;
    case 399u: goto L_0038BB10;
    case 400u: goto L_0038BB20;
    case 401u: goto L_0038BB40;
    case 402u: goto L_0038BB54;
    case 403u: goto L_0038BB6C;
    case 404u: goto L_0038BB80;
    case 405u: goto L_0038BB94;
    case 406u: goto L_0038BBAC;
    case 407u: goto L_0038BBC0;
    case 408u: goto L_0038BBEC;
    case 409u: goto L_0038BC18;
    case 410u: goto L_0038BC28;
    case 411u: goto L_0038BC40;
    case 412u: goto L_0038BDA4;
    case 413u: goto L_0038BE7C;
    case 414u: goto L_0038BE8C;
    case 415u: goto L_0038BE9C;
    case 416u: goto L_0038BEAC;
    case 417u: goto L_0038BEEC;
    case 418u: goto L_0038BEF4;
    case 419u: goto L_0038BF30;
    case 420u: goto L_0038BF38;
    case 421u: goto L_0038BF48;
    default: bad_entry(c, 0x00388000u); return;
    }
L_00388000:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388018u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00388018u) [[unlikely]] return; }
L_00388018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388020u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388020u) [[unlikely]] return; }
L_00388020:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038804C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388034u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00388034u) [[unlikely]] return; }
L_00388034:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388048u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 18u, depth + 1u); else { c.pc = 0x003881C0u; return; } if (c.pc != 0x00388048u) [[unlikely]] return; }
L_00388048:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0038804C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388058u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00388058u) [[unlikely]] return; }
L_00388058:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00388070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003880C8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_003880B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003880B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003880B0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003880B0u) [[unlikely]] return; }
L_003880B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003880B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0]), 0u);  if (t) { goto L_003880C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003880C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003880C8u) [[unlikely]] return; }
L_003880C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003880E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388114; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388114; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388114u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388114u) [[unlikely]] return; }
L_00388114:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003881A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388160u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00388160u) [[unlikely]] return; }
L_00388160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388168u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388168u) [[unlikely]] return; }
L_00388168:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00388194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038817Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0038817Cu) [[unlikely]] return; }
L_0038817C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 616u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388190u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 18u, depth + 1u); else { c.pc = 0x003881C0u; return; } if (c.pc != 0x00388190u) [[unlikely]] return; }
L_00388190:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00388194:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881A0u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003881A0u) [[unlikely]] return; }
L_003881A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003881C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003881D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x003881D4u) [[unlikely]] return; }
L_003881D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 30672u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00388270; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 30672u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0038823C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038823Cu);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0038823Cu) [[unlikely]] return; }
L_0038823C:
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28288u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388258u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x00388258u) [[unlikely]] return; }
L_00388258:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00388274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00388270u) [[unlikely]] return; }
L_00388270:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00388274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00388290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003882B8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003882B8u) [[unlikely]] return; }
L_003882B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003882D4; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003882D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x003882D0u) [[unlikely]] return; }
L_003882D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003882D4:
    st32((c.r[18].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00388314; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003882F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x003882F4u) [[unlikely]] return; }
L_003882F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00388310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038830Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x0038830Cu) [[unlikely]] return; }
L_0038830C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00388310:
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 1;
L_00388314:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00388340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] - 13120u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00388394; } }
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038836Cu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0038836Cu) [[unlikely]] return; }
L_0038836C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388374u); set32(c.r[4], 0u + 752u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388374u) [[unlikely]] return; }
L_00388374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388384u);  if (depth < kMaxDepth) unit_0046(c, 179u, depth + 1u); else { c.pc = 0x0021B560u; return; } if (c.pc != 0x00388384u) [[unlikely]] return; }
L_00388384:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388394u); st32((c.r[1].w[0] - 13120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00388394u) [[unlikely]] return; }
L_00388394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038839Cu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0038839Cu) [[unlikely]] return; }
L_0038839C:
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003883B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 13120u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003883E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003883E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003883E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003883E0u) [[unlikely]] return; }
L_003883E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003883ECu); st32((c.r[1].w[0] - 13120u), 0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x003883ECu) [[unlikely]] return; }
L_003883EC:
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00388400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 13120u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00388414; } }
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00388414:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00388420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038844Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0038844Cu) [[unlikely]] return; }
L_0038844C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - 30288u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388468u); st32((c.r[18].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388468u) [[unlikely]] return; }
L_00388468:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388474u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388474u) [[unlikely]] return; }
L_00388474:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    ld128((c.r[19].w[0]) & ~15u, c.r[6]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[18].w[0] + 64u) & ~15u, c.r[6]);
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st8((c.r[18].w[0] + 104u), static_cast<std::uint8_t>(0u));
    ld128((c.r[18].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[18].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 124u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884CCu); st32((c.r[18].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_00A0(c, 484u, depth + 1u); else { c.pc = 0x00383A70u; return; } if (c.pc != 0x003884CCu) [[unlikely]] return; }
L_003884CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_003884F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003884DCu) [[unlikely]] return; }
L_003884DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003884EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003884ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003884ECu) [[unlikely]] return; }
L_003884EC:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_003884F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_00388518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388500u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388500u) [[unlikely]] return; }
L_00388500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00388510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388510u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00388510u) [[unlikely]] return; }
L_00388510:
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_00388518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388520u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388520u) [[unlikely]] return; }
L_00388520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388530u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00388530u) [[unlikely]] return; }
L_00388530:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038853Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038853Cu) [[unlikely]] return; }
L_0038853C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038854C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038854Cu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0038854Cu) [[unlikely]] return; }
L_0038854C:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], 0u + 18u);
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038856Cu); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038856Cu) [[unlikely]] return; }
L_0038856C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003885A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003886CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 30288u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003885EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003885EC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003885ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003885ECu) [[unlikely]] return; }
L_003885EC:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388614; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388614; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388614u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388614u) [[unlikely]] return; }
L_00388614:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038863C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038863C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038863Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038863Cu) [[unlikely]] return; }
L_0038863C:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 144u);  if (t) { goto L_00388668; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388664; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388664u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388664u) [[unlikely]] return; }
L_00388664:
    set32(c.r[2], c.r[17].w[0] + 144u);
    c.budget -= 1;
L_00388668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 44u), 0u);  if (t) { goto L_003886A8; } }
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_0038868C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038868Cu); st32((c.r[17].w[0] + 576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x0038868Cu) [[unlikely]] return; }
L_0038868C:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_003886A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003886A8u); st32((c.r[17].w[0] + 320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x003886A8u) [[unlikely]] return; }
L_003886A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003886B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x003886B4u) [[unlikely]] return; }
L_003886B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003886D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003886CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003886CCu) [[unlikely]] return; }
L_003886CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003886D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003886F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[2] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[5]);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388744u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388744u) [[unlikely]] return; }
L_00388744:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[3] = ld32((c.r[3].w[0] + 160u));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[4], c.f[0]);
    c.f[2] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[17].w[0] + 120u), c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 116u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388794u); st32((c.r[17].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x00388794u) [[unlikely]] return; }
L_00388794:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003887D0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003887D0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003887D0u) [[unlikely]] return; }
L_003887D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038880C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038880Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038880Cu) [[unlikely]] return; }
L_0038880C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00388820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003888B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388848u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388848u) [[unlikely]] return; }
L_00388848:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388888u); c.f[12] = ld32((c.r[17].w[0] + 16u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388888u) [[unlikely]] return; }
L_00388888:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003888B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003888B0u) [[unlikely]] return; }
L_003888B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038893C; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003888F4u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003888F4u) [[unlikely]] return; }
L_003888F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 203u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388908u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00388908u) [[unlikely]] return; }
L_00388908:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038893Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038893Cu) [[unlikely]] return; }
L_0038893C:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388960; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388960u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388960u) [[unlikely]] return; }
L_00388960:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388984; } }
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388984u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388984u) [[unlikely]] return; }
L_00388984:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00388A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388998u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388998u) [[unlikely]] return; }
L_00388998:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003889DC; } }
    ld128((c.r[17].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_00388A00; } }
L_003889DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    c.budget -= 9;
L_00388A00:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388A44u); c.f[13] = fp::sub(c.f[0], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388A44u) [[unlikely]] return; }
L_00388A44:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], 0u + 206u);
    set32(c.r[6], 0u + 31u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388A58u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00388A58u) [[unlikely]] return; }
L_00388A58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00388A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388A64u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_00A0(c, 495u, depth + 1u); else { c.pc = 0x00383BB0u; return; } if (c.pc != 0x00388A64u) [[unlikely]] return; }
L_00388A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388A6Cu); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_00A0(c, 489u, depth + 1u); else { c.pc = 0x00383B20u; return; } if (c.pc != 0x00388A6Cu) [[unlikely]] return; }
L_00388A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00388A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[29].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_00388AA8; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00388AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00388AC4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00388AC4:
    st32((c.r[4].w[0] + 128u), c.f[12]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[1] = ld32((c.r[4].w[0] + 124u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388AE8u); st32((c.r[29].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 492u, depth + 1u); else { c.pc = 0x00383B60u; return; } if (c.pc != 0x00388AE8u) [[unlikely]] return; }
L_00388AE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00388B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 128u));  c.pc = t; return; }
L_00388B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00388B20:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00388B58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00388B88; } }
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00388B88; } }
L_00388B58:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00388B88; } }
    st32((c.r[4].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00388B88:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB050u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_00388B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00388BBCu) [[unlikely]] return; }
L_00388BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - 30304u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 32u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BE0u); st32((c.r[19].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388BE0u) [[unlikely]] return; }
L_00388BE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388BECu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00388BECu) [[unlikely]] return; }
L_00388BEC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], 0u + 2u);
    st128((c.r[19].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[19].w[0] + 80u) & ~15u, c.r[3]);
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 112u), 0u);
    st32((c.r[19].w[0] + 124u), 0u);
    st8((c.r[19].w[0] + 120u), static_cast<std::uint8_t>(0u));
    ld128((c.r[19].w[0] + 64u) & ~15u, c.r[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388C24u); st128((c.r[19].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00A0(c, 484u, depth + 1u); else { c.pc = 0x00383A70u; return; } if (c.pc != 0x00388C24u) [[unlikely]] return; }
L_00388C24:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00388C28:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388C28u | kUnwind; return; } goto L_00388C28; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00388C48:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00388C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388C58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388C58u) [[unlikely]] return; }
L_00388C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00388C78; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388C74u); c.r[5].d[0] = ld64((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00388C74u) [[unlikely]] return; }
L_00388C74:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00388C78:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_00388C80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388C48u | kUnwind; return; } goto L_00388C48; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_00388CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CA0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388CA0u) [[unlikely]] return; }
L_00388CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00388CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00388CB0u) [[unlikely]] return; }
L_00388CB0:
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_00388CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388CC0u) [[unlikely]] return; }
L_00388CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CD0u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00388CD0u) [[unlikely]] return; }
L_00388CD0:
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CDCu); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388CDCu) [[unlikely]] return; }
L_00388CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388CEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CECu);  if (depth < kMaxDepth) unit_0018(c, 2u, depth + 1u); else { c.pc = 0x001607D0u; return; } if (c.pc != 0x00388CECu) [[unlikely]] return; }
L_00388CEC:
    st32((c.r[19].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388CF8u); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388CF8u) [[unlikely]] return; }
L_00388CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00388D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388D08u);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x00388D08u) [[unlikely]] return; }
L_00388D08:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00388D30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00388EAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30304u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00388D64:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 36u);  if (t) { goto L_00388D90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388D90; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388D90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388D90u) [[unlikely]] return; }
L_00388D90:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388D64u | kUnwind; return; } goto L_00388D64; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388DD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388DCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388DCC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388DCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388DCCu) [[unlikely]] return; }
L_00388DCC:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_00388DD0:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388DF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388DF4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388DF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388DF4u) [[unlikely]] return; }
L_00388DF4:
    st32((c.r[18].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388E1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388E1C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388E1Cu) [[unlikely]] return; }
L_00388E1C:
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + 144u);  if (t) { goto L_00388E48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388E44; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388E44u) [[unlikely]] return; }
L_00388E44:
    set32(c.r[2], c.r[18].w[0] + 144u);
    c.budget -= 1;
L_00388E48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 60u), 0u);  if (t) { goto L_00388E88; } }
    set32(c.r[4], c.r[18].w[0] + 400u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00388E6C; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E6Cu); st32((c.r[18].w[0] + 576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00388E6Cu) [[unlikely]] return; }
L_00388E6C:
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);  if (t) { goto L_00388E88; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 17408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E88u); st32((c.r[18].w[0] + 320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 264u, depth + 1u); else { c.pc = 0x0014ADA0u; return; } if (c.pc != 0x00388E88u) [[unlikely]] return; }
L_00388E88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388E94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x00388E94u) [[unlikely]] return; }
L_00388E94:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00388EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388EACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00388EACu) [[unlikely]] return; }
L_00388EAC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00388EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00388ED0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00388EFC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_00388FB8; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] << 3);  if (t) { goto L_00388F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F24u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00388F24u) [[unlikely]] return; }
L_00388F24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388F44; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00388F40u); c.r[5].d[0] = ld64((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00388F40u) [[unlikely]] return; }
L_00388F40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00388F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { goto L_00388FE4; } }
L_00388F4C:
    set32(c.r[3], c.r[29].w[0] + 120u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[29].w[0] + 120u), c.r[6].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[16].w[0])));
    st64((c.r[7].w[0] + 256u), c.r[6].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 115u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 164u), c.f[0]);  if (t) { goto L_00388FE4; } }
L_00388FB8:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 36u);  if (t) { goto L_00388FE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00388FE0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00388FE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00388FE0u) [[unlikely]] return; }
L_00388FE0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00388FE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00388EFCu | kUnwind; return; } goto L_00388EFC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00389094; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00389030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389010u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389010u) [[unlikely]] return; }
L_00389010:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00389028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389024u);  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00389024u) [[unlikely]] return; }
L_00389024:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00389028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_003890BC; } }
L_00389030:
    st64((c.r[29].w[0] + 104u), c.r[18].d[0]);
    set32(c.r[3], c.r[29].w[0] + 104u);
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[18].d[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 99u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[3].d[0] = c.r[3].d[0] >> 60;
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 164u), c.f[0]);  if (t) { goto L_003890BC; } }
L_00389094:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003890B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003890B8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003890B8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003890B8u) [[unlikely]] return; }
L_003890B8:
    st32((c.r[20].w[0] + 32u), 0u);
    c.budget -= 1;
L_003890BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003890E0:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);  c.pc = t; return; }
L_003890F0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038918C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389124u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00389124u) [[unlikely]] return; }
L_00389124:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389164u); c.f[12] = ld32((c.r[20].w[0] + 16u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389164u) [[unlikely]] return; }
L_00389164:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038918Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038918Cu) [[unlikely]] return; }
L_0038918C:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003891E8; } }
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003891CCu); c.f[12] = ld32((c.r[20].w[0] + 16u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003891CCu) [[unlikely]] return; }
L_003891CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003891E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003891E0u) [[unlikely]] return; }
L_003891E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  if (t) { goto L_00389314; } }
L_003891E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00389310; } }
L_003891F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003891FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003891FCu) [[unlikely]] return; }
L_003891FC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_00389220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { goto L_00389224; } }
L_00389220:
    st32((c.r[4].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 1;
L_00389224:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003891F4u | kUnwind; return; } goto L_003891F4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[5], 0u + 50u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389258u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160A20u; return; } if (c.pc != 0x00389258u) [[unlikely]] return; }
L_00389258:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[17], c.r[29].w[0] + 224u);
    set32(c.r[16], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389274u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x00389274u) [[unlikely]] return; }
L_00389274:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389290u); c.f[12] = ld32((c.r[20].w[0] + 16u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389290u) [[unlikely]] return; }
L_00389290:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003892A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003892A4u) [[unlikely]] return; }
L_003892A4:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00389310; } }
    set32(c.r[5], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892CCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x003892CCu) [[unlikely]] return; }
L_003892CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003892E0u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x003892E0u) [[unlikely]] return; }
L_003892E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.f[13] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003892FCu); c.f[12] = ld32((c.r[20].w[0] + 16u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003892FCu) [[unlikely]] return; }
L_003892FC:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389310u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389310u) [[unlikely]] return; }
L_00389310:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_00389314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_00389418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389324u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00389324u) [[unlikely]] return; }
L_00389324:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.f[5] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.f[4] = ld32((c.r[20].w[0] + 20u));
    c.f[6] = ld32((c.r[20].w[0] + 16u));
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.facc = fp::sub(c.f[3], c.f[2]);
    c.f[12] = fp::sub(c.f[6], c.f[5]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003893A0u); c.f[13] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003893A0u) [[unlikely]] return; }
L_003893A0:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], 0u + 200u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003893B4u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003893B4u) [[unlikely]] return; }
L_003893B4:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[5] = c.r[2].w[0];
    c.f[6] = ld32((c.r[20].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[3] = c.r[2].w[0];
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[2] = ld32((c.r[20].w[0] + 136u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.f[13] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[4], c.f[5]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389404u); c.f[12] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389404u) [[unlikely]] return; }
L_00389404:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389418u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00389418u) [[unlikely]] return; }
L_00389418:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 144u);  if (t) { goto L_003894F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038942Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038942Cu) [[unlikely]] return; }
L_0038942C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 128u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00389470; } }
    ld128((c.r[20].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 172u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (t) { goto L_00389494; } }
L_00389470:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st32((c.r[2].w[0] + 60u), c.r[19].w[0]);
    c.budget -= 9;
L_00389494:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[20].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003894D8u); c.f[13] = fp::sub(c.f[0], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003894D8u) [[unlikely]] return; }
L_003894D8:
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[5], 0u + 206u);
    set32(c.r[6], 0u + 106u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003894ECu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x003894ECu) [[unlikely]] return; }
L_003894EC:
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_003894F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00389514; } }
L_003894F8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003894F8u | kUnwind; return; } goto L_003894F8; } }
L_00389514:
    c.f[5] = ld32((c.r[20].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    set32(c.r[4], c.r[20].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[4] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::sub(c.f[5], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.facc = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389584u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 492u, depth + 1u); else { c.pc = 0x00383B60u; return; } if (c.pc != 0x00389584u) [[unlikely]] return; }
L_00389584:
    set32(c.r[4], c.r[20].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389590u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 495u, depth + 1u); else { c.pc = 0x00383BB0u; return; } if (c.pc != 0x00389590u) [[unlikely]] return; }
L_00389590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389598u); set32(c.r[4], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_00A0(c, 489u, depth + 1u); else { c.pc = 0x00383B20u; return; } if (c.pc != 0x00389598u) [[unlikely]] return; }
L_00389598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[8], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[5], c.r[5].w[0] + 5040u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + 5056u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[16], c.r[18].w[0] << 2);
    c.budget -= 17;
L_003895DC:
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038967C; } }
    st32((c.r[4].w[0] + 60u), c.r[19].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 128u));
    set32(c.r[17], c.r[3].w[0] + 36u);
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389624u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389624u) [[unlikely]] return; }
L_00389624:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[2].w[0] + 96u));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[1].w[0] - 496u));
    c.f[13] = c.f[12];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 14u, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389668u);  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00389668u) [[unlikely]] return; }
L_00389668:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038967Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038967Cu) [[unlikely]] return; }
L_0038967C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003895DCu | kUnwind; return; } goto L_003895DC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003896B0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 132u), c.f[12]);  c.pc = t; return; }
L_003896C0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 132u));  c.pc = t; return; }
L_003896D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003896E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00389718; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00389748; } }
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00389748; } }
L_00389718:
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00389748; } }
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00389748:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB050u | kUnwind; return; } [[clang::musttail]] return unit_002A(c, 280u, depth); }
L_00389750:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00389778u) [[unlikely]] return; }
L_00389778:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389784u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00389784u) [[unlikely]] return; }
L_00389784:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 30416u);
    set32(c.r[2], c.r[2].w[0] - 30328u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 116u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[18].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003897B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003897B8u) [[unlikely]] return; }
L_003897B8:
    st8((c.r[18].w[0] + 224u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003897C0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 200u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003897C0u | kUnwind; return; } goto L_003897C0; } }
    st32((c.r[18].w[0] + 216u), 0u);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003897ECu); st32((c.r[18].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003897ECu) [[unlikely]] return; }
L_003897EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003897FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003897FCu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003897FCu) [[unlikely]] return; }
L_003897FC:
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038981Cu); st32((c.r[5].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038981Cu) [[unlikely]] return; }
L_0038981C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 4;
L_0038982C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389834u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389834u) [[unlikely]] return; }
L_00389834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { goto L_00389848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389844u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00389844u) [[unlikely]] return; }
L_00389844:
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00389848:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389858u); st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00389858u) [[unlikely]] return; }
L_00389858:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038982Cu | kUnwind; return; } goto L_0038982C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00389878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389880u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389880u) [[unlikely]] return; }
L_00389880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { goto L_00389894; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389890u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x00389890u) [[unlikely]] return; }
L_00389890:
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00389894:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003898B4u); st32((c.r[2].w[0] + 164u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003898B4u) [[unlikely]] return; }
L_003898B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389878u | kUnwind; return; } goto L_00389878; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 5072u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 5088u);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[5].w[0]), c.r[2].d[0]);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_0038990C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389914u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389914u) [[unlikely]] return; }
L_00389914:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 2);  if (t) { goto L_00389944; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389930u); set32(c.r[4], ld32((c.r[2].w[0] + 128u)));  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00389930u) [[unlikely]] return; }
L_00389930:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038993Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0038993Cu) [[unlikely]] return; }
L_0038993C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 2;
L_00389944:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[2].w[0] + 56u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038990Cu | kUnwind; return; } goto L_0038990C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] + 5104u);
    c.r[16].d[0] = 0ull + 0ull;
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 8;
L_00389994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038999Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038999Cu) [[unlikely]] return; }
L_0038999C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] << 2);  if (t) { goto L_003899C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003899B0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x003899B0u) [[unlikely]] return; }
L_003899B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003899BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003899BCu) [[unlikely]] return; }
L_003899BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] << 2);
    c.budget -= 2;
L_003899C4:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 72u), c.r[19].w[0]);
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    c.f[14] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003899E4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x003899E4u) [[unlikely]] return; }
L_003899E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003899ECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003899ECu) [[unlikely]] return; }
L_003899EC:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 56u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389994u | kUnwind; return; } goto L_00389994; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.f[0] = ld32((c.r[1].w[0] - 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 272u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 504u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A44u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389A44u) [[unlikely]] return; }
L_00389A44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00389A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A58u); set32(c.r[4], 0u + 46u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00389A58u) [[unlikely]] return; }
L_00389A58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A64u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00389A64u) [[unlikely]] return; }
L_00389A64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00389A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A74u); st32((c.r[18].w[0] + 68u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389A74u) [[unlikely]] return; }
L_00389A74:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00389A9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A88u); set32(c.r[4], 0u + 47u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00389A88u) [[unlikely]] return; }
L_00389A88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389A94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00389A94u) [[unlikely]] return; }
L_00389A94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00389A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AA4u); st32((c.r[18].w[0] + 92u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389AA4u) [[unlikely]] return; }
L_00389AA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00389ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AB8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00389AB8u) [[unlikely]] return; }
L_00389AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00389AC4u) [[unlikely]] return; }
L_00389AC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00389ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AD4u); st32((c.r[18].w[0] + 96u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00389AD4u) [[unlikely]] return; }
L_00389AD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 49u);  if (t) { goto L_00389AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AE8u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x00389AE8u) [[unlikely]] return; }
L_00389AE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389AF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00389AF4u) [[unlikely]] return; }
L_00389AF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00389AF8:
    st32((c.r[18].w[0] + 100u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00389B20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00389D38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 30416u);
    set32(c.r[2], c.r[2].w[0] - 30328u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389B80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389B80; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389B80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389B80u) [[unlikely]] return; }
L_00389B80:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BA8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389BA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389BA8u) [[unlikely]] return; }
L_00389BA8:
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BD0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389BD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389BD0u) [[unlikely]] return; }
L_00389BD0:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389BF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389BF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389BF8u) [[unlikely]] return; }
L_00389BF8:
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00389C00:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 32u);  if (t) { goto L_00389C2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389C2C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389C2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389C2Cu) [[unlikely]] return; }
L_00389C2C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389C00u | kUnwind; return; } goto L_00389C00; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00389C40:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 44u);  if (t) { goto L_00389C6C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389C6C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389C6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389C6Cu) [[unlikely]] return; }
L_00389C6C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389C40u | kUnwind; return; } goto L_00389C40; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00389C80:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 56u);  if (t) { goto L_00389CAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389CAC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389CACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389CACu) [[unlikely]] return; }
L_00389CAC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389C80u | kUnwind; return; } goto L_00389C80; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00389CC0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 72u);  if (t) { goto L_00389CEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00389CEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389CECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389CECu) [[unlikely]] return; }
L_00389CEC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00389CC0u | kUnwind; return; } goto L_00389CC0; } }
    set32(c.r[4], c.r[17].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389D08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00389D08u) [[unlikely]] return; }
L_00389D08:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00389D14u) [[unlikely]] return; }
L_00389D14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389D20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00389D20u) [[unlikely]] return; }
L_00389D20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00389D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389D38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00389D38u) [[unlikely]] return; }
L_00389D38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00389D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00389D60:
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { st32((c.r[4].w[0] + 112u), c.r[2].w[0]);  goto L_0038A150; }
L_00389D80:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00389DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389DB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00389DB4u) [[unlikely]] return; }
L_00389DB4:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st32((c.r[16].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 188u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 180u), 0u);
    set32(c.r[4], c.r[16].w[0] + 116u);
    st32((c.r[16].w[0] + 192u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 184u), c.r[6].w[0]);
    set32(c.r[5], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389E10u); st32((c.r[16].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00389E10u) [[unlikely]] return; }
L_00389E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389E20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00389E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00389E44u) [[unlikely]] return; }
L_00389E44:
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 116u);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389E78u); st32((c.r[16].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00389E78u) [[unlikely]] return; }
L_00389E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389EA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00389EA4u) [[unlikely]] return; }
L_00389EA4:
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 116u);
    st32((c.r[16].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 152u);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389ED8u); st32((c.r[16].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00389ED8u) [[unlikely]] return; }
L_00389ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389F04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 322u, depth + 1u); else { c.pc = 0x0012E640u; return; } if (c.pc != 0x00389F04u) [[unlikely]] return; }
L_00389F04:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00389F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 184u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_00389F80; } }
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389F80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389F80u) [[unlikely]] return; }
L_00389F80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00389F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00389FB4u) [[unlikely]] return; }
L_00389FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00389FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FC4u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00389FC4u) [[unlikely]] return; }
L_00389FC4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00389FD4u) [[unlikely]] return; }
L_00389FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0038A0C8; } }
L_00389FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FE4u);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00389FE4u) [[unlikely]] return; }
L_00389FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_0038A00C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00389FF4u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00389FF4u) [[unlikely]] return; }
L_00389FF4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A004u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A004u) [[unlikely]] return; }
L_0038A004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038A0C4; } }
L_0038A00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A014u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038A014u) [[unlikely]] return; }
L_0038A014:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038A044; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 224u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038A03C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A034u);  if (depth < kMaxDepth) unit_0028(c, 196u, depth + 1u); else { c.pc = 0x001A1BB0u; return; } if (c.pc != 0x0038A034u) [[unlikely]] return; }
L_0038A034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));  if (t) { goto L_0038A048; } }
L_0038A03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A044u);  if (depth < kMaxDepth) unit_0028(c, 183u, depth + 1u); else { c.pc = 0x001A1940u; return; } if (c.pc != 0x0038A044u) [[unlikely]] return; }
L_0038A044:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_0038A048:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0038A058; } }
    st32((c.r[17].w[0] + 216u), c.r[3].w[0]);
    c.budget -= 1;
L_0038A058:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_0038A06C; } }
    st32((c.r[17].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 1;
L_0038A06C:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_0038A088; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_0038A0C4; } }
L_0038A088:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038A09C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_0038A0C4; } }
L_0038A09C:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_0038A0B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0038A0C4; } }
L_0038A0B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038A0C4; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 212u), c.r[3].w[0]);
    c.budget -= 2;
L_0038A0C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0038A0C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038A0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 184u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_0038A134; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A134u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A134u) [[unlikely]] return; }
L_0038A134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038A140:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00388000u < 16384u) { entry = entries_00A2[(t - 0x00388000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038A150:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.f[13] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 440u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A1A4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A1A4u) [[unlikely]] return; }
L_0038A1A4:
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A1E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A1E0u) [[unlikely]] return; }
L_0038A1E0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038A1E4:
    c.f[3] = c.r[19].w[0];
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42CE0000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[18], c.r[4].w[0] + 44u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.f[2] = ld32((c.r[4].w[0] + 188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A24Cu); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A24Cu) [[unlikely]] return; }
L_0038A24C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A27Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A27Cu) [[unlikely]] return; }
L_0038A27C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A1E4u | kUnwind; return; } goto L_0038A1E4; } }
L_0038A28C:
    c.f[3] = c.r[18].w[0];
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42CE0000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[19], c.r[4].w[0] + 32u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.f[2] = ld32((c.r[4].w[0] + 188u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A2F4u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A2F4u) [[unlikely]] return; }
L_0038A2F4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], 0u + 96u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A324u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x0038A324u) [[unlikely]] return; }
L_0038A324:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A28Cu | kUnwind; return; } goto L_0038A28C; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 5136u);
    c.r[18].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st64((c.r[4].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 8;
L_0038A354:
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[4] = ld32((c.r[4].w[0] + 176u));
    set32(c.r[3], c.r[3].w[0] + 144u);
    c.f[2] = ld32((c.r[4].w[0] + 188u));
    set32(c.r[19], c.r[4].w[0] + 56u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[4], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A3A0u); c.f[13] = fp::add(c.f[2], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A3A0u) [[unlikely]] return; }
L_0038A3A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A3C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A3C0u) [[unlikely]] return; }
L_0038A3C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A354u | kUnwind; return; } goto L_0038A354; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.f[4] = ld32((c.r[17].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = ld32((c.r[17].w[0] + 188u));
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A414u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A414u) [[unlikely]] return; }
L_0038A414:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A434u) [[unlikely]] return; }
L_0038A434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 5168u);
    c.r[18].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 9;
L_0038A458:
    set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 200u);  if (t) { goto L_0038A4D8; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[19], c.r[4].w[0] + 72u);
    set32(c.r[2], c.r[18].w[0] << 3);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], c.r[2].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 176u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 188u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A4B8u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A4B8u) [[unlikely]] return; }
L_0038A4B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A4D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A4D8u) [[unlikely]] return; }
L_0038A4D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038A458u | kUnwind; return; } goto L_0038A458; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038A60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A4F8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038A4F8u) [[unlikely]] return; }
L_0038A4F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43260000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    set32(c.r[5], c.r[5].w[0] - 600u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 512u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 512u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 180u));
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A588u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A588u) [[unlikely]] return; }
L_0038A588:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A598u) [[unlikely]] return; }
L_0038A598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    c.f[3] = c.r[2].w[0];
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 600u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435A0000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[4] = ld32((c.r[17].w[0] + 180u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[4]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A5FCu); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A5FCu) [[unlikely]] return; }
L_0038A5FC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A60Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A60Cu) [[unlikely]] return; }
L_0038A60C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43570000u);
    c.f[4] = ld32((c.r[17].w[0] + 180u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A650u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A650u) [[unlikely]] return; }
L_0038A650:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A670u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A670u) [[unlikely]] return; }
L_0038A670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 5200u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 216u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038A6A0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 2;
L_0038A6A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 216u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43780000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[3]);
    st32((c.r[5].w[0] + 20u), c.f[3]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.f[3] = ld32((c.r[17].w[0] + 180u));
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A704u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A704u) [[unlikely]] return; }
L_0038A704:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A724u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A724u) [[unlikely]] return; }
L_0038A724:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);
    c.f[3] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435E0000u);
    c.f[4] = ld32((c.r[17].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[2] = ld32((c.r[17].w[0] + 196u));
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A768u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A768u) [[unlikely]] return; }
L_0038A768:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A77Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A77Cu) [[unlikely]] return; }
L_0038A77C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038A82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A78Cu);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038A78Cu) [[unlikely]] return; }
L_0038A78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43910000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    set32(c.r[5], c.r[5].w[0] - 600u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[16].w[0] + 48u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 520u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 520u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 184u));
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A81Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A81Cu) [[unlikely]] return; }
L_0038A81C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A82Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A82Cu) [[unlikely]] return; }
L_0038A82C:
    set32(c.r[2], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038A840; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 2;
L_0038A840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A20000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43780000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[5].w[0] + 16u), c.f[3]);
    st32((c.r[5].w[0] + 20u), c.f[3]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.f[3] = ld32((c.r[17].w[0] + 184u));
    c.f[0] = ld32((c.r[17].w[0] + 196u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A8A4u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A8A4u) [[unlikely]] return; }
L_0038A8A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A8C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038A8C4u) [[unlikely]] return; }
L_0038A8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0038A8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A8F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0038A8F0u) [[unlikely]] return; }
L_0038A8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 68u);  if (t) { goto L_0038A92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A900u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038A900u) [[unlikely]] return; }
L_0038A900:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0038A918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A914u);  if (depth < kMaxDepth) unit_00A2(c, 295u, depth + 1u); else { c.pc = 0x0038AA50u; return; } if (c.pc != 0x0038A914u) [[unlikely]] return; }
L_0038A914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0038A918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A920u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0038A920u) [[unlikely]] return; }
L_0038A920:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A92Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x0038A92Cu) [[unlikely]] return; }
L_0038A92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038A940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A950u);  if (depth < kMaxDepth) unit_009F(c, 79u, depth + 1u); else { c.pc = 0x0037CE80u; return; } if (c.pc != 0x0038A950u) [[unlikely]] return; }
L_0038A950:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A960u); c.r[5].d[0] = c.r[2].d[0] | 17741ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0038A960u) [[unlikely]] return; }
L_0038A960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038A970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0038A974; } }
L_0038A970:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038A974:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0038A980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A990u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0038A990u) [[unlikely]] return; }
L_0038A990:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038A9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A9A4u);  if (depth < kMaxDepth) unit_00A2(c, 276u, depth + 1u); else { c.pc = 0x0038A8E0u; return; } if (c.pc != 0x0038A9A4u) [[unlikely]] return; }
L_0038A9A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0038A9A8:
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038A9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A9D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0038A9D0u) [[unlikely]] return; }
L_0038A9D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038A9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038A9E4u);  if (depth < kMaxDepth) unit_00A2(c, 276u, depth + 1u); else { c.pc = 0x0038A8E0u; return; } if (c.pc != 0x0038A9E4u) [[unlikely]] return; }
L_0038A9E4:
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038AA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0038AA18u) [[unlikely]] return; }
L_0038AA18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0038AA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA2Cu);  if (depth < kMaxDepth) unit_00A2(c, 276u, depth + 1u); else { c.pc = 0x0038A8E0u; return; } if (c.pc != 0x0038AA2Cu) [[unlikely]] return; }
L_0038AA2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0038AA30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 326u, depth + 1u); else { c.pc = 0x0038B100u; return; } if (c.pc != 0x0038AA38u) [[unlikely]] return; }
L_0038AA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038AA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x65640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 17741ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA74u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x0038AA74u) [[unlikely]] return; }
L_0038AA74:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AA80u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0038AA80u) [[unlikely]] return; }
L_0038AA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 30464u);
    set32(c.r[3], c.r[3].w[0] - 30448u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], 0u + 368u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAB4u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038AAB4u) [[unlikely]] return; }
L_0038AAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038AAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAC4u);  if (depth < kMaxDepth) unit_0018(c, 27u, depth + 1u); else { c.pc = 0x00161280u; return; } if (c.pc != 0x0038AAC4u) [[unlikely]] return; }
L_0038AAC4:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    set32(c.r[5], 0u + 448u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AAECu); set32(c.r[6], 0u + 224u);  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00161410u; return; } if (c.pc != 0x0038AAECu) [[unlikely]] return; }
L_0038AAEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44140000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB0Cu); c.f[14] = c.f[13];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038AB0Cu) [[unlikely]] return; }
L_0038AB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB14u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038AB14u) [[unlikely]] return; }
L_0038AB14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 45u);  if (t) { goto L_0038AB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB28u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038AB28u) [[unlikely]] return; }
L_0038AB28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0038AB34u) [[unlikely]] return; }
L_0038AB34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0038AB38:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 528u));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 536u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038AB88u) [[unlikely]] return; }
L_0038AB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AB90u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0038AB90u) [[unlikely]] return; }
L_0038AB90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_0038ABB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ABA4u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038ABA4u) [[unlikely]] return; }
L_0038ABA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ABB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0038ABB0u) [[unlikely]] return; }
L_0038ABB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0038ABB4:
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 528u));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 544u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AC04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038AC04u) [[unlikely]] return; }
L_0038AC04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038AC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038ACFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 30464u);
    set32(c.r[2], c.r[2].w[0] - 30448u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038AC78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038AC78; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AC78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038AC78u) [[unlikely]] return; }
L_0038AC78:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038ACA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038ACA0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACA0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038ACA0u) [[unlikely]] return; }
L_0038ACA0:
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038ACC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038ACC8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACC8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038ACC8u) [[unlikely]] return; }
L_0038ACC8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACD8u); st32((c.r[17].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0038ACD8u) [[unlikely]] return; }
L_0038ACD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0038ACE4u) [[unlikely]] return; }
L_0038ACE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038AD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038ACFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038ACFCu) [[unlikely]] return; }
L_0038ACFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0038AD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038AD20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 5232u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], c.r[3].w[0] + 5248u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038AF70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 5264u);
    c.r[1].d[0] = c.r[6].sd[0] < 31ll ? 1ull : 0ull;
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0038AE2C; } }
    set32(c.r[5], 0u + 39u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 160u), c.f[0]);
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] - 552u));
    set32(c.r[6], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 536u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[1].w[0] - 552u));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 544u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_0038AF04; } }
L_0038AE2C:
    c.r[1].d[0] = c.r[6].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 20u);  if (t) { goto L_0038AE64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[1].w[0] - 560u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_0038AF04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_0038AF04; } }
L_0038AE64:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_0038AEA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AE84u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x0038AE84u) [[unlikely]] return; }
L_0038AE84:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[3].w[0] + 132u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[3].w[0] + 132u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 132u), 0u);  if (t) { goto L_0038AF04; } }
L_0038AEA0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038AED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[1].w[0] - 568u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_0038AF04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_0038AF04; } }
L_0038AED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = ld32((c.r[1].w[0] - 576u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 64u), c.f[1]);  if (t) { goto L_0038AF04; } }
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_0038AF04:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_0038AF70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 64u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[6].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 528u));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 536u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 528u));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 544u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 23;
L_0038AF70:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 40u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038B0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AF88u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038AF88u) [[unlikely]] return; }
L_0038AF88:
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038B040; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 60u);  if (t) { goto L_0038AFF4; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AFE0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x0038AFE0u) [[unlikely]] return; }
L_0038AFE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038AFF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038AFF4u) [[unlikely]] return; }
L_0038AFF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038B0E4; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B038u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B038u) [[unlikely]] return; }
L_0038B038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0038B0E8; } }
L_0038B040:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 44u);  if (t) { goto L_0038B0A0; } }
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B08Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x001609B0u; return; } if (c.pc != 0x0038B08Cu) [[unlikely]] return; }
L_0038B08C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B0A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B0A0u) [[unlikely]] return; }
L_0038B0A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038B0E4; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B0E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B0E4u) [[unlikely]] return; }
L_0038B0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0038B0E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038B100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038B19C; } }
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B124u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x0038B124u) [[unlikely]] return; }
L_0038B124:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44140000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B144u); c.f[14] = c.f[13];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B144u) [[unlikely]] return; }
L_0038B144:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B16Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B16Cu) [[unlikely]] return; }
L_0038B16C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B194u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B194u) [[unlikely]] return; }
L_0038B194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0038B2C0; } }
L_0038B19C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0038B234; } }
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B1B8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x0038B1B8u) [[unlikely]] return; }
L_0038B1B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], 0u + 558u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B1DCu); c.f[14] = c.f[13];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B1DCu) [[unlikely]] return; }
L_0038B1DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 546u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B204u); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B204u) [[unlikely]] return; }
L_0038B204:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], 0u + 546u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B22Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B22Cu) [[unlikely]] return; }
L_0038B22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B2BC; } }
L_0038B234:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038B2BC; } }
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B24Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x0038B24Cu) [[unlikely]] return; }
L_0038B24C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F70000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B26Cu); c.f[14] = c.f[13];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B26Cu) [[unlikely]] return; }
L_0038B26C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B294u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B294u) [[unlikely]] return; }
L_0038B294:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B2BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B2BCu) [[unlikely]] return; }
L_0038B2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0038B2C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038B2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 5280u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B314u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_000F(c, 269u, depth + 1u); else { c.pc = 0x0013E620u; return; } if (c.pc != 0x0038B314u) [[unlikely]] return; }
L_0038B314:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], 0u - 256u);
    set32(c.r[3], 0u + 39u);
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038B350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B368u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0038B368u) [[unlikely]] return; }
L_0038B368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 30480u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038B390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038B3D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B3C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0038B3C0u) [[unlikely]] return; }
L_0038B3C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038B3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B3D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038B3D8u) [[unlikely]] return; }
L_0038B3D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0038B3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038B3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B400u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038B400u) [[unlikely]] return; }
L_0038B400:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0038B4CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], 0u + 801u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[16], ld32((c.r[5].w[0] + 332u)));
    c.f[0] = ld32((c.r[1].w[0] - 584u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B448u); st32((c.r[16].w[0] + 316u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0038B448u) [[unlikely]] return; }
L_0038B448:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    set32(c.r[2], 0u + 497u);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 592u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43890000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B47Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B47Cu) [[unlikely]] return; }
L_0038B47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B484u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0038B484u) [[unlikely]] return; }
L_0038B484:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4ACu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B4ACu) [[unlikely]] return; }
L_0038B4AC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B4CCu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038B4CCu) [[unlikely]] return; }
L_0038B4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038B4E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00389D60u | kUnwind; return; } goto L_00389D60; }
L_0038B4F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00389B20u | kUnwind; return; } goto L_00389B20; }
L_0038B500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038AD20u | kUnwind; return; } goto L_0038AD20; }
L_0038B510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038AC20u | kUnwind; return; } goto L_0038AC20; }
L_0038B520:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B54Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0038B54Cu) [[unlikely]] return; }
L_0038B54C:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B558u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0038B558u) [[unlikely]] return; }
L_0038B558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 30096u);
    set32(c.r[2], c.r[2].w[0] - 30008u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 32u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B57Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0038B57Cu) [[unlikely]] return; }
L_0038B57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B584u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B584u) [[unlikely]] return; }
L_0038B584:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 86u, depth + 1u); else { c.pc = 0x00388B90u; return; } if (c.pc != 0x0038B594u) [[unlikely]] return; }
L_0038B594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B59Cu); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B59Cu) [[unlikely]] return; }
L_0038B59C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B5A8u) [[unlikely]] return; }
L_0038B5A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5B8u); set32(c.r[4], c.r[20].w[0] + 752u);  if (depth < kMaxDepth) unit_00A2(c, 39u, depth + 1u); else { c.pc = 0x00388420u; return; } if (c.pc != 0x0038B5B8u) [[unlikely]] return; }
L_0038B5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5C0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B5C0u) [[unlikely]] return; }
L_0038B5C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5CCu); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B5CCu) [[unlikely]] return; }
L_0038B5CC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5DCu); set32(c.r[4], c.r[20].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 39u, depth + 1u); else { c.pc = 0x00388420u; return; } if (c.pc != 0x0038B5DCu) [[unlikely]] return; }
L_0038B5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5E4u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B5E4u) [[unlikely]] return; }
L_0038B5E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B5F0u); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_009F(c, 119u, depth + 1u); else { c.pc = 0x0037D1D0u; return; } if (c.pc != 0x0038B5F0u) [[unlikely]] return; }
L_0038B5F0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B600u); set32(c.r[4], c.r[20].w[0] + 2064u);  if (depth < kMaxDepth) unit_00A2(c, 39u, depth + 1u); else { c.pc = 0x00388420u; return; } if (c.pc != 0x0038B600u) [[unlikely]] return; }
L_0038B600:
    set32(c.r[4], c.r[20].w[0] + 2720u);
    set32(c.r[5], c.r[20].w[0] + 2912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B610u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 139u, depth + 1u); else { c.pc = 0x003857D0u; return; } if (c.pc != 0x0038B610u) [[unlikely]] return; }
L_0038B610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B618u); set32(c.r[4], c.r[20].w[0] + 2848u);  if (depth < kMaxDepth) unit_00A1(c, 21u, depth + 1u); else { c.pc = 0x00384420u; return; } if (c.pc != 0x0038B618u) [[unlikely]] return; }
L_0038B618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B620u); set32(c.r[4], c.r[20].w[0] + 2888u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384260u; return; } if (c.pc != 0x0038B620u) [[unlikely]] return; }
L_0038B620:
    st32((c.r[20].w[0] + 2904u), c.r[17].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    st32((c.r[20].w[0] + 2908u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st32((c.r[20].w[0] + 3020u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[20].w[0] + 3024u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[20].w[0] + 3028u), c.r[10].w[0]);
    c.f[4] = c.r[10].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 3024u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC2FE0000u);
    c.f[3] = c.r[8].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    c.f[2] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[20].w[0] + 3032u), c.f[0]);
    st32((c.r[20].w[0] + 3036u), 0u);
    st32((c.r[20].w[0] + 3040u), c.r[9].w[0]);
    st32((c.r[20].w[0] + 3044u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 3040u));
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[20].w[0] + 3048u), c.f[0]);
    st32((c.r[20].w[0] + 3052u), 0u);
    st32((c.r[20].w[0] + 3056u), c.r[7].w[0]);
    st32((c.r[20].w[0] + 3060u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 3056u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 3064u), c.f[0]);
    st32((c.r[20].w[0] + 3068u), 0u);
    st32((c.r[20].w[0] + 3072u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 3076u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 3072u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 3080u), c.f[0]);
    st32((c.r[20].w[0] + 3084u), 0u);
    st32((c.r[20].w[0] + 3088u), 0u);
    st32((c.r[20].w[0] + 3092u), c.r[10].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 3088u));
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[20].w[0] + 3096u), c.f[0]);
    st32((c.r[20].w[0] + 3100u), 0u);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B6E0u); st32((c.r[20].w[0] + 3140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A3(c, 64u, depth + 1u); else { c.pc = 0x0038C920u; return; } if (c.pc != 0x0038B6E0u) [[unlikely]] return; }
L_0038B6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 5296u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43150000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    set32(c.r[6], 0u + 731u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43040000u);
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[5].w[0]) & ~15u, c.r[9]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[9]);
    st128((c.r[20].w[0] + 2800u) & ~15u, c.r[9]);
    st32((c.r[29].w[0] + 96u), c.r[8].w[0]);
    st32((c.r[16].w[0]), c.r[7].w[0]);
    st32((c.r[20].w[0] + 2912u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 2916u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 2920u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 2984u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B73Cu); st8((c.r[20].w[0] + 3008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 122u, depth + 1u); else { c.pc = 0x003890E0u; return; } if (c.pc != 0x0038B73Cu) [[unlikely]] return; }
L_0038B73C:
    c.f[12] = ld32((c.r[20].w[0] + 3068u));
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B74Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x0038B74Cu) [[unlikely]] return; }
L_0038B74C:
    c.f[12] = ld32((c.r[20].w[0] + 3036u));
    set32(c.r[4], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B75Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 155u, depth + 1u); else { c.pc = 0x003896B0u; return; } if (c.pc != 0x0038B75Cu) [[unlikely]] return; }
L_0038B75C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], 0u + 732u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42680000u);
    set32(c.r[4], c.r[20].w[0] + 752u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 2924u), c.r[6].w[0]);
    st32((c.r[20].w[0] + 2928u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 2932u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 2988u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B79Cu); st8((c.r[20].w[0] + 3009u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 62u, depth + 1u); else { c.pc = 0x003886F0u; return; } if (c.pc != 0x0038B79Cu) [[unlikely]] return; }
L_0038B79C:
    c.f[12] = ld32((c.r[20].w[0] + 3052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B7A8u); set32(c.r[4], c.r[20].w[0] + 752u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038B7A8u) [[unlikely]] return; }
L_0038B7A8:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B7C8u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_009F(c, 83u, depth + 1u); else { c.pc = 0x0037CEF0u; return; } if (c.pc != 0x0038B7C8u) [[unlikely]] return; }
L_0038B7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B7D0u); c.r[18].d[0] = ld8((c.r[2].w[0] + 12u));  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038B7D0u) [[unlikely]] return; }
L_0038B7D0:
    set32(c.r[5], ld32((c.r[2].w[0] + 384u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 272u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 8u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038B7F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038B7F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 1);  if (t) { goto L_0038B86C; } }
    set32(c.r[3], 0u + 733u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42680000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[6].w[0] + 2912u), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[6].w[0] + 2916u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[6].w[0] + 2920u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 2984u), c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + 1408u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B844u); st8((c.r[20].w[0] + 3010u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 62u, depth + 1u); else { c.pc = 0x003886F0u; return; } if (c.pc != 0x0038B844u) [[unlikely]] return; }
L_0038B844:
    c.f[12] = ld32((c.r[20].w[0] + 3084u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B850u); set32(c.r[4], c.r[20].w[0] + 1408u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038B850u) [[unlikely]] return; }
L_0038B850:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0038B870; } }
L_0038B86C:
    st8((c.r[20].w[0] + 3010u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038B870:
    set32(c.r[3], ld32((c.r[17].w[0] + 384u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038B88C; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 1;
L_0038B88C:
    c.r[2].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0038B8C4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0038B8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038B8C0; } }
L_0038B8AC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 854u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0038B8D4; } }
L_0038B8C0:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0038B8C4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 838u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0038B8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038B94C; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], 0u + 734u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42780000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[6].w[0] + 2912u), c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[6].w[0] + 2916u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[6].w[0] + 2920u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 2984u), c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + 2064u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B924u); st8((c.r[20].w[0] + 3011u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 62u, depth + 1u); else { c.pc = 0x003886F0u; return; } if (c.pc != 0x0038B924u) [[unlikely]] return; }
L_0038B924:
    c.f[12] = ld32((c.r[20].w[0] + 3100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038B930u); set32(c.r[4], c.r[20].w[0] + 2064u);  if (depth < kMaxDepth) unit_00A2(c, 81u, depth + 1u); else { c.pc = 0x00388A80u; return; } if (c.pc != 0x0038B930u) [[unlikely]] return; }
L_0038B930:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42780000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0038B950; } }
L_0038B94C:
    st8((c.r[20].w[0] + 3011u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038B950:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[5], 0u + 561u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[4].w[0] + 2912u), c.r[5].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    st32((c.r[4].w[0] + 2916u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[4].w[0] + 2920u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0] + 2984u), c.r[3].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st8((c.r[20].w[0] + 3012u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], 0u + 91u);
    st32((c.r[2].w[0] + 2912u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 2916u), c.r[8].w[0]);
    set32(c.r[3], c.r[20].w[0] + 2912u);
    st8((c.r[2].w[0] + 2920u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 2984u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 3013u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[20].w[0] + 3016u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 2832u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 2836u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0038BA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0038BAF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 30096u);
    set32(c.r[2], c.r[2].w[0] - 30008u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2908u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038BA58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038BA58; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BA58u) [[unlikely]] return; }
L_0038BA58:
    set32(c.r[4], c.r[17].w[0] + 2888u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 2908u), 0u);  if (t) { goto L_0038BA78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA78u); st32((c.r[17].w[0] + 2888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0038BA78u) [[unlikely]] return; }
L_0038BA78:
    set32(c.r[4], c.r[17].w[0] + 2848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A1(c, 23u, depth + 1u); else { c.pc = 0x00384460u; return; } if (c.pc != 0x0038BA84u) [[unlikely]] return; }
L_0038BA84:
    set32(c.r[4], c.r[17].w[0] + 2064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 53u, depth + 1u); else { c.pc = 0x003885A0u; return; } if (c.pc != 0x0038BA90u) [[unlikely]] return; }
L_0038BA90:
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BA9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 53u, depth + 1u); else { c.pc = 0x003885A0u; return; } if (c.pc != 0x0038BA9Cu) [[unlikely]] return; }
L_0038BA9C:
    set32(c.r[4], c.r[17].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 53u, depth + 1u); else { c.pc = 0x003885A0u; return; } if (c.pc != 0x0038BAA8u) [[unlikely]] return; }
L_0038BAA8:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00A2(c, 103u, depth + 1u); else { c.pc = 0x00388D30u; return; } if (c.pc != 0x0038BAB4u) [[unlikely]] return; }
L_0038BAB4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0038BAC0u) [[unlikely]] return; }
L_0038BAC0:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BACCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0038BACCu) [[unlikely]] return; }
L_0038BACC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x0038BAD8u) [[unlikely]] return; }
L_0038BAD8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038BAF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BAF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0038BAF0u) [[unlikely]] return; }
L_0038BAF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0038BAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038BB10:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 3020u)));  [[clang::musttail]] return unit_00A3(c, 10u, depth); }
L_0038BB20:
    set32(c.r[3], ld32((c.r[4].w[0] + 2908u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038BB30; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0038BB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0038BB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 80u, depth + 1u); else { c.pc = 0x0037CE90u; return; } if (c.pc != 0x0038BB54u) [[unlikely]] return; }
L_0038BB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038BB6C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BB6Cu) [[unlikely]] return; }
L_0038BB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038BB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BB94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 400u, depth + 1u); else { c.pc = 0x0038BB20u; return; } if (c.pc != 0x0038BB94u) [[unlikely]] return; }
L_0038BB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038BBAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BBACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BBACu) [[unlikely]] return; }
L_0038BBAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038BBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BBECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x0038BBECu) [[unlikely]] return; }
L_0038BBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0038BE84; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 3020u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2984u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0038BC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC18u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0038BC18u) [[unlikely]] return; }
L_0038BC18:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BC28u) [[unlikely]] return; }
L_0038BC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { [[clang::musttail]] return unit_00A3(c, 9u, depth); } }
L_0038BC30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BC40u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0038BC40u) [[unlikely]] return; }
L_0038BC40:
    c.f[0] = ld32((c.r[16].w[0] + 3104u));
    c.f[2] = ld32((c.r[16].w[0] + 3024u));
    c.f[1] = ld32((c.r[16].w[0] + 3028u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0038BC7C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BC68; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038BC68:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0038BC9C; } }
L_0038BC7C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BC8C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0038BC8C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[1] = fp::sub(c.f[0], c.f[2]);  if (t) { goto L_0038BCA0; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0038BC9C:
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_0038BCA0:
    c.f[0] = ld32((c.r[16].w[0] + 3032u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3036u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 3040u));
    c.f[0] = ld32((c.r[16].w[0] + 3044u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BCE8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BCD4; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BCD4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0038BD08; } }
L_0038BCE8:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BCF8; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038BCF8:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BD08; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BD08:
    c.f[0] = ld32((c.r[16].w[0] + 3048u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3052u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 3056u));
    c.f[0] = ld32((c.r[16].w[0] + 3060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BD54; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BD40; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BD40:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BD74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0038BD74; } }
L_0038BD54:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BD64; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038BD64:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BD74; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BD74:
    c.f[0] = ld32((c.r[16].w[0] + 3064u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3068u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 3016u)));  if (t) { goto L_0038BDC8; } }
L_0038BDA4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2984u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0038BDB8; } }
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0038BDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038BDC4; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0038BDC4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0038BDC8:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BDA4u | kUnwind; return; } goto L_0038BDA4; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0038BE4C; } }
    c.f[1] = ld32((c.r[16].w[0] + 3072u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[16].w[0] + 3076u));
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BE1C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BE08; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BE08:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BE3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { goto L_0038BE3C; } }
L_0038BE1C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BE2C; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0038BE2C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038BE3C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0038BE3C:
    c.f[0] = ld32((c.r[16].w[0] + 3080u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 3084u), c.f[0]);
    c.budget -= 4;
L_0038BE4C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0038BE74; } }
    st32((c.r[16].w[0] + 3100u), 0u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2904u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0038BE70; } }
    c.f[0] = ld32((c.r[1].w[0] - 376u));
    st32((c.r[16].w[0] + 3100u), c.f[0]);
    c.budget -= 2;
L_0038BE70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0038BE74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE7Cu);  if (depth < kMaxDepth) unit_00A3(c, 70u, depth + 1u); else { c.pc = 0x0038CCC0u; return; } if (c.pc != 0x0038BE7Cu) [[unlikely]] return; }
L_0038BE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
L_0038BE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE8Cu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x0038BE8Cu) [[unlikely]] return; }
L_0038BE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 401u);  if (t) { goto L_0038BEB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BE9Cu);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0038BE9Cu) [[unlikely]] return; }
L_0038BE9C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BEACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038BEACu) [[unlikely]] return; }
L_0038BEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
L_0038BEB4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 16384ull;  if (t) { goto L_0038BEFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3020u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 3020u), c.r[2].w[0]);  if (t) { goto L_0038BEE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3016u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 3020u), c.r[2].w[0]);
    c.budget -= 3;
L_0038BEE0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3020u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BEECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 10u, depth + 1u); else { c.pc = 0x0038C100u; return; } if (c.pc != 0x0038BEECu) [[unlikely]] return; }
L_0038BEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BEF4u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0038BEF4u) [[unlikely]] return; }
L_0038BEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
L_0038BEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038BF40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3020u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 3020u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3016u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038BF24; } }
    st32((c.r[16].w[0] + 3020u), 0u);
    c.budget -= 1;
L_0038BF24:
    set32(c.r[5], ld32((c.r[16].w[0] + 3020u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BF30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A3(c, 10u, depth + 1u); else { c.pc = 0x0038C100u; return; } if (c.pc != 0x0038BF30u) [[unlikely]] return; }
L_0038BF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BF38u); set32(c.r[4], 0u + 402u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0038BF38u) [[unlikely]] return; }
L_0038BF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
L_0038BF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038BF48u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0038BF48u) [[unlikely]] return; }
L_0038BF48:
    set32(c.r[3], ld32((c.r[2].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { [[clang::musttail]] return unit_00A3(c, 8u, depth); } }
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[1].w[0] - 384u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0038BF80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[21] = ld32((c.r[1].w[0] - 392u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038BFA0; } }
L_0038BF80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 400u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BFA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[21] = ld32((c.r[1].w[0] - 408u));
    c.budget -= 3;
L_0038BFA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 384u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0038BFC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[20] = ld32((c.r[1].w[0] - 392u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038BFE4; } }
L_0038BFC8:
    c.f[0] = ld32((c.r[1].w[0] - 400u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038BFE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[20] = ld32((c.r[1].w[0] - 408u));
    c.budget -= 3;
L_0038BFE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A3(c, 7u, depth); } }
    c.f[14] = 0u;
    set32(c.r[4], c.r[16].w[0] + 2888u);
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C004u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_00A1(c, 18u, depth + 1u); else { c.pc = 0x003842D0u; return; } if (c.pc != 0x0038C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00A3(c, 2u, depth);
}

}
