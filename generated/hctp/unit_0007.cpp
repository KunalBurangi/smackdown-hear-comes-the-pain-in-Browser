#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0007[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0,
    125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0007(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0011C000;
    case 2u: goto L_0011C008;
    case 3u: goto L_0011C020;
    case 4u: goto L_0011C044;
    case 5u: goto L_0011C060;
    case 6u: goto L_0011C06C;
    case 7u: goto L_0011C088;
    case 8u: goto L_0011C098;
    case 9u: goto L_0011C0A8;
    case 10u: goto L_0011C0B8;
    case 11u: goto L_0011C0D0;
    case 12u: goto L_0011C0EC;
    case 13u: goto L_0011C0F8;
    case 14u: goto L_0011C110;
    case 15u: goto L_0011C138;
    case 16u: goto L_0011C15C;
    case 17u: goto L_0011C178;
    case 18u: goto L_0011C184;
    case 19u: goto L_0011C1B0;
    case 20u: goto L_0011C1CC;
    case 21u: goto L_0011C1E0;
    case 22u: goto L_0011C1FC;
    case 23u: goto L_0011C208;
    case 24u: goto L_0011C224;
    case 25u: goto L_0011C238;
    case 26u: goto L_0011C248;
    case 27u: goto L_0011C258;
    case 28u: goto L_0011C270;
    case 29u: goto L_0011C28C;
    case 30u: goto L_0011C298;
    case 31u: goto L_0011C2B0;
    case 32u: goto L_0011C2D8;
    case 33u: goto L_0011C3A8;
    case 34u: goto L_0011C408;
    case 35u: goto L_0011C428;
    case 36u: goto L_0011C438;
    case 37u: goto L_0011C450;
    case 38u: goto L_0011C468;
    case 39u: goto L_0011C478;
    case 40u: goto L_0011C590;
    case 41u: goto L_0011C640;
    case 42u: goto L_0011C738;
    case 43u: goto L_0011C768;
    case 44u: goto L_0011C810;
    case 45u: goto L_0011C8A0;
    case 46u: goto L_0011C8C0;
    case 47u: goto L_0011C8D0;
    case 48u: goto L_0011C8E0;
    case 49u: goto L_0011C8E8;
    case 50u: goto L_0011C8F8;
    case 51u: goto L_0011C918;
    case 52u: goto L_0011C928;
    case 53u: goto L_0011C944;
    case 54u: goto L_0011C94C;
    case 55u: goto L_0011C960;
    case 56u: goto L_0011C998;
    case 57u: goto L_0011C9A8;
    case 58u: goto L_0011CA80;
    case 59u: goto L_0011CA90;
    case 60u: goto L_0011CAA0;
    case 61u: goto L_0011CAB4;
    case 62u: goto L_0011CB28;
    case 63u: goto L_0011CB80;
    case 64u: goto L_0011CBE4;
    case 65u: goto L_0011CC10;
    case 66u: goto L_0011CC30;
    case 67u: goto L_0011CC40;
    case 68u: goto L_0011CD10;
    case 69u: goto L_0011CD74;
    case 70u: goto L_0011CD88;
    case 71u: goto L_0011CEA8;
    case 72u: goto L_0011CEC8;
    case 73u: goto L_0011CED8;
    case 74u: goto L_0011CEE4;
    case 75u: goto L_0011CEF8;
    case 76u: goto L_0011CF78;
    case 77u: goto L_0011CFA4;
    case 78u: goto L_0011CFB0;
    case 79u: goto L_0011CFC8;
    case 80u: goto L_0011D050;
    case 81u: goto L_0011D070;
    case 82u: goto L_0011D080;
    case 83u: goto L_0011D098;
    case 84u: goto L_0011D0C8;
    case 85u: goto L_0011D0D8;
    case 86u: goto L_0011D0F0;
    case 87u: goto L_0011D178;
    case 88u: goto L_0011D188;
    case 89u: goto L_0011D1A0;
    case 90u: goto L_0011D1CC;
    case 91u: goto L_0011D1E4;
    case 92u: goto L_0011D1EC;
    case 93u: goto L_0011D1F4;
    case 94u: goto L_0011D208;
    case 95u: goto L_0011D224;
    case 96u: goto L_0011D234;
    case 97u: goto L_0011D258;
    case 98u: goto L_0011D270;
    case 99u: goto L_0011D2C4;
    case 100u: goto L_0011D2EC;
    case 101u: goto L_0011D310;
    case 102u: goto L_0011D360;
    case 103u: goto L_0011D368;
    case 104u: goto L_0011D390;
    case 105u: goto L_0011D3A8;
    case 106u: goto L_0011D3D0;
    case 107u: goto L_0011D3E0;
    case 108u: goto L_0011D420;
    case 109u: goto L_0011D438;
    case 110u: goto L_0011D464;
    case 111u: goto L_0011D474;
    case 112u: goto L_0011D488;
    case 113u: goto L_0011D4B0;
    case 114u: goto L_0011D4E0;
    case 115u: goto L_0011D538;
    case 116u: goto L_0011D568;
    case 117u: goto L_0011D5D0;
    case 118u: goto L_0011D5DC;
    case 119u: goto L_0011D5E8;
    case 120u: goto L_0011D5F8;
    case 121u: goto L_0011D620;
    case 122u: goto L_0011D650;
    case 123u: goto L_0011D668;
    case 124u: goto L_0011D674;
    case 125u: goto L_0011D680;
    case 126u: goto L_0011D688;
    case 127u: goto L_0011D690;
    case 128u: goto L_0011D6A0;
    case 129u: goto L_0011D6C0;
    case 130u: goto L_0011D6F0;
    case 131u: goto L_0011D6F8;
    case 132u: goto L_0011D724;
    case 133u: goto L_0011D740;
    case 134u: goto L_0011D780;
    case 135u: goto L_0011D798;
    case 136u: goto L_0011D7BC;
    case 137u: goto L_0011D7D8;
    case 138u: goto L_0011D7E8;
    case 139u: goto L_0011D810;
    case 140u: goto L_0011D850;
    case 141u: goto L_0011D85C;
    case 142u: goto L_0011D888;
    case 143u: goto L_0011D890;
    case 144u: goto L_0011D8A0;
    case 145u: goto L_0011D8C0;
    case 146u: goto L_0011D8C8;
    case 147u: goto L_0011D8E8;
    case 148u: goto L_0011D8FC;
    case 149u: goto L_0011D91C;
    case 150u: goto L_0011D928;
    case 151u: goto L_0011D988;
    case 152u: goto L_0011D9DC;
    case 153u: goto L_0011D9F8;
    case 154u: goto L_0011DA20;
    case 155u: goto L_0011DA34;
    case 156u: goto L_0011DAA8;
    case 157u: goto L_0011DAC0;
    case 158u: goto L_0011DAD8;
    case 159u: goto L_0011DAF0;
    case 160u: goto L_0011DB28;
    case 161u: goto L_0011DB38;
    case 162u: goto L_0011DB48;
    case 163u: goto L_0011DB68;
    case 164u: goto L_0011DB74;
    case 165u: goto L_0011DBA0;
    case 166u: goto L_0011DBC4;
    case 167u: goto L_0011DBCC;
    case 168u: goto L_0011DBE0;
    case 169u: goto L_0011DBF0;
    case 170u: goto L_0011DC08;
    case 171u: goto L_0011DC10;
    case 172u: goto L_0011DC30;
    case 173u: goto L_0011DC44;
    case 174u: goto L_0011DC68;
    case 175u: goto L_0011DC70;
    case 176u: goto L_0011DCB8;
    case 177u: goto L_0011DCCC;
    case 178u: goto L_0011DD0C;
    case 179u: goto L_0011DD20;
    case 180u: goto L_0011DD3C;
    case 181u: goto L_0011DD50;
    case 182u: goto L_0011DD7C;
    case 183u: goto L_0011DD88;
    case 184u: goto L_0011DD90;
    case 185u: goto L_0011DDA4;
    case 186u: goto L_0011DDD0;
    case 187u: goto L_0011DDF0;
    case 188u: goto L_0011DE18;
    case 189u: goto L_0011DE20;
    case 190u: goto L_0011DE28;
    case 191u: goto L_0011DE30;
    case 192u: goto L_0011DE4C;
    case 193u: goto L_0011DE60;
    case 194u: goto L_0011DE80;
    case 195u: goto L_0011DE8C;
    case 196u: goto L_0011DEB8;
    case 197u: goto L_0011DEDC;
    case 198u: goto L_0011DEE4;
    case 199u: goto L_0011DEF8;
    case 200u: goto L_0011DF08;
    case 201u: goto L_0011DF20;
    case 202u: goto L_0011DF28;
    case 203u: goto L_0011DF48;
    case 204u: goto L_0011DF5C;
    case 205u: goto L_0011DF80;
    case 206u: goto L_0011DF88;
    case 207u: goto L_0011DFD0;
    case 208u: goto L_0011E080;
    case 209u: goto L_0011E0B8;
    case 210u: goto L_0011E0CC;
    case 211u: goto L_0011E0D4;
    case 212u: goto L_0011E148;
    case 213u: goto L_0011E15C;
    case 214u: goto L_0011E17C;
    case 215u: goto L_0011E188;
    case 216u: goto L_0011E1C4;
    case 217u: goto L_0011E1F0;
    case 218u: goto L_0011E210;
    case 219u: goto L_0011E2F0;
    case 220u: goto L_0011E2F8;
    case 221u: goto L_0011E324;
    case 222u: goto L_0011E32C;
    case 223u: goto L_0011E360;
    case 224u: goto L_0011E3A4;
    case 225u: goto L_0011E3AC;
    case 226u: goto L_0011E3B8;
    case 227u: goto L_0011E3CC;
    case 228u: goto L_0011E3DC;
    case 229u: goto L_0011E3F8;
    case 230u: goto L_0011E400;
    case 231u: goto L_0011E420;
    case 232u: goto L_0011E434;
    case 233u: goto L_0011E454;
    case 234u: goto L_0011E460;
    case 235u: goto L_0011E4B0;
    case 236u: goto L_0011E4DC;
    case 237u: goto L_0011E4F0;
    case 238u: goto L_0011E514;
    case 239u: goto L_0011E528;
    case 240u: goto L_0011E558;
    case 241u: goto L_0011E598;
    case 242u: goto L_0011E5A0;
    case 243u: goto L_0011E5AC;
    case 244u: goto L_0011E5C4;
    case 245u: goto L_0011E5D8;
    case 246u: goto L_0011E5E8;
    case 247u: goto L_0011E60C;
    case 248u: goto L_0011E620;
    case 249u: goto L_0011E640;
    case 250u: goto L_0011E648;
    case 251u: goto L_0011E698;
    case 252u: goto L_0011E6C8;
    case 253u: goto L_0011E6DC;
    case 254u: goto L_0011E6FC;
    case 255u: goto L_0011E704;
    case 256u: goto L_0011E71C;
    case 257u: goto L_0011E730;
    case 258u: goto L_0011E760;
    case 259u: goto L_0011E7B0;
    case 260u: goto L_0011E7C4;
    case 261u: goto L_0011E85C;
    case 262u: goto L_0011E870;
    case 263u: goto L_0011E87C;
    case 264u: goto L_0011E888;
    case 265u: goto L_0011E89C;
    case 266u: goto L_0011E8E0;
    case 267u: goto L_0011E8FC;
    case 268u: goto L_0011E918;
    case 269u: goto L_0011E940;
    case 270u: goto L_0011E960;
    case 271u: goto L_0011E974;
    case 272u: goto L_0011E98C;
    case 273u: goto L_0011E9D4;
    case 274u: goto L_0011E9F0;
    case 275u: goto L_0011EA10;
    case 276u: goto L_0011EA24;
    case 277u: goto L_0011EA64;
    case 278u: goto L_0011EA78;
    case 279u: goto L_0011EA94;
    case 280u: goto L_0011EAA8;
    case 281u: goto L_0011EABC;
    case 282u: goto L_0011EAFC;
    case 283u: goto L_0011EB10;
    case 284u: goto L_0011EB2C;
    case 285u: goto L_0011EB40;
    case 286u: goto L_0011EB58;
    case 287u: goto L_0011EBA4;
    case 288u: goto L_0011EBB8;
    case 289u: goto L_0011EBE0;
    case 290u: goto L_0011EBF8;
    case 291u: goto L_0011EC20;
    case 292u: goto L_0011EC3C;
    case 293u: goto L_0011EC7C;
    case 294u: goto L_0011EC90;
    case 295u: goto L_0011ECAC;
    case 296u: goto L_0011ECC8;
    case 297u: goto L_0011ECEC;
    case 298u: goto L_0011ED10;
    case 299u: goto L_0011ED44;
    case 300u: goto L_0011ED58;
    case 301u: goto L_0011ED8C;
    case 302u: goto L_0011EDA0;
    case 303u: goto L_0011EDC0;
    case 304u: goto L_0011EE18;
    case 305u: goto L_0011EE64;
    case 306u: goto L_0011EE84;
    case 307u: goto L_0011EEA8;
    case 308u: goto L_0011EED8;
    case 309u: goto L_0011EF08;
    case 310u: goto L_0011EF10;
    case 311u: goto L_0011EF44;
    case 312u: goto L_0011EF60;
    case 313u: goto L_0011EF68;
    case 314u: goto L_0011EF98;
    case 315u: goto L_0011EFAC;
    case 316u: goto L_0011EFD4;
    case 317u: goto L_0011EFF0;
    case 318u: goto L_0011F000;
    case 319u: goto L_0011F018;
    case 320u: goto L_0011F038;
    case 321u: goto L_0011F080;
    case 322u: goto L_0011F098;
    case 323u: goto L_0011F0B8;
    case 324u: goto L_0011F100;
    case 325u: goto L_0011F138;
    case 326u: goto L_0011F194;
    case 327u: goto L_0011F1EC;
    case 328u: goto L_0011F208;
    case 329u: goto L_0011F22C;
    case 330u: goto L_0011F27C;
    case 331u: goto L_0011F320;
    case 332u: goto L_0011F3B0;
    case 333u: goto L_0011F3D8;
    case 334u: goto L_0011F414;
    case 335u: goto L_0011F438;
    case 336u: goto L_0011F478;
    case 337u: goto L_0011F488;
    case 338u: goto L_0011F4E8;
    case 339u: goto L_0011F4FC;
    case 340u: goto L_0011F510;
    case 341u: goto L_0011F570;
    case 342u: goto L_0011F5B4;
    case 343u: goto L_0011F5C8;
    case 344u: goto L_0011F5F0;
    case 345u: goto L_0011F630;
    case 346u: goto L_0011F668;
    case 347u: goto L_0011F6A0;
    case 348u: goto L_0011F6EC;
    case 349u: goto L_0011F708;
    case 350u: goto L_0011F748;
    case 351u: goto L_0011F758;
    case 352u: goto L_0011F790;
    case 353u: goto L_0011F7DC;
    case 354u: goto L_0011F8B0;
    case 355u: goto L_0011F8FC;
    case 356u: goto L_0011F9D0;
    case 357u: goto L_0011FA1C;
    case 358u: goto L_0011FB08;
    case 359u: goto L_0011FB70;
    case 360u: goto L_0011FB9C;
    case 361u: goto L_0011FBC0;
    case 362u: goto L_0011FBE4;
    case 363u: goto L_0011FC20;
    case 364u: goto L_0011FC5C;
    case 365u: goto L_0011FC80;
    case 366u: goto L_0011FCC0;
    case 367u: goto L_0011FD0C;
    case 368u: goto L_0011FD38;
    case 369u: goto L_0011FD58;
    case 370u: goto L_0011FD98;
    case 371u: goto L_0011FE10;
    case 372u: goto L_0011FE74;
    case 373u: goto L_0011FEA0;
    case 374u: goto L_0011FEC0;
    case 375u: goto L_0011FF00;
    case 376u: goto L_0011FF20;
    case 377u: goto L_0011FF68;
    case 378u: goto L_0011FF78;
    case 379u: goto L_0011FFC0;
    case 380u: goto L_0011FFD0;
    default: bad_entry(c, 0x0011C000u); return;
    }
L_0011C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C008u);  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0011D080u; return; } if (c.pc != 0x0011C008u) [[unlikely]] return; }
L_0011C008:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C044u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0011C044u) [[unlikely]] return; }
L_0011C044:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 63424ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011C120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C060u);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011C060u) [[unlikely]] return; }
L_0011C060:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C06Cu);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C06Cu) [[unlikely]] return; }
L_0011C06C:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[16].d[0] >> 1;
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0011C090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0011BE90u; return; } if (c.pc != 0x0011C088u) [[unlikely]] return; }
L_0011C088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C0A8; } }
L_0011C090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C098u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0011BE90u; return; } if (c.pc != 0x0011C098u) [[unlikely]] return; }
L_0011C098:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0A8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011C0A8u) [[unlikely]] return; }
L_0011C0A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0B8u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011C0B8u) [[unlikely]] return; }
L_0011C0B8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0D0u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0011C0D0u) [[unlikely]] return; }
L_0011C0D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0011C108; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0ECu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011C0ECu) [[unlikely]] return; }
L_0011C0EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C0F8u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C0F8u) [[unlikely]] return; }
L_0011C0F8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] - c.r[2].d[0];  if (t) { goto L_0011C11C; } }
L_0011C108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C110u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C110u) [[unlikely]] return; }
L_0011C110:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_0011C11C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011C120:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C138:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C15Cu);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0011C15Cu) [[unlikely]] return; }
L_0011C15C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0011C1A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C178u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011C178u) [[unlikely]] return; }
L_0011C178:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C184u);  if (depth < kMaxDepth) unit_0007(c, 3u, depth + 1u); else { c.pc = 0x0011C020u; return; } if (c.pc != 0x0011C184u) [[unlikely]] return; }
L_0011C184:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull - c.r[2].d[0];
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C1A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C020u | kUnwind; return; } goto L_0011C020; }
L_0011C1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1CCu);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0011C1CCu) [[unlikely]] return; }
L_0011C1CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1E0u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0011C1E0u) [[unlikely]] return; }
L_0011C1E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 63424ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011C2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C1FCu);  if (depth < kMaxDepth) unit_0007(c, 55u, depth + 1u); else { c.pc = 0x0011C960u; return; } if (c.pc != 0x0011C1FCu) [[unlikely]] return; }
L_0011C1FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C208u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C208u) [[unlikely]] return; }
L_0011C208:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[16].d[0] >> 1;
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0; c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_0011C230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C224u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0011BE90u; return; } if (c.pc != 0x0011C224u) [[unlikely]] return; }
L_0011C224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C248; } }
    c.budget -= 1;
L_0011C230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C238u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0011BE90u; return; } if (c.pc != 0x0011C238u) [[unlikely]] return; }
L_0011C238:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C248u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C8A0u; return; } if (c.pc != 0x0011C248u) [[unlikely]] return; }
L_0011C248:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C258u);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011C258u) [[unlikely]] return; }
L_0011C258:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C270u);  if (depth < kMaxDepth) unit_0007(c, 71u, depth + 1u); else { c.pc = 0x0011CEA8u; return; } if (c.pc != 0x0011C270u) [[unlikely]] return; }
L_0011C270:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0011C2A8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C28Cu);  if (depth < kMaxDepth) unit_0007(c, 50u, depth + 1u); else { c.pc = 0x0011C8F8u; return; } if (c.pc != 0x0011C28Cu) [[unlikely]] return; }
L_0011C28C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C298u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C298u) [[unlikely]] return; }
L_0011C298:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] - c.r[2].d[0];  if (t) { goto L_0011C2BC; } }
L_0011C2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C2B0u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011D0D8u; return; } if (c.pc != 0x0011C2B0u) [[unlikely]] return; }
L_0011C2B0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_0011C2BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011C2C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C2D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0011C318; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0011C35C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0011C358; }
    c.r[2].d[0] = c.r[4].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 127ull;  goto L_0011C320; }
    set32(c.r[7], 0u + 255u);
    c.budget -= 1;
L_0011C318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011C358; } }
L_0011C320:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[4].w[0] + 127u);  if (t) { goto L_0011C340; } }
    c.r[2].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 64u);  goto L_0011C344; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C344; } }
L_0011C340:
    set32(c.r[5], c.r[5].w[0] + 63u);
    c.budget -= 1;
L_0011C344:
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] >> 7);  goto L_0011C358; }
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] >> 7);
    c.budget -= 3;
L_0011C358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_0011C35C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x807F0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[8].w[0] << 31);
    set32(c.r[4], c.r[4].w[0] << 23);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C3A8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] >> 23);
    set32(c.r[5], c.r[3].w[0] >> 31);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] - 127u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] << 7);  if (t) { goto L_0011C3E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0011C3E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_0011C408:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C428u); st32((c.r[29].w[0] + 12u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0007(c, 32u, depth + 1u); else { c.pc = 0x0011C2D8u; return; } if (c.pc != 0x0011C428u) [[unlikely]] return; }
L_0011C428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011C438:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C450u); st32((c.r[29].w[0] + 16u), c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 33u, depth + 1u); else { c.pc = 0x0011C3A8u; return; } if (c.pc != 0x0011C450u) [[unlikely]] return; }
L_0011C450:
    c.r[7].d[0] = ld32((c.r[29].w[0] + 12u));
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[7].d[0] = c.r[7].d[0] << 30;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C468u); set32(c.r[6], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_0007(c, 80u, depth + 1u); else { c.pc = 0x0011D050u; return; } if (c.pc != 0x0011C468u) [[unlikely]] return; }
L_0011C468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011C478:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0011C4A8; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 36;
    set32(c.r[7], 0u + 2047u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];  if (t) { goto L_0011C534; } }
    c.budget -= 1;
L_0011C4A8:
    c.r[2].d[0] = c.r[3].d[0] ^ 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], 0u + 2047u);  goto L_0011C4E8; }
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0011C534; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0011C534; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0011C534; }
    c.r[2].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_0011C4F0; }
    set32(c.r[7], 0u + 2047u);
    c.budget -= 1;
L_0011C4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0011C534; } }
L_0011C4F0:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[4].w[0] + 1023u);  if (t) { goto L_0011C510; } }
    c.r[2].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(128ll);  goto L_0011C514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C514; } }
L_0011C510:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(127ll);
    c.budget -= 1;
L_0011C514:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[5].d[0] >> 8;  goto L_0011C534; }
    c.r[5].d[0] = c.r[5].d[0] >> 1;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 8;
    c.budget -= 3;
L_0011C534:
    c.r[3].d[0] = 0ull | 65520ull;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 12;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x800F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & 2047ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 52;
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[8].d[0] << 63;
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0011C590:
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 12;
    c.r[3].d[0] = c.r[2].d[0] >> 52;
    c.r[4].d[0] = c.r[2].d[0] >> 63;
    c.r[7].d[0] = c.r[3].d[0] & 2047ull;
    c.r[3].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[6].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0011C5C8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0011C5C8:
    set32(c.r[2], 0u + 2047u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[2].d[0]) { c.r[3].d[0] = c.r[3].d[0] << 8;  goto L_0011C618; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0011C5E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0011C5E8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 36;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011C608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0011C60C; } }
    c.budget -= 1;
L_0011C608:
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_0011C60C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[6].w[0] + 16u), c.r[3].d[0]);  c.pc = t; return; }
L_0011C618:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[7].w[0] - 1023u);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_0011C640:
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[11].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_0011C894; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011C894; } }
    c.r[2].d[0] = c.r[7].d[0] ^ 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] ^ 4ull;  if (t) { goto L_0011C698; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011C6E8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[11].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0011C6E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 20016u);  c.pc = t; return; }
L_0011C698:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011C894; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] ^ 2ull;  if (t) { goto L_0011C6F0; } }
    c.r[2].d[0] = c.r[7].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011C6E8; } }
    c.r[4].d[0] = ld64((c.r[11].w[0]));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[6].w[0]), c.r[4].d[0]);
    c.r[3].d[0] = ld64((c.r[11].w[0] + 8u));
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    c.r[4].d[0] = ld64((c.r[11].w[0] + 16u));
    st64((c.r[6].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[3], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0011C6E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[11].d[0] + 0ull;  c.pc = t; return; }
L_0011C6F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0011C894; } }
    set32(c.r[8], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    c.r[10].d[0] = ld64((c.r[11].w[0] + 16u));
    set32(c.r[2], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[4], 0u - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = ld64((c.r[5].w[0] + 16u));  if (t) { goto L_0011C790; } }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  if (t) { goto L_0011C75C; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.budget -= 3;
L_0011C738:
    c.r[3].d[0] = c.r[9].d[0] >> 1;
    c.r[2].d[0] = c.r[9].d[0] & c.r[4].d[0];
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; c.r[9].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C738u | kUnwind; return; } goto L_0011C738; } }
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0011C75C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[11].w[0] + 4u)));  goto L_0011C7B0; }
    set32(c.r[12], 0u + 1u);
    c.budget -= 1;
L_0011C768:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[10].d[0] >> 1;
    c.r[3].d[0] = c.r[10].d[0] & c.r[12].d[0];
    c.r[4].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[10].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C768u | kUnwind; return; } goto L_0011C768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[11].w[0] + 4u)));  if (t) { goto L_0011C7B0; } }
    c.budget -= 1;
L_0011C790:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = c.r[7].d[0] + 0ull;  goto L_0011C7A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0011C7AC; } }
    c.budget -= 1;
L_0011C7A8:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011C7AC:
    set32(c.r[4], ld32((c.r[11].w[0] + 4u)));
    c.budget -= 1;
L_0011C7B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[10].d[0] - c.r[9].d[0];  if (t) { goto L_0011C848; } }
    c.r[3].d[0] = c.r[9].d[0] - c.r[10].d[0];
    if (c.r[4].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { c.r[3].d[0] = 0ull - c.r[3].d[0];  goto L_0011C7E0; }
    st32((c.r[6].w[0] + 8u), c.r[8].w[0]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), 0u);  if (t) { goto L_0011C7F0; } }
    c.budget -= 1;
L_0011C7E0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[8].w[0]);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 4;
L_0011C7F0:
    c.r[7].d[0] = ld64((c.r[6].w[0] + 16u));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 5;
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    c.r[3].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011C85C; } }
L_0011C810:
    c.r[5].d[0] = c.r[7].d[0] << 1;
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 5;
    c.r[4].d[0] = c.r[4].d[0] >> 4;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[6].w[0] + 16u), c.r[5].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C810u | kUnwind; return; } goto L_0011C810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C85C; } }
L_0011C848:
    c.r[2].d[0] = c.r[10].d[0] + c.r[9].d[0];
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[8].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[6].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 5;
L_0011C85C:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_0011C890; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[4].d[0] = c.r[7].d[0] >> 1;
    c.r[3].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    st64((c.r[6].w[0] + 16u), c.r[3].d[0]);
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_0011C890:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_0011C894:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C8A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8C0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C8C0u) [[unlikely]] return; }
L_0011C8C0:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C8D0u) [[unlikely]] return; }
L_0011C8D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8E0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0007(c, 41u, depth + 1u); else { c.pc = 0x0011C640u; return; } if (c.pc != 0x0011C8E0u) [[unlikely]] return; }
L_0011C8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011C8E8u) [[unlikely]] return; }
L_0011C8E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011C8F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C918u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C918u) [[unlikely]] return; }
L_0011C918:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C928u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C928u) [[unlikely]] return; }
L_0011C928:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C944u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 41u, depth + 1u); else { c.pc = 0x0011C640u; return; } if (c.pc != 0x0011C944u) [[unlikely]] return; }
L_0011C944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C94Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011C94Cu) [[unlikely]] return; }
L_0011C94C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011C960:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C998u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C998u) [[unlikely]] return; }
L_0011C998:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C9A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011C9A8u) [[unlikely]] return; }
L_0011C9A8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0011CA14; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  goto L_0011CA3C; }
    c.r[2].d[0] = c.r[4].d[0] ^ 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 4ull;  if (t) { goto L_0011C9E8; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  goto L_0011CA14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011C9FC; } }
L_0011C9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] ^ 2ull;  if (t) { goto L_0011CA08; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 36u)));  goto L_0011CA3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 1;
L_0011C9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 20016u);  if (t) { goto L_0011CBDC; } }
    c.budget -= 1;
L_0011CA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 2ull;  if (t) { goto L_0011CA30; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0011CA14:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011CBDC; } }
    c.budget -= 1;
L_0011CA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011CA58; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_0011CA3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_0011CBDC; } }
    c.budget -= 1;
L_0011CA58:
    c.r[21].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = c.r[19].d[0] & c.r[21].d[0];
    c.r[19].d[0] = c.r[19].d[0] >> 32;
    c.r[22].d[0] = c.r[18].d[0] & c.r[21].d[0];
    c.r[18].d[0] = c.r[18].d[0] >> 32;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA80u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0011CA80u) [[unlikely]] return; }
L_0011CA80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA90u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0011CA90u) [[unlikely]] return; }
L_0011CA90:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CAA0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0011CAA0u) [[unlikely]] return; }
L_0011CAA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CAB4u); c.r[16].d[0] = c.r[17].d[0] + c.r[16].d[0];  if (depth < kMaxDepth) unit_0006(c, 221u, depth + 1u); else { c.pc = 0x0011A608u; return; } if (c.pc != 0x0011CAB4u) [[unlikely]] return; }
L_0011CAB4:
    c.r[17].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] >> 32;
    c.r[6].d[0] = c.r[20].d[0] + c.r[6].d[0];
    c.r[16].d[0] = c.r[16].d[0] & c.r[21].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[20].d[0] = c.r[6].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 40u)));
    c.r[17].d[0] = c.r[17].d[0] + c.r[20].d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.r[17].d[0] = c.r[17].d[0] + c.r[16].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.r[4].w[0]);  if (t) { goto L_0011CB54; } }
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 48;
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 3;
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 5;
L_0011CB28:
    c.r[17].d[0] = c.r[17].d[0] >> 1;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0011CB48; } }
    c.r[6].d[0] = c.r[6].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 2;
L_0011CB48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CB28u | kUnwind; return; } goto L_0011CB28; } }
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    c.budget -= 1;
L_0011CB54:
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0011CBA8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 48;
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 4;
    c.budget -= 6;
L_0011CB80:
    c.r[17].d[0] = c.r[17].d[0] << 1;
    c.r[3].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[17].d[0] | c.r[7].d[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[6].d[0] << 1;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CB80u | kUnwind; return; } goto L_0011CB80; } }
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_0011CBA8:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0011CBD0; } }
    c.r[2].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0011CBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0011CBCC; } }
L_0011CBC8:
    if (c.r[6].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_0011CBCC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0011CBD0:
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
L_0011CBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBE4u);  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011CBE4u) [[unlikely]] return; }
L_0011CBE4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0011CC10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC30u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011CC30u) [[unlikely]] return; }
L_0011CC30:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011CC40u) [[unlikely]] return; }
L_0011CC40:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0011CD6C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011CD6C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[6].d[0] ^ 4ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0011CC88; } }
    c.r[2].d[0] = c.r[6].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] ^ 4ull;  if (t) { goto L_0011CCA0; } }
L_0011CC88:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[5].d[0]) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  goto L_0011CD6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 20016u);  if (t) { goto L_0011CD6C; } }
    c.budget -= 1;
L_0011CCA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] ^ 2ull;  if (t) { goto L_0011CCB8; } }
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_0011CD6C; } }
L_0011CCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011CCD0; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_0011CD6C; } }
L_0011CCD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0011CCFC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 1;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0011CCFC:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 45;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011CD18; } }
    c.budget -= 1;
L_0011CD10:
    c.r[5].d[0] = c.r[4].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0011CD18:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] >> 1;  goto L_0011CD2C; }
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] - c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 1;
    c.budget -= 3;
L_0011CD2C:
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[4].d[0] << 1;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CD10u | kUnwind; return; } goto L_0011CD10; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st64((c.r[8].w[0] + 16u), c.r[6].d[0]);  goto L_0011CD68; }
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0011CD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(128ll);  if (t) { goto L_0011CD64; } }
    c.budget -= 1;
L_0011CD60:
    if (c.r[4].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_0011CD64:
    st64((c.r[8].w[0] + 16u), c.r[6].d[0]);
    c.budget -= 1;
L_0011CD68:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0011CD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD74u);  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011CD74u) [[unlikely]] return; }
L_0011CD74:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011CD88:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CDA8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] ^ 4ull;  goto L_0011CDB0; }
L_0011CDA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011CDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] ^ 4ull;  if (t) { goto L_0011CDD0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0011CE24; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_0011CDD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] ^ 2ull;  goto L_0011CDF0; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0011CDF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ 2ull;  goto L_0011CE18; }
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011CEA0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0011CE18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 4u)));  goto L_0011CE38; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0011CE24:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0011CE38:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0011CE7C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0011CE7C; }
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0011CE94; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;  goto L_0011CE88; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0011CE7C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[7].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0011CE88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011CEA0; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011CE94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[7].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  c.pc = t; return; }
L_0011CEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CEA8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CEC8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011CEC8u) [[unlikely]] return; }
L_0011CEC8:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CED8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011CED8u) [[unlikely]] return; }
L_0011CED8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CEE4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 70u, depth + 1u); else { c.pc = 0x0011CD88u; return; } if (c.pc != 0x0011CEE4u) [[unlikely]] return; }
L_0011CEE4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011CEF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[4].w[0] >> 31);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0011CF20; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_0011CF9C; } }
L_0011CF20:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0011CF50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = 0ull | 49632ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011CFA8; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (t) { goto L_0011CF54; } }
    c.budget -= 1;
L_0011CF50:
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.budget -= 1;
L_0011CF54:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0011CF9C; } }
    set32(c.r[6], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] >> 4;
    c.budget -= 3;
L_0011CF78:
    c.r[3].d[0] = c.r[4].d[0] << 1;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CF78u | kUnwind; return; } goto L_0011CF78; } }
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 2;
L_0011CF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFA4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011CFA4u) [[unlikely]] return; }
L_0011CFA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011CFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011CFB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFC8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011CFC8u) [[unlikely]] return; }
L_0011CFC8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[4].d[0] ^ 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_0011D040; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0011D044; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0011D00C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.r[3].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_0011D044; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_0011D020; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_0011D00C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  if (t) { goto L_0011D040; } }
L_0011D020:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] >> (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], 0u - c.r[2].w[0]);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 8;
L_0011D040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0011D044:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D070u); st64((c.r[29].w[0] + 16u), c.r[7].d[0]);  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0011C478u; return; } if (c.pc != 0x0011D070u) [[unlikely]] return; }
L_0011D070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011D080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D098u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011D098u) [[unlikely]] return; }
L_0011D098:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[2].d[0] << 2;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[3].d[0] | 1ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0C8u); if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0007(c, 34u, depth + 1u); else { c.pc = 0x0011C408u; return; } if (c.pc != 0x0011D0C8u) [[unlikely]] return; }
L_0011D0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D0D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0F0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 40u, depth + 1u); else { c.pc = 0x0011C590u; return; } if (c.pc != 0x0011D0F0u) [[unlikely]] return; }
L_0011D0F0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[4].d[0] ^ 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_0011D16C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0011D170; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] ^ 4ull;  if (t) { goto L_0011D170; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D170; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[3].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;  if (t) { goto L_0011D170; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011D170; } }
    c.r[2].d[0] = c.r[4].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_0011D158; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[4].w[0] - 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] << (c.r[3].w[0] & 63u);  if (t) { goto L_0011D164; } }
    c.budget -= 1;
L_0011D158:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> (c.r[3].w[0] & 63u);
    c.budget -= 3;
L_0011D164:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0011D16C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0011D170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D178:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D188u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0011D188u) [[unlikely]] return; }
L_0011D188:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011D1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011D1CCu) [[unlikely]] return; }
L_0011D1CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1E4u); set32(c.r[5], c.r[5].w[0] - 11912u);  if (depth < kMaxDepth) unit_0002(c, 420u, depth + 1u); else { c.pc = 0x0010B9A0u; return; } if (c.pc != 0x0011D1E4u) [[unlikely]] return; }
L_0011D1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011D1ECu) [[unlikely]] return; }
L_0011D1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011D1F4u) [[unlikely]] return; }
L_0011D1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011D208:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D224u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x0011D224u) [[unlikely]] return; }
L_0011D224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011D25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D234u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0011D234u) [[unlikely]] return; }
L_0011D234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 960u)));
    st32((c.r[3].w[0] + 960u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 964u), c.r[28].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011D25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D258u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0011D258u) [[unlikely]] return; }
L_0011D258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011D25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011D270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] - 17384u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 17384u)));
    st32((c.r[4].w[0] - 17380u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 17384u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011D2B8; } }
    st32((c.r[16].w[0] - 17384u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 17420u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011D304; } }
L_0011D2B8:
    set32(c.r[4], ld32((c.r[2].w[0] - 17432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2C4u);  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0011D2C4u) [[unlikely]] return; }
L_0011D2C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 17452u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011D2F4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 960u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011D2F4; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 17440u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2ECu);  if (depth < kMaxDepth) unit_0002(c, 506u, depth + 1u); else { c.pc = 0x0010BC50u; return; } if (c.pc != 0x0011D2ECu) [[unlikely]] return; }
L_0011D2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D2FC; } }
L_0011D2F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 17420u), 0u);
    c.budget -= 2;
L_0011D2FC:
    st32((c.r[16].w[0] - 17384u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0011D304:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D310:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 20;
L_0011D360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D368u); set32(c.r[4], ld32((c.r[2].w[0] - 17440u)));  if (depth < kMaxDepth) unit_0002(c, 508u, depth + 1u); else { c.pc = 0x0010BC60u; return; } if (c.pc != 0x0011D368u) [[unlikely]] return; }
L_0011D368:
    set32(c.r[3], ld32((c.r[20].w[0] - 17384u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[23].w[0] - 17456u)));  if (t) { goto L_0011D394; } }
    st32((c.r[19].w[0] - 17420u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[20].w[0] - 17384u), 0u);
    st32((c.r[2].w[0] - 17452u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D390u); st32((c.r[30].w[0] + 980u), 0u);  if (depth < kMaxDepth) unit_0002(c, 444u, depth + 1u); else { c.pc = 0x0010BA60u; return; } if (c.pc != 0x0011D390u) [[unlikely]] return; }
L_0011D390:
    set32(c.r[2], ld32((c.r[23].w[0] - 17456u)));
    c.budget -= 1;
L_0011D394:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[22].w[0] + 20040u);  if (t) { goto L_0011D3A8; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 960u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3A8u); set32(c.r[6], ld32((c.r[17].w[0] - 17380u)));  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011D3A8u) [[unlikely]] return; }
L_0011D3A8:
    set32(c.r[3], ld32((c.r[18].w[0] + 960u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011D3D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 17380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D3D4; } }
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[21].w[0] + 964u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3D0u); set32(c.r[4], ld32((c.r[17].w[0] - 17380u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D3D0u) [[unlikely]] return; }
L_0011D3D0:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011D3D4:
    st32((c.r[19].w[0] - 17420u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D360u | kUnwind; return; } goto L_0011D360; } }
L_0011D3E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] - 17452u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_0011D47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D420u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x0011D420u) [[unlikely]] return; }
L_0011D420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[3].w[0] + 984u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D438u); set32(c.r[5], c.r[5].w[0] + 992u);  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x0011D438u) [[unlikely]] return; }
L_0011D438:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[3], c.r[3].w[0] + 1040u);
    set32(c.r[2], c.r[2].w[0] - 11504u);
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D464u); st32((c.r[3].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0002(c, 436u, depth + 1u); else { c.pc = 0x0010BA20u; return; } if (c.pc != 0x0011D464u) [[unlikely]] return; }
L_0011D464:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] - 17452u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D474u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 440u, depth + 1u); else { c.pc = 0x0010BA40u; return; } if (c.pc != 0x0011D474u) [[unlikely]] return; }
L_0011D474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011D48C; } }
L_0011D47C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D488u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 454u, depth + 1u); else { c.pc = 0x0010BAB0u; return; } if (c.pc != 0x0011D488u) [[unlikely]] return; }
L_0011D488:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0011D48C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011D4B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0011D510; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[5].d[0];  if (t) { goto L_0011D510; } }
    set32(c.r[8], c.r[7].w[0] + 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_0011D4E0:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D4E0u | kUnwind; return; } goto L_0011D4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (t) { goto L_0011D518; } }
L_0011D510:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 2;
L_0011D518:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0011D560; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_0011D560; } }
    set32(c.r[8], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0011D538:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D538u | kUnwind; return; } goto L_0011D538; } }
L_0011D560:
    c.budget -= 2;
    { set32(c.r[4], c.r[11].w[0] - 17384u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D270u | kUnwind; return; } goto L_0011D270; }
L_0011D568:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] - 17432u)));
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0011D5B0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 17428u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011D5B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] - 17424u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011D60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011D5BC; } }
L_0011D5B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 1;
L_0011D5B4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0011D5BC:
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5D0u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011D5D0u) [[unlikely]] return; }
L_0011D5D0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5DCu); st32((c.r[17].w[0] - 17432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011D5DCu) [[unlikely]] return; }
L_0011D5DC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5E8u); st32((c.r[16].w[0] - 17428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011D5E8u) [[unlikely]] return; }
L_0011D5E8:
    st32((c.r[18].w[0] - 17424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5F8u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0002(c, 500u, depth + 1u); else { c.pc = 0x0010BC20u; return; } if (c.pc != 0x0011D5F8u) [[unlikely]] return; }
L_0011D5F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[3].w[0] - 17440u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 17420u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_0011D60C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011D620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17452u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0011D658; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] - 17384u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D650u); set32(c.r[4], ld32((c.r[16].w[0] - 17440u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011D650u) [[unlikely]] return; }
L_0011D650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011D660; } }
L_0011D658:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 2;
L_0011D660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D668u); set32(c.r[4], ld32((c.r[2].w[0] - 17432u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011D668u) [[unlikely]] return; }
L_0011D668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D674u); set32(c.r[4], ld32((c.r[3].w[0] - 17428u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011D674u) [[unlikely]] return; }
L_0011D674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D680u); set32(c.r[4], ld32((c.r[3].w[0] - 17424u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011D680u) [[unlikely]] return; }
L_0011D680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D688u); set32(c.r[4], ld32((c.r[16].w[0] - 17440u)));  if (depth < kMaxDepth) unit_0002(c, 502u, depth + 1u); else { c.pc = 0x0010BC30u; return; } if (c.pc != 0x0011D688u) [[unlikely]] return; }
L_0011D688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D690u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0011D690u) [[unlikely]] return; }
L_0011D690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6A0u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0003(c, 271u, depth + 1u); else { c.pc = 0x0010E0B0u; return; } if (c.pc != 0x0011D6A0u) [[unlikely]] return; }
L_0011D6A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011D6B4; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001149A8u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 87u, depth); }
L_0011D6B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 17408u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0011D6F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6F0u);  if (depth < kMaxDepth) unit_0007(c, 135u, depth + 1u); else { c.pc = 0x0011D798u; return; } if (c.pc != 0x0011D6F0u) [[unlikely]] return; }
L_0011D6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6F8u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0011D6F8u) [[unlikely]] return; }
L_0011D6F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 968u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[4].w[0] + 976u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 968u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 972u), c.r[28].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0011D728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D724u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0011D724u) [[unlikely]] return; }
L_0011D724:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011D728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 968u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0011D784; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17436u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011D788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] + 972u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D780u); set32(c.r[4], ld32((c.r[3].w[0] + 976u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D780u) [[unlikely]] return; }
L_0011D780:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011D784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0011D788:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011D798:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7BCu); st32((c.r[17].w[0] - 17436u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0011D7BCu) [[unlikely]] return; }
L_0011D7BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10432u);
    c.r[4].d[0] = c.r[4].d[0] | 18ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 270u, depth + 1u); else { c.pc = 0x0010E080u; return; } if (c.pc != 0x0011D7D8u) [[unlikely]] return; }
L_0011D7D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011D7EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7E8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0011D7E8u) [[unlikely]] return; }
L_0011D7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 1;
L_0011D7EC:
    st32((c.r[17].w[0] - 17436u), 0u);
    st32((c.r[2].w[0] - 17408u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011D810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D850u); st32((c.r[29].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011D850u) [[unlikely]] return; }
L_0011D850:
    set32(c.r[4], ld32((c.r[22].w[0] - 17432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D85Cu);  if (depth < kMaxDepth) unit_0002(c, 510u, depth + 1u); else { c.pc = 0x0010BC70u; return; } if (c.pc != 0x0011D85Cu) [[unlikely]] return; }
L_0011D85C:
    set32(c.r[3], ld32((c.r[22].w[0] - 17432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DAF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 984u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[6].w[0] - 17444u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D888u); set32(c.r[5], c.r[5].w[0] + 992u);  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x0011D888u) [[unlikely]] return; }
L_0011D888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D890u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x0011D890u) [[unlikely]] return; }
L_0011D890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0011DA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D8A0u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011D8A0u) [[unlikely]] return; }
L_0011D8A0:
    set32(c.r[2], ld32((c.r[17].w[0] - 17404u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011D95C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011D8E4; } }
    c.budget -= 1;
L_0011D8C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011D8C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D8C8u | kUnwind; return; } goto L_0011D8C8; } }
L_0011D8E4:
    set32(c.r[16], c.r[23].w[0] + 1472u);
    c.budget -= 1;
L_0011D8E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D8FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011D8FCu) [[unlikely]] return; }
L_0011D8FC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0011D94C; }
    set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0011D920; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D91Cu); set32(c.r[4], c.r[4].w[0] + 20080u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011D91Cu) [[unlikely]] return; }
L_0011D91C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0011D920:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011D928:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D928u | kUnwind; return; } goto L_0011D928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] + 1472u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D8E8u | kUnwind; return; } goto L_0011D8E8; } }
L_0011D94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D8C0u | kUnwind; return; } goto L_0011D8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 17404u), 0u);  if (t) { goto L_0011D968; } }
L_0011D95C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
L_0011D968:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] + 1088u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0011D9AC; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0011D988:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_0011D9AC; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D988u | kUnwind; return; } goto L_0011D988; }
L_0011D9AC:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));  if (t) { goto L_0011D9C4; } }
    set32(c.r[2], c.r[21].w[0] + 1088u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 3;
L_0011D9C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011D9DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 20112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D9DCu); set32(c.r[5], c.r[5].w[0] + 1124u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011D9DCu) [[unlikely]] return; }
L_0011D9DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[16], c.r[21].w[0] + 1088u);
    set32(c.r[5], 0u + 300u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D9F8u); st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011D9F8u) [[unlikely]] return; }
L_0011D9F8:
    set32(c.r[4], c.r[23].w[0] + 1472u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 300u);
    set32(c.r[9], c.r[30].w[0] + 1408u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DA20u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011DA20u) [[unlikely]] return; }
L_0011DA20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0011DA3C; } }
L_0011DA28:
    set32(c.r[4], ld32((c.r[22].w[0] - 17432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DA34u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DA34u) [[unlikely]] return; }
L_0011DA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DAF4; } }
L_0011DA3C:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011DAD8; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DAA8u); set32(c.r[4], c.r[4].w[0] + 20136u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DAA8u) [[unlikely]] return; }
L_0011DAA8:
    set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011DAD8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DAC0u); set32(c.r[4], c.r[4].w[0] + 20152u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DAC0u) [[unlikely]] return; }
L_0011DAC0:
    set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011DAD8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DAD8u); set32(c.r[4], c.r[4].w[0] + 20168u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DAD8u) [[unlikely]] return; }
L_0011DAD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] + 1408u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] - 17432u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DAF0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DAF0u) [[unlikely]] return; }
L_0011DAF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011DAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0011DB28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DB38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 139u, depth + 1u); else { c.pc = 0x0011D810u; return; } if (c.pc != 0x0011DB38u) [[unlikely]] return; }
L_0011DB38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011DB48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DB68u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011DB68u) [[unlikely]] return; }
L_0011DB68:
    set32(c.r[4], ld32((c.r[16].w[0] - 17432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DB74u);  if (depth < kMaxDepth) unit_0002(c, 510u, depth + 1u); else { c.pc = 0x0010BC70u; return; } if (c.pc != 0x0011DB74u) [[unlikely]] return; }
L_0011DB74:
    set32(c.r[3], ld32((c.r[16].w[0] - 17432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DBA8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DBE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 17444u)));
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DBA0u) [[unlikely]] return; }
L_0011DBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DCA0; } }
L_0011DBA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 984u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[3].w[0] - 17444u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBC4u); set32(c.r[5], c.r[5].w[0] + 992u);  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x0011DBC4u) [[unlikely]] return; }
L_0011DBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBCCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 181u, depth + 1u); else { c.pc = 0x0011DD50u; return; } if (c.pc != 0x0011DBCCu) [[unlikely]] return; }
L_0011DBCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0011DBE8; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 17432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBE0u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DBE0u) [[unlikely]] return; }
L_0011DBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DCA0; } }
L_0011DBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBF0u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011DBF0u) [[unlikely]] return; }
L_0011DBF0:
    set32(c.r[2], ld32((c.r[18].w[0] - 17412u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011DCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DC2C; } }
    c.budget -= 1;
L_0011DC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011DC10:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC10u | kUnwind; return; } goto L_0011DC10; } }
L_0011DC2C:
    set32(c.r[16], c.r[17].w[0] - 12912u);
    c.budget -= 1;
L_0011DC30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011DC44u) [[unlikely]] return; }
L_0011DC44:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0011DC94; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0011DC6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC68u); set32(c.r[4], c.r[4].w[0] + 20232u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DC68u) [[unlikely]] return; }
L_0011DC68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0011DC6C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011DC70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC70u | kUnwind; return; } goto L_0011DC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 12912u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC30u | kUnwind; return; } goto L_0011DC30; } }
L_0011DC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC08u | kUnwind; return; } goto L_0011DC08; } }
    st32((c.r[18].w[0] - 17412u), 0u);
    c.budget -= 1;
L_0011DCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011DCB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DCCCu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 162u, depth + 1u); else { c.pc = 0x0011DB48u; return; } if (c.pc != 0x0011DCCCu) [[unlikely]] return; }
L_0011DCCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DCDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DD40; } }
L_0011DCDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[16], c.r[2].w[0] - 17344u);
    set32(c.r[4], c.r[4].w[0] - 12912u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011DD0Cu) [[unlikely]] return; }
L_0011DD0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DD28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD20u); set32(c.r[4], ld32((c.r[2].w[0] - 17432u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DD20u) [[unlikely]] return; }
L_0011DD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DD40; } }
L_0011DD28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 17432u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD3Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DD3Cu) [[unlikely]] return; }
L_0011DD3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011DD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011DD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0011DDB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011DD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD7Cu); set32(c.r[4], c.r[4].w[0] + 20256u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DD7Cu) [[unlikely]] return; }
L_0011DD7C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DD90; } }
L_0011DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD90u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0007(c, 89u, depth + 1u); else { c.pc = 0x0011D1A0u; return; } if (c.pc != 0x0011DD90u) [[unlikely]] return; }
L_0011DD90:
    set32(c.r[2], ld32((c.r[17].w[0] - 17420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD88u | kUnwind; return; } goto L_0011DD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DDA4u); set32(c.r[4], c.r[16].w[0] - 12912u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0010EF68u; return; } if (c.pc != 0x0011DDA4u) [[unlikely]] return; }
L_0011DDA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD88u | kUnwind; return; } goto L_0011DD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011DDE0; } }
L_0011DDB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17420u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011DDDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DDD0u); set32(c.r[4], c.r[4].w[0] - 12912u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0010EF68u; return; } if (c.pc != 0x0011DDD0u) [[unlikely]] return; }
L_0011DDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011DDDC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011DDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011DDE0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011DDF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0011DE40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011DE18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE18u); set32(c.r[4], c.r[4].w[0] + 20272u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DE18u) [[unlikely]] return; }
L_0011DE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DE28; } }
L_0011DE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE28u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0007(c, 89u, depth + 1u); else { c.pc = 0x0011D1A0u; return; } if (c.pc != 0x0011DE28u) [[unlikely]] return; }
L_0011DE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE30u); set32(c.r[4], c.r[16].w[0] - 10432u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0010EF68u; return; } if (c.pc != 0x0011DE30u) [[unlikely]] return; }
L_0011DE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DE20u | kUnwind; return; } goto L_0011DE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0011DE50; } }
L_0011DE40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE4Cu); set32(c.r[4], c.r[4].w[0] - 10432u);  if (depth < kMaxDepth) unit_0003(c, 367u, depth + 1u); else { c.pc = 0x0010EF68u; return; } if (c.pc != 0x0011DE4Cu) [[unlikely]] return; }
L_0011DE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0011DE50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011DE60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE80u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011DE80u) [[unlikely]] return; }
L_0011DE80:
    set32(c.r[4], ld32((c.r[16].w[0] - 17428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE8Cu);  if (depth < kMaxDepth) unit_0002(c, 510u, depth + 1u); else { c.pc = 0x0010BC70u; return; } if (c.pc != 0x0011DE8Cu) [[unlikely]] return; }
L_0011DE8C:
    set32(c.r[3], ld32((c.r[16].w[0] - 17428u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DEC0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DEF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 17448u)));
    set32(c.r[4], c.r[4].w[0] + 20288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DEB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DEB8u) [[unlikely]] return; }
L_0011DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DFB8; } }
L_0011DEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 984u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[3].w[0] - 17448u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DEDCu); set32(c.r[5], c.r[5].w[0] + 992u);  if (depth < kMaxDepth) unit_0002(c, 468u, depth + 1u); else { c.pc = 0x0010BB20u; return; } if (c.pc != 0x0011DEDCu) [[unlikely]] return; }
L_0011DEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DEE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 187u, depth + 1u); else { c.pc = 0x0011DDF0u; return; } if (c.pc != 0x0011DEE4u) [[unlikely]] return; }
L_0011DEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0011DF00; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 17428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DEF8u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011DEF8u) [[unlikely]] return; }
L_0011DEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011DFB8; } }
L_0011DF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DF08u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011DF08u) [[unlikely]] return; }
L_0011DF08:
    set32(c.r[2], ld32((c.r[18].w[0] - 17396u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011DFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011DF44; } }
    c.budget -= 1;
L_0011DF20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011DF28:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF28u | kUnwind; return; } goto L_0011DF28; } }
L_0011DF44:
    set32(c.r[16], c.r[17].w[0] - 10432u);
    c.budget -= 1;
L_0011DF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DF5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011DF5Cu) [[unlikely]] return; }
L_0011DF5C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0011DFAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0011DF84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DF80u); set32(c.r[4], c.r[4].w[0] + 20328u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011DF80u) [[unlikely]] return; }
L_0011DF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0011DF84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0011DF88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF88u | kUnwind; return; } goto L_0011DF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 10432u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF48u | kUnwind; return; } goto L_0011DF48; } }
L_0011DFAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF20u | kUnwind; return; } goto L_0011DF20; } }
    st32((c.r[18].w[0] - 17396u), 0u);
    c.budget -= 1;
L_0011DFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011DFD0:
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E070; } }
    c.r[2].d[0] = 0ull | 32771ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E068; } }
    c.r[2].d[0] = 0ull | 32770ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E060; } }
    c.r[2].d[0] = 0ull | 32772ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E058; } }
    c.r[2].d[0] = 0ull | 32785ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 32787ull;  if (t) { goto L_0011E048; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E040; } }
    c.r[2].d[0] = 0ull | 32786ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E038; } }
    c.r[2].d[0] = 0ull | 32788ull;
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011E074; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 10432u);  if (t) { goto L_0011E074; } }
L_0011E038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 11776u);  if (t) { goto L_0011E074; } }
L_0011E040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12864u);  if (t) { goto L_0011E074; } }
L_0011E048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 17428u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_0011E078; } }
L_0011E058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 12912u);  if (t) { goto L_0011E074; } }
L_0011E060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17216u);  if (t) { goto L_0011E074; } }
L_0011E068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 17344u);  if (t) { goto L_0011E074; } }
L_0011E070:
    set32(c.r[2], ld32((c.r[2].w[0] - 17432u)));
    c.budget -= 1;
L_0011E074:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011E078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0011E080:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E0B8u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 187u, depth + 1u); else { c.pc = 0x0011DDF0u; return; } if (c.pc != 0x0011E0B8u) [[unlikely]] return; }
L_0011E0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011E330; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E0CCu); c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011E0CCu) [[unlikely]] return; }
L_0011E0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E0D4u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0002(c, 466u, depth + 1u); else { c.pc = 0x0010BB10u; return; } if (c.pc != 0x0011E0D4u) [[unlikely]] return; }
L_0011E0D4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], ld32((c.r[21].w[0] - 17388u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[4].w[0] - 17436u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[6].w[0] + 984u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[3].w[0] - 17408u), c.r[4].w[0]);
    st32((c.r[7].w[0] - 17404u), c.r[4].w[0]);
    set32(c.r[17], c.r[2].w[0] + 1512u);
    st32((c.r[8].w[0] - 17412u), c.r[4].w[0]);
    set32(c.r[18], c.r[16].w[0] + 1600u);
    st32((c.r[9].w[0] - 17396u), c.r[4].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[11].w[0] - 17400u), c.r[4].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[10].w[0] - 17416u), 0u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st32((c.r[21].w[0] - 17388u), c.r[5].w[0]);
    st32((c.r[20].w[0] - 17392u), c.r[4].w[0]);
    c.budget -= 29;
L_0011E148:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E15Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011E15Cu) [[unlikely]] return; }
L_0011E15C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0011E1AC; }
    set32(c.r[2], ld32((c.r[23].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] - 17388u)));  if (t) { goto L_0011E17C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E17Cu); set32(c.r[4], c.r[22].w[0] + 20352u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E17Cu) [[unlikely]] return; }
L_0011E17C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0011E188:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E188u | kUnwind; return; } goto L_0011E188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E148u | kUnwind; return; } goto L_0011E148; } }
L_0011E1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011E204; } }
    st32((c.r[16].w[0] + 1600u), c.r[19].w[0]);
    st32((c.r[20].w[0] - 17392u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E1C4u) [[unlikely]] return; }
L_0011E1C4:
    set32(c.r[16], c.r[30].w[0] - 12864u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1F0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011E1F0u) [[unlikely]] return; }
L_0011E1F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E234; } }
    st32((c.r[2].w[0] - 17436u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011E330; } }
L_0011E204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0011E210:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E210u | kUnwind; return; } goto L_0011E210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E148u | kUnwind; return; } goto L_0011E148; } }
L_0011E234:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_0011E2BC; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_0011E280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 17456u), c.r[16].w[0]);  if (t) { goto L_0011E2BC; } }
L_0011E280:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_0011E2BC; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E2C0; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0011E2BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 1;
L_0011E2C0:
    st32((c.r[4].w[0] - 17436u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011E31C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0011E31C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E31C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011E2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2F0u); set32(c.r[4], c.r[4].w[0] + 20384u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E2F0u) [[unlikely]] return; }
L_0011E2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2F8u);  if (depth < kMaxDepth) unit_0007(c, 121u, depth + 1u); else { c.pc = 0x0011D620u; return; } if (c.pc != 0x0011E2F8u) [[unlikely]] return; }
L_0011E2F8:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 17432u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[3].w[0] - 17428u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 17440u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0011E330; } }
L_0011E31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E324u);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011E324u) [[unlikely]] return; }
L_0011E324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E32Cu);  if (depth < kMaxDepth) unit_0007(c, 135u, depth + 1u); else { c.pc = 0x0011D798u; return; } if (c.pc != 0x0011E32Cu) [[unlikely]] return; }
L_0011E32C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011E330:
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
L_0011E360:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0011E3A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3A4u); set32(c.r[4], c.r[4].w[0] + 20400u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E3A4u) [[unlikely]] return; }
L_0011E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3ACu); c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011E3ACu) [[unlikely]] return; }
L_0011E3AC:
    set32(c.r[4], ld32((c.r[19].w[0] - 17428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3B8u);  if (depth < kMaxDepth) unit_0002(c, 510u, depth + 1u); else { c.pc = 0x0010BC70u; return; } if (c.pc != 0x0011E3B8u) [[unlikely]] return; }
L_0011E3B8:
    set32(c.r[3], ld32((c.r[19].w[0] - 17428u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0011E52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 187u, depth + 1u); else { c.pc = 0x0011DDF0u; return; } if (c.pc != 0x0011E3CCu) [[unlikely]] return; }
L_0011E3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0011E4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3DCu); c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011E3DCu) [[unlikely]] return; }
L_0011E3DC:
    set32(c.r[2], ld32((c.r[17].w[0] - 17400u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011E494; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E41C; } }
    c.budget -= 1;
L_0011E3F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011E400:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E400u | kUnwind; return; } goto L_0011E400; } }
L_0011E41C:
    set32(c.r[16], c.r[21].w[0] + 1552u);
    c.budget -= 1;
L_0011E420:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E434u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011E434u) [[unlikely]] return; }
L_0011E434:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0011E484; }
    set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0011E458; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E454u); set32(c.r[4], c.r[4].w[0] + 20424u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E454u) [[unlikely]] return; }
L_0011E454:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0011E458:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011E460:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E460u | kUnwind; return; } goto L_0011E460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 1552u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E420u | kUnwind; return; } goto L_0011E420; } }
L_0011E484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E3F8u | kUnwind; return; } goto L_0011E3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 17400u), 0u);  if (t) { goto L_0011E49C; } }
L_0011E494:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 2;
L_0011E49C:
    set32(c.r[16], c.r[20].w[0] + 1616u);
    st32((c.r[20].w[0] + 1616u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E4B0u) [[unlikely]] return; }
L_0011E4B0:
    set32(c.r[17], c.r[23].w[0] - 12864u);
    set32(c.r[4], c.r[21].w[0] + 1552u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4DCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011E4DCu) [[unlikely]] return; }
L_0011E4DC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));  goto L_0011E504; }
L_0011E4E4:
    set32(c.r[4], ld32((c.r[19].w[0] - 17428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4F0u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E4F0u) [[unlikely]] return; }
L_0011E4F0:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0011E52C; } }
L_0011E504:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011E514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E514u); set32(c.r[4], c.r[4].w[0] + 20456u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E514u) [[unlikely]] return; }
L_0011E514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 17428u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E528u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E528u) [[unlikely]] return; }
L_0011E528:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011E52C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0011E558:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0011E598; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E598u); set32(c.r[4], c.r[4].w[0] + 20480u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E598u) [[unlikely]] return; }
L_0011E598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5A0u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0011D568u; return; } if (c.pc != 0x0011E5A0u) [[unlikely]] return; }
L_0011E5A0:
    set32(c.r[4], ld32((c.r[20].w[0] - 17424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5ACu);  if (depth < kMaxDepth) unit_0002(c, 510u, depth + 1u); else { c.pc = 0x0010BC70u; return; } if (c.pc != 0x0011E5ACu) [[unlikely]] return; }
L_0011E5AC:
    set32(c.r[3], ld32((c.r[20].w[0] - 17424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] ^ 8ull;  if (t) { goto L_0011E6E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5C4u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010E468u; return; } if (c.pc != 0x0011E5C4u) [[unlikely]] return; }
L_0011E5C4:
    set32(c.r[2], ld32((c.r[19].w[0] - 17400u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0011E67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011E608; } }
L_0011E5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0011E6F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0011E5E8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E5E8u | kUnwind; return; } goto L_0011E5E8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011E608:
    set32(c.r[16], c.r[21].w[0] + 1552u);
    c.budget -= 1;
L_0011E60C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1436ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E620u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011E620u) [[unlikely]] return; }
L_0011E620:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0011E66C; }
    set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0011E644; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E640u); set32(c.r[4], c.r[4].w[0] + 20424u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E640u) [[unlikely]] return; }
L_0011E640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0011E644:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0011E648:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E648u | kUnwind; return; } goto L_0011E648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 1552u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E60Cu | kUnwind; return; } goto L_0011E60C; } }
L_0011E66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E5D8u | kUnwind; return; } goto L_0011E5D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] - 17400u), 0u);  if (t) { goto L_0011E680; } }
L_0011E67C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_0011E680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] + 1616u);
    st32((c.r[2].w[0] + 1616u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E698u) [[unlikely]] return; }
L_0011E698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[21].w[0] + 1552u);
    set32(c.r[17], c.r[2].w[0] - 10688u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E6C8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011E6C8u) [[unlikely]] return; }
L_0011E6C8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 17456u)));  goto L_0011E70C; }
    set32(c.r[4], ld32((c.r[20].w[0] - 17424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E6DCu);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E6DCu) [[unlikely]] return; }
L_0011E6DC:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    c.budget -= 1;
L_0011E6E0:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0011E734; } }
L_0011E6F0:
    set32(c.r[4], ld32((c.r[20].w[0] - 17424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E6FCu);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E6FCu) [[unlikely]] return; }
L_0011E6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E704u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 223u, depth + 1u); else { c.pc = 0x0011E360u; return; } if (c.pc != 0x0011E704u) [[unlikely]] return; }
L_0011E704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0011E738; } }
L_0011E70C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011E71C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E71Cu); set32(c.r[4], c.r[4].w[0] + 20456u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E71Cu) [[unlikely]] return; }
L_0011E71C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 17424u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E730u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E730u) [[unlikely]] return; }
L_0011E730:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011E734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0011E738:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0011E760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] - 17416u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] - 17216u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011E7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E7B0u);  if (depth < kMaxDepth) unit_0007(c, 176u, depth + 1u); else { c.pc = 0x0011DCB8u; return; } if (c.pc != 0x0011E7B0u) [[unlikely]] return; }
L_0011E7B0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011E91C; } }
L_0011E7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E7C4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 162u, depth + 1u); else { c.pc = 0x0011DB48u; return; } if (c.pc != 0x0011E7C4u) [[unlikely]] return; }
L_0011E7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011E8FC; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[4], c.r[19].w[0] - 13120u);
    set32(c.r[5], c.r[8].w[0] - 12928u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0011E830; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 11);  if (t) { goto L_0011E840; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2340u);  if (t) { goto L_0011E83C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E840; } }
L_0011E830:
    set32(c.r[2], 0u + 2328u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (t) { goto L_0011E840; } }
L_0011E83C:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0011E840:
    set32(c.r[2], ld32((c.r[21].w[0] - 17416u)));
    set32(c.r[16], c.r[8].w[0] - 12928u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[8].w[0] - 12928u), 0u);  if (t) { goto L_0011E85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E85Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E85Cu) [[unlikely]] return; }
L_0011E85C:
    set32(c.r[19], c.r[19].w[0] - 13120u);
    set32(c.r[5], 0u + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E870u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E870u) [[unlikely]] return; }
L_0011E870:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E87Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E87Cu) [[unlikely]] return; }
L_0011E87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E888u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E888u) [[unlikely]] return; }
L_0011E888:
    set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011E89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E89Cu); set32(c.r[4], c.r[4].w[0] + 20504u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E89Cu) [[unlikely]] return; }
L_0011E89C:
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] - 17384u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st32((c.r[17].w[0] - 17420u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12912u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 11088u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 24u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011E8E0u) [[unlikely]] return; }
L_0011E8E0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] - 17456u)));  goto L_0011E904; }
    st32((c.r[16].w[0] - 17384u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[17].w[0] - 17420u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8FCu); set32(c.r[4], ld32((c.r[2].w[0] - 17432u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E8FCu) [[unlikely]] return; }
L_0011E8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011E91C; } }
L_0011E904:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0011E91C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E918u); set32(c.r[4], c.r[4].w[0] + 20528u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011E918u) [[unlikely]] return; }
L_0011E918:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011E91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0011E940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E960u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0007(c, 176u, depth + 1u); else { c.pc = 0x0011DCB8u; return; } if (c.pc != 0x0011E960u) [[unlikely]] return; }
L_0011E960:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[17].w[0] - 17216u);  if (t) { goto L_0011E9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E974u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0007(c, 162u, depth + 1u); else { c.pc = 0x0011DB48u; return; } if (c.pc != 0x0011E974u) [[unlikely]] return; }
L_0011E974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0011E9F0; } }
    st32((c.r[17].w[0] - 17216u), c.r[16].w[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E98Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011E98Cu) [[unlikely]] return; }
L_0011E98C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[16].w[0] - 17384u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] - 17384u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 12912u);
    st32((c.r[17].w[0] - 17420u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 11664u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9D4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011E9D4u) [[unlikely]] return; }
L_0011E9D4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_0011E9F4; }
    st32((c.r[16].w[0] - 17384u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[17].w[0] - 17420u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9F0u); set32(c.r[4], ld32((c.r[2].w[0] - 17432u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011E9F0u) [[unlikely]] return; }
L_0011E9F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011E9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011EA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA24u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 193u, depth + 1u); else { c.pc = 0x0011DE60u; return; } if (c.pc != 0x0011EA24u) [[unlikely]] return; }
L_0011EA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EA98; } }
L_0011EA34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[16], c.r[2].w[0] - 12864u);
    set32(c.r[4], c.r[4].w[0] - 10432u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA64u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011EA64u) [[unlikely]] return; }
L_0011EA64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EA80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA78u); set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EA78u) [[unlikely]] return; }
L_0011EA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EA98; } }
L_0011EA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 17428u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA94u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EA94u) [[unlikely]] return; }
L_0011EA94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011EA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011EAA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EABCu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 193u, depth + 1u); else { c.pc = 0x0011DE60u; return; } if (c.pc != 0x0011EABCu) [[unlikely]] return; }
L_0011EABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011EB30; } }
L_0011EACC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[16], c.r[2].w[0] - 12864u);
    set32(c.r[4], c.r[4].w[0] - 10432u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EAFCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011EAFCu) [[unlikely]] return; }
L_0011EAFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB10u); set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EB10u) [[unlikely]] return; }
L_0011EB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011EB30; } }
L_0011EB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 17428u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB2Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EB2Cu) [[unlikely]] return; }
L_0011EB2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011EB30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011EB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 30u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB58u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 193u, depth + 1u); else { c.pc = 0x0011DE60u; return; } if (c.pc != 0x0011EB58u) [[unlikely]] return; }
L_0011EB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EBE4; } }
L_0011EB68:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[17], c.r[2].w[0] - 12864u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] - 17384u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10432u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBA4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011EBA4u) [[unlikely]] return; }
L_0011EBA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EBC4; } }
    set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBB8u);  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EBB8u) [[unlikely]] return; }
L_0011EBB8:
    st32((c.r[16].w[0] - 17384u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EBE4; } }
L_0011EBC4:
    st32((c.r[16].w[0] - 17384u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 17428u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBE0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EBE0u) [[unlikely]] return; }
L_0011EBE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011EBE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011EBF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] - 11776u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC20u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0007(c, 193u, depth + 1u); else { c.pc = 0x0011DE60u; return; } if (c.pc != 0x0011EC20u) [[unlikely]] return; }
L_0011EC20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] - 11776u), c.r[16].w[0]);  goto L_0011EC30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011ECB0; } }
L_0011EC30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC3Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 287u, depth + 1u); else { c.pc = 0x0010E3B8u; return; } if (c.pc != 0x0011EC3Cu) [[unlikely]] return; }
L_0011EC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[8], ld32((c.r[4].w[0] - 10388u)));
    set32(c.r[16], c.r[2].w[0] - 12864u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[10], ld32((c.r[6].w[0] - 10384u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 10392u)));
    set32(c.r[4], c.r[4].w[0] - 10432u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC7Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011EC7Cu) [[unlikely]] return; }
L_0011EC7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC90u); set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EC90u) [[unlikely]] return; }
L_0011EC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011ECB0; } }
L_0011EC98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 17428u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECACu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011ECACu) [[unlikely]] return; }
L_0011ECAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011ECB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011ECC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECECu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 193u, depth + 1u); else { c.pc = 0x0011DE60u; return; } if (c.pc != 0x0011ECECu) [[unlikely]] return; }
L_0011ECEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011ECFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EDA4; } }
L_0011ECFC:
    set32(c.r[2], ld32((c.r[19].w[0] - 17456u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011ED10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED10u); set32(c.r[4], c.r[4].w[0] + 20544u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011ED10u) [[unlikely]] return; }
L_0011ED10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[16], c.r[2].w[0] - 12864u);
    set32(c.r[4], c.r[4].w[0] - 10432u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED44u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011ED44u) [[unlikely]] return; }
L_0011ED44:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0011ED60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED58u); set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011ED58u) [[unlikely]] return; }
L_0011ED58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EDA4; } }
L_0011ED60:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 7u));
    sdr(c.r[3], (c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] - 17456u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011ED8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED8Cu); set32(c.r[4], c.r[4].w[0] + 20576u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011ED8Cu) [[unlikely]] return; }
L_0011ED8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = c.r[16].d[0] | c.r[17].d[0];
    set32(c.r[4], ld32((c.r[2].w[0] - 17428u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EDA0u); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0002(c, 504u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0011EDA0u) [[unlikely]] return; }
L_0011EDA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011EDA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0011EDC0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[3], 0u + 28u);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    mmi::mult(c, 1, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 304u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 320u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    set32(c.r[2], c.r[19].w[0] + 1744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_0011EE20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE18u);  if (depth < kMaxDepth) unit_0002(c, 616u, depth + 1u); else { c.pc = 0x0010BFC0u; return; } if (c.pc != 0x0011EE18u) [[unlikely]] return; }
L_0011EE18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EE94; } }
L_0011EE20:
    set32(c.r[7], 0u + 28u);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1744u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 31u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[18], c.r[7].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE64u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C518u; return; } if (c.pc != 0x0011EE64u) [[unlikely]] return; }
L_0011EE64:
    set32(c.r[2], 0u + 32u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE84u); st32((c.r[29].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0002(c, 620u, depth + 1u); else { c.pc = 0x0010BFE0u; return; } if (c.pc != 0x0011EE84u) [[unlikely]] return; }
L_0011EE84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_0011EEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 1;
L_0011EE94:
    set32(c.r[3], ld32((c.r[2].w[0] - 10356u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011EEA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EEA8u); set32(c.r[4], c.r[4].w[0] + 20608u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011EEA8u) [[unlikely]] return; }
L_0011EEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011EEB8; } }
L_0011EEB0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 2;
L_0011EEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0011EED8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st32((c.r[3].w[0] - 10360u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_0011EF2C; } }
    c.budget -= 1;
L_0011EF08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011EF10:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EF10u | kUnwind; return; } goto L_0011EF10; } }
L_0011EF2C:
    set32(c.r[16], c.r[17].w[0] + 1664u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011EF44u) [[unlikely]] return; }
L_0011EF44:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EF08u | kUnwind; return; } goto L_0011EF08; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 40u);  if (t) { goto L_0011EF84; } }
    c.budget -= 1;
L_0011EF60:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0011EF68:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EF68u | kUnwind; return; } goto L_0011EF68; } }
L_0011EF84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 342u, depth + 1u); else { c.pc = 0x0010EBA8u; return; } if (c.pc != 0x0011EF98u) [[unlikely]] return; }
L_0011EF98:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EF60u | kUnwind; return; } goto L_0011EF60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFACu);  if (depth < kMaxDepth) unit_0008(c, 10u, depth + 1u); else { c.pc = 0x00120170u; return; } if (c.pc != 0x0011EFACu) [[unlikely]] return; }
L_0011EFAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_0011EFF8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 10356u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011EFF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFD4u); set32(c.r[4], c.r[4].w[0] + 20680u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011EFD4u) [[unlikely]] return; }
L_0011EFD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20720u);
    c.r[8].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFF0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011EFF0u) [[unlikely]] return; }
L_0011EFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F000; } }
L_0011EFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011F018u; return; } if (c.pc != 0x0011F000u) [[unlikely]] return; }
L_0011F000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 132u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
L_0011F038:
    st32((c.r[2].w[0] - 116u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] - 108u), 0u);
    st32((c.r[2].w[0] - 112u), 0u);
    st32((c.r[2].w[0] - 4u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F038u | kUnwind; return; } goto L_0011F038; } }
    set32(c.r[2], 0u + 16u);
    set32(c.r[16], c.r[4].w[0] + 2240u);
    st32((c.r[4].w[0] + 2240u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_0011F080:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F098u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011F098u) [[unlikely]] return; }
L_0011F098:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0011F0A4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F0B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 15u);
    set32(c.r[16], c.r[2].w[0] + 2240u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    st32((c.r[2].w[0] + 2240u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F100u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011F100u) [[unlikely]] return; }
L_0011F100:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[7], ld32((c.r[16].w[0] + 12u)));  goto L_0011F110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F128; } }
L_0011F110:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011F128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[2].w[0] - 10360u), 0u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_0011F128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F138:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 63ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0011F19C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011F284; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F194u); set32(c.r[4], c.r[4].w[0] + 20760u);  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011F194u) [[unlikely]] return; }
L_0011F194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F2EC; } }
L_0011F19C:
    set32(c.r[4], 0u + 28u);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[30].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0011F1F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011F284; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20808u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1ECu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 243u, depth + 1u); else { c.pc = 0x0010DCC0u; return; } if (c.pc != 0x0011F1ECu) [[unlikely]] return; }
L_0011F1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F2EC; } }
L_0011F1F4:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[22], 0u + 5u);
    set32(c.r[21], 0u + 2u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
L_0011F208:
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[5], 0u + 255u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[6], 0u + 32u);
    st8((c.r[16].w[0] + 103u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F22Cu); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0011F22Cu) [[unlikely]] return; }
L_0011F22C:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F208u | kUnwind; return; } goto L_0011F208; } }
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[23].w[0] + 2240u);
    st32((c.r[23].w[0] + 2240u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F27Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011F27Cu) [[unlikely]] return; }
L_0011F27C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 28u);  if (t) { goto L_0011F28C; } }
L_0011F284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F2EC; } }
L_0011F28C:
    set32(c.r[7], 0u + 112u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 1984u);
    set32(c.r[4], c.r[30].w[0] + 1744u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 8u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 24;
L_0011F2EC:
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
L_0011F320:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F3C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[16], c.r[2].w[0] + 2240u);
    st32((c.r[2].w[0] + 2240u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3B0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011F3B0u) [[unlikely]] return; }
L_0011F3B0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[17].w[0]), 0u);  goto L_0011F3C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F3C4; } }
L_0011F3C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0011F3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011F3D8:
    set32(c.r[2], 0u + 28u);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F414u); set32(c.r[5], c.r[16].w[0] + 255u);  if (depth < kMaxDepth) unit_0003(c, 60u, depth + 1u); else { c.pc = 0x0010C518u; return; } if (c.pc != 0x0011F414u) [[unlikely]] return; }
L_0011F414:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011F438:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F478u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F478u) [[unlikely]] return; }
L_0011F478:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 1;
L_0011F47C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011F488:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 112u);
    st64((c.r[29].w[0] + 144u), c.r[17].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 192u), c.r[20].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[19].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011F4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F5CC; } }
L_0011F4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F4E8u);  if (depth < kMaxDepth) unit_0005(c, 85u, depth + 1u); else { c.pc = 0x00114960u; return; } if (c.pc != 0x0011F4E8u) [[unlikely]] return; }
L_0011F4E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F4FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F4FCu) [[unlikely]] return; }
L_0011F4FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0011F56C; } }
    set32(c.r[2], c.r[3].w[0] + 128u);
    c.budget -= 1;
L_0011F510:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[8], (c.r[3].w[0] + 31u));
    ldr(c.r[8], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F510u | kUnwind; return; } goto L_0011F510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 96u)));  if (t) { goto L_0011F5A8; } }
L_0011F56C:
    set32(c.r[2], c.r[3].w[0] + 128u);
    c.budget -= 1;
L_0011F570:
    c.r[5].d[0] = ld64((c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F570u | kUnwind; return; } goto L_0011F570; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0011F5A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F5B4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x0011F5B4u) [[unlikely]] return; }
L_0011F5B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_0011F5CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F5C8u);  if (depth < kMaxDepth) unit_0005(c, 87u, depth + 1u); else { c.pc = 0x001149A8u; return; } if (c.pc != 0x0011F5C8u) [[unlikely]] return; }
L_0011F5C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0011F5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0011F5F0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 99u);  if (t) { goto L_0011F65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F630u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F630u) [[unlikely]] return; }
L_0011F630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0011F660; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 113u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));  goto L_0011F660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0011F660; } }
L_0011F65C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0011F660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011F668:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011F690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10352u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0])));  [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_0011F690:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20896u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0011F6A0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011F6E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F6F4; } }
L_0011F6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6ECu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F6ECu) [[unlikely]] return; }
L_0011F6EC:
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0011F6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0011F708:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F748u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F748u) [[unlikely]] return; }
L_0011F748:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 113u));
    c.budget -= 1;
L_0011F74C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011F758:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);  if (t) { goto L_0011F780; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10320u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0])));  [[clang::musttail]] return unit_0009(c, 233u, depth); }
L_0011F780:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20896u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0011F790:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011F898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F7DCu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F7DCu) [[unlikely]] return; }
L_0011F7DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F89C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F89C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011F898; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0011F820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011F89C; } }
L_0011F820:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0011F868; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0011F840; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011F8A0; } }
L_0011F840:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0011F878; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011F8A0; } }
L_0011F858:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 48u));  if (t) { goto L_0011F89C; } }
L_0011F868:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 49u));  if (t) { goto L_0011F89C; } }
L_0011F878:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 50u));  if (t) { goto L_0011F89C; } }
L_0011F888:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 51u));  if (t) { goto L_0011F89C; } }
L_0011F898:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011F8A0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F8B0:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011F9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F8FCu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011F8FCu) [[unlikely]] return; }
L_0011F8FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F9B8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F9B8; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 107u));  if (t) { goto L_0011F934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011F9BC; } }
L_0011F934:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0011F9B8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0011F988; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_0011F960; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011F9BC; } }
L_0011F960:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0011F994; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011F9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011F9BC; } }
L_0011F978:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));  if (t) { goto L_0011F9B8; } }
L_0011F988:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 65u));  if (t) { goto L_0011F9B8; } }
L_0011F994:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 66u));  if (t) { goto L_0011F9B8; } }
L_0011F9A4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 67u));  if (t) { goto L_0011F9B8; } }
L_0011F9B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F9B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011F9BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011F9D0:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0011FAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FA1Cu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011FA1Cu) [[unlikely]] return; }
L_0011FA1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FAF4; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 113u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FAF4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0011FA90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0011FA60; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011FAF8; } }
L_0011FA60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0011FAA8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011FAF8; } }
L_0011FA78:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 101u));
    set32(c.r[2], 0u + 243u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] >> 4);  if (t) { goto L_0011FAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011FAF8; } }
L_0011FA90:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FAF4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 105u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_0011FAE4; } }
L_0011FAA8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FAF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 105u));  if (t) { goto L_0011FAF4; } }
L_0011FABC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0011FAF0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));  if (t) { goto L_0011FAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0011FAF8; } }
L_0011FAD8:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { goto L_0011FAF0; } }
L_0011FAE4:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[3].w[0] + 80u));  if (t) { goto L_0011FAF4; } }
L_0011FAF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011FAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0011FAF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0011FB08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], c.r[3].w[0] + 2240u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    st32((c.r[3].w[0] + 2240u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB70u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011FB70u) [[unlikely]] return; }
L_0011FB70:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0011FB80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FBA4; } }
L_0011FB80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011FBA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB9Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 347u, depth + 1u); else { c.pc = 0x0011F6A0u; return; } if (c.pc != 0x0011FB9Cu) [[unlikely]] return; }
L_0011FB9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0011FBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011FBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FBE4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011FBE4u) [[unlikely]] return; }
L_0011FBE4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FC68; } }
    set32(c.r[3], 0u + 28u);
    set32(c.r[4], 0u + 112u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_0011FC20:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FC20u | kUnwind; return; } goto L_0011FC20; } }
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[6].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 303u, depth + 1u); else { c.pc = 0x0011EDC0u; return; } if (c.pc != 0x0011FC5Cu) [[unlikely]] return; }
L_0011FC5C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0011FC68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0011FC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + 2240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[3].w[0] + 2240u), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 16;
L_0011FCC0:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FCC0u | kUnwind; return; } goto L_0011FCC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011FD0Cu) [[unlikely]] return; }
L_0011FD0C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0011FD1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FD40; } }
L_0011FD1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011FD40; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD38u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 347u, depth + 1u); else { c.pc = 0x0011F6A0u; return; } if (c.pc != 0x0011FD38u) [[unlikely]] return; }
L_0011FD38:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0011FD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011FD58:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD98u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 333u, depth + 1u); else { c.pc = 0x0011F3D8u; return; } if (c.pc != 0x0011FD98u) [[unlikely]] return; }
L_0011FD98:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 114u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[6].w[0] + 100u));  goto L_0011FDB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE00; } }
L_0011FDB4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE00; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 102u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FE00; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 122u));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 124u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 123u));
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 121u));
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 12;
L_0011FE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011FE10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[2].w[0] + 2240u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[2].w[0] + 2240u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1664u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE74u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 354u, depth + 1u); else { c.pc = 0x0010ED78u; return; } if (c.pc != 0x0011FE74u) [[unlikely]] return; }
L_0011FE74:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0011FE84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FEA8; } }
L_0011FE84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0011FEA8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEA0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 347u, depth + 1u); else { c.pc = 0x0011F6A0u; return; } if (c.pc != 0x0011FEA0u) [[unlikely]] return; }
L_0011FEA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0011FEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0011FEC0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF00u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 369u, depth + 1u); else { c.pc = 0x0011FD58u; return; } if (c.pc != 0x0011FF00u) [[unlikely]] return; }
L_0011FF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0011FF10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011FF20:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011FF60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FF68; } }
L_0011FF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF68u); set32(c.r[6], 0u + 4095u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0011FE10u; return; } if (c.pc != 0x0011FF68u) [[unlikely]] return; }
L_0011FF68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011FF78:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0011FFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0011FFC0; } }
L_0011FFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0011FE10u; return; } if (c.pc != 0x0011FFC0u) [[unlikely]] return; }
L_0011FFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0011FFD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 2240u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 12;
    [[clang::musttail]] return unit_0008(c, 1u, depth);
}

}
