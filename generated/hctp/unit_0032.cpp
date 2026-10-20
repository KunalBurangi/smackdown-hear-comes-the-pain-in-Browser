#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0032[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 141, 0, 0, 0, 142, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0,
    189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0032(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
#if defined(PS2_HIT_TRACE)
    if (entry == 317u) hit_trace(c, 0x001CB7A0u);
    else if (entry == 229u) hit_trace(c, 0x001CA2A0u);
#endif
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C8000;
    case 2u: goto L_001C8028;
    case 3u: goto L_001C8040;
    case 4u: goto L_001C8048;
    case 5u: goto L_001C8060;
    case 6u: goto L_001C8070;
    case 7u: goto L_001C8080;
    case 8u: goto L_001C80C0;
    case 9u: goto L_001C80E0;
    case 10u: goto L_001C8118;
    case 11u: goto L_001C815C;
    case 12u: goto L_001C81B8;
    case 13u: goto L_001C81EC;
    case 14u: goto L_001C8200;
    case 15u: goto L_001C829C;
    case 16u: goto L_001C82D8;
    case 17u: goto L_001C8308;
    case 18u: goto L_001C831C;
    case 19u: goto L_001C8350;
    case 20u: goto L_001C8364;
    case 21u: goto L_001C8374;
    case 22u: goto L_001C8398;
    case 23u: goto L_001C83A8;
    case 24u: goto L_001C83D4;
    case 25u: goto L_001C83E8;
    case 26u: goto L_001C8408;
    case 27u: goto L_001C8470;
    case 28u: goto L_001C8490;
    case 29u: goto L_001C84F0;
    case 30u: goto L_001C8508;
    case 31u: goto L_001C8518;
    case 32u: goto L_001C8534;
    case 33u: goto L_001C8548;
    case 34u: goto L_001C8604;
    case 35u: goto L_001C8634;
    case 36u: goto L_001C8650;
    case 37u: goto L_001C8664;
    case 38u: goto L_001C8678;
    case 39u: goto L_001C8698;
    case 40u: goto L_001C86B8;
    case 41u: goto L_001C86C8;
    case 42u: goto L_001C86F0;
    case 43u: goto L_001C8704;
    case 44u: goto L_001C871C;
    case 45u: goto L_001C8734;
    case 46u: goto L_001C874C;
    case 47u: goto L_001C878C;
    case 48u: goto L_001C87AC;
    case 49u: goto L_001C87C0;
    case 50u: goto L_001C87D4;
    case 51u: goto L_001C87E8;
    case 52u: goto L_001C883C;
    case 53u: goto L_001C8850;
    case 54u: goto L_001C8868;
    case 55u: goto L_001C8888;
    case 56u: goto L_001C88A0;
    case 57u: goto L_001C8964;
    case 58u: goto L_001C8980;
    case 59u: goto L_001C8994;
    case 60u: goto L_001C899C;
    case 61u: goto L_001C89BC;
    case 62u: goto L_001C89CC;
    case 63u: goto L_001C89DC;
    case 64u: goto L_001C8A10;
    case 65u: goto L_001C8A30;
    case 66u: goto L_001C8A4C;
    case 67u: goto L_001C8A60;
    case 68u: goto L_001C8A80;
    case 69u: goto L_001C8AA0;
    case 70u: goto L_001C8AB0;
    case 71u: goto L_001C8ACC;
    case 72u: goto L_001C8AE8;
    case 73u: goto L_001C8B04;
    case 74u: goto L_001C8B18;
    case 75u: goto L_001C8B34;
    case 76u: goto L_001C8B5C;
    case 77u: goto L_001C8B74;
    case 78u: goto L_001C8B94;
    case 79u: goto L_001C8BA4;
    case 80u: goto L_001C8BCC;
    case 81u: goto L_001C8BEC;
    case 82u: goto L_001C8C00;
    case 83u: goto L_001C8C14;
    case 84u: goto L_001C8C4C;
    case 85u: goto L_001C8CA8;
    case 86u: goto L_001C8D24;
    case 87u: goto L_001C8D48;
    case 88u: goto L_001C8DD0;
    case 89u: goto L_001C8DE0;
    case 90u: goto L_001C8DFC;
    case 91u: goto L_001C8E14;
    case 92u: goto L_001C8E24;
    case 93u: goto L_001C8E38;
    case 94u: goto L_001C8E58;
    case 95u: goto L_001C8E6C;
    case 96u: goto L_001C8E8C;
    case 97u: goto L_001C8EB4;
    case 98u: goto L_001C8ED4;
    case 99u: goto L_001C8F10;
    case 100u: goto L_001C8F2C;
    case 101u: goto L_001C8F40;
    case 102u: goto L_001C8F54;
    case 103u: goto L_001C8F7C;
    case 104u: goto L_001C8F8C;
    case 105u: goto L_001C8FAC;
    case 106u: goto L_001C8FBC;
    case 107u: goto L_001C8FD8;
    case 108u: goto L_001C8FFC;
    case 109u: goto L_001C9024;
    case 110u: goto L_001C90AC;
    case 111u: goto L_001C90C0;
    case 112u: goto L_001C90D4;
    case 113u: goto L_001C90E4;
    case 114u: goto L_001C9104;
    case 115u: goto L_001C914C;
    case 116u: goto L_001C9178;
    case 117u: goto L_001C9180;
    case 118u: goto L_001C9258;
    case 119u: goto L_001C92DC;
    case 120u: goto L_001C935C;
    case 121u: goto L_001C9390;
    case 122u: goto L_001C93AC;
    case 123u: goto L_001C93D4;
    case 124u: goto L_001C93F0;
    case 125u: goto L_001C940C;
    case 126u: goto L_001C9424;
    case 127u: goto L_001C943C;
    case 128u: goto L_001C9450;
    case 129u: goto L_001C9460;
    case 130u: goto L_001C9480;
    case 131u: goto L_001C9490;
    case 132u: goto L_001C94AC;
    case 133u: goto L_001C94D0;
    case 134u: goto L_001C94F8;
    case 135u: goto L_001C9580;
    case 136u: goto L_001C9590;
    case 137u: goto L_001C95B0;
    case 138u: goto L_001C95C8;
    case 139u: goto L_001C95E0;
    case 140u: goto L_001C95F4;
    case 141u: goto L_001C9604;
    case 142u: goto L_001C9614;
    case 143u: goto L_001C9618;
    case 144u: goto L_001C961C;
    case 145u: goto L_001C9640;
    case 146u: goto L_001C9688;
    case 147u: goto L_001C96AC;
    case 148u: goto L_001C96BC;
    case 149u: goto L_001C96CC;
    case 150u: goto L_001C96DC;
    case 151u: goto L_001C96F8;
    case 152u: goto L_001C9780;
    case 153u: goto L_001C97A8;
    case 154u: goto L_001C97B8;
    case 155u: goto L_001C97E0;
    case 156u: goto L_001C9800;
    case 157u: goto L_001C9850;
    case 158u: goto L_001C9864;
    case 159u: goto L_001C9878;
    case 160u: goto L_001C9890;
    case 161u: goto L_001C98A0;
    case 162u: goto L_001C98BC;
    case 163u: goto L_001C98D8;
    case 164u: goto L_001C98EC;
    case 165u: goto L_001C990C;
    case 166u: goto L_001C9934;
    case 167u: goto L_001C9948;
    case 168u: goto L_001C9970;
    case 169u: goto L_001C9984;
    case 170u: goto L_001C99A0;
    case 171u: goto L_001C99D4;
    case 172u: goto L_001C99EC;
    case 173u: goto L_001C9A04;
    case 174u: goto L_001C9A50;
    case 175u: goto L_001C9A70;
    case 176u: goto L_001C9A7C;
    case 177u: goto L_001C9AC4;
    case 178u: goto L_001C9AD8;
    case 179u: goto L_001C9B00;
    case 180u: goto L_001C9B68;
    case 181u: goto L_001C9B78;
    case 182u: goto L_001C9B88;
    case 183u: goto L_001C9B98;
    case 184u: goto L_001C9BB0;
    case 185u: goto L_001C9BC4;
    case 186u: goto L_001C9BD4;
    case 187u: goto L_001C9C60;
    case 188u: goto L_001C9C74;
    case 189u: goto L_001C9C80;
    case 190u: goto L_001C9C94;
    case 191u: goto L_001C9CA8;
    case 192u: goto L_001C9CC8;
    case 193u: goto L_001C9CF0;
    case 194u: goto L_001C9D00;
    case 195u: goto L_001C9D1C;
    case 196u: goto L_001C9D34;
    case 197u: goto L_001C9D4C;
    case 198u: goto L_001C9DA4;
    case 199u: goto L_001C9DBC;
    case 200u: goto L_001C9DE0;
    case 201u: goto L_001C9E00;
    case 202u: goto L_001C9E1C;
    case 203u: goto L_001C9E3C;
    case 204u: goto L_001C9E5C;
    case 205u: goto L_001C9E74;
    case 206u: goto L_001C9E80;
    case 207u: goto L_001C9E9C;
    case 208u: goto L_001C9EB8;
    case 209u: goto L_001C9ED0;
    case 210u: goto L_001C9EE0;
    case 211u: goto L_001C9F04;
    case 212u: goto L_001C9F38;
    case 213u: goto L_001C9F54;
    case 214u: goto L_001C9F68;
    case 215u: goto L_001C9F94;
    case 216u: goto L_001CA018;
    case 217u: goto L_001CA054;
    case 218u: goto L_001CA064;
    case 219u: goto L_001CA078;
    case 220u: goto L_001CA0A0;
    case 221u: goto L_001CA0B0;
    case 222u: goto L_001CA0DC;
    case 223u: goto L_001CA118;
    case 224u: goto L_001CA130;
    case 225u: goto L_001CA1B8;
    case 226u: goto L_001CA1E0;
    case 227u: goto L_001CA208;
    case 228u: goto L_001CA224;
    case 229u: goto L_001CA2A0;
    case 230u: goto L_001CA2E0;
    case 231u: goto L_001CA2F0;
    case 232u: goto L_001CA300;
    case 233u: goto L_001CA3C8;
    case 234u: goto L_001CA3E8;
    case 235u: goto L_001CA3FC;
    case 236u: goto L_001CA440;
    case 237u: goto L_001CA480;
    case 238u: goto L_001CA490;
    case 239u: goto L_001CA4A4;
    case 240u: goto L_001CA4E8;
    case 241u: goto L_001CA4FC;
    case 242u: goto L_001CA520;
    case 243u: goto L_001CA530;
    case 244u: goto L_001CA554;
    case 245u: goto L_001CA564;
    case 246u: goto L_001CA588;
    case 247u: goto L_001CA598;
    case 248u: goto L_001CA5BC;
    case 249u: goto L_001CA5CC;
    case 250u: goto L_001CA63C;
    case 251u: goto L_001CA64C;
    case 252u: goto L_001CA66C;
    case 253u: goto L_001CA680;
    case 254u: goto L_001CA690;
    case 255u: goto L_001CA6B0;
    case 256u: goto L_001CA6D0;
    case 257u: goto L_001CA6F0;
    case 258u: goto L_001CA710;
    case 259u: goto L_001CA720;
    case 260u: goto L_001CA73C;
    case 261u: goto L_001CA750;
    case 262u: goto L_001CA898;
    case 263u: goto L_001CA8AC;
    case 264u: goto L_001CA8BC;
    case 265u: goto L_001CA8D8;
    case 266u: goto L_001CA8EC;
    case 267u: goto L_001CA8FC;
    case 268u: goto L_001CA914;
    case 269u: goto L_001CA974;
    case 270u: goto L_001CA9A0;
    case 271u: goto L_001CA9B0;
    case 272u: goto L_001CA9DC;
    case 273u: goto L_001CA9F4;
    case 274u: goto L_001CAA54;
    case 275u: goto L_001CAA7C;
    case 276u: goto L_001CAAB4;
    case 277u: goto L_001CAAC4;
    case 278u: goto L_001CAAE0;
    case 279u: goto L_001CAAF4;
    case 280u: goto L_001CABC4;
    case 281u: goto L_001CACA8;
    case 282u: goto L_001CACD8;
    case 283u: goto L_001CAD74;
    case 284u: goto L_001CAD84;
    case 285u: goto L_001CAD98;
    case 286u: goto L_001CADC0;
    case 287u: goto L_001CADFC;
    case 288u: goto L_001CAE18;
    case 289u: goto L_001CAE34;
    case 290u: goto L_001CAE50;
    case 291u: goto L_001CAE8C;
    case 292u: goto L_001CAF3C;
    case 293u: goto L_001CAF5C;
    case 294u: goto L_001CAF6C;
    case 295u: goto L_001CAF7C;
    case 296u: goto L_001CAF90;
    case 297u: goto L_001CB1DC;
    case 298u: goto L_001CB1F8;
    case 299u: goto L_001CB21C;
    case 300u: goto L_001CB23C;
    case 301u: goto L_001CB248;
    case 302u: goto L_001CB324;
    case 303u: goto L_001CB364;
    case 304u: goto L_001CB374;
    case 305u: goto L_001CB388;
    case 306u: goto L_001CB3E0;
    case 307u: goto L_001CB404;
    case 308u: goto L_001CB420;
    case 309u: goto L_001CB444;
    case 310u: goto L_001CB464;
    case 311u: goto L_001CB470;
    case 312u: goto L_001CB4F4;
    case 313u: goto L_001CB514;
    case 314u: goto L_001CB58C;
    case 315u: goto L_001CB5C4;
    case 316u: goto L_001CB634;
    case 317u: goto L_001CB7A0;
    case 318u: goto L_001CB7E8;
    case 319u: goto L_001CB808;
    case 320u: goto L_001CB810;
    case 321u: goto L_001CB824;
    case 322u: goto L_001CB840;
    case 323u: goto L_001CB85C;
    case 324u: goto L_001CB878;
    case 325u: goto L_001CB8C0;
    case 326u: goto L_001CB8F4;
    case 327u: goto L_001CB90C;
    case 328u: goto L_001CB918;
    case 329u: goto L_001CB924;
    case 330u: goto L_001CB92C;
    case 331u: goto L_001CB97C;
    case 332u: goto L_001CB9F0;
    case 333u: goto L_001CBA04;
    case 334u: goto L_001CBA14;
    case 335u: goto L_001CBA34;
    case 336u: goto L_001CBA54;
    case 337u: goto L_001CBA6C;
    case 338u: goto L_001CBAA0;
    case 339u: goto L_001CBAD0;
    case 340u: goto L_001CBAF8;
    case 341u: goto L_001CBB04;
    case 342u: goto L_001CBB40;
    case 343u: goto L_001CBC84;
    case 344u: goto L_001CBCA0;
    case 345u: goto L_001CBCC0;
    case 346u: goto L_001CBCDC;
    case 347u: goto L_001CBCF4;
    case 348u: goto L_001CBD10;
    case 349u: goto L_001CBD18;
    case 350u: goto L_001CBD30;
    case 351u: goto L_001CBDAC;
    case 352u: goto L_001CBDBC;
    case 353u: goto L_001CBE28;
    case 354u: goto L_001CBEB8;
    case 355u: goto L_001CBF30;
    case 356u: goto L_001CBFC0;
    default: bad_entry(c, 0x001C8000u); return;
    }
L_001C8000:
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C801C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
L_001C801C:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8028u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8028u) [[unlikely]] return; }
L_001C8028:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8040u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8040u) [[unlikely]] return; }
L_001C8040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8048:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8060u);  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001C8060u) [[unlikely]] return; }
L_001C8060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8070u);  if (depth < kMaxDepth) unit_0034(c, 69u, depth + 1u); else { c.pc = 0x001D07F0u; return; } if (c.pc != 0x001C8070u) [[unlikely]] return; }
L_001C8070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8080u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x001C8080u) [[unlikely]] return; }
L_001C8080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8090; } }
L_001C8088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8090:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C8170; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C8170; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001C80C0u) [[unlikely]] return; }
L_001C80C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8164; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_001C8110; } }
    set32(c.r[2], 0u + 1201u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80E0u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C80E0u) [[unlikely]] return; }
L_001C80E0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8144; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8144; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1203u);  if (t) { goto L_001C8144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C8144; } }
L_001C8110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8118u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C8118u) [[unlikely]] return; }
L_001C8118:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8144; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8144; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 371u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1202u);  if (t) { goto L_001C8144; } }
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C8144:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C815Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C815Cu) [[unlikely]] return; }
L_001C815C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8164:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C8170:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C820C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 155u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C820C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C81B0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C81AC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C81C0; } }
L_001C81AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C81B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81B8u); set32(c.r[5], 0u + 630u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C81B8u) [[unlikely]] return; }
L_001C81B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8204; } }
L_001C81C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C81DC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C81F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C81DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81ECu); set32(c.r[5], 0u + 660u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C81ECu) [[unlikely]] return; }
L_001C81EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8200; } }
L_001C81F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8200u); set32(c.r[6], 0u + 5800u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8200u) [[unlikely]] return; }
L_001C8200:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C820C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8314; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15310u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15320u);  if (t) { goto L_001C8244; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8244; } }
    set32(c.r[2], 0u + 15350u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15360u);  if (t) { goto L_001C8244; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8310; } }
L_001C8244:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15310u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001C8264; } }
    set32(c.r[2], 0u + 15350u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8264; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8264:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001C8270; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001C8270:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001C82A8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 15540u);  if (t) { goto L_001C8284; } }
    set32(c.r[2], 0u + 15530u);
    c.budget -= 1;
L_001C8284:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C829Cu); set32(c.r[6], 0u + 15530u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C829Cu) [[unlikely]] return; }
L_001C829C:
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C82A8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], 0u + 15560u);  if (t) { goto L_001C82B4; } }
    set32(c.r[4], 0u + 15550u);
    c.budget -= 1;
L_001C82B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 11u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C82F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001C82D8u) [[unlikely]] return; }
L_001C82D8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C82F4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u + 15565u);  if (t) { goto L_001C82F0; } }
    set32(c.r[2], 0u + 15555u);
    c.budget -= 1;
L_001C82F0:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C82F4:
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8308u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8308u) [[unlikely]] return; }
L_001C8308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C8314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C831Cu);  if (depth < kMaxDepth) unit_0034(c, 121u, depth + 1u); else { c.pc = 0x001D1130u; return; } if (c.pc != 0x001C831Cu) [[unlikely]] return; }
L_001C831C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C836C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8358; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 571u);  if (t) { goto L_001C835C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8350u); st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8350u) [[unlikely]] return; }
L_001C8350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C8364; } }
L_001C8358:
    set32(c.r[5], 0u + 571u);
    c.budget -= 1;
L_001C835C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8364u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C8364u) [[unlikely]] return; }
L_001C8364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C836C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8374u);  if (depth < kMaxDepth) unit_0034(c, 157u, depth + 1u); else { c.pc = 0x001D1A10u; return; } if (c.pc != 0x001C8374u) [[unlikely]] return; }
L_001C8374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8384:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C83E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 71u, depth + 1u); else { c.pc = 0x001D0810u; return; } if (c.pc != 0x001C8398u) [[unlikely]] return; }
L_001C8398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C83C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001C83A8u) [[unlikely]] return; }
L_001C83A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C83C4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C83DC; } }
L_001C83C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C83C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83D4u); set32(c.r[6], 0u + 5800u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C83D4u) [[unlikely]] return; }
L_001C83D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C83DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C83E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83E8u);  if (depth < kMaxDepth) unit_0034(c, 200u, depth + 1u); else { c.pc = 0x001D2B10u; return; } if (c.pc != 0x001C83E8u) [[unlikely]] return; }
L_001C83E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C85F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C85F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8408u); set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001C8408u) [[unlikely]] return; }
L_001C8408:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C85F0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C85E8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C85E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8444; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 172u)));  if (t) { goto L_001C844C; } }
L_001C8444:
    set32(c.r[19], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 2;
L_001C844C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8458; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_001C8458:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 98u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8470u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8470u) [[unlikely]] return; }
L_001C8470:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C84C0; } }
    set32(c.r[2], 0u + 6416u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8490u) [[unlikely]] return; }
L_001C8490:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 1785u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C84B8; } }
    set32(c.r[2], 0u + 1787u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6417u);  if (t) { goto L_001C84BC; } }
    set32(c.r[2], 0u + 1786u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C84C0; } }
L_001C84B8:
    set32(c.r[2], 0u + 6417u);
    c.budget -= 1;
L_001C84BC:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C84C0:
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C84F0u) [[unlikely]] return; }
L_001C84F0:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8508u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001C8508u) [[unlikely]] return; }
L_001C8508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8518u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C8518u) [[unlikely]] return; }
L_001C8518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001C8524; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C8524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[19].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8534u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C8534u) [[unlikely]] return; }
L_001C8534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001C8540; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C8540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8548u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001C8548u) [[unlikely]] return; }
L_001C8548:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 208u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 224u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    c.f[1] = ld32((c.r[18].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001C85BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), c.f[0]);  if (t) { goto L_001C85DC; } }
L_001C85BC:
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C85DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001C85DC:
    c.f[0] = ld32((c.r[18].w[0] + 212u));
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 2;
L_001C85E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C85E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C85F0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8604u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001C8604u) [[unlikely]] return; }
L_001C8604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8A1C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8680; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 90u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8634u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x001C8634u) [[unlikely]] return; }
L_001C8634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C8658; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8650u); set32(c.r[7], 0u + 90u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8650u) [[unlikely]] return; }
L_001C8650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8658:
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8664u); set32(c.r[5], 0u + 1250u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C8664u) [[unlikely]] return; }
L_001C8664:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8678u); set32(c.r[6], 0u + 1250u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8678u) [[unlikely]] return; }
L_001C8678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C8A10; } }
L_001C8680:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 60u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8698u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8698u) [[unlikely]] return; }
L_001C8698:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C86C0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86B8u); set32(c.r[6], 0u + 800u);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4FA0u; return; } if (c.pc != 0x001C86B8u) [[unlikely]] return; }
L_001C86B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8A14; } }
L_001C86C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86C8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C86C8u) [[unlikely]] return; }
L_001C86C8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8834; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8830; } }
    set32(c.r[5], c.r[29].w[0] + 356u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86F0u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0035(c, 57u, depth + 1u); else { c.pc = 0x001D5300u; return; } if (c.pc != 0x001C86F0u) [[unlikely]] return; }
L_001C86F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8830; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8704u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 8u, depth + 1u); else { c.pc = 0x001E4080u; return; } if (c.pc != 0x001C8704u) [[unlikely]] return; }
L_001C8704:
    set32(c.r[2], 0u + 2700u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C871Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C871Cu) [[unlikely]] return; }
L_001C871C:
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8734u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001C8734u) [[unlikely]] return; }
L_001C8734:
    set32(c.r[4], ld32((c.r[29].w[0] + 352u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C874Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001C874Cu) [[unlikely]] return; }
L_001C874C:
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C878Cu); st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C878Cu) [[unlikely]] return; }
L_001C878C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001C8798; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C8798:
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87ACu); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C87ACu) [[unlikely]] return; }
L_001C87AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001C87B8; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C87B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001C87C0u) [[unlikely]] return; }
L_001C87C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.r[5].d[0] = c.r[2].d[0] | 20035ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87D4u); set32(c.r[4], c.r[3].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C87D4u) [[unlikely]] return; }
L_001C87D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001C87E0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C87E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001C87E8u) [[unlikely]] return; }
L_001C87E8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 394u));
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 352u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C9618; } }
L_001C8830:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C8834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C883Cu);  if (depth < kMaxDepth) unit_0035(c, 50u, depth + 1u); else { c.pc = 0x001D51C0u; return; } if (c.pc != 0x001C883Cu) [[unlikely]] return; }
L_001C883C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8850u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 8u, depth + 1u); else { c.pc = 0x001E4080u; return; } if (c.pc != 0x001C8850u) [[unlikely]] return; }
L_001C8850:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 103u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8868u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8868u) [[unlikely]] return; }
L_001C8868:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8888u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8888u) [[unlikely]] return; }
L_001C8888:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88A0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001C88A0u) [[unlikely]] return; }
L_001C88A0:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[0] = 0u;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 393u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 240u)));  if (t) { goto L_001C8918; } }
L_001C8910:
    c.f[2] = c.f[2] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 2;
L_001C8918:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8934; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8938; } }
L_001C8934:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001C8938:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);  if (t) { goto L_001C8958; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    c.budget -= 5;
L_001C8958:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8964u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C8964u) [[unlikely]] return; }
L_001C8964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C8970; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C8970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[17].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8980u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C8980u) [[unlikely]] return; }
L_001C8980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001C898C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001C898C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8994u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x001C8994u) [[unlikely]] return; }
L_001C8994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001C89EC; } }
L_001C899C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C89E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89BCu);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001C89BCu) [[unlikely]] return; }
L_001C89BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C89E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89CCu);  if (depth < kMaxDepth) unit_0034(c, 69u, depth + 1u); else { c.pc = 0x001D07F0u; return; } if (c.pc != 0x001C89CCu) [[unlikely]] return; }
L_001C89CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C89E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89DCu);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x001C89DCu) [[unlikely]] return; }
L_001C89DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C89E8; } }
L_001C89E4:
    st32((c.r[17].w[0] + 640u), 0u);
    c.budget -= 1;
L_001C89E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001C89EC:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C899Cu | kUnwind; return; } goto L_001C899C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8A10; } }
L_001C8A00:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8A10u) [[unlikely]] return; }
L_001C8A10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C8A1C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A30u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x001C8A30u) [[unlikely]] return; }
L_001C8A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8AB8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C8A68; } }
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A4Cu); set32(c.r[5], 0u + 903u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C8A4Cu) [[unlikely]] return; }
L_001C8A4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A60u); set32(c.r[6], 0u + 903u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8A60u) [[unlikely]] return; }
L_001C8A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C8AB0; } }
L_001C8A68:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 65u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8A80u) [[unlikely]] return; }
L_001C8A80:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8AA0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AA0u); set32(c.r[6], 0u + 900u);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4FA0u; return; } if (c.pc != 0x001C8AA0u) [[unlikely]] return; }
L_001C8AA0:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8AB0u) [[unlikely]] return; }
L_001C8AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8AB8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8ACCu);  if (depth < kMaxDepth) unit_0034(c, 109u, depth + 1u); else { c.pc = 0x001D0F00u; return; } if (c.pc != 0x001C8ACCu) [[unlikely]] return; }
L_001C8ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8B80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 59u);  if (t) { goto L_001C8B24; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AE8u); st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C8AE8u) [[unlikely]] return; }
L_001C8AE8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8B0C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B04u); set32(c.r[6], 0u + 808u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8B04u) [[unlikely]] return; }
L_001C8B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C8B1C; } }
L_001C8B0C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B18u); set32(c.r[6], 0u + 1205u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8B18u) [[unlikely]] return; }
L_001C8B18:
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 1;
L_001C8B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8B78; } }
L_001C8B24:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8B34u) [[unlikely]] return; }
L_001C8B34:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8B64; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B5Cu); set32(c.r[6], 0u + 800u);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4FA0u; return; } if (c.pc != 0x001C8B5Cu) [[unlikely]] return; }
L_001C8B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8B74; } }
L_001C8B64:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8B74u) [[unlikely]] return; }
L_001C8B74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C8B80:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B94u);  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001C8B94u) [[unlikely]] return; }
L_001C8B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BA4u);  if (depth < kMaxDepth) unit_0034(c, 163u, depth + 1u); else { c.pc = 0x001D1FD0u; return; } if (c.pc != 0x001C8BA4u) [[unlikely]] return; }
L_001C8BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8BBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 753u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8C58; } }
L_001C8BBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 163u, depth + 1u); else { c.pc = 0x001D1FD0u; return; } if (c.pc != 0x001C8BCCu) [[unlikely]] return; }
L_001C8BCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8BF4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BECu); st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8BECu) [[unlikely]] return; }
L_001C8BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C8C4C; } }
L_001C8BF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C8BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C00u);  if (depth < kMaxDepth) unit_0034(c, 163u, depth + 1u); else { c.pc = 0x001D1FD0u; return; } if (c.pc != 0x001C8C00u) [[unlikely]] return; }
L_001C8C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5900u);  if (t) { goto L_001C8C1C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C14u); set32(c.r[5], 0u + 573u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C8C14u) [[unlikely]] return; }
L_001C8C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8C50; } }
L_001C8C1C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 944u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5901u);  if (t) { goto L_001C8C34; } }
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C8C34:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 368u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C8C4Cu) [[unlikely]] return; }
L_001C8C4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C8C58:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9618; } }
L_001C8C70:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 15700u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8D60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[6], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001C8D60; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8CC8; } }
    set32(c.r[5], 0u + 15720u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001C8CA8u) [[unlikely]] return; }
L_001C8CA8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C9618; } }
L_001C8CC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    set32(c.r[2], 0u + 15730u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[18].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.f[12] = ld32((c.r[1].w[0] + 20168u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D24u); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001C8D24u) [[unlikely]] return; }
L_001C8D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8D34; } }
    set32(c.r[2], 0u + 15731u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8D34:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001C8D48u) [[unlikely]] return; }
L_001C8D48:
    ld128((c.r[17].w[0] + 208u) & ~15u, c.r[3]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 208u) & ~15u, c.r[3]);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_001C9618; } }
L_001C8D60:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8D80; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_001C8D80:
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_001C8DAC; } }
L_001C8DA4:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 2;
L_001C8DAC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9618; } }
L_001C8DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DD0u);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001C8DD0u) [[unlikely]] return; }
L_001C8DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DE0u);  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001C8DE0u) [[unlikely]] return; }
L_001C8DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8E0C; } }
L_001C8DE8:
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DFCu); set32(c.r[6], 0u + 15490u);  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001C8DFCu) [[unlikely]] return; }
L_001C8DFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 644u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 644u), c.r[3].w[0]);  if (t) { goto L_001C9618; } }
L_001C8E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E14u);  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001C8E14u) [[unlikely]] return; }
L_001C8E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001C8E24u) [[unlikely]] return; }
L_001C8E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8E94; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C8E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E38u);  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001C8E38u) [[unlikely]] return; }
L_001C8E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C8E84; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[2], 0u + 157u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E58u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C8E58u) [[unlikely]] return; }
L_001C8E58:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E6Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C8E6Cu) [[unlikely]] return; }
L_001C8E6C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8E80; } }
L_001C8E78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C8E80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C8E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 104u, depth + 1u); else { c.pc = 0x001C50F0u; return; } if (c.pc != 0x001C8E8Cu) [[unlikely]] return; }
L_001C8E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8E94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001C910C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 31u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8EB4u); st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C8EB4u) [[unlikely]] return; }
L_001C8EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8EC8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
L_001C8EC8:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8ED4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C8ED4u) [[unlikely]] return; }
L_001C8ED4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8EF0; } }
    set32(c.r[2], 0u + 900u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8EF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C8F5C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 90u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x001C8F10u) [[unlikely]] return; }
L_001C8F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C8F34; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F2Cu); set32(c.r[7], 0u + 90u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8F2Cu) [[unlikely]] return; }
L_001C8F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8F34:
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F40u); set32(c.r[5], 0u + 903u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C8F40u) [[unlikely]] return; }
L_001C8F40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F54u); set32(c.r[6], 0u + 903u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C8F54u) [[unlikely]] return; }
L_001C8F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C9614; } }
L_001C8F5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[2], 0u + 900u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C8F84; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F7Cu); set32(c.r[6], 0u + 800u);  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4FA0u; return; } if (c.pc != 0x001C8F7Cu) [[unlikely]] return; }
L_001C8F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C8F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F8Cu);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C8F8Cu) [[unlikely]] return; }
L_001C8F8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C90B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C90B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FACu);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C8FACu) [[unlikely]] return; }
L_001C8FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C90B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FBCu);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C8FBCu) [[unlikely]] return; }
L_001C8FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C90B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FD8u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001C8FD8u) [[unlikely]] return; }
L_001C8FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4402u);  if (t) { goto L_001C8FEC; } }
L_001C8FE8:
    set32(c.r[2], 0u + 4412u);
    c.budget -= 1;
L_001C8FEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C9014; } }
L_001C8FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FFCu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001C8FFCu) [[unlikely]] return; }
L_001C8FFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C900C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4403u);  if (t) { goto L_001C9010; } }
L_001C900C:
    set32(c.r[2], 0u + 4413u);
    c.budget -= 1;
L_001C9010:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C9014:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9024u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9024u) [[unlikely]] return; }
L_001C9024:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AEE0u; return; } if (c.pc != 0x001C90ACu) [[unlikely]] return; }
L_001C90AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C90B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C90B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90C0u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C90C0u) [[unlikely]] return; }
L_001C90C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C90D4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 55u, depth + 1u); else { c.pc = 0x001D87A0u; return; } if (c.pc != 0x001C90D4u) [[unlikely]] return; }
L_001C90D4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 364u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 143u, depth + 1u); else { c.pc = 0x001CDC40u; return; } if (c.pc != 0x001C90E4u) [[unlikely]] return; }
L_001C90E4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C90F4; } }
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C90F4:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9104u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9104u) [[unlikely]] return; }
L_001C9104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C910C:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 10u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C9260; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 95u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C92D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C914Cu);  if (depth < kMaxDepth) unit_0035(c, 76u, depth + 1u); else { c.pc = 0x001D5810u; return; } if (c.pc != 0x001C914Cu) [[unlikely]] return; }
L_001C914C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C92D0; } }
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C92D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9178u);  if (depth < kMaxDepth) unit_0039(c, 50u, depth + 1u); else { c.pc = 0x001E49E0u; return; } if (c.pc != 0x001C9178u) [[unlikely]] return; }
L_001C9178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9180u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C9180u) [[unlikely]] return; }
L_001C9180:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C92D0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001C92D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 944u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 368u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C92D0; } }
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001C91C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001C91E4; } }
L_001C91C8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_001C91E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001C9228; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 212u), c.f[0]);  if (t) { goto L_001C9248; } }
L_001C9228:
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C924C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001C9248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001C924C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9258u); set32(c.r[6], 0u + 1205u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9258u) [[unlikely]] return; }
L_001C9258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C9260:
    set32(c.r[2], ld32((c.r[18].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C92D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 15u);  if (t) { goto L_001C92D0; } }
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[18].w[0] + 636u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C9298; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 19u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
L_001C9298:
    set32(c.r[3], ld32((c.r[18].w[0] + 636u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C92B4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 120u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
L_001C92B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 636u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C92D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], c.r[2].w[0] + 124u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 3;
L_001C92D0:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C92DCu) [[unlikely]] return; }
L_001C92DC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C92F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 800u);  if (t) { goto L_001C92F8; } }
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C92F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C9334; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C9334; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 12456u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 7;
L_001C9334:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[6], 0u + 800u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001C9398; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C9388; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C935Cu); set32(c.r[6], 0u + 801u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C935Cu) [[unlikely]] return; }
L_001C935C:
    st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 587u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    st8((c.r[18].w[0] + 589u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 60u);
    st32((c.r[18].w[0] + 640u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 585u)));
    st8((c.r[18].w[0] + 585u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C9390; } }
L_001C9388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9390u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 97u, depth + 1u); else { c.pc = 0x001C4FA0u; return; } if (c.pc != 0x001C9390u) [[unlikely]] return; }
L_001C9390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C9398:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9458; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 82u, depth + 1u); else { c.pc = 0x002F9160u; return; } if (c.pc != 0x001C93ACu) [[unlikely]] return; }
L_001C93AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C93BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C93BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 90u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x001C93D4u) [[unlikely]] return; }
L_001C93D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 808u);  if (t) { goto L_001C93F8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C93F0u); set32(c.r[7], 0u + 90u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C93F0u) [[unlikely]] return; }
L_001C93F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C93F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001C9430; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C940Cu); set32(c.r[5], 0u + 86u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C940Cu) [[unlikely]] return; }
L_001C940C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9424u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9424u) [[unlikely]] return; }
L_001C9424:
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C9430:
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C943Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C943Cu) [[unlikely]] return; }
L_001C943C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9450u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9450u) [[unlikely]] return; }
L_001C9450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C9614; } }
L_001C9458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9460u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C9460u) [[unlikely]] return; }
L_001C9460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9588; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C9588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9480u);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C9480u) [[unlikely]] return; }
L_001C9480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9490u);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C9490u) [[unlikely]] return; }
L_001C9490:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9588; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 884u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C94C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94ACu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001C94ACu) [[unlikely]] return; }
L_001C94AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C94BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4400u);  if (t) { goto L_001C94C0; } }
L_001C94BC:
    set32(c.r[2], 0u + 4408u);
    c.budget -= 1;
L_001C94C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_001C94E8; } }
L_001C94C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94D0u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001C94D0u) [[unlikely]] return; }
L_001C94D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C94E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4401u);  if (t) { goto L_001C94E4; } }
L_001C94E0:
    set32(c.r[2], 0u + 4409u);
    c.budget -= 1;
L_001C94E4:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C94E8:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C94F8u) [[unlikely]] return; }
L_001C94F8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[18].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9580u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AEE0u; return; } if (c.pc != 0x001C9580u) [[unlikely]] return; }
L_001C9580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9590u); set32(c.r[4], ld32((c.r[29].w[0] + 364u)));  if (depth < kMaxDepth) unit_0034(c, 213u, depth + 1u); else { c.pc = 0x001D3090u; return; } if (c.pc != 0x001C9590u) [[unlikely]] return; }
L_001C9590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C95B8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C95B8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95B0u); set32(c.r[6], 0u + 4819u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C95B0u) [[unlikely]] return; }
L_001C95B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9618; } }
L_001C95B8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 364u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95C8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 143u, depth + 1u); else { c.pc = 0x001CDC40u; return; } if (c.pc != 0x001C95C8u) [[unlikely]] return; }
L_001C95C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C95D8; } }
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 1;
L_001C95D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95E0u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C95E0u) [[unlikely]] return; }
L_001C95E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001C95F8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 55u, depth + 1u); else { c.pc = 0x001D87A0u; return; } if (c.pc != 0x001C95F4u) [[unlikely]] return; }
L_001C95F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001C95F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9604u); set32(c.r[6], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_00A6(c, 26u, depth + 1u); else { c.pc = 0x003983F0u; return; } if (c.pc != 0x001C9604u) [[unlikely]] return; }
L_001C9604:
    set32(c.r[6], ld32((c.r[29].w[0] + 364u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9614u) [[unlikely]] return; }
L_001C9614:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C9618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001C961C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001C9640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 370u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001C9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001C9688u) [[unlikely]] return; }
L_001C9688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001C96ACu) [[unlikely]] return; }
L_001C96AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001C96BCu) [[unlikely]] return; }
L_001C96BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 157u, depth + 1u); else { c.pc = 0x001D1A10u; return; } if (c.pc != 0x001C96CCu) [[unlikely]] return; }
L_001C96CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001C96DCu) [[unlikely]] return; }
L_001C96DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9984; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20160u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96F8u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001C96F8u) [[unlikely]] return; }
L_001C96F8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C9710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001C9988; } }
L_001C9710:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C972C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u + 155u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C9984; } }
L_001C972C:
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C9758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001C9760; } }
L_001C9758:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_001C9760:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C9984; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9780u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 243u, depth + 1u); else { c.pc = 0x001C7790u; return; } if (c.pc != 0x001C9780u) [[unlikely]] return; }
L_001C9780:
    c.f[1] = ld32((c.r[19].w[0] + 228u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C982C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001C97A8u) [[unlikely]] return; }
L_001C97A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C982C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001C97B8u) [[unlikely]] return; }
L_001C97B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C982C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[6], 0u + 4734u);  if (t) { goto L_001C97EC; } }
    set32(c.r[6], 0u + 809u);
    set32(c.r[2], 0u + 903u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97E0u); if (c.r[16].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C97E0u) [[unlikely]] return; }
L_001C97E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9984; } }
    set32(c.r[6], 0u + 4734u);
    c.budget -= 1;
L_001C97EC:
    set32(c.r[2], 0u + 5417u);
    if (c.r[16].d[0] != 0) c.r[6].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9800u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9800u) [[unlikely]] return; }
L_001C9800:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 398u));
    set32(c.r[4], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 398u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 398u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C9984; } }
L_001C982C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001C98A8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9870; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9850u); set32(c.r[5], 0u + 903u);  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C9850u) [[unlikely]] return; }
L_001C9850:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 903u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9864u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9864u) [[unlikely]] return; }
L_001C9864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9984; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9878u); set32(c.r[16], 0u + 93u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C9878u) [[unlikely]] return; }
L_001C9878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9888; } }
    set32(c.r[16], 0u + 94u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001C9888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9890u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9890u) [[unlikely]] return; }
L_001C9890:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98A0u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C98A0u) [[unlikely]] return; }
L_001C98A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9984; } }
L_001C98A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001C98F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98BCu); set32(c.r[16], 0u + 813u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001C98BCu) [[unlikely]] return; }
L_001C98BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C98C8; } }
    set32(c.r[16], 0u + 812u);
    c.budget -= 1;
L_001C98C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C98D8u) [[unlikely]] return; }
L_001C98D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98ECu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C98ECu) [[unlikely]] return; }
L_001C98EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9984; } }
L_001C98F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 4575u);  if (t) { goto L_001C9904; } }
    set32(c.r[16], 0u + 4572u);
    c.budget -= 1;
L_001C9904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C990Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001C990Cu) [[unlikely]] return; }
L_001C990C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9940; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28312u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9934u); set32(c.r[5], c.r[2].w[0] + 86u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9934u) [[unlikely]] return; }
L_001C9934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C9974; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9948u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001C9948u) [[unlikely]] return; }
L_001C9948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001C9978; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28312u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9970u); set32(c.r[5], c.r[2].w[0] + 86u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9970u) [[unlikely]] return; }
L_001C9970:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C9974:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001C9978:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9984u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9984u) [[unlikely]] return; }
L_001C9984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001C9988:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001C99A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99D4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C99D4u) [[unlikely]] return; }
L_001C99D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[21] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99ECu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C99ECu) [[unlikely]] return; }
L_001C99EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[20] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A04u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C9A04u) [[unlikely]] return; }
L_001C9A04:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C9A1C; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C9A24; } }
L_001C9A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001C9A2C; } }
L_001C9A24:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001C9A2C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C9A50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0032(c, 170u, depth + 1u); else { c.pc = 0x001C99A0u; return; } if (c.pc != 0x001C9A70u) [[unlikely]] return; }
L_001C9A70:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001C9A7Cu) [[unlikely]] return; }
L_001C9A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9A9C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9A94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1011u);  if (t) { goto L_001C9AB0; } }
L_001C9A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1111u);  if (t) { goto L_001C9AB0; } }
L_001C9A9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1058u);  if (t) { goto L_001C9AB0; } }
L_001C9AAC:
    set32(c.r[16], 0u + 1155u);
    c.budget -= 1;
L_001C9AB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001C9AC4u) [[unlikely]] return; }
L_001C9AC4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9AC8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AD8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9AD8u) [[unlikely]] return; }
L_001C9AD8:
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], 0u + 260u);
    st32((c.r[18].w[0] + 888u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 892u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C9B00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 370u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001CA1B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 157u, depth + 1u); else { c.pc = 0x001D1A10u; return; } if (c.pc != 0x001C9B68u) [[unlikely]] return; }
L_001C9B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001C9B78u) [[unlikely]] return; }
L_001C9B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x001C9B88u) [[unlikely]] return; }
L_001C9B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001C9B98u) [[unlikely]] return; }
L_001C9B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001CA1BC; } }
L_001C9BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BB0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001C9BB0u) [[unlikely]] return; }
L_001C9BB0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001C9BC4u) [[unlikely]] return; }
L_001C9BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001C9BD4u) [[unlikely]] return; }
L_001C9BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9BE0; } }
L_001C9BDC:
    st32((c.r[17].w[0] + 632u), 0u);
    c.budget -= 1;
L_001C9BE0:
    c.f[2] = ld32((c.r[17].w[0] + 228u));
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C9C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001C9C10; } }
L_001C9C08:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_001C9C10:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CA1B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 15700u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9C68; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C9C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001CA1B8; } }
L_001C9C44:
    set32(c.r[2], ld32((c.r[16].w[0] + 644u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C60u); set32(c.r[6], 0u + 15730u);  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001C9C60u) [[unlikely]] return; }
L_001C9C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA1B8; } }
L_001C9C68:
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C74u); set32(c.r[4], ld32((c.r[17].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001C9C74u) [[unlikely]] return; }
L_001C9C74:
    set32(c.r[18], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001C9C80u) [[unlikely]] return; }
L_001C9C80:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001C9C94u) [[unlikely]] return; }
L_001C9C94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001C9C98:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CA8u); st32((c.r[17].w[0] + 672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001C9CA8u) [[unlikely]] return; }
L_001C9CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9D08; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C9CD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CC8u); set32(c.r[6], 0u + 1103u);  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9CC8u) [[unlikely]] return; }
L_001C9CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001CA1B8; } }
L_001C9CD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 28312u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CF0u); set32(c.r[5], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9CF0u) [[unlikely]] return; }
L_001C9CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D00u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001C9D00u) [[unlikely]] return; }
L_001C9D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA1B8; } }
L_001C9D08:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D1Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C9D1Cu) [[unlikely]] return; }
L_001C9D1C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[21] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D34u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C9D34u) [[unlikely]] return; }
L_001C9D34:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[20] = c.f[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D4Cu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001C9D4Cu) [[unlikely]] return; }
L_001C9D4C:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001C9D68; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], 0u + 1u);  if (t) { goto L_001C9D74; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C9D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 632u)));  if (t) { goto L_001C9D78; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001C9D74:
    set32(c.r[3], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 1;
L_001C9D78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9D94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001C9D90; } }
    set32(c.r[20], 0u + 2u);
    c.budget -= 1;
L_001C9D90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001C9D94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C9DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C9DA4u) [[unlikely]] return; }
L_001C9DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9DC4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001C9DBCu) [[unlikely]] return; }
L_001C9DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9DCC; } }
L_001C9DC4:
    st32((c.r[16].w[0] + 640u), c.r[18].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C9DCC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001C9EA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DE0u); set32(c.r[18], 0u + 1103u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001C9DE0u) [[unlikely]] return; }
L_001C9DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9DEC; } }
    set32(c.r[18], 0u + 1056u);
    c.budget -= 1;
L_001C9DEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C9E0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E00u); set32(c.r[18], 0u + 1007u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001C9E00u) [[unlikely]] return; }
L_001C9E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9E0C; } }
    set32(c.r[18], 0u + 1154u);
    c.budget -= 1;
L_001C9E0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001C9E1Cu) [[unlikely]] return; }
L_001C9E1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9E34; } }
    set32(c.r[19], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001C9E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E3Cu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001C9E3Cu) [[unlikely]] return; }
L_001C9E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9E48; } }
    set32(c.r[19], 0u + 10u);
    c.budget -= 1;
L_001C9E48:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C9E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001C9E5Cu) [[unlikely]] return; }
L_001C9E5C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001C9E60:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9E8C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E74u); set32(c.r[5], 0u + 235u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001C9E74u) [[unlikely]] return; }
L_001C9E74:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 95u, depth + 1u); else { c.pc = 0x001E52C0u; return; } if (c.pc != 0x001C9E80u) [[unlikely]] return; }
L_001C9E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 640u), 0u);  if (t) { goto L_001C9EA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9E8C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9E9Cu) [[unlikely]] return; }
L_001C9E9C:
    st32((c.r[16].w[0] + 640u), 0u);
    c.budget -= 1;
L_001C9EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA1B8; } }
L_001C9EA8:
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9EB8u); set32(c.r[5], c.r[2].w[0] + 41u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9EB8u) [[unlikely]] return; }
L_001C9EB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001C9ED4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9ED0u); set32(c.r[5], c.r[2].w[0] + 46u);  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001C9ED0u) [[unlikely]] return; }
L_001C9ED0:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001C9ED4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9EE0u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 213u, depth + 1u); else { c.pc = 0x001D3090u; return; } if (c.pc != 0x001C9EE0u) [[unlikely]] return; }
L_001C9EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9F14; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9EFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001C9F14; } }
L_001C9EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F04u);  if (depth < kMaxDepth) unit_0034(c, 215u, depth + 1u); else { c.pc = 0x001D3140u; return; } if (c.pc != 0x001C9F04u) [[unlikely]] return; }
L_001C9F04:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C9F14; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001C9F14:
    st32((c.r[17].w[0] + 164u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9F30; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C9F40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 174u, depth + 1u); else { c.pc = 0x001C9A50u; return; } if (c.pc != 0x001C9F38u) [[unlikely]] return; }
L_001C9F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA1B8; } }
L_001C9F40:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001C9F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001C9F54u) [[unlikely]] return; }
L_001C9F54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001C9F58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F68u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001C9F68u) [[unlikely]] return; }
L_001C9F68:
    st8((c.r[17].w[0] + 374u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CA1B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9F88; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001C9F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F94u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001C9F94u) [[unlikely]] return; }
L_001C9F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001C9FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001C9FA8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C9FA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[4], c.r[4].w[0] - 25200u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CA010; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA010; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] + 60u);
    st32((c.r[16].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 10;
L_001CA010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA018u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 314u, depth + 1u); else { c.pc = 0x001F3EA0u; return; } if (c.pc != 0x001CA018u) [[unlikely]] return; }
L_001CA018:
    set32(c.r[5], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] << 3);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 640u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA054u); st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 24u, depth + 1u); else { c.pc = 0x001F4400u; return; } if (c.pc != 0x001CA054u) [[unlikely]] return; }
L_001CA054:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA064u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_003C(c, 315u, depth + 1u); else { c.pc = 0x001F3F70u; return; } if (c.pc != 0x001CA064u) [[unlikely]] return; }
L_001CA064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001CA098; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA078u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 5u, depth + 1u); else { c.pc = 0x001F4080u; return; } if (c.pc != 0x001CA078u) [[unlikely]] return; }
L_001CA078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA094; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 640u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 210u);
    st32((c.r[16].w[0] + 640u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 374u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001CA094:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CA098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0A0u);  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001CA0A0u) [[unlikely]] return; }
L_001CA0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0B0u); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_0038(c, 46u, depth + 1u); else { c.pc = 0x001E0820u; return; } if (c.pc != 0x001CA0B0u) [[unlikely]] return; }
L_001CA0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA1B8; } }
    set32(c.r[2], 0u + 1004u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001CA0F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4405u);  if (t) { goto L_001CA0F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0DCu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA0DCu) [[unlikely]] return; }
L_001CA0DC:
    set32(c.r[6], 0u + 4404u);
    set32(c.r[3], 0u + 4410u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];  if (t) { goto L_001CA124; } }
    set32(c.r[6], 0u + 4405u);
    c.budget -= 1;
L_001CA0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_001CA128; } }
L_001CA0F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4406u);  if (t) { goto L_001CA124; } }
L_001CA110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA118u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA118u) [[unlikely]] return; }
L_001CA118:
    set32(c.r[6], 0u + 4407u);
    set32(c.r[3], 0u + 4411u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_001CA124:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_001CA128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA130u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001CA130u) [[unlikely]] return; }
L_001CA130:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 395u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 403u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 403u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 884u)));
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA1B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AEE0u; return; } if (c.pc != 0x001CA1B8u) [[unlikely]] return; }
L_001CA1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001CA1BC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CA1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_001CA208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA224u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x001CA224u) [[unlikely]] return; }
L_001CA224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA230; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CA230:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA208u | kUnwind; return; } goto L_001CA208; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001CA24C; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001CA24C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA278; } }
    breakpoint(c, 0x001CA274u);
    c.budget -= 1;
L_001CA278:
    c.r[2].d[0] = c.hi.d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CA2A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 18512ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA2E0u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CA2E0u) [[unlikely]] return; }
L_001CA2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA2E8; } }
L_001CA2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA2F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CA2F0u) [[unlikely]] return; }
L_001CA2F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA300u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 202u, depth + 1u); else { c.pc = 0x001C6F20u; return; } if (c.pc != 0x001CA300u) [[unlikely]] return; }
L_001CA300:
    set32(c.r[2], c.r[29].w[0] + 160u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 23760u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001CA35C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001CA374; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001CA35C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_001CA374:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20152u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[3].d[0] = c.r[2].d[0] >> 61;
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA3C0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001CB778; } }
L_001CA3BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3C8u);  if (depth < kMaxDepth) unit_0034(c, 103u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001CA3C8u) [[unlikely]] return; }
L_001CA3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA3E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 581u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA478; } }
L_001CA3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3E8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA3E8u) [[unlikely]] return; }
L_001CA3E8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3FCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA3FCu) [[unlikely]] return; }
L_001CA3FC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA44C; } }
L_001CA408:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA440u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001CA440u) [[unlikely]] return; }
L_001CA440:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 541u);  if (t) { goto L_001CB778; } }
L_001CA44C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 580u);  if (t) { goto L_001CA46C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 581u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 580u);
    c.budget -= 1;
L_001CA46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001CB77C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA480u);  if (depth < kMaxDepth) unit_0034(c, 105u, depth + 1u); else { c.pc = 0x001D0EA0u; return; } if (c.pc != 0x001CA480u) [[unlikely]] return; }
L_001CA480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA490u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA490u) [[unlikely]] return; }
L_001CA490:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4A4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA4A4u) [[unlikely]] return; }
L_001CA4A4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA4F4; } }
L_001CA4B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA4F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4E8u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001CA4E8u) [[unlikely]] return; }
L_001CA4E8:
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 712u);  if (t) { goto L_001CB778; } }
L_001CA4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4FCu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA4FCu) [[unlikely]] return; }
L_001CA4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 600u);  if (t) { goto L_001CB778; } }
L_001CA50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 601u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA520u);  if (depth < kMaxDepth) unit_0034(c, 114u, depth + 1u); else { c.pc = 0x001D0F90u; return; } if (c.pc != 0x001CA520u) [[unlikely]] return; }
L_001CA520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA530u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA530u) [[unlikely]] return; }
L_001CA530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 242u);  if (t) { goto L_001CB778; } }
L_001CA540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 243u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA554u);  if (depth < kMaxDepth) unit_0034(c, 115u, depth + 1u); else { c.pc = 0x001D0FA0u; return; } if (c.pc != 0x001CA554u) [[unlikely]] return; }
L_001CA554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA564u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA564u) [[unlikely]] return; }
L_001CA564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 172u);  if (t) { goto L_001CB778; } }
L_001CA574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 173u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA588u);  if (depth < kMaxDepth) unit_0034(c, 113u, depth + 1u); else { c.pc = 0x001D0F80u; return; } if (c.pc != 0x001CA588u) [[unlikely]] return; }
L_001CA588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA598u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA598u) [[unlikely]] return; }
L_001CA598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 232u);  if (t) { goto L_001CB778; } }
L_001CA5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 233u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5BCu);  if (depth < kMaxDepth) unit_0034(c, 116u, depth + 1u); else { c.pc = 0x001D0FB0u; return; } if (c.pc != 0x001CA5BCu) [[unlikely]] return; }
L_001CA5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA5E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5CCu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA5CCu) [[unlikely]] return; }
L_001CA5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA5DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 292u);  if (t) { goto L_001CB778; } }
L_001CA5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 293u);  if (t) { goto L_001CB778; } }
L_001CA5E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 265u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 660u);  if (t) { goto L_001CA628; } }
    set32(c.r[2], 0u + 266u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA624; } }
    set32(c.r[2], 0u + 267u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA624; } }
    set32(c.r[2], 0u + 268u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA624; } }
    set32(c.r[2], 0u + 271u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA634; } }
L_001CA624:
    set32(c.r[2], 0u + 660u);
    c.budget -= 1;
L_001CA628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA63Cu);  if (depth < kMaxDepth) unit_0034(c, 111u, depth + 1u); else { c.pc = 0x001D0F60u; return; } if (c.pc != 0x001CA63Cu) [[unlikely]] return; }
L_001CA63C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA64Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001CA64Cu) [[unlikely]] return; }
L_001CA64C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15370u);  if (t) { goto L_001CB778; } }
L_001CA660:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA66Cu); set32(c.r[4], 0u + 15370u);  if (depth < kMaxDepth) unit_0032(c, 226u, depth + 1u); else { c.pc = 0x001CA1E0u; return; } if (c.pc != 0x001CA66Cu) [[unlikely]] return; }
L_001CA66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA680u);  if (depth < kMaxDepth) unit_0034(c, 112u, depth + 1u); else { c.pc = 0x001D0F70u; return; } if (c.pc != 0x001CA680u) [[unlikely]] return; }
L_001CA680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001CA690u) [[unlikely]] return; }
L_001CA690:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15380u);  if (t) { goto L_001CB778; } }
L_001CA6A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6B0u); set32(c.r[4], 0u + 15380u);  if (depth < kMaxDepth) unit_0032(c, 226u, depth + 1u); else { c.pc = 0x001CA1E0u; return; } if (c.pc != 0x001CA6B0u) [[unlikely]] return; }
L_001CA6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CA6B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA83C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6D0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001CA6D0u) [[unlikely]] return; }
L_001CA6D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CA83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6F0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 45u, depth + 1u); else { c.pc = 0x001D50B0u; return; } if (c.pc != 0x001CA6F0u) [[unlikely]] return; }
L_001CA6F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA83C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[2], 0u + 15300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001CA710u) [[unlikely]] return; }
L_001CA710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA83C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001CA720u) [[unlikely]] return; }
L_001CA720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA83C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.f[12] = ld32((c.r[1].w[0] + 20160u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA73Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 83u, depth + 1u); else { c.pc = 0x00145900u; return; } if (c.pc != 0x001CA73Cu) [[unlikely]] return; }
L_001CA73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA83C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA750u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0AF0u; return; } if (c.pc != 0x001CA750u) [[unlikely]] return; }
L_001CA750:
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 236u), c.f[1]);  if (t) { goto L_001CA788; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_001CA7AC; } }
L_001CA788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CA7AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.budget -= 4;
L_001CA7AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA7D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_001CA7FC; } }
L_001CA7D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CA7FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.budget -= 4;
L_001CA7FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.f[0] = ld32((c.r[1].w[0] + 20168u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 15350u);  if (t) { goto L_001CA834; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15360u);  if (t) { goto L_001CB778; } }
L_001CA830:
    set32(c.r[2], 0u + 15350u);
    c.budget -= 1;
L_001CA834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CA83C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 157u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 155u);  if (t) { goto L_001CA858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 630u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 155u);
    c.budget -= 1;
L_001CA858:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1672u);  if (t) { goto L_001CA888; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001CA878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 630u);  if (t) { goto L_001CB778; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001CA878:
    set32(c.r[2], 0u + 660u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 1672u);
    c.budget -= 1;
L_001CA888:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001CA898u) [[unlikely]] return; }
L_001CA898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 660u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8ACu);  if (depth < kMaxDepth) unit_0034(c, 121u, depth + 1u); else { c.pc = 0x001D1130u; return; } if (c.pc != 0x001CA8ACu) [[unlikely]] return; }
L_001CA8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA8E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8BCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA8BCu) [[unlikely]] return; }
L_001CA8BC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 571u);  if (t) { goto L_001CB778; } }
L_001CA8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8D8u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CA8D8u) [[unlikely]] return; }
L_001CA8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 570u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8ECu);  if (depth < kMaxDepth) unit_0034(c, 108u, depth + 1u); else { c.pc = 0x001D0EF0u; return; } if (c.pc != 0x001CA8ECu) [[unlikely]] return; }
L_001CA8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8FCu); set32(c.r[16], 0u + 128u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA8FCu) [[unlikely]] return; }
L_001CA8FC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA90C; } }
    set32(c.r[16], 0u + 256u);
    c.budget -= 1;
L_001CA90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA914u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA914u) [[unlikely]] return; }
L_001CA914:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA924; } }
    set32(c.r[16], 0u + 32u);
    c.budget -= 1;
L_001CA924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 573u);  if (t) { goto L_001CA960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 573u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 573u);
    c.budget -= 1;
L_001CA960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA974u);  if (depth < kMaxDepth) unit_0034(c, 163u, depth + 1u); else { c.pc = 0x001D1FD0u; return; } if (c.pc != 0x001CA974u) [[unlikely]] return; }
L_001CA974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA98C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 753u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA998; } }
L_001CA98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 573u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CA998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9A0u);  if (depth < kMaxDepth) unit_0034(c, 109u, depth + 1u); else { c.pc = 0x001D0F00u; return; } if (c.pc != 0x001CA9A0u) [[unlikely]] return; }
L_001CA9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 96u, depth + 1u); else { c.pc = 0x001D0D30u; return; } if (c.pc != 0x001CA9B0u) [[unlikely]] return; }
L_001CA9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA9D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA9D4; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAA4C; } }
L_001CA9D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9DCu); set32(c.r[16], 0u + 128u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA9DCu) [[unlikely]] return; }
L_001CA9DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA9EC; } }
    set32(c.r[16], 0u + 256u);
    c.budget -= 1;
L_001CA9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9F4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CA9F4u) [[unlikely]] return; }
L_001CA9F4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAA04; } }
    set32(c.r[16], 0u + 32u);
    c.budget -= 1;
L_001CAA04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 540u);  if (t) { goto L_001CAA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 541u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 540u);
    c.budget -= 1;
L_001CAA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA54u);  if (depth < kMaxDepth) unit_0034(c, 110u, depth + 1u); else { c.pc = 0x001D0F50u; return; } if (c.pc != 0x001CAA54u) [[unlikely]] return; }
L_001CAA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 551u);  if (t) { goto L_001CB778; } }
L_001CAA64:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 152u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 620u);  if (t) { goto L_001CAA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA7Cu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CAA7Cu) [[unlikely]] return; }
L_001CAA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAA8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 610u);  if (t) { goto L_001CB778; } }
L_001CAA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 611u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 620u);
    c.budget -= 1;
L_001CAA98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 621u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAB4u);  if (depth < kMaxDepth) unit_0034(c, 71u, depth + 1u); else { c.pc = 0x001D0810u; return; } if (c.pc != 0x001CAAB4u) [[unlikely]] return; }
L_001CAAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAAEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAC4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CAAC4u) [[unlikely]] return; }
L_001CAAC4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAAD8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CAAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAE0u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CAAE0u) [[unlikely]] return; }
L_001CAAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 620u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAF4u);  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001CAAF4u) [[unlikely]] return; }
L_001CAAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 622u);  if (t) { goto L_001CB778; } }
L_001CAB04:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1553u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1556u);  if (t) { goto L_001CAB30; } }
    set32(c.r[2], 0u + 1551u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAB2C; } }
    set32(c.r[2], 0u + 1552u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4477u);  if (t) { goto L_001CAB3C; } }
L_001CAB2C:
    set32(c.r[2], 0u + 1556u);
    c.budget -= 1;
L_001CAB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 4477u);
    c.budget -= 1;
L_001CAB3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4458u);  if (t) { goto L_001CAB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4453u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 4458u);
    c.budget -= 1;
L_001CAB50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4477u);  if (t) { goto L_001CAB68; } }
    set32(c.r[2], 0u + 4457u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 716u);  if (t) { goto L_001CAB74; } }
    set32(c.r[2], 0u + 4477u);
    c.budget -= 1;
L_001CAB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 716u);
    c.budget -= 1;
L_001CAB74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 660u);  if (t) { goto L_001CABB0; } }
    set32(c.r[2], 0u + 714u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CABAC; } }
    set32(c.r[2], 0u + 736u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CABAC; } }
    set32(c.r[2], 0u + 739u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CABAC; } }
    set32(c.r[2], 0u + 740u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CABBC; } }
L_001CABAC:
    set32(c.r[2], 0u + 660u);
    c.budget -= 1;
L_001CABB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CABBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABC4u);  if (depth < kMaxDepth) unit_0034(c, 158u, depth + 1u); else { c.pc = 0x001D1A70u; return; } if (c.pc != 0x001CABC4u) [[unlikely]] return; }
L_001CABC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAC5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC0C; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC0C; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC0C; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC0C; } }
    set32(c.r[2], 0u + 1654u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CAC5C; } }
L_001CAC0C:
    st32((c.r[16].w[0] + 544u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    st32((c.r[16].w[0] + 548u), 0u);
    set32(c.r[2], 0u + 21u);
    st32((c.r[16].w[0] + 552u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 662u);  if (t) { goto L_001CAC48; } }
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC44; } }
    set32(c.r[2], 0u + 662u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 661u);  if (t) { goto L_001CAC54; } }
L_001CAC44:
    set32(c.r[2], 0u + 662u);
    c.budget -= 1;
L_001CAC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 661u);
    c.budget -= 1;
L_001CAC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CAC5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1570u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1630u);  if (t) { goto L_001CACC8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001CAC7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1573u);  if (t) { goto L_001CB778; } }
L_001CAC7C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1573u);  if (t) { goto L_001CACBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CACB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CACA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 17u, depth + 1u); else { c.pc = 0x001CC490u; return; } if (c.pc != 0x001CACA8u) [[unlikely]] return; }
L_001CACA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CACB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1574u);  if (t) { goto L_001CB778; } }
L_001CACB8:
    set32(c.r[2], 0u + 1573u);
    c.budget -= 1;
L_001CACBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 1630u);
    c.budget -= 1;
L_001CACC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1602u);  if (t) { goto L_001CACF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CACD8u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CACD8u) [[unlikely]] return; }
L_001CACD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CACE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1632u);  if (t) { goto L_001CACEC; } }
L_001CACE8:
    set32(c.r[2], 0u + 1633u);
    c.budget -= 1;
L_001CACEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 1602u);
    c.budget -= 1;
L_001CACF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAD30; } }
    set32(c.r[2], 0u + 1600u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAD30; } }
    set32(c.r[2], 0u + 1610u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAD30; } }
    set32(c.r[2], 0u + 1611u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAD30; } }
    set32(c.r[2], 0u + 1612u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1604u);  if (t) { goto L_001CAD58; } }
L_001CAD30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 896u)));
    c.r[2].d[0] = c.r[2].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1604u);  if (t) { goto L_001CAD4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1645u);  if (t) { goto L_001CAD4C; } }
    set32(c.r[2], 0u + 1604u);
    c.budget -= 1;
L_001CAD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 1604u);
    c.budget -= 1;
L_001CAD58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1645u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD74u);  if (depth < kMaxDepth) unit_0034(c, 162u, depth + 1u); else { c.pc = 0x001D1F30u; return; } if (c.pc != 0x001CAD74u) [[unlikely]] return; }
L_001CAD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CADB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD84u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CAD84u) [[unlikely]] return; }
L_001CAD84:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CADA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD98u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CAD98u) [[unlikely]] return; }
L_001CAD98:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CADAC; } }
L_001CADA4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CADAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 660u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CADB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CADC0u);  if (depth < kMaxDepth) unit_0034(c, 96u, depth + 1u); else { c.pc = 0x001D0D30u; return; } if (c.pc != 0x001CADC0u) [[unlikely]] return; }
L_001CADC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CADE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 541u);  if (t) { goto L_001CADE8; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CADF4; } }
L_001CADE4:
    set32(c.r[2], 0u + 541u);
    c.budget -= 1;
L_001CADE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CADF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CADFCu);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001CADFCu) [[unlikely]] return; }
L_001CADFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 430u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE18u);  if (depth < kMaxDepth) unit_0034(c, 80u, depth + 1u); else { c.pc = 0x001D0A00u; return; } if (c.pc != 0x001CAE18u) [[unlikely]] return; }
L_001CAE18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 460u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE34u);  if (depth < kMaxDepth) unit_0034(c, 83u, depth + 1u); else { c.pc = 0x001D0AC0u; return; } if (c.pc != 0x001CAE34u) [[unlikely]] return; }
L_001CAE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 490u);  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CAE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE50u);  if (depth < kMaxDepth) unit_0034(c, 188u, depth + 1u); else { c.pc = 0x001D2630u; return; } if (c.pc != 0x001CAE50u) [[unlikely]] return; }
L_001CAE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAF18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 660u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 660u);  if (t) { goto L_001CAF1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 92u, depth + 1u); else { c.pc = 0x001D0C60u; return; } if (c.pc != 0x001CAE8Cu) [[unlikely]] return; }
L_001CAE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAF18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 256u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 262u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 263u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 265u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 266u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 267u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 268u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    set32(c.r[2], 0u + 716u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAF18; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAF24; } }
L_001CAF18:
    set32(c.r[2], 0u + 660u);
    c.budget -= 1;
L_001CAF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CAF24:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB1BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF3Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0038(c, 62u, depth + 1u); else { c.pc = 0x001E0C50u; return; } if (c.pc != 0x001CAF3Cu) [[unlikely]] return; }
L_001CAF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF5Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0035(c, 43u, depth + 1u); else { c.pc = 0x001D5040u; return; } if (c.pc != 0x001CAF5Cu) [[unlikely]] return; }
L_001CAF5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001CAF6Cu) [[unlikely]] return; }
L_001CAF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF7Cu);  if (depth < kMaxDepth) unit_003F(c, 312u, depth + 1u); else { c.pc = 0x001FF210u; return; } if (c.pc != 0x001CAF7Cu) [[unlikely]] return; }
L_001CAF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB1BC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF90u); c.r[4].d[0] = ld8((c.r[16].w[0] + 369u));  if (depth < kMaxDepth) unit_0038(c, 58u, depth + 1u); else { c.pc = 0x001E0AF0u; return; } if (c.pc != 0x001CAF90u) [[unlikely]] return; }
L_001CAF90:
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001CAFB0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001CAFC8; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001CAFB0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[4]);
    c.budget -= 6;
L_001CAFC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 20168u));
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 20160u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 232u), c.f[1]);  if (t) { goto L_001CB010; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_001CB034; } }
L_001CB010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB034; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 4;
L_001CB034:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB060; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_001CB084; } }
L_001CB060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB084; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 4;
L_001CB084:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 20136u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB1BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20128u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB1BC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], c.r[16].w[0] + 212u);  if (t) { goto L_001CB0C8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001CB0E4; } }
L_001CB0C8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[4]);
    c.budget -= 7;
L_001CB0E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 20168u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20160u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 232u), c.f[1]);  if (t) { goto L_001CB12C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_001CB150; } }
L_001CB12C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB150; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 4;
L_001CB150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 20208u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB184; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 631u);  if (t) { goto L_001CB778; } }
L_001CB184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 20112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 630u);  if (t) { goto L_001CB1B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB1BC; } }
    set32(c.r[2], 0u + 630u);
    c.budget -= 1;
L_001CB1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB1BC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CB1D4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB3D8; } }
L_001CB1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1DCu); set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001CB1DCu) [[unlikely]] return; }
L_001CB1DC:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[5], 0u - c.r[20].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1F8u); st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001CB1F8u) [[unlikely]] return; }
L_001CB1F8:
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB21Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001CB21Cu) [[unlikely]] return; }
L_001CB21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB3D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[5], 0u - c.r[20].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB23Cu); st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001CB23Cu) [[unlikely]] return; }
L_001CB23C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB248u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CB248u) [[unlikely]] return; }
L_001CB248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20096u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB28C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CB2A8; } }
L_001CB28C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CB2A8:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1665ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CB3D8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2432ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB3D8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CB31C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[1].w[0] + 20168u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1677u);  if (t) { goto L_001CB304; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20144u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1678u);  if (t) { goto L_001CB310; } }
    set32(c.r[2], 0u + 1677u);
    c.budget -= 1;
L_001CB304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 1678u);
    c.budget -= 1;
L_001CB310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CB31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB324u);  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001CB324u) [[unlikely]] return; }
L_001CB324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB35C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB36C; } }
L_001CB35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB364u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CB364u) [[unlikely]] return; }
L_001CB364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB3D8; } }
L_001CB36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB374u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CB374u) [[unlikely]] return; }
L_001CB374:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB388u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CB388u) [[unlikely]] return; }
L_001CB388:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB3CC; } }
L_001CB394:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 560u);  if (t) { goto L_001CB3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 541u);  if (t) { goto L_001CB778; } }
L_001CB3CC:
    set32(c.r[2], 0u + 560u);
    c.budget -= 1;
L_001CB3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3E0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CB3E0u) [[unlikely]] return; }
L_001CB3E0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB508; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB404u); set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_0038(c, 65u, depth + 1u); else { c.pc = 0x001E0D30u; return; } if (c.pc != 0x001CB404u) [[unlikely]] return; }
L_001CB404:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[5], 0u - c.r[20].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB420u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001CB420u) [[unlikely]] return; }
L_001CB420:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC22C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 209u, depth + 1u); else { c.pc = 0x001D2D80u; return; } if (c.pc != 0x001CB444u) [[unlikely]] return; }
L_001CB444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB508; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[5], 0u - c.r[20].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB464u); st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0038(c, 90u, depth + 1u); else { c.pc = 0x001E14E0u; return; } if (c.pc != 0x001CB464u) [[unlikely]] return; }
L_001CB464:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB470u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CB470u) [[unlikely]] return; }
L_001CB470:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20096u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB4B4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CB4D0; } }
L_001CB4B4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CB4D0:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3713ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB4EC; } }
    c.r[1].d[0] = c.r[2].sd[0] < 384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB508; } }
L_001CB4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4F4u);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001CB4F4u) [[unlikely]] return; }
L_001CB4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB508; } }
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4457u);  if (t) { goto L_001CB778; } }
L_001CB508:
    set32(c.r[5], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB514u); set32(c.r[4], ld32((c.r[16].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001CB514u) [[unlikely]] return; }
L_001CB514:
    c.f[4] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 20192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = c.f[0];
    c.f[2] = ld32((c.r[1].w[0] + 20096u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB564; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001CB580; } }
L_001CB564:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001CB580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB58Cu); c.r[20].d[0] = c.r[2].d[0] & 4095ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CB58Cu) [[unlikely]] return; }
L_001CB58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CB5BC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB5B8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 410u);  if (t) { goto L_001CB778; } }
L_001CB5B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CB5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5C4u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CB5C4u) [[unlikely]] return; }
L_001CB5C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB5F0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB5F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 411u);  if (t) { goto L_001CB778; } }
L_001CB5F0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[20].sd[0] < 512ll ? 1ull : 0ull;  if (t) { goto L_001CB614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 360u);  if (t) { goto L_001CB778; } }
    c.r[2].d[0] = c.r[20].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 1;
L_001CB614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CB62C; } }
    c.r[1].d[0] = c.r[20].sd[0] < 3585ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[20].sd[0] < 1500ll ? 1ull : 0ull;  if (t) { goto L_001CB740; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CB62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB634u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001CB634u) [[unlikely]] return; }
L_001CB634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB660; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 350u);  if (t) { goto L_001CB658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 420u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 350u);
    c.budget -= 1;
L_001CB658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB660:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 360u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB678:
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB694; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 562u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 330u);  if (t) { goto L_001CB6B0; } }
L_001CB694:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[4].d[0] = c.r[3].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001CB6B8; } }
    set32(c.r[2], 0u + 330u);
    c.budget -= 1;
L_001CB6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB6B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 330u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 360u);  if (t) { goto L_001CB6D8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001CB6E0; } }
    set32(c.r[2], 0u + 360u);
    c.budget -= 1;
L_001CB6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
L_001CB6E0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB6F8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB700; } }
L_001CB6F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 400u);  if (t) { goto L_001CB778; } }
L_001CB700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 300u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 360u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB778; } }
    c.r[1].d[0] = c.r[20].sd[0] < 1500ll ? 1ull : 0ull;
    c.budget -= 1;
L_001CB740:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[20].sd[0] < 2597ll ? 1ull : 0ull;  if (t) { goto L_001CB754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 391u);  if (t) { goto L_001CB778; } }
    c.r[1].d[0] = c.r[20].sd[0] < 2597ll ? 1ull : 0ull;
    c.budget -= 1;
L_001CB754:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CB764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 390u);  if (t) { goto L_001CB778; } }
L_001CB764:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 370u);  if (t) { goto L_001CB778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 380u);  if (t) { goto L_001CB778; } }
    set32(c.r[2], 0u + 370u);
    c.budget -= 1;
L_001CB778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001CB77C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001CB7A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7E8u); c.r[5].d[0] = c.r[2].d[0] | 21317ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CB7E8u) [[unlikely]] return; }
L_001CB7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CB7F4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CB7F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CB808; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB808u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 180u, depth + 1u); else { c.pc = 0x002F6D40u; return; } if (c.pc != 0x001CB808u) [[unlikely]] return; }
L_001CB808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB810u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 70u, depth + 1u); else { c.pc = 0x001C4B40u; return; } if (c.pc != 0x001CB810u) [[unlikely]] return; }
L_001CB810:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB824u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CB824u) [[unlikely]] return; }
L_001CB824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CB830; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CB830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    set32(c.r[4], c.r[20].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB840u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CB840u) [[unlikely]] return; }
L_001CB840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001CB84C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CB84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[20].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB85Cu); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CB85Cu) [[unlikely]] return; }
L_001CB85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CB868; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CB868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[20].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB878u); c.r[5].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CB878u) [[unlikely]] return; }
L_001CB878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001CB884; } }
    set32(c.r[22], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CB884:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[18].w[0] + 40u);  if (t) { goto L_001CB894; } }
    set32(c.r[9], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_001CB894:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[17].w[0] + 40u);  if (t) { goto L_001CB8A4; } }
    set32(c.r[8], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_001CB8A4:
    set32(c.r[10], ld32((c.r[21].w[0] + 912u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 920u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8C0u); set32(c.r[11], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_003D(c, 28u, depth + 1u); else { c.pc = 0x001F44A0u; return; } if (c.pc != 0x001CB8C0u) [[unlikely]] return; }
L_001CB8C0:
    set32(c.r[4], ld32((c.r[20].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8988u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == c.r[20].d[0]; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001CB90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8F4u); set32(c.r[4], ld32((c.r[20].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001CB8F4u) [[unlikely]] return; }
L_001CB8F4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001CB910; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB90Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 102u, depth + 1u); else { c.pc = 0x001E5470u; return; } if (c.pc != 0x001CB90Cu) [[unlikely]] return; }
L_001CB90C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001CB910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB918u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001CB918u) [[unlikely]] return; }
L_001CB918:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 317u, depth + 1u); else { c.pc = 0x001FF2F0u; return; } if (c.pc != 0x001CB924u) [[unlikely]] return; }
L_001CB924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB92Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 313u, depth + 1u); else { c.pc = 0x001F3DE0u; return; } if (c.pc != 0x001CB92Cu) [[unlikely]] return; }
L_001CB92C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 924u));
    set32(c.r[4], c.r[4].w[0] + 12472u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001CB954; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CB954:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 924u));
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], 0u - 64u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0] + 924u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 928u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB97Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 35u, depth + 1u); else { c.pc = 0x001B0680u; return; } if (c.pc != 0x001CB97Cu) [[unlikely]] return; }
L_001CB97C:
    set32(c.r[3], ld32((c.r[20].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CB9B8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB9B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CB9B0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB9B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001CB9B0:
    st32((c.r[20].w[0] + 768u), c.r[2].w[0]);
    c.budget -= 1;
L_001CB9B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001CB9B8:
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
L_001CB9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 212u, depth + 1u); else { c.pc = 0x001D2FE0u; return; } if (c.pc != 0x001CBA04u) [[unlikely]] return; }
L_001CBA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CBAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA14u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001CBA14u) [[unlikely]] return; }
L_001CBA14:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 27u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CBAB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CBA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA34u);  if (depth < kMaxDepth) unit_0031(c, 60u, depth + 1u); else { c.pc = 0x001C4980u; return; } if (c.pc != 0x001CBA34u) [[unlikely]] return; }
L_001CBA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001CBABC; } }
L_001CBA3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 464u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CBA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001CBA54u) [[unlikely]] return; }
L_001CBA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CBAB8; } }
L_001CBA5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_001CBAAC; } }
L_001CBA6C:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CBAA8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CBAA8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001CBAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAA0u);  if (depth < kMaxDepth) unit_0031(c, 60u, depth + 1u); else { c.pc = 0x001C4980u; return; } if (c.pc != 0x001CBAA0u) [[unlikely]] return; }
L_001CBAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBAB8; } }
L_001CBAA8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001CBAAC:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBA6Cu | kUnwind; return; } goto L_001CBA6C; } }
L_001CBAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001CBABC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAF8u); c.r[5].d[0] = c.r[2].d[0] | 16716ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001CBAF8u) [[unlikely]] return; }
L_001CBAF8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001CBB04u) [[unlikely]] return; }
L_001CBB04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[3], c.r[3].w[0] - 9264u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CBB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[3].w[0] + 816u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 832u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 816u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] + 848u);
    set32(c.r[2], c.r[2].w[0] + 816u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], c.r[3].w[0] + 848u);
    set32(c.r[3], c.r[4].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CBD10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 816u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CBBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001CBBE0; } }
L_001CBBD8:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001CBBE0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBC6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 824u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CBC14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001CBC1C; } }
L_001CBC14:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_001CBC1C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBC6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 820u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CBC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001CBC58; } }
L_001CBC50:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 2;
L_001CBC58:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CBD10; } }
L_001CBC6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x48410000u);  if (t) { goto L_001CBC7C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CBC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC84u); c.r[5].d[0] = c.r[2].d[0] | 18770ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CBC84u) [[unlikely]] return; }
L_001CBC84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CBC90; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CBC90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CBCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCA0u);  if (depth < kMaxDepth) unit_008D(c, 176u, depth + 1u); else { c.pc = 0x003356B0u; return; } if (c.pc != 0x001CBCA0u) [[unlikely]] return; }
L_001CBCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_001CBCE0; } }
L_001CBCA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4B410000u);  if (t) { goto L_001CBCB8; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CBCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCC0u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CBCC0u) [[unlikely]] return; }
L_001CBCC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CBCCC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CBCCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CBCDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCDCu);  if (depth < kMaxDepth) unit_0031(c, 148u, depth + 1u); else { c.pc = 0x001C5D60u; return; } if (c.pc != 0x001CBCDCu) [[unlikely]] return; }
L_001CBCDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_001CBCE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);  if (t) { goto L_001CBCEC; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001CBCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCF4u); c.r[5].d[0] = c.r[2].d[0] | 20037ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CBCF4u) [[unlikely]] return; }
L_001CBCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001CBD00; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CBD00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CBD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD10u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x001C53E0u; return; } if (c.pc != 0x001CBD10u) [[unlikely]] return; }
L_001CBD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD18u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0035(c, 20u, depth + 1u); else { c.pc = 0x001D4720u; return; } if (c.pc != 0x001CBD18u) [[unlikely]] return; }
L_001CBD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CBD30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CBD4C; } }
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 1;
L_001CBD4C:
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 20200u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001CBD80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 212u), c.f[0]);  if (t) { goto L_001CBDA0; } }
L_001CBD80:
    c.f[0] = ld32((c.r[1].w[0] + 20184u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBDA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001CBDA0:
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDACu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001CBDACu) [[unlikely]] return; }
L_001CBDAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDBCu); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001CBDBCu) [[unlikely]] return; }
L_001CBDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CBDC8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001CBDC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CBFE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[1] = 0u;
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[1].w[0] + 20168u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE28u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001CBE28u) [[unlikely]] return; }
L_001CBE28:
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 32u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[1].w[0] + 20144u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEB8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001CBEB8u) [[unlikely]] return; }
L_001CBEB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 96u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 112u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 160u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[1].w[0] + 20168u));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF30u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001CBF30u) [[unlikely]] return; }
L_001CBF30:
    set32(c.r[3], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 32u);
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
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[1].w[0] + 20144u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBFC0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 369u, depth + 1u); else { c.pc = 0x00103C38u; return; } if (c.pc != 0x001CBFC0u) [[unlikely]] return; }
L_001CBFC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 192u) & ~15u, c.r[3]);
    c.budget -= 9;
L_001CBFE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
}

}
