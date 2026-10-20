#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0,
    0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124,
    0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269,
    0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275,
    0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410,
    0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268010;
    case 3u: goto L_0026801C;
    case 4u: goto L_00268020;
    case 5u: goto L_00268054;
    case 6u: goto L_00268060;
    case 7u: goto L_0026807C;
    case 8u: goto L_00268104;
    case 9u: goto L_00268160;
    case 10u: goto L_00268190;
    case 11u: goto L_002681DC;
    case 12u: goto L_002681F4;
    case 13u: goto L_00268254;
    case 14u: goto L_00268268;
    case 15u: goto L_002682B0;
    case 16u: goto L_002682BC;
    case 17u: goto L_002682D8;
    case 18u: goto L_0026835C;
    case 19u: goto L_002683E0;
    case 20u: goto L_00268438;
    case 21u: goto L_00268454;
    case 22u: goto L_00268490;
    case 23u: goto L_002684C4;
    case 24u: goto L_002684D4;
    case 25u: goto L_00268540;
    case 26u: goto L_00268550;
    case 27u: goto L_0026856C;
    case 28u: goto L_00268578;
    case 29u: goto L_00268594;
    case 30u: goto L_00268618;
    case 31u: goto L_002686A0;
    case 32u: goto L_002686BC;
    case 33u: goto L_002686F0;
    case 34u: goto L_00268720;
    case 35u: goto L_00268734;
    case 36u: goto L_00268758;
    case 37u: goto L_00268780;
    case 38u: goto L_002687AC;
    case 39u: goto L_002687B8;
    case 40u: goto L_002687D0;
    case 41u: goto L_002687F4;
    case 42u: goto L_00268840;
    case 43u: goto L_00268864;
    case 44u: goto L_00268878;
    case 45u: goto L_002688A4;
    case 46u: goto L_002688F0;
    case 47u: goto L_0026892C;
    case 48u: goto L_0026895C;
    case 49u: goto L_00268970;
    case 50u: goto L_00268988;
    case 51u: goto L_002689A0;
    case 52u: goto L_002689CC;
    case 53u: goto L_002689E0;
    case 54u: goto L_00268A64;
    case 55u: goto L_00268A70;
    case 56u: goto L_00268A94;
    case 57u: goto L_00268AA8;
    case 58u: goto L_00268AD0;
    case 59u: goto L_00268AFC;
    case 60u: goto L_00268B20;
    case 61u: goto L_00268B54;
    case 62u: goto L_00268BE8;
    case 63u: goto L_00268C58;
    case 64u: goto L_00268C60;
    case 65u: goto L_00268C90;
    case 66u: goto L_00268C98;
    case 67u: goto L_00268CAC;
    case 68u: goto L_00268CC0;
    case 69u: goto L_00268CD0;
    case 70u: goto L_00268CE4;
    case 71u: goto L_00268CEC;
    case 72u: goto L_00268D04;
    case 73u: goto L_00268D10;
    case 74u: goto L_00268D24;
    case 75u: goto L_00268D2C;
    case 76u: goto L_00268D44;
    case 77u: goto L_00268D50;
    case 78u: goto L_00268D64;
    case 79u: goto L_00268D6C;
    case 80u: goto L_00268D84;
    case 81u: goto L_00268D90;
    case 82u: goto L_00268DA4;
    case 83u: goto L_00268DAC;
    case 84u: goto L_00268DC0;
    case 85u: goto L_00268DCC;
    case 86u: goto L_00268DE0;
    case 87u: goto L_00268DEC;
    case 88u: goto L_00268E00;
    case 89u: goto L_00268E30;
    case 90u: goto L_00268E60;
    case 91u: goto L_00268E78;
    case 92u: goto L_00268E90;
    case 93u: goto L_00268EC0;
    case 94u: goto L_00268ED4;
    case 95u: goto L_00268EF8;
    case 96u: goto L_00268F0C;
    case 97u: goto L_00268F24;
    case 98u: goto L_00268F5C;
    case 99u: goto L_00268F70;
    case 100u: goto L_00268F8C;
    case 101u: goto L_00268F9C;
    case 102u: goto L_00268FA4;
    case 103u: goto L_00268FAC;
    case 104u: goto L_00268FB8;
    case 105u: goto L_00268FD0;
    case 106u: goto L_00268FE0;
    case 107u: goto L_00268FF0;
    case 108u: goto L_0026904C;
    case 109u: goto L_002690C4;
    case 110u: goto L_0026916C;
    case 111u: goto L_00269178;
    case 112u: goto L_00269190;
    case 113u: goto L_002691A4;
    case 114u: goto L_002691D0;
    case 115u: goto L_00269208;
    case 116u: goto L_00269220;
    case 117u: goto L_00269240;
    case 118u: goto L_00269250;
    case 119u: goto L_00269290;
    case 120u: goto L_002692B0;
    case 121u: goto L_002692C4;
    case 122u: goto L_002692D4;
    case 123u: goto L_002692E8;
    case 124u: goto L_002692FC;
    case 125u: goto L_00269304;
    case 126u: goto L_0026930C;
    case 127u: goto L_00269328;
    case 128u: goto L_00269340;
    case 129u: goto L_0026935C;
    case 130u: goto L_00269370;
    case 131u: goto L_00269378;
    case 132u: goto L_00269388;
    case 133u: goto L_002693A0;
    case 134u: goto L_002693AC;
    case 135u: goto L_002693CC;
    case 136u: goto L_002693D4;
    case 137u: goto L_002693EC;
    case 138u: goto L_002693F8;
    case 139u: goto L_00269400;
    case 140u: goto L_00269418;
    case 141u: goto L_00269420;
    case 142u: goto L_00269438;
    case 143u: goto L_00269444;
    case 144u: goto L_0026944C;
    case 145u: goto L_00269464;
    case 146u: goto L_0026946C;
    case 147u: goto L_00269484;
    case 148u: goto L_00269490;
    case 149u: goto L_00269498;
    case 150u: goto L_002694B0;
    case 151u: goto L_002694B8;
    case 152u: goto L_002694D0;
    case 153u: goto L_002694DC;
    case 154u: goto L_002694EC;
    case 155u: goto L_00269504;
    case 156u: goto L_0026950C;
    case 157u: goto L_00269524;
    case 158u: goto L_00269530;
    case 159u: goto L_00269540;
    case 160u: goto L_00269558;
    case 161u: goto L_00269560;
    case 162u: goto L_00269578;
    case 163u: goto L_00269584;
    case 164u: goto L_00269594;
    case 165u: goto L_002695AC;
    case 166u: goto L_002695B4;
    case 167u: goto L_002695CC;
    case 168u: goto L_002695D8;
    case 169u: goto L_002695E8;
    case 170u: goto L_002695FC;
    case 171u: goto L_00269610;
    case 172u: goto L_00269618;
    case 173u: goto L_00269630;
    case 174u: goto L_0026963C;
    case 175u: goto L_0026964C;
    case 176u: goto L_00269660;
    case 177u: goto L_00269674;
    case 178u: goto L_00269690;
    case 179u: goto L_00269698;
    case 180u: goto L_002696B0;
    case 181u: goto L_002696BC;
    case 182u: goto L_002696C8;
    case 183u: goto L_002696F0;
    case 184u: goto L_0026972C;
    case 185u: goto L_00269738;
    case 186u: goto L_0026975C;
    case 187u: goto L_0026977C;
    case 188u: goto L_00269798;
    case 189u: goto L_002697C0;
    case 190u: goto L_002697F0;
    case 191u: goto L_00269804;
    case 192u: goto L_00269830;
    case 193u: goto L_00269868;
    case 194u: goto L_00269880;
    case 195u: goto L_002698A0;
    case 196u: goto L_002698C0;
    case 197u: goto L_002698D4;
    case 198u: goto L_002698E0;
    case 199u: goto L_00269900;
    case 200u: goto L_00269910;
    case 201u: goto L_00269950;
    case 202u: goto L_00269964;
    case 203u: goto L_00269990;
    case 204u: goto L_002699C0;
    case 205u: goto L_002699D8;
    case 206u: goto L_002699F0;
    case 207u: goto L_00269A00;
    case 208u: goto L_00269A20;
    case 209u: goto L_00269A30;
    case 210u: goto L_00269A90;
    case 211u: goto L_00269AA4;
    case 212u: goto L_00269AD0;
    case 213u: goto L_00269B08;
    case 214u: goto L_00269B20;
    case 215u: goto L_00269B40;
    case 216u: goto L_00269B60;
    case 217u: goto L_00269B7C;
    case 218u: goto L_00269B90;
    case 219u: goto L_00269BC0;
    case 220u: goto L_00269C00;
    case 221u: goto L_00269C2C;
    case 222u: goto L_00269C48;
    case 223u: goto L_00269C70;
    case 224u: goto L_00269CA0;
    case 225u: goto L_00269CB8;
    case 226u: goto L_00269CD0;
    case 227u: goto L_00269CEC;
    case 228u: goto L_00269D60;
    case 229u: goto L_00269D7C;
    case 230u: goto L_00269DF0;
    case 231u: goto L_00269E20;
    case 232u: goto L_00269E30;
    case 233u: goto L_00269E40;
    case 234u: goto L_00269EB0;
    case 235u: goto L_00269EDC;
    case 236u: goto L_00269EF8;
    case 237u: goto L_00269F1C;
    case 238u: goto L_00269F40;
    case 239u: goto L_00269F94;
    case 240u: goto L_0026A134;
    case 241u: goto L_0026A15C;
    case 242u: goto L_0026A180;
    case 243u: goto L_0026A1F4;
    case 244u: goto L_0026A21C;
    case 245u: goto L_0026A240;
    case 246u: goto L_0026A3E4;
    case 247u: goto L_0026A410;
    case 248u: goto L_0026A434;
    case 249u: goto L_0026A444;
    case 250u: goto L_0026A570;
    case 251u: goto L_0026A5B4;
    case 252u: goto L_0026A5C8;
    case 253u: goto L_0026A5F0;
    case 254u: goto L_0026A610;
    case 255u: goto L_0026A624;
    case 256u: goto L_0026A680;
    case 257u: goto L_0026A6A4;
    case 258u: goto L_0026A6B8;
    case 259u: goto L_0026A6E8;
    case 260u: goto L_0026A730;
    case 261u: goto L_0026A75C;
    case 262u: goto L_0026A770;
    case 263u: goto L_0026A7A0;
    case 264u: goto L_0026A7F0;
    case 265u: goto L_0026A814;
    case 266u: goto L_0026A820;
    case 267u: goto L_0026A82C;
    case 268u: goto L_0026A870;
    case 269u: goto L_0026A87C;
    case 270u: goto L_0026A888;
    case 271u: goto L_0026A898;
    case 272u: goto L_0026A8A4;
    case 273u: goto L_0026A8E0;
    case 274u: goto L_0026A8F4;
    case 275u: goto L_0026A8FC;
    case 276u: goto L_0026A90C;
    case 277u: goto L_0026A914;
    case 278u: goto L_0026A920;
    case 279u: goto L_0026A938;
    case 280u: goto L_0026A944;
    case 281u: goto L_0026A950;
    case 282u: goto L_0026A95C;
    case 283u: goto L_0026A988;
    case 284u: goto L_0026A990;
    case 285u: goto L_0026A998;
    case 286u: goto L_0026A9A8;
    case 287u: goto L_0026A9CC;
    case 288u: goto L_0026A9DC;
    case 289u: goto L_0026A9EC;
    case 290u: goto L_0026AA08;
    case 291u: goto L_0026AA1C;
    case 292u: goto L_0026AA58;
    case 293u: goto L_0026AA70;
    case 294u: goto L_0026AA84;
    case 295u: goto L_0026AA98;
    case 296u: goto L_0026AAC0;
    case 297u: goto L_0026AB30;
    case 298u: goto L_0026AB40;
    case 299u: goto L_0026AB4C;
    case 300u: goto L_0026AB58;
    case 301u: goto L_0026AB64;
    case 302u: goto L_0026AB70;
    case 303u: goto L_0026AB7C;
    case 304u: goto L_0026AB94;
    case 305u: goto L_0026ABB0;
    case 306u: goto L_0026ABC0;
    case 307u: goto L_0026ABD4;
    case 308u: goto L_0026AC30;
    case 309u: goto L_0026AC3C;
    case 310u: goto L_0026AC48;
    case 311u: goto L_0026AC60;
    case 312u: goto L_0026AC74;
    case 313u: goto L_0026AC8C;
    case 314u: goto L_0026ACA0;
    case 315u: goto L_0026ACD0;
    case 316u: goto L_0026ACE0;
    case 317u: goto L_0026AD00;
    case 318u: goto L_0026AD10;
    case 319u: goto L_0026AD20;
    case 320u: goto L_0026AD38;
    case 321u: goto L_0026AD68;
    case 322u: goto L_0026AD80;
    case 323u: goto L_0026AD90;
    case 324u: goto L_0026ADAC;
    case 325u: goto L_0026ADD0;
    case 326u: goto L_0026ADEC;
    case 327u: goto L_0026ADFC;
    case 328u: goto L_0026AE58;
    case 329u: goto L_0026AE64;
    case 330u: goto L_0026AE70;
    case 331u: goto L_0026AE98;
    case 332u: goto L_0026AEB0;
    case 333u: goto L_0026AEC4;
    case 334u: goto L_0026AF20;
    case 335u: goto L_0026AF2C;
    case 336u: goto L_0026AF38;
    case 337u: goto L_0026AF50;
    case 338u: goto L_0026AF64;
    case 339u: goto L_0026AF74;
    case 340u: goto L_0026AF90;
    case 341u: goto L_0026AFA0;
    case 342u: goto L_0026B030;
    case 343u: goto L_0026B050;
    case 344u: goto L_0026B09C;
    case 345u: goto L_0026B0D4;
    case 346u: goto L_0026B0F4;
    case 347u: goto L_0026B104;
    case 348u: goto L_0026B13C;
    case 349u: goto L_0026B1BC;
    case 350u: goto L_0026B1DC;
    case 351u: goto L_0026B200;
    case 352u: goto L_0026B238;
    case 353u: goto L_0026B254;
    case 354u: goto L_0026B280;
    case 355u: goto L_0026B2AC;
    case 356u: goto L_0026B2BC;
    case 357u: goto L_0026B2E4;
    case 358u: goto L_0026B304;
    case 359u: goto L_0026B33C;
    case 360u: goto L_0026B368;
    case 361u: goto L_0026B394;
    case 362u: goto L_0026B3A4;
    case 363u: goto L_0026B3CC;
    case 364u: goto L_0026B3EC;
    case 365u: goto L_0026B3FC;
    case 366u: goto L_0026B418;
    case 367u: goto L_0026B444;
    case 368u: goto L_0026B470;
    case 369u: goto L_0026B480;
    case 370u: goto L_0026B4A8;
    case 371u: goto L_0026B4C8;
    case 372u: goto L_0026B510;
    case 373u: goto L_0026B55C;
    case 374u: goto L_0026B5A8;
    case 375u: goto L_0026B5B8;
    case 376u: goto L_0026B5CC;
    case 377u: goto L_0026B618;
    case 378u: goto L_0026B674;
    case 379u: goto L_0026B67C;
    case 380u: goto L_0026B69C;
    case 381u: goto L_0026B6C4;
    case 382u: goto L_0026B708;
    case 383u: goto L_0026B718;
    case 384u: goto L_0026B738;
    case 385u: goto L_0026B748;
    case 386u: goto L_0026B790;
    case 387u: goto L_0026B7A4;
    case 388u: goto L_0026B7B0;
    case 389u: goto L_0026B824;
    case 390u: goto L_0026B850;
    case 391u: goto L_0026B860;
    case 392u: goto L_0026B870;
    case 393u: goto L_0026B880;
    case 394u: goto L_0026B890;
    case 395u: goto L_0026B8A0;
    case 396u: goto L_0026B8B0;
    case 397u: goto L_0026B8C0;
    case 398u: goto L_0026B8F4;
    case 399u: goto L_0026B91C;
    case 400u: goto L_0026B930;
    case 401u: goto L_0026B968;
    case 402u: goto L_0026B980;
    case 403u: goto L_0026B990;
    case 404u: goto L_0026B9B0;
    case 405u: goto L_0026BAFC;
    case 406u: goto L_0026BB0C;
    case 407u: goto L_0026BB50;
    case 408u: goto L_0026BBE8;
    case 409u: goto L_0026BBF0;
    case 410u: goto L_0026BBFC;
    case 411u: goto L_0026BC08;
    case 412u: goto L_0026BC10;
    case 413u: goto L_0026BC2C;
    case 414u: goto L_0026BC34;
    case 415u: goto L_0026BC3C;
    case 416u: goto L_0026BC70;
    case 417u: goto L_0026BE70;
    case 418u: goto L_0026BFB0;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[30].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267FC0u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 424u, depth); } }
L_00268010:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267F38u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 421u, depth); } }
L_0026801C:
    c.r[3].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00268020:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[19].d[0] & 255ull;  if (t) { goto L_00268034; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267DA4u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 408u, depth); } }
L_00268034:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 476u);  if (t) { goto L_00268048; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268160; } }
L_00268048:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268054u); set32(c.r[16], ld32((c.r[2].w[0] + 408u)));  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00268054u) [[unlikely]] return; }
L_00268054:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268060u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00268060u) [[unlikely]] return; }
L_00268060:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[12].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 996u);  if (t) { goto L_00268144; } }
L_0026807C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31352u)));
    c.r[10].d[0] = ld8((c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_002680E8; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002680DC; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - c.r[6].w[0]);  if (t) { goto L_002680D0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002680C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002680FC; } }
L_002680C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_00268108; } }
L_002680D0:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_00268108; } }
L_002680DC:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_00268108; } }
L_002680E8:
    set32(c.r[3], 0u - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_00268108; } }
L_002680FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268104u);  if (depth < kMaxDepth) unit_0059(c, 83u, depth + 1u); else { c.pc = 0x002655B0u; return; } if (c.pc != 0x00268104u) [[unlikely]] return; }
L_00268104:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00268108:
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] >= 0;  if (t) { goto L_00268118; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268118:
    set32(c.r[11], c.r[11].w[0] + c.r[10].w[0]);
    c.r[1].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268140; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 476u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268154; } }
L_00268140:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00268144:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026807Cu | kUnwind; return; } goto L_0026807C; } }
L_00268154:
    set32(c.r[3], c.r[29].w[0] + 476u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00268160:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00268190:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 156u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00268208; } }
L_002681DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 152u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681F4u); set32(c.r[5], ld32((c.r[20].w[0] + 16u)));  if (depth < kMaxDepth) unit_005A(c, 256u, depth + 1u); else { c.pc = 0x0026A680u; return; } if (c.pc != 0x002681F4u) [[unlikely]] return; }
L_002681F4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00268208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00268210; } }
L_00268208:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002681DCu | kUnwind; return; } goto L_002681DC; } }
L_00268210:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 156u);  if (t) { goto L_00268228; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002683B0; } }
L_00268228:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    set32(c.r[18], c.r[19].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00268284; } }
L_00268254:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268268u); c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 233u, depth + 1u); else { c.pc = 0x00262910u; return; } if (c.pc != 0x00268268u) [[unlikely]] return; }
L_00268268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] + 8u);  if (t) { goto L_00268278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { goto L_00268294; } }
L_00268278:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_00268284:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268254u | kUnwind; return; } goto L_00268254; } }
L_00268294:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 156u);  if (t) { goto L_002682A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002683B0; } }
L_002682A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682B0u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002682B0u) [[unlikely]] return; }
L_002682B0:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002682BCu) [[unlikely]] return; }
L_002682BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[12].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 996u);  if (t) { goto L_00268394; } }
L_002682D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[10].d[0] = ld8((c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31352u)));
    set32(c.r[3], 0u + 46u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_00268340; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_00268334; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - c.r[6].w[0]);  if (t) { goto L_00268328; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_00268320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268354; } }
L_00268320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_00268360; } }
L_00268328:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_00268360; } }
L_00268334:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_00268360; } }
L_00268340:
    set32(c.r[3], 0u - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_00268360; } }
L_00268354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026835Cu);  if (depth < kMaxDepth) unit_0059(c, 83u, depth + 1u); else { c.pc = 0x002655B0u; return; } if (c.pc != 0x0026835Cu) [[unlikely]] return; }
L_0026835C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00268360:
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] >= 0;  if (t) { goto L_00268370; } }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268370:
    set32(c.r[11], c.r[11].w[0] + c.r[10].w[0]);
    c.r[1].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] << 1);  if (t) { goto L_00268390; } }
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002683A4; } }
L_00268390:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00268394:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002682D8u | kUnwind; return; } goto L_002682D8; } }
L_002683A4:
    set32(c.r[3], c.r[29].w[0] + 156u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002683B0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002683E0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
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
    st16((c.r[29].w[0] + 188u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 444u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00268468; } }
L_00268438:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 188u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268454u); set32(c.r[8], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_005A(c, 260u, depth + 1u); else { c.pc = 0x0026A730u; return; } if (c.pc != 0x00268454u) [[unlikely]] return; }
L_00268454:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00268468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00268470; } }
L_00268468:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268438u | kUnwind; return; } goto L_00268438; } }
L_00268470:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 444u);  if (t) { goto L_00268488; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026866C; } }
L_00268488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00268518; } }
L_00268490:
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 352u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    set32(c.r[16], c.r[19].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    set32(c.r[30], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[30].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00268504; } }
L_002684C4:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002684D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 237u, depth + 1u); else { c.pc = 0x002629A0u; return; } if (c.pc != 0x002684D4u) [[unlikely]] return; }
L_002684D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] + 8u);  if (t) { goto L_002684FC; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[4].w[0] + 192u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_00268500; } }
L_002684FC:
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00268500:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00268504:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[23].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002684C4u | kUnwind; return; } goto L_002684C4; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00268518:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268490u | kUnwind; return; } goto L_00268490; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], c.r[29].w[0] + 444u);  if (t) { goto L_00268538; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026866C; } }
L_00268538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268540u);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x00268540u) [[unlikely]] return; }
L_00268540:
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268550u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00268550u) [[unlikely]] return; }
L_00268550:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026856Cu); set32(c.r[17], ld32((c.r[2].w[0] + 192u)));  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x0026856Cu) [[unlikely]] return; }
L_0026856C:
    set32(c.r[5], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268578u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x00268578u) [[unlikely]] return; }
L_00268578:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[9].d[0] = c.r[2].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 996u);  if (t) { goto L_00268650; } }
L_00268594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = ld8((c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31352u)));
    set32(c.r[3], 0u + 46u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_002685FC; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002685F0; } }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - c.r[6].w[0]);  if (t) { goto L_002685E4; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] << 2);  if (t) { goto L_002685DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268610; } }
L_002685DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_0026861C; } }
L_002685E4:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0026861C; } }
L_002685F0:
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_0026861C; } }
L_002685FC:
    set32(c.r[3], 0u - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_0026861C; } }
L_00268610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268618u);  if (depth < kMaxDepth) unit_0059(c, 83u, depth + 1u); else { c.pc = 0x002655B0u; return; } if (c.pc != 0x00268618u) [[unlikely]] return; }
L_00268618:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026861C:
    set32(c.r[11], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[11].sd[0] >= 0;  if (t) { goto L_0026862C; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026862C:
    set32(c.r[12], c.r[12].w[0] + c.r[11].w[0]);
    c.r[1].d[0] = c.r[9].d[0] < c.r[12].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[10].w[0] << 1);  if (t) { goto L_0026864C; } }
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 444u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268660; } }
L_0026864C:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00268650:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268594u | kUnwind; return; } goto L_00268594; } }
L_00268660:
    set32(c.r[3], c.r[29].w[0] + 444u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026866C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_002686A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002686E8; } }
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_002686DC; } }
L_002686BC:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_002686DC; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002686DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002686E8; } }
L_002686DC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002686BCu | kUnwind; return; } goto L_002686BC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002686E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002686F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00268760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_00268758; } }
L_00268720:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268734u); set32(c.r[4], ld32((c.r[18].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 32u, depth + 1u); else { c.pc = 0x0014C590u; return; } if (c.pc != 0x00268734u) [[unlikely]] return; }
L_00268734:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00268758; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00268758; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268758u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268758u) [[unlikely]] return; }
L_00268758:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268720u | kUnwind; return; } goto L_00268720; } }
L_00268760:
    st16((c.r[18].w[0] + 144u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_00268810; } }
L_002687AC:
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00271DC0u; return; } if (c.pc != 0x002687B8u) [[unlikely]] return; }
L_002687B8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002687FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 32u, depth + 1u); else { c.pc = 0x0014C590u; return; } if (c.pc != 0x002687D0u) [[unlikely]] return; }
L_002687D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00268818; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00268818; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002687F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002687F4u) [[unlikely]] return; }
L_002687F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  if (t) { goto L_0026881C; } }
L_002687FC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 48u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 49u));
    st8((c.r[16].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 147u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00268818; } }
L_00268810:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002687ACu | kUnwind; return; } goto L_002687AC; } }
L_00268818:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 1;
L_0026881C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268840:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268864u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 189u, depth + 1u); else { c.pc = 0x002697C0u; return; } if (c.pc != 0x00268864u) [[unlikely]] return; }
L_00268864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268888; } }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268878u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 407u, depth + 1u); else { c.pc = 0x00267D50u; return; } if (c.pc != 0x00268878u) [[unlikely]] return; }
L_00268878:
    set32(c.r[2], c.r[29].w[0] + 120u);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00268888:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 125u);  if (t) { goto L_002688B8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 407u, depth + 1u); else { c.pc = 0x00267D50u; return; } if (c.pc != 0x002688A4u) [[unlikely]] return; }
L_002688A4:
    set32(c.r[2], c.r[29].w[0] + 116u);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[29].w[0] + 125u);
    c.budget -= 5;
L_002688B8:
    c.r[18].d[0] = ld8((c.r[17].w[0]));
    c.r[20].d[0] = ld8((c.r[29].w[0] + 124u));
    c.r[1].d[0] = c.r[18].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = ld16((c.r[29].w[0] + 124u));  if (t) { goto L_00268900; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 200ll ? 1ull : 0ull;  if (t) { goto L_00268904; } }
    c.r[2].d[0] = c.r[20].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268900; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 10u, depth + 1u); else { c.pc = 0x00268190u; return; } if (c.pc != 0x002688F0u) [[unlikely]] return; }
L_002688F0:
    set32(c.r[2], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00268900:
    c.r[2].d[0] = c.r[18].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 1;
L_00268904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026893C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] & 65535ull;  if (t) { goto L_0026893C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026893C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026892Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 19u, depth + 1u); else { c.pc = 0x002683E0u; return; } if (c.pc != 0x0026892Cu) [[unlikely]] return; }
L_0026892C:
    set32(c.r[2], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0026893C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002689B8; } }
    set32(c.r[4], ld32((c.r[1].w[0] - 27008u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026895Cu); set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_005A(c, 216u, depth + 1u); else { c.pc = 0x00269B60u; return; } if (c.pc != 0x0026895Cu) [[unlikely]] return; }
L_0026895C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00268AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 23ll ? 1ull : 0ull;  if (t) { goto L_002689A8; } }
L_00268970:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 2u);  if (t) { goto L_00268AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x00268988u) [[unlikely]] return; }
L_00268988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268AA8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689A0u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002689A0u) [[unlikely]] return; }
L_002689A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 2;
L_002689A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268970u | kUnwind; return; } goto L_00268970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00268AAC; } }
L_002689B8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689CCu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_005D(c, 630u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x002689CCu) [[unlikely]] return; }
L_002689CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002689E0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002689E0u) [[unlikely]] return; }
L_002689E0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_00268A3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268A3C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00268A3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268A3C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_00268A3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268A3C; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268A3C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 124u));
    set32(c.r[2], 0u + 2050u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00268AA8; } }
L_00268A3C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 124u));
    c.r[2].d[0] = c.r[3].sd[0] < 1797ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268A58; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00268AA8; } }
L_00268A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A64u); set32(c.r[17], ld32((c.r[1].w[0] - 27016u)));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268A64u) [[unlikely]] return; }
L_00268A64:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x002698E0u; return; } if (c.pc != 0x00268A70u) [[unlikely]] return; }
L_00268A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00268AA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31352u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A94u);  if (depth < kMaxDepth) unit_005C(c, 129u, depth + 1u); else { c.pc = 0x002723C0u; return; } if (c.pc != 0x00268A94u) [[unlikely]] return; }
L_00268A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268AA8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268AA8u) [[unlikely]] return; }
L_00268AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00268AAC:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00268AD0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 86u, depth + 1u); else { c.pc = 0x00265660u; return; } if (c.pc != 0x00268AFCu) [[unlikely]] return; }
L_00268AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1744u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_00268B14; } }
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 1;
L_00268B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B20u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00268B20u) [[unlikely]] return; }
L_00268B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00268B34; } }
L_00268B30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00268B34:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 384u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[5].w[0] - 21136u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], 0u + 2u);
    c.r[19].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[18].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 8;
L_00268B54:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268B54u | kUnwind; return; } goto L_00268B54; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[1].w[0] + 3840u)));  if (t) { goto L_00268C04; } }
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u + 100u);  if (t) { goto L_00268BB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00268BA8; } }
    breakpoint(c, 0x00268BA4u);
    c.budget -= 1;
L_00268BA8:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 3);  if (t) { goto L_00268BBC; } }
L_00268BB4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[3].w[0] << 3);
    c.budget -= 2;
L_00268BBC:
    set32(c.r[4], c.r[20].w[0] + 996u);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BE8u); set32(c.r[5], c.r[2].w[0] + 1104u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00268BE8u) [[unlikely]] return; }
L_00268BE8:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[2].w[0] + 352u));  if (t) { goto L_00268C4C; } }
L_00268C04:
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00268C28; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00268C24; } }
    breakpoint(c, 0x00268C20u);
    c.budget -= 1;
L_00268C24:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00268C28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_00268C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_00268C4C; } }
L_00268C38:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_00268C48; } }
    breakpoint(c, 0x00268C44u);
    c.budget -= 1;
L_00268C48:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00268C4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C58u); set32(c.r[4], ld32((c.r[1].w[0] - 27032u)));  if (depth < kMaxDepth) unit_005A(c, 118u, depth + 1u); else { c.pc = 0x00269250u; return; } if (c.pc != 0x00268C58u) [[unlikely]] return; }
L_00268C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C60u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268C60u) [[unlikely]] return; }
L_00268C60:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268CD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 32224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C90u); set32(c.r[6], c.r[18].w[0] + 10u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00268C90u) [[unlikely]] return; }
L_00268C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C98u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00268C98u) [[unlikely]] return; }
L_00268C98:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00268CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CACu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00268CACu) [[unlikely]] return; }
L_00268CAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CC0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00268CC0u) [[unlikely]] return; }
L_00268CC0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00268CC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268CD0u) [[unlikely]] return; }
L_00268CD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 32224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CE4u); set32(c.r[6], c.r[18].w[0] + 5u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00268CE4u) [[unlikely]] return; }
L_00268CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CECu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00268CECu) [[unlikely]] return; }
L_00268CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268D04; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D04u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00268D04u) [[unlikely]] return; }
L_00268D04:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268D10u) [[unlikely]] return; }
L_00268D10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 32224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D24u); set32(c.r[6], c.r[18].w[0] + 15u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00268D24u) [[unlikely]] return; }
L_00268D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D2Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00268D2Cu) [[unlikely]] return; }
L_00268D2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268D44; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D44u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00268D44u) [[unlikely]] return; }
L_00268D44:
    set32(c.r[4], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268D50u) [[unlikely]] return; }
L_00268D50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] + 32224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D64u); set32(c.r[6], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00268D64u) [[unlikely]] return; }
L_00268D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D6Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00268D6Cu) [[unlikely]] return; }
L_00268D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268D84; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D84u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00268D84u) [[unlikely]] return; }
L_00268D84:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268D90u) [[unlikely]] return; }
L_00268D90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], c.r[18].w[0] + 25u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DA4u); set32(c.r[5], c.r[5].w[0] + 32224u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00268DA4u) [[unlikely]] return; }
L_00268DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DACu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00268DACu) [[unlikely]] return; }
L_00268DAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00268DC0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DC0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005A(c, 201u, depth + 1u); else { c.pc = 0x00269950u; return; } if (c.pc != 0x00268DC0u) [[unlikely]] return; }
L_00268DC0:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 137u, depth + 1u); else { c.pc = 0x00272490u; return; } if (c.pc != 0x00268DCCu) [[unlikely]] return; }
L_00268DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268DE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DE0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268DE0u) [[unlikely]] return; }
L_00268DE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00268DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DECu);  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00272430u; return; } if (c.pc != 0x00268DECu) [[unlikely]] return; }
L_00268DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268E00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E00u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00268E00u) [[unlikely]] return; }
L_00268E00:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00268E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00268E78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E60u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 105u, depth + 1u); else { c.pc = 0x00265800u; return; } if (c.pc != 0x00268E60u) [[unlikely]] return; }
L_00268E60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00268E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00268E78u) [[unlikely]] return; }
L_00268E78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00268E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00268E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 27920u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00269178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EC0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00268EC0u) [[unlikely]] return; }
L_00268EC0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268ED4u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00268ED4u) [[unlikely]] return; }
L_00268ED4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00268ED8:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0026917C; } }
L_00268EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268EF8u) [[unlikely]] return; }
L_00268EF8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F0Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268F0Cu) [[unlikely]] return; }
L_00268F0C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00268F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F24u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268F24u) [[unlikely]] return; }
L_00268F24:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268F44; } }
L_00268F34:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00269178; } }
L_00268F44:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00269178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F5Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00268F5Cu) [[unlikely]] return; }
L_00268F5C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 22u, depth + 1u); else { c.pc = 0x002F85B0u; return; } if (c.pc != 0x00268F70u) [[unlikely]] return; }
L_00268F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269178; } }
L_00268F78:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 148u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00268F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 129u, depth + 1u); else { c.pc = 0x00265AA0u; return; } if (c.pc != 0x00268F8Cu) [[unlikely]] return; }
L_00268F8C:
    st8((c.r[18].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00268F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F9Cu);  if (depth < kMaxDepth) unit_0059(c, 373u, depth + 1u); else { c.pc = 0x002676E0u; return; } if (c.pc != 0x00268F9Cu) [[unlikely]] return; }
L_00268F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 138u, depth + 1u); else { c.pc = 0x00265C00u; return; } if (c.pc != 0x00268FA4u) [[unlikely]] return; }
L_00268FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265CC0u; return; } if (c.pc != 0x00268FACu) [[unlikely]] return; }
L_00268FAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FB8u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_005A(c, 37u, depth + 1u); else { c.pc = 0x00268780u; return; } if (c.pc != 0x00268FB8u) [[unlikely]] return; }
L_00268FB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 132u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FD0u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 79u, depth + 1u); else { c.pc = 0x00265430u; return; } if (c.pc != 0x00268FD0u) [[unlikely]] return; }
L_00268FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FE0u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x002645C0u; return; } if (c.pc != 0x00268FE0u) [[unlikely]] return; }
L_00268FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FF0u); set32(c.r[4], ld32((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x00268FF0u) [[unlikely]] return; }
L_00268FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 50u);
    set32(c.r[5], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00269020; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269020; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00269020:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    set32(c.r[2], c.r[5].w[0] - 1671u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026903C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026903C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026904Cu);  if (depth < kMaxDepth) unit_0059(c, 34u, depth + 1u); else { c.pc = 0x00264650u; return; } if (c.pc != 0x0026904Cu) [[unlikely]] return; }
L_0026904C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15872ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269098; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269098; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00269098:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 704u));
    set32(c.r[2], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690C4u);  if (depth < kMaxDepth) unit_0059(c, 71u, depth + 1u); else { c.pc = 0x00265000u; return; } if (c.pc != 0x002690C4u) [[unlikely]] return; }
L_002690C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026910C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld64((c.r[5].w[0] + 704u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269104; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269104; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269104:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00269110; } }
L_0026910C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269110:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269144; } }
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | 135ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00269148; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_00269144:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_00269148:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00269170; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0026916C; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026916C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026916Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 42u, depth + 1u); else { c.pc = 0x00268840u; return; } if (c.pc != 0x0026916Cu) [[unlikely]] return; }
L_0026916C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00269170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269178u);  if (depth < kMaxDepth) unit_0059(c, 368u, depth + 1u); else { c.pc = 0x00267630u; return; } if (c.pc != 0x00269178u) [[unlikely]] return; }
L_00269178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0026917C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00269190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x002691A4u) [[unlikely]] return; }
L_002691A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 1664u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[1].w[0] - 27032u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002691D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1664u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269208u); st32((c.r[1].w[0] - 27032u), 0u);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x00269208u) [[unlikely]] return; }
L_00269208:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00269224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00269220u) [[unlikely]] return; }
L_00269220:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00269224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269240:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 5);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  c.pc = t; return; }
L_00269250:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00269264; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269264:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00269290:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692B0u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002692B0u) [[unlikely]] return; }
L_002692B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002692D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692C4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002692C4u) [[unlikely]] return; }
L_002692C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692D4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0013(c, 15u, depth + 1u); else { c.pc = 0x0014C300u; return; } if (c.pc != 0x002692D4u) [[unlikely]] return; }
L_002692D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002692D8:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692E8u); st32((c.r[1].w[0] - 27024u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002692E8u) [[unlikely]] return; }
L_002692E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692FCu); st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002692FCu) [[unlikely]] return; }
L_002692FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269304u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00269304u) [[unlikely]] return; }
L_00269304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026930Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026930Cu) [[unlikely]] return; }
L_0026930C:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269328u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269328u) [[unlikely]] return; }
L_00269328:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 2;
L_00269330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026934C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269340u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269340u) [[unlikely]] return; }
L_00269340:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 60ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0026934C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002693BC; } }
    set32(c.r[18], 0u + 30u);
    c.budget -= 1;
L_0026935C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 32232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269370u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269370u) [[unlikely]] return; }
L_00269370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269378u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x00269378u) [[unlikely]] return; }
L_00269378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_002693AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269388u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00269388u) [[unlikely]] return; }
L_00269388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002693A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693A0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002693A0u) [[unlikely]] return; }
L_002693A0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002693ACu) [[unlikely]] return; }
L_002693AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026935Cu | kUnwind; return; } goto L_0026935C; } }
L_002693BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693CCu); set32(c.r[5], c.r[5].w[0] + 32248u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002693CCu) [[unlikely]] return; }
L_002693CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693D4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002693D4u) [[unlikely]] return; }
L_002693D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002693EC; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693ECu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002693ECu) [[unlikely]] return; }
L_002693EC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002693F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002693F8u) [[unlikely]] return; }
L_002693F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269400u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269400u) [[unlikely]] return; }
L_00269400:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00269444; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269418u); set32(c.r[5], c.r[5].w[0] + 32264u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269418u) [[unlikely]] return; }
L_00269418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269420u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00269420u) [[unlikely]] return; }
L_00269420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00269438; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269438u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00269438u) [[unlikely]] return; }
L_00269438:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269444u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00269444u) [[unlikely]] return; }
L_00269444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026944Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026944Cu) [[unlikely]] return; }
L_0026944C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00269490; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269464u); set32(c.r[5], c.r[5].w[0] + 32280u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269464u) [[unlikely]] return; }
L_00269464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026946Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026946Cu) [[unlikely]] return; }
L_0026946C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00269484; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269484u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00269484u) [[unlikely]] return; }
L_00269484:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269490u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00269490u) [[unlikely]] return; }
L_00269490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269498u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269498u) [[unlikely]] return; }
L_00269498:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002694E4; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694B0u); set32(c.r[5], c.r[5].w[0] + 32296u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002694B0u) [[unlikely]] return; }
L_002694B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694B8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002694B8u) [[unlikely]] return; }
L_002694B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002694D0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694D0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002694D0u) [[unlikely]] return; }
L_002694D0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002694DCu) [[unlikely]] return; }
L_002694DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 332u)));  if (t) { goto L_002696C0; } }
L_002694E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694ECu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002694ECu) [[unlikely]] return; }
L_002694EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00269538; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269504u); set32(c.r[5], c.r[5].w[0] + 32312u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269504u) [[unlikely]] return; }
L_00269504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026950Cu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026950Cu) [[unlikely]] return; }
L_0026950C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269524; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269524u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00269524u) [[unlikely]] return; }
L_00269524:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269530u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00269530u) [[unlikely]] return; }
L_00269530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002696BC; } }
L_00269538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269540u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269540u) [[unlikely]] return; }
L_00269540:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026958C; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269558u); set32(c.r[5], c.r[5].w[0] + 32328u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269558u) [[unlikely]] return; }
L_00269558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269560u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00269560u) [[unlikely]] return; }
L_00269560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269578; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269578u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00269578u) [[unlikely]] return; }
L_00269578:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269584u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x00269584u) [[unlikely]] return; }
L_00269584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002696BC; } }
L_0026958C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269594u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269594u) [[unlikely]] return; }
L_00269594:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_002695E0; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695ACu); set32(c.r[5], c.r[5].w[0] + 32344u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x002695ACu) [[unlikely]] return; }
L_002695AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695B4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002695B4u) [[unlikely]] return; }
L_002695B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002695CC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695CCu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002695CCu) [[unlikely]] return; }
L_002695CC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002695D8u) [[unlikely]] return; }
L_002695D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002696BC; } }
L_002695E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695E8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x002695E8u) [[unlikely]] return; }
L_002695E8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00269644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002695FCu); set32(c.r[4], c.r[4].w[0] + 32360u);  if (depth < kMaxDepth) unit_0011(c, 255u, depth + 1u); else { c.pc = 0x001475B0u; return; } if (c.pc != 0x002695FCu) [[unlikely]] return; }
L_002695FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00269644; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269610u); set32(c.r[5], c.r[5].w[0] + 32360u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269610u) [[unlikely]] return; }
L_00269610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269618u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00269618u) [[unlikely]] return; }
L_00269618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269630; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269630u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x00269630u) [[unlikely]] return; }
L_00269630:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026963Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x0026963Cu) [[unlikely]] return; }
L_0026963C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002696BC; } }
L_00269644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026964Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026964Cu) [[unlikely]] return; }
L_0026964C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269660u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269660u) [[unlikely]] return; }
L_00269660:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269674u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x00269674u) [[unlikely]] return; }
L_00269674:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 31u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002696BC; } }
L_00269680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269690u); set32(c.r[5], c.r[5].w[0] + 32376u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00269690u) [[unlikely]] return; }
L_00269690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269698u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00269698u) [[unlikely]] return; }
L_00269698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002696B0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696B0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_005A(c, 220u, depth + 1u); else { c.pc = 0x00269C00u; return; } if (c.pc != 0x002696B0u) [[unlikely]] return; }
L_002696B0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 28u, depth + 1u); else { c.pc = 0x0014C4E0u; return; } if (c.pc != 0x002696BCu) [[unlikely]] return; }
L_002696BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 1;
L_002696C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696C8u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002696C8u) [[unlikely]] return; }
L_002696C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002696F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269798; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 27024u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_00269784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0])));  if (t) { goto L_00269760; } }
L_0026972C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269738u); set32(c.r[16], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0013(c, 30u, depth + 1u); else { c.pc = 0x0014C540u; return; } if (c.pc != 0x00269738u) [[unlikely]] return; }
L_00269738:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026975C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026975C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026975Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026975Cu) [[unlikely]] return; }
L_0026975C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00269760:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026972Cu | kUnwind; return; } goto L_0026972C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0026977C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026977Cu);  if (depth < kMaxDepth) unit_0013(c, 18u, depth + 1u); else { c.pc = 0x0014C370u; return; } if (c.pc != 0x0026977Cu) [[unlikely]] return; }
L_0026977C:
    st32((c.r[18].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 2;
L_00269784:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026979C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269798u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00269798u) [[unlikely]] return; }
L_00269798:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026979C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002697C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002697D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002697DC; } }
L_002697D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002697DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002697F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x00269804u) [[unlikely]] return; }
L_00269804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 1680u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[1].w[0] - 27016u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269830:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269868u); st32((c.r[1].w[0] - 27016u), 0u);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x00269868u) [[unlikely]] return; }
L_00269868:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00269884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00269880u) [[unlikely]] return; }
L_00269880:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00269884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002698A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[5], 0u + 86u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698C0u); st32((c.r[4].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x002698E0u; return; } if (c.pc != 0x002698C0u) [[unlikely]] return; }
L_002698C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698D4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x002698D4u) [[unlikely]] return; }
L_002698D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002698E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269900u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00269900u) [[unlikely]] return; }
L_00269900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_00269920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269910u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00269910u) [[unlikely]] return; }
L_00269910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_00269928; } }
L_00269920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269934; } }
L_00269928:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 3;
L_00269934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x00269964u) [[unlikely]] return; }
L_00269964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002699D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699C0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x002699C0u) [[unlikely]] return; }
L_002699C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002699DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002699D8u) [[unlikely]] return; }
L_002699D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002699DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002699F0:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  c.pc = t; return; }
L_00269A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A20u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00269A20u) [[unlikely]] return; }
L_00269A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_00269A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A30u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00269A30u) [[unlikely]] return; }
L_00269A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00269A48; } }
L_00269A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269A74; } }
L_00269A48:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31352u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 11;
L_00269A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x00269AA4u) [[unlikely]] return; }
L_00269AA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 1712u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[1].w[0] - 27008u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00269AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269B20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1712u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B08u); st32((c.r[1].w[0] - 27008u), 0u);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x00269B08u) [[unlikely]] return; }
L_00269B08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00269B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00269B20u) [[unlikely]] return; }
L_00269B20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00269B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269B40:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  c.pc = t; return; }
L_00269B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B7Cu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00269B7Cu) [[unlikely]] return; }
L_00269B7C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_00269B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B90u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00269B90u) [[unlikely]] return; }
L_00269B90:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00269B94:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269BEC; } }
L_00269BA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 44u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { goto L_00269BDC; } }
L_00269BC0:
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00269BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00269BF0; } }
L_00269BD4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 2;
L_00269BDC:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269BC0u | kUnwind; return; } goto L_00269BC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00269BF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 72u, depth + 1u); else { c.pc = 0x00148A50u; return; } if (c.pc != 0x00269C2Cu) [[unlikely]] return; }
L_00269C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1728u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C48u); st32((c.r[18].w[0] + 40u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00269C48u) [[unlikely]] return; }
L_00269C48:
    st32((c.r[18].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00269C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269CB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CA0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 79u, depth + 1u); else { c.pc = 0x00148AF0u; return; } if (c.pc != 0x00269CA0u) [[unlikely]] return; }
L_00269CA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00269CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00269CB8u) [[unlikely]] return; }
L_00269CB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00269CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00269CD0:
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[10], c.r[5].w[0] + 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00269D3C; } }
L_00269CEC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 14u)));
    set32(c.r[8], c.r[8].w[0] + 32u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 3);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[8].d[0] & 15ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269D2C; } }
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00269D2C:
    set32(c.r[3], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[10].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 28u)));
    c.budget -= 4;
L_00269D3C:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269CECu | kUnwind; return; } goto L_00269CEC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269D60:
    st32((c.r[4].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[10], c.r[5].w[0] + 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00269DCC; } }
L_00269D7C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 6u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] << 3);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[8].d[0] & 15ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269DBC; } }
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00269DBC:
    set32(c.r[3], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[10].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 12u)));
    c.budget -= 4;
L_00269DCC:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269D7Cu | kUnwind; return; } goto L_00269D7C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00269E28; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00269E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00269E34; } }
L_00269E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E20u);  if (depth < kMaxDepth) unit_005A(c, 226u, depth + 1u); else { c.pc = 0x00269CD0u; return; } if (c.pc != 0x00269E20u) [[unlikely]] return; }
L_00269E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269E30; } }
L_00269E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E30u);  if (depth < kMaxDepth) unit_005A(c, 228u, depth + 1u); else { c.pc = 0x00269D60u; return; } if (c.pc != 0x00269E30u) [[unlikely]] return; }
L_00269E30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00269E34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00269E40:
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u + 256u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld16((c.r[5].w[0]));  if (t) { goto L_00269E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00269EA4; } }
L_00269E58:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 768u);  if (t) { goto L_00269E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00269EA4; } }
L_00269E6C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00269E88; } }
    set32(c.r[2], 0u + 769u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 769u);  if (t) { goto L_00269E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00269EA4; } }
L_00269E88:
    set32(c.r[2], 0u + 769u);
    c.budget -= 1;
L_00269E8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269EA4; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269EA4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00269EA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00269EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EDCu); set32(c.r[6], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_0058(c, 246u, depth + 1u); else { c.pc = 0x00262AC0u; return; } if (c.pc != 0x00269EDCu) [[unlikely]] return; }
L_00269EDC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 4u);  if (t) { goto L_00269EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269F24; } }
L_00269EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EF8u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_005A(c, 233u, depth + 1u); else { c.pc = 0x00269E40u; return; } if (c.pc != 0x00269EF8u) [[unlikely]] return; }
L_00269EF8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269F0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269F24; } }
L_00269F0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[5], c.r[17].w[0] + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F1Cu); set32(c.r[6], c.r[16].w[0] + 6u);  if (depth < kMaxDepth) unit_0058(c, 246u, depth + 1u); else { c.pc = 0x00262AC0u; return; } if (c.pc != 0x00269F1Cu) [[unlikely]] return; }
L_00269F1C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00269F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00269F40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00269F6C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00269F74; } }
L_00269F6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
L_00269F74:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] + 32u);
    c.r[16].d[0] = ld8((c.r[17].w[0] + 370u));
    set32(c.r[10], c.r[6].w[0] + 440u);
    c.r[19].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[9], c.r[29].w[0] + 80u);
    set32(c.r[8], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 8;
L_00269F94:
    set32(c.r[7], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[4], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[7].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F94u | kUnwind; return; } goto L_00269F94; } }
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[4], 0u + 1536u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[6], ld32((c.r[6].w[0] + 16u)));  if (t) { goto L_0026A478; } }
    set32(c.r[4], 0u + 1283u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A54C; } }
    set32(c.r[4], 0u + 1282u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A454; } }
    set32(c.r[4], 0u + 1281u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026A42C; } }
    set32(c.r[4], 0u + 1280u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A3C8; } }
    set32(c.r[4], 0u + 1537u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A398; } }
    set32(c.r[4], 0u + 1539u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A388; } }
    set32(c.r[4], 0u + 1538u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A33C; } }
    set32(c.r[4], 0u + 1026u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A2C0; } }
    set32(c.r[4], 0u + 1025u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0026A28C; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0026A1EC; } }
    set32(c.r[2], 0u + 768u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] ^ 0ull;  if (t) { goto L_0026A1D0; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0026A074; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026A06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0026A554; } }
L_0026A074:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A114; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_0026A0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_0026A0B8; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0026A0B8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A0CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_0026A0D4; } }
L_0026A0CC:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_0026A0D4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_0026A0F8; } }
L_0026A0F0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 2;
L_0026A0F8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A114:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
L_0026A12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A134u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026A134u) [[unlikely]] return; }
L_0026A134:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A1B4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0026A164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A15Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A15Cu) [[unlikely]] return; }
L_0026A15C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0026A164:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0026A188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A180u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A180u) [[unlikely]] return; }
L_0026A180:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0026A188:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A19C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
L_0026A19C:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A1B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.budget -= 1;
L_0026A1D0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = c.r[19].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1F4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x0026A1F4u) [[unlikely]] return; }
L_0026A1F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A274; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A21Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A21Cu) [[unlikely]] return; }
L_0026A21C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A220:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0026A248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A240u) [[unlikely]] return; }
L_0026A240:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0026A248:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A25C:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A274:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A28C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 250u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 250u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026A2F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A2EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0026A54C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026A2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A2F4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[2].w[0] - 232u);
    set32(c.r[2], c.r[2].w[0] - 250u);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[2].w[0] - 232u);
    set32(c.r[2], c.r[2].w[0] - 250u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A33C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 250u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A368; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0026A36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A368:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_0026A36C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A388:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0026A550; } }
L_0026A398:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A550; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 250u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A550; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A3C8:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A3E4u) [[unlikely]] return; }
L_0026A3E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A3E8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A410u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x0026A410u) [[unlikely]] return; }
L_0026A410:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A414:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026A42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A434u);  if (depth < kMaxDepth) unit_0058(c, 306u, depth + 1u); else { c.pc = 0x00263AA0u; return; } if (c.pc != 0x0026A434u) [[unlikely]] return; }
L_0026A434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A444u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 306u, depth + 1u); else { c.pc = 0x00263AA0u; return; } if (c.pc != 0x0026A444u) [[unlikely]] return; }
L_0026A444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A454:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026A54C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A51C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A514; } }
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[0];  if (t) { goto L_0026A4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_0026A4BC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_0026A4BC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[2], c.f[1]);  if (t) { goto L_0026A4D8; } }
L_0026A4D0:
    c.f[1] = c.f[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 2;
L_0026A4D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0026A4FC; } }
L_0026A4F4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_0026A4FC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026A54C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026A514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A550; } }
L_0026A51C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A534:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026A550; } }
L_0026A54C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0026A554:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026A570:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[22].w[0] + 8u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0026A5B4u) [[unlikely]] return; }
L_0026A5B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[22].w[0] + 8u);  if (t) { goto L_0026A5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5C8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0026A5C8u) [[unlikely]] return; }
L_0026A5C8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A5CC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A650; } }
L_0026A5E0:
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + 16u);  if (t) { goto L_0026A640; } }
L_0026A5F0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 4u);  if (t) { goto L_0026A638; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A610u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 234u, depth + 1u); else { c.pc = 0x00269EB0u; return; } if (c.pc != 0x0026A610u) [[unlikely]] return; }
L_0026A610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026A638; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A624u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 238u, depth + 1u); else { c.pc = 0x00269F40u; return; } if (c.pc != 0x0026A624u) [[unlikely]] return; }
L_0026A624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0026A638; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026A650; } }
L_0026A638:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0026A640:
    set32(c.r[2], ld32((c.r[22].w[0] + 44u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A5F0u | kUnwind; return; } goto L_0026A5F0; } }
L_0026A650:
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
L_0026A680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[29].w[0] + 60u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[16].d[0] = ld8((c.r[29].w[0] + 61u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6A4u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0026A6A4u) [[unlikely]] return; }
L_0026A6A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_0026A6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6B8u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0026A6B8u) [[unlikely]] return; }
L_0026A6B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A6BC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A714; } }
L_0026A6D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { goto L_0026A704; } }
L_0026A6E8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0026A6FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0026A718; } }
L_0026A6FC:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0026A704:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A6E8u | kUnwind; return; } goto L_0026A6E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026A718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026A730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[18].d[0] = ld8((c.r[29].w[0] + 77u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A75Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x0026A75Cu) [[unlikely]] return; }
L_0026A75C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_0026A774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A770u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x0026A770u) [[unlikely]] return; }
L_0026A770:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0026A774:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A7D0; } }
L_0026A788:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 16u);  if (t) { goto L_0026A7C0; } }
L_0026A7A0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0026A7B8; } }
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 3;
L_0026A7B8:
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0026A7C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A7A0u | kUnwind; return; } goto L_0026A7A0; } }
L_0026A7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A7F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A814u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 12u, depth + 1u); else { c.pc = 0x001300B0u; return; } if (c.pc != 0x0026A814u) [[unlikely]] return; }
L_0026A814:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A820u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0026A820u) [[unlikely]] return; }
L_0026A820:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A82Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x0026A82Cu) [[unlikely]] return; }
L_0026A82C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 1648u);
    set32(c.r[2], c.r[2].w[0] - 1560u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1500u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1484u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A870u); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0026A870u) [[unlikely]] return; }
L_0026A870:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A87Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0026A87Cu) [[unlikely]] return; }
L_0026A87C:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0026A888u) [[unlikely]] return; }
L_0026A888:
    st32((c.r[17].w[0] + 176u), c.r[18].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A898u); st32((c.r[17].w[0] + 180u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026A898u) [[unlikely]] return; }
L_0026A898:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8A4u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026A8A4u) [[unlikely]] return; }
L_0026A8A4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 30u);
    ld128((c.r[16].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 252u), 0u);
    st8((c.r[17].w[0] + 248u), static_cast<std::uint8_t>(0u));
    ld128((c.r[17].w[0] + 192u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A8E0u) [[unlikely]] return; }
L_0026A8E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8F4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A8F4u) [[unlikely]] return; }
L_0026A8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8FCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026A8FCu) [[unlikely]] return; }
L_0026A8FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A90Cu); c.r[4].d[0] = ld8((c.r[1].w[0] - 25576u));  if (depth < kMaxDepth) unit_000B(c, 128u, depth + 1u); else { c.pc = 0x0012D530u; return; } if (c.pc != 0x0026A90Cu) [[unlikely]] return; }
L_0026A90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A914u); st32((c.r[17].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0082(c, 190u, depth + 1u); else { c.pc = 0x00309E30u; return; } if (c.pc != 0x0026A914u) [[unlikely]] return; }
L_0026A914:
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A920u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026A920u) [[unlikely]] return; }
L_0026A920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026A954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A938u); c.r[4].d[0] = c.r[2].d[0] | 20566ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0026A938u) [[unlikely]] return; }
L_0026A938:
    set32(c.r[5], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A944u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0026A944u) [[unlikely]] return; }
L_0026A944:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A950u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0026A950u) [[unlikely]] return; }
L_0026A950:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026A954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A95Cu); st32((c.r[17].w[0] + 60u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026A95Cu) [[unlikely]] return; }
L_0026A95C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7934u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A988u); set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));  if (depth < kMaxDepth) unit_002A(c, 147u, depth + 1u); else { c.pc = 0x001A96C0u; return; } if (c.pc != 0x0026A988u) [[unlikely]] return; }
L_0026A988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A990u); set32(c.r[4], c.r[17].w[0] + 264u);  if (depth < kMaxDepth) unit_006E(c, 107u, depth + 1u); else { c.pc = 0x002B88A0u; return; } if (c.pc != 0x0026A990u) [[unlikely]] return; }
L_0026A990:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 2;
L_0026A998:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026A9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9A8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026A9A8u) [[unlikely]] return; }
L_0026A9A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25584u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026A9D4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9CCu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0026A9CCu) [[unlikely]] return; }
L_0026A9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_0026A9F0; } }
L_0026A9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0026A9DCu) [[unlikely]] return; }
L_0026A9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026A9F0; } }
L_0026A9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0026A9ECu) [[unlikely]] return; }
L_0026A9EC:
    st8((c.r[2].w[0] + 364u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026A9F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 86ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A998u | kUnwind; return; } goto L_0026A998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA08u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026AA08u) [[unlikely]] return; }
L_0026AA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25573u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA1Cu); set32(c.r[16], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026AA1Cu) [[unlikely]] return; }
L_0026AA1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25575u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7776u);
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA58u); set32(c.r[4], c.r[17].w[0] + 328u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0026AA58u) [[unlikely]] return; }
L_0026AA58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 7772u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA70u); set32(c.r[4], c.r[17].w[0] + 456u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x0026AA70u) [[unlikely]] return; }
L_0026AA70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6D6E0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA84u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0026AA84u) [[unlikely]] return; }
L_0026AA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026AA90; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0026AA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA98u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 195u, depth + 1u); else { c.pc = 0x002D99C0u; return; } if (c.pc != 0x0026AA98u) [[unlikely]] return; }
L_0026AA98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026AAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026AB94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 1648u);
    set32(c.r[2], c.r[2].w[0] - 1560u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1500u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 1484u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AB30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026AB30; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026AB30u) [[unlikely]] return; }
L_0026AB30:
    set32(c.r[4], c.r[17].w[0] + 140u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB40u); st32((c.r[17].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0026AB40u) [[unlikely]] return; }
L_0026AB40:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0026AB4Cu) [[unlikely]] return; }
L_0026AB4C:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0026AB58u) [[unlikely]] return; }
L_0026AB58:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0026AB64u) [[unlikely]] return; }
L_0026AB64:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0026AB70u) [[unlikely]] return; }
L_0026AB70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0026AB7Cu) [[unlikely]] return; }
L_0026AB7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026AB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AB94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026AB94u) [[unlikely]] return; }
L_0026AB94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026AB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026ABB0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026ABC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ABD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0026ABD4u) [[unlikely]] return; }
L_0026ABD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 21088u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] - 21056u);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    st128((c.r[5].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[5].w[0] + 16u), c.r[7].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21024u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st64((c.r[8].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC30u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AC30u) [[unlikely]] return; }
L_0026AC30:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC3Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AC3Cu) [[unlikely]] return; }
L_0026AC3C:
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC48u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AC48u) [[unlikely]] return; }
L_0026AC48:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026AC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 340u, depth + 1u); else { c.pc = 0x0026AF90u; return; } if (c.pc != 0x0026AC74u) [[unlikely]] return; }
L_0026AC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026AC8C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026AC8Cu) [[unlikely]] return; }
L_0026AC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026ACA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25384u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026ACEC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026ACD0u) [[unlikely]] return; }
L_0026ACD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026ACEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACE0u);  if (depth < kMaxDepth) unit_001B(c, 397u, depth + 1u); else { c.pc = 0x0016F2B0u; return; } if (c.pc != 0x0026ACE0u) [[unlikely]] return; }
L_0026ACE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 3;
L_0026ACEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026AD00:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026AD10:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026AD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD38u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0026AD38u) [[unlikely]] return; }
L_0026AD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026AD68; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026AD4C; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_0026AD4C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[9], ld32((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD68u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x0026AD68u) [[unlikely]] return; }
L_0026AD68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026AD80:
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_0026AD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0026ADACu) [[unlikely]] return; }
L_0026ADAC:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026ADD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026ADECu) [[unlikely]] return; }
L_0026ADEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026AE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADFCu);  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0026ADFCu) [[unlikely]] return; }
L_0026ADFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 20992u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] - 20960u);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    st128((c.r[5].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[5].w[0] + 16u), c.r[7].d[0]);
    set32(c.r[2], c.r[2].w[0] - 20928u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st64((c.r[8].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE58u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AE58u) [[unlikely]] return; }
L_0026AE58:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE64u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AE64u) [[unlikely]] return; }
L_0026AE64:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE70u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AE70u) [[unlikely]] return; }
L_0026AE70:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_0026AE98; } }
L_0026AE7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE98u); st32((c.r[2].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_001B(c, 394u, depth + 1u); else { c.pc = 0x0016F220u; return; } if (c.pc != 0x0026AE98u) [[unlikely]] return; }
L_0026AE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026AEB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AEC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0026AEC4u) [[unlikely]] return; }
L_0026AEC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 20896u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] - 20864u);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 16u));
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    st128((c.r[5].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[5].w[0] + 16u), c.r[7].d[0]);
    set32(c.r[2], c.r[2].w[0] - 20832u);
    ld128((c.r[3].w[0]) & ~15u, c.r[7]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st64((c.r[8].w[0] + 16u), c.r[3].d[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF20u); st64((c.r[6].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AF20u) [[unlikely]] return; }
L_0026AF20:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF2Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AF2Cu) [[unlikely]] return; }
L_0026AF2C:
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF38u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0026AF38u) [[unlikely]] return; }
L_0026AF38:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026AF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0026AF64u) [[unlikely]] return; }
L_0026AF64:
    st32((c.r[16].w[0] + 252u), 0u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF74u); st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0026AF74u) [[unlikely]] return; }
L_0026AF74:
    st32((c.r[16].w[0] + 184u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026AF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026AFA0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 248u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026AFF4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0026B028; } }
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026B024; } }
L_0026AFF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 252u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B024; } }
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 248u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0026B024:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_0026B028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B030u);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0026B030u) [[unlikely]] return; }
L_0026B030:
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[18], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B050u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B050u) [[unlikely]] return; }
L_0026B050:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 20800u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B09Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B09Cu) [[unlikely]] return; }
L_0026B09C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 32416u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0D4u); st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0026B0D4u) [[unlikely]] return; }
L_0026B0D4:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B0F4u); set32(c.r[5], c.r[29].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B0F4u) [[unlikely]] return; }
L_0026B0F4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B104u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B104u) [[unlikely]] return; }
L_0026B104:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 26392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 20784u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[20], ld32((c.r[5].w[0] + 224u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 228u)));
    set32(c.r[17], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B13Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B13Cu) [[unlikely]] return; }
L_0026B13C:
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 255u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 304u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[4].w[0]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026B190; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B190:
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[20].w[0] + 60u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 300u), c.r[17].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 32408u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0026B4E0; } }
L_0026B1BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[17], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026B1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B1DCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B1DCu) [[unlikely]] return; }
L_0026B1DC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0026B218; } }
L_0026B1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B200u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B200u) [[unlikely]] return; }
L_0026B200:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 6;
L_0026B218:
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 212u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026B3F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B238u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0026B238u) [[unlikely]] return; }
L_0026B238:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B254u); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B254u) [[unlikely]] return; }
L_0026B254:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0026B2C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B280u); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B280u) [[unlikely]] return; }
L_0026B280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] + 32400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B2ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B2ACu) [[unlikely]] return; }
L_0026B2AC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B2BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B2BCu) [[unlikely]] return; }
L_0026B2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 180u));  if (t) { goto L_0026B308; } }
L_0026B2C4:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B2E4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B2E4u) [[unlikely]] return; }
L_0026B2E4:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B304u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B304u) [[unlikely]] return; }
L_0026B304:
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 1;
L_0026B308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 32392u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B33Cu); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B33Cu) [[unlikely]] return; }
L_0026B33C:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0026B3AC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B368u); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B368u) [[unlikely]] return; }
L_0026B368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] + 32400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B394u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B394u) [[unlikely]] return; }
L_0026B394:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3A4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B3A4u) [[unlikely]] return; }
L_0026B3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 180u));  if (t) { goto L_0026B4CC; } }
L_0026B3AC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3CCu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B3CCu) [[unlikely]] return; }
L_0026B3CC:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3ECu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B3ECu) [[unlikely]] return; }
L_0026B3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B4C8; } }
L_0026B3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3FCu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0026B3FCu) [[unlikely]] return; }
L_0026B3FC:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B418u); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B418u) [[unlikely]] return; }
L_0026B418:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0026B488; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 352u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B444u); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B444u) [[unlikely]] return; }
L_0026B444:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[1].w[0] + 32400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B470u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B470u) [[unlikely]] return; }
L_0026B470:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B480u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B480u) [[unlikely]] return; }
L_0026B480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B4C8; } }
L_0026B488:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4A8u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B4A8u) [[unlikely]] return; }
L_0026B4A8:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4C8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B4C8u) [[unlikely]] return; }
L_0026B4C8:
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 1;
L_0026B4CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.budget -= 5;
L_0026B4E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B1BCu | kUnwind; return; } goto L_0026B1BC; } }
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 440u)));
    set32(c.r[18], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B510u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B510u) [[unlikely]] return; }
L_0026B510:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 20768u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B55Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B55Cu) [[unlikely]] return; }
L_0026B55C:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5A8u); set32(c.r[5], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B5A8u) [[unlikely]] return; }
L_0026B5A8:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B5B8u) [[unlikely]] return; }
L_0026B5B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 440u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B5CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B5CCu) [[unlikely]] return; }
L_0026B5CC:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 20752u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.r[6].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B618u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0026B618u) [[unlikely]] return; }
L_0026B618:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[16].w[0] + 264u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 32408u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32408u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B674u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B674u) [[unlikely]] return; }
L_0026B674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B67Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026B67Cu) [[unlikely]] return; }
L_0026B67C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[2], 0u + 15u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B6B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B69Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0026B69Cu) [[unlikely]] return; }
L_0026B69C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25576u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B6C4; } }
L_0026B6B4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B6C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B6C4u) [[unlikely]] return; }
L_0026B6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 20736u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[3], c.r[3].w[0] - 20720u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st128((c.r[5].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[16].w[0] + 328u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B708u) [[unlikely]] return; }
L_0026B708:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B718u) [[unlikely]] return; }
L_0026B718:
    set32(c.r[2], c.r[16].w[0] + 456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B738u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B738u) [[unlikely]] return; }
L_0026B738:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B748u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B748u) [[unlikely]] return; }
L_0026B748:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026B824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 20704u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B790u) [[unlikely]] return; }
L_0026B790:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x63500000u);
    c.r[4].d[0] = c.r[2].d[0] | 20566ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7A4u); st32((c.r[3].w[0] + 60u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x0026B7A4u) [[unlikely]] return; }
L_0026B7A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B7B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x0026B7B0u) [[unlikely]] return; }
L_0026B7B0:
    st64((c.r[29].w[0] + 216u), c.r[2].d[0]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[6].w[0] + 256u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    st64((c.r[4].w[0]), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 211u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[2].d[0] = c.r[2].d[0] << 30;
    c.r[2].d[0] = c.r[2].d[0] >> 60;
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 164u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B824u) [[unlikely]] return; }
L_0026B824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0026B850:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E500u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 304u, depth); }
L_0026B860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AD80u | kUnwind; return; } goto L_0026AD80; }
L_0026B870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AAC0u | kUnwind; return; } goto L_0026AAC0; }
L_0026B880:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AFA0u | kUnwind; return; } goto L_0026AFA0; }
L_0026B890:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AAC0u | kUnwind; return; } goto L_0026AAC0; }
L_0026B8A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B850u | kUnwind; return; } goto L_0026B850; }
L_0026B8B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AAC0u | kUnwind; return; } goto L_0026AAC0; }
L_0026B8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8F4u); st32((c.r[4].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_005A(c, 402u, depth + 1u); else { c.pc = 0x0026B980u; return; } if (c.pc != 0x0026B8F4u) [[unlikely]] return; }
L_0026B8F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[1].w[0] + 32456u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B91Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005A(c, 403u, depth + 1u); else { c.pc = 0x0026B990u; return; } if (c.pc != 0x0026B91Cu) [[unlikely]] return; }
L_0026B91C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026B930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026B96C; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 1456u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0026B968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B968u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0026B968u) [[unlikely]] return; }
L_0026B968:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026B96C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026B980:
    st32((c.r[4].w[0] + 8u), c.f[12]);
    st32((c.r[4].w[0] + 16u), c.f[14]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.f[13]);  c.pc = t; return; }
L_0026B990:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), 0u);  c.pc = t; return; }
L_0026B9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = fp::sub(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[12];  if (t) { goto L_0026B9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[20];  if (t) { goto L_0026B9F4; } }
L_0026B9F0:
    c.f[4] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_0026B9F4:
    st32((c.r[29].w[0] + 76u), c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = 0u;
    c.f[3] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BA24; } }
L_0026BA20:
    c.f[3] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_0026BA24:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0026BB50; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[1].w[0] + 32448u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BA6C; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 12u), c.f[4]);  if (t) { goto L_0026BA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[2]);  if (t) { goto L_0026BA7C; } }
L_0026BA60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0026BA7C; } }
L_0026BA6C:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 4;
L_0026BA7C:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BA94; } }
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 1;
L_0026BA94:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BAB0; } }
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_0026BAB0:
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 32440u));
    c.f[22] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BAD0; } }
    c.f[22] = 0u;
    c.budget -= 1;
L_0026BAD0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BB0C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_0026BB04; } }
    c.f[12] = c.f[20] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAFCu); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_005A(c, 417u, depth + 1u); else { c.pc = 0x0026BE70u; return; } if (c.pc != 0x0026BAFCu) [[unlikely]] return; }
L_0026BAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026BB0C; } }
L_0026BB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB0Cu); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_005A(c, 417u, depth + 1u); else { c.pc = 0x0026BE70u; return; } if (c.pc != 0x0026BB0Cu) [[unlikely]] return; }
L_0026BB0C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = c.f[20];  if (t) { goto L_0026BB44; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BB50; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BB50; } }
    c.f[12] = c.f[20];
    c.budget -= 1;
L_0026BB44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB50u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_005A(c, 416u, depth + 1u); else { c.pc = 0x0026BC70u; return; } if (c.pc != 0x0026BB50u) [[unlikely]] return; }
L_0026BB50:
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 20u), c.f[2]);  if (t) { goto L_0026BB80; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { goto L_0026BB98; } }
L_0026BB80:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::add(c.f[2], c.f[1]);  if (t) { goto L_0026BB98; } }
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 1;
L_0026BB98:
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 44u), c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[21]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[1].w[0] + 32432u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBE8u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0026BBE8u) [[unlikely]] return; }
L_0026BBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x00119DC0u; return; } if (c.pc != 0x0026BBF0u) [[unlikely]] return; }
L_0026BBF0:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBFCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0026BBFCu) [[unlikely]] return; }
L_0026BBFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0026BC08u) [[unlikely]] return; }
L_0026BC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011D080u; return; } if (c.pc != 0x0026BC10u) [[unlikely]] return; }
L_0026BC10:
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC2Cu);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0026BC2Cu) [[unlikely]] return; }
L_0026BC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC34u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 215u, depth + 1u); else { c.pc = 0x0011A578u; return; } if (c.pc != 0x0026BC34u) [[unlikely]] return; }
L_0026BC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011D080u; return; } if (c.pc != 0x0026BC3Cu) [[unlikely]] return; }
L_0026BC3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 32424u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026BC70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_0026BC88; } }
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 3;
L_0026BC88:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BD7C; } }
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);  if (t) { goto L_0026BCCC; } }
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BD2C; } }
L_0026BCCC:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43820000u);  if (t) { goto L_0026BD1C; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BD1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_0026BE58; } }
L_0026BD1C:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_0026BE58; } }
L_0026BD2C:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);  if (t) { goto L_0026BD6C; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_0026BE58; } }
L_0026BD6C:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_0026BE58; } }
L_0026BD7C:
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);  if (t) { goto L_0026BDAC; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BE0C; } }
L_0026BDAC:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_0026BDFC; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_0026BE58; } }
L_0026BDFC:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_0026BE58; } }
L_0026BE0C:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 28u));
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);  if (t) { goto L_0026BE4C; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[1]);  if (t) { goto L_0026BE58; } }
L_0026BE4C:
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 3;
L_0026BE58:
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.f[0]);  c.pc = t; return; }
L_0026BE70:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026BF1C; } }
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_0026BEC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BEC4; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0026BFA8; } }
L_0026BEC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.budget -= 1;
L_0026BEC8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);  if (t) { goto L_0026BFA8; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].sd[0] = static_cast<std::int32_t>(0x44070000u);  if (t) { goto L_0026BFA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[1]);  if (t) { goto L_0026BFA8; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0026BFA8; } }
L_0026BF1C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026BFA8; } }
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43870000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);  if (t) { goto L_0026BF84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44070000u);  if (t) { goto L_0026BF80; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0026BFA8; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0026BFA8; } }
L_0026BF80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.budget -= 1;
L_0026BF84:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_0026BFA8; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 4;
L_0026BFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026BFB0:
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 20u);  if (t) { goto L_0026BFF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);  if (t) { goto L_0026BFF4; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { [[clang::musttail]] return unit_005B(c, 2u, depth); } }
L_0026BFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.budget -= 1;
L_0026BFF4:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 3;
    [[clang::musttail]] return unit_005B(c, 1u, depth);
}

}
