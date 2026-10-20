#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006D[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330,
    0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366,
    0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0,
};

void unit_006D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B4000;
    case 2u: goto L_002B4008;
    case 3u: goto L_002B4030;
    case 4u: goto L_002B404C;
    case 5u: goto L_002B4094;
    case 6u: goto L_002B40B0;
    case 7u: goto L_002B40C8;
    case 8u: goto L_002B410C;
    case 9u: goto L_002B4114;
    case 10u: goto L_002B4140;
    case 11u: goto L_002B4170;
    case 12u: goto L_002B418C;
    case 13u: goto L_002B41B8;
    case 14u: goto L_002B41C8;
    case 15u: goto L_002B41D8;
    case 16u: goto L_002B41F0;
    case 17u: goto L_002B422C;
    case 18u: goto L_002B4268;
    case 19u: goto L_002B4278;
    case 20u: goto L_002B4290;
    case 21u: goto L_002B42A0;
    case 22u: goto L_002B42C8;
    case 23u: goto L_002B42E0;
    case 24u: goto L_002B42FC;
    case 25u: goto L_002B4310;
    case 26u: goto L_002B4324;
    case 27u: goto L_002B4370;
    case 28u: goto L_002B43A8;
    case 29u: goto L_002B440C;
    case 30u: goto L_002B4460;
    case 31u: goto L_002B44AC;
    case 32u: goto L_002B44D4;
    case 33u: goto L_002B44FC;
    case 34u: goto L_002B4524;
    case 35u: goto L_002B4534;
    case 36u: goto L_002B454C;
    case 37u: goto L_002B4570;
    case 38u: goto L_002B45A4;
    case 39u: goto L_002B45CC;
    case 40u: goto L_002B45E0;
    case 41u: goto L_002B45F0;
    case 42u: goto L_002B4600;
    case 43u: goto L_002B4668;
    case 44u: goto L_002B4718;
    case 45u: goto L_002B4794;
    case 46u: goto L_002B47AC;
    case 47u: goto L_002B47BC;
    case 48u: goto L_002B47D8;
    case 49u: goto L_002B47F4;
    case 50u: goto L_002B4810;
    case 51u: goto L_002B4838;
    case 52u: goto L_002B4850;
    case 53u: goto L_002B4880;
    case 54u: goto L_002B4920;
    case 55u: goto L_002B49E0;
    case 56u: goto L_002B4A00;
    case 57u: goto L_002B4A14;
    case 58u: goto L_002B4A40;
    case 59u: goto L_002B4A60;
    case 60u: goto L_002B4A74;
    case 61u: goto L_002B4A9C;
    case 62u: goto L_002B4AB0;
    case 63u: goto L_002B4AC0;
    case 64u: goto L_002B4B1C;
    case 65u: goto L_002B4B40;
    case 66u: goto L_002B4B8C;
    case 67u: goto L_002B4BB4;
    case 68u: goto L_002B4BC4;
    case 69u: goto L_002B4BD0;
    case 70u: goto L_002B4BDC;
    case 71u: goto L_002B4BF4;
    case 72u: goto L_002B4C10;
    case 73u: goto L_002B4C20;
    case 74u: goto L_002B4C30;
    case 75u: goto L_002B4C50;
    case 76u: goto L_002B4C84;
    case 77u: goto L_002B4C98;
    case 78u: goto L_002B4CB0;
    case 79u: goto L_002B4D10;
    case 80u: goto L_002B4D34;
    case 81u: goto L_002B4D54;
    case 82u: goto L_002B4D68;
    case 83u: goto L_002B4D84;
    case 84u: goto L_002B4E14;
    case 85u: goto L_002B4E34;
    case 86u: goto L_002B4E40;
    case 87u: goto L_002B4E4C;
    case 88u: goto L_002B4E70;
    case 89u: goto L_002B4E8C;
    case 90u: goto L_002B4E9C;
    case 91u: goto L_002B4ED4;
    case 92u: goto L_002B4F0C;
    case 93u: goto L_002B4FBC;
    case 94u: goto L_002B4FCC;
    case 95u: goto L_002B4FF8;
    case 96u: goto L_002B500C;
    case 97u: goto L_002B5058;
    case 98u: goto L_002B5084;
    case 99u: goto L_002B5118;
    case 100u: goto L_002B512C;
    case 101u: goto L_002B5140;
    case 102u: goto L_002B51B4;
    case 103u: goto L_002B520C;
    case 104u: goto L_002B521C;
    case 105u: goto L_002B522C;
    case 106u: goto L_002B523C;
    case 107u: goto L_002B524C;
    case 108u: goto L_002B525C;
    case 109u: goto L_002B526C;
    case 110u: goto L_002B5294;
    case 111u: goto L_002B52E4;
    case 112u: goto L_002B5304;
    case 113u: goto L_002B5314;
    case 114u: goto L_002B5360;
    case 115u: goto L_002B5384;
    case 116u: goto L_002B5400;
    case 117u: goto L_002B54F0;
    case 118u: goto L_002B5500;
    case 119u: goto L_002B55EC;
    case 120u: goto L_002B5604;
    case 121u: goto L_002B5618;
    case 122u: goto L_002B5630;
    case 123u: goto L_002B5640;
    case 124u: goto L_002B5650;
    case 125u: goto L_002B5660;
    case 126u: goto L_002B5670;
    case 127u: goto L_002B5680;
    case 128u: goto L_002B5690;
    case 129u: goto L_002B56A0;
    case 130u: goto L_002B56B0;
    case 131u: goto L_002B56C0;
    case 132u: goto L_002B56D0;
    case 133u: goto L_002B56E0;
    case 134u: goto L_002B56F0;
    case 135u: goto L_002B5700;
    case 136u: goto L_002B5724;
    case 137u: goto L_002B5794;
    case 138u: goto L_002B57A8;
    case 139u: goto L_002B57B4;
    case 140u: goto L_002B57C8;
    case 141u: goto L_002B57DC;
    case 142u: goto L_002B57F8;
    case 143u: goto L_002B5824;
    case 144u: goto L_002B597C;
    case 145u: goto L_002B59C0;
    case 146u: goto L_002B5A18;
    case 147u: goto L_002B5A40;
    case 148u: goto L_002B5A50;
    case 149u: goto L_002B5A68;
    case 150u: goto L_002B5A80;
    case 151u: goto L_002B5A90;
    case 152u: goto L_002B5AA0;
    case 153u: goto L_002B5AE8;
    case 154u: goto L_002B5B1C;
    case 155u: goto L_002B5B30;
    case 156u: goto L_002B5B50;
    case 157u: goto L_002B5B70;
    case 158u: goto L_002B5B9C;
    case 159u: goto L_002B5BB0;
    case 160u: goto L_002B5BC0;
    case 161u: goto L_002B5BDC;
    case 162u: goto L_002B5BF0;
    case 163u: goto L_002B5C10;
    case 164u: goto L_002B5C40;
    case 165u: goto L_002B5C70;
    case 166u: goto L_002B5C88;
    case 167u: goto L_002B5CA0;
    case 168u: goto L_002B5CE0;
    case 169u: goto L_002B5D00;
    case 170u: goto L_002B5D50;
    case 171u: goto L_002B5D60;
    case 172u: goto L_002B5D70;
    case 173u: goto L_002B5D8C;
    case 174u: goto L_002B5DB4;
    case 175u: goto L_002B5DC8;
    case 176u: goto L_002B5DE8;
    case 177u: goto L_002B5E44;
    case 178u: goto L_002B5E80;
    case 179u: goto L_002B5ED8;
    case 180u: goto L_002B5EE8;
    case 181u: goto L_002B5F00;
    case 182u: goto L_002B5F20;
    case 183u: goto L_002B5F30;
    case 184u: goto L_002B5F40;
    case 185u: goto L_002B5F50;
    case 186u: goto L_002B5F60;
    case 187u: goto L_002B5F70;
    case 188u: goto L_002B5F80;
    case 189u: goto L_002B5F90;
    case 190u: goto L_002B5FA0;
    case 191u: goto L_002B5FB4;
    case 192u: goto L_002B5FD4;
    case 193u: goto L_002B5FE4;
    case 194u: goto L_002B6000;
    case 195u: goto L_002B6038;
    case 196u: goto L_002B605C;
    case 197u: goto L_002B606C;
    case 198u: goto L_002B6084;
    case 199u: goto L_002B60A0;
    case 200u: goto L_002B60B0;
    case 201u: goto L_002B60C0;
    case 202u: goto L_002B60D0;
    case 203u: goto L_002B60E0;
    case 204u: goto L_002B610C;
    case 205u: goto L_002B6134;
    case 206u: goto L_002B6164;
    case 207u: goto L_002B616C;
    case 208u: goto L_002B6190;
    case 209u: goto L_002B61C8;
    case 210u: goto L_002B61F8;
    case 211u: goto L_002B6200;
    case 212u: goto L_002B6220;
    case 213u: goto L_002B623C;
    case 214u: goto L_002B6250;
    case 215u: goto L_002B6260;
    case 216u: goto L_002B6270;
    case 217u: goto L_002B6294;
    case 218u: goto L_002B62AC;
    case 219u: goto L_002B62C0;
    case 220u: goto L_002B62C8;
    case 221u: goto L_002B62E4;
    case 222u: goto L_002B62F8;
    case 223u: goto L_002B6310;
    case 224u: goto L_002B6330;
    case 225u: goto L_002B6350;
    case 226u: goto L_002B6360;
    case 227u: goto L_002B63D0;
    case 228u: goto L_002B63F0;
    case 229u: goto L_002B6400;
    case 230u: goto L_002B641C;
    case 231u: goto L_002B642C;
    case 232u: goto L_002B6448;
    case 233u: goto L_002B6458;
    case 234u: goto L_002B6488;
    case 235u: goto L_002B64AC;
    case 236u: goto L_002B64BC;
    case 237u: goto L_002B64EC;
    case 238u: goto L_002B6510;
    case 239u: goto L_002B6520;
    case 240u: goto L_002B653C;
    case 241u: goto L_002B654C;
    case 242u: goto L_002B6568;
    case 243u: goto L_002B6578;
    case 244u: goto L_002B6594;
    case 245u: goto L_002B65A4;
    case 246u: goto L_002B65C0;
    case 247u: goto L_002B65D0;
    case 248u: goto L_002B6620;
    case 249u: goto L_002B6650;
    case 250u: goto L_002B6670;
    case 251u: goto L_002B6680;
    case 252u: goto L_002B66B0;
    case 253u: goto L_002B66E8;
    case 254u: goto L_002B6724;
    case 255u: goto L_002B673C;
    case 256u: goto L_002B6758;
    case 257u: goto L_002B6774;
    case 258u: goto L_002B6790;
    case 259u: goto L_002B67AC;
    case 260u: goto L_002B67C8;
    case 261u: goto L_002B6800;
    case 262u: goto L_002B6808;
    case 263u: goto L_002B6868;
    case 264u: goto L_002B6870;
    case 265u: goto L_002B68D0;
    case 266u: goto L_002B68E4;
    case 267u: goto L_002B6944;
    case 268u: goto L_002B695C;
    case 269u: goto L_002B6A00;
    case 270u: goto L_002B6A08;
    case 271u: goto L_002B6A80;
    case 272u: goto L_002B6A94;
    case 273u: goto L_002B6AF4;
    case 274u: goto L_002B6B08;
    case 275u: goto L_002B6B78;
    case 276u: goto L_002B6BC8;
    case 277u: goto L_002B6C38;
    case 278u: goto L_002B6C40;
    case 279u: goto L_002B6CA0;
    case 280u: goto L_002B6CC0;
    case 281u: goto L_002B6D48;
    case 282u: goto L_002B6D50;
    case 283u: goto L_002B6D60;
    case 284u: goto L_002B6D80;
    case 285u: goto L_002B6DA0;
    case 286u: goto L_002B6DBC;
    case 287u: goto L_002B6E24;
    case 288u: goto L_002B6E74;
    case 289u: goto L_002B6E9C;
    case 290u: goto L_002B6ECC;
    case 291u: goto L_002B6EE4;
    case 292u: goto L_002B6F3C;
    case 293u: goto L_002B6F54;
    case 294u: goto L_002B6F74;
    case 295u: goto L_002B6FB0;
    case 296u: goto L_002B6FC4;
    case 297u: goto L_002B6FE8;
    case 298u: goto L_002B700C;
    case 299u: goto L_002B7064;
    case 300u: goto L_002B707C;
    case 301u: goto L_002B709C;
    case 302u: goto L_002B70D0;
    case 303u: goto L_002B70F4;
    case 304u: goto L_002B7118;
    case 305u: goto L_002B713C;
    case 306u: goto L_002B7158;
    case 307u: goto L_002B7174;
    case 308u: goto L_002B7198;
    case 309u: goto L_002B71CC;
    case 310u: goto L_002B71E4;
    case 311u: goto L_002B7204;
    case 312u: goto L_002B725C;
    case 313u: goto L_002B72A0;
    case 314u: goto L_002B72D4;
    case 315u: goto L_002B72F8;
    case 316u: goto L_002B731C;
    case 317u: goto L_002B7340;
    case 318u: goto L_002B735C;
    case 319u: goto L_002B7378;
    case 320u: goto L_002B7394;
    case 321u: goto L_002B73B4;
    case 322u: goto L_002B7450;
    case 323u: goto L_002B749C;
    case 324u: goto L_002B74A4;
    case 325u: goto L_002B74B8;
    case 326u: goto L_002B74DC;
    case 327u: goto L_002B74E4;
    case 328u: goto L_002B74EC;
    case 329u: goto L_002B74F4;
    case 330u: goto L_002B74FC;
    case 331u: goto L_002B7504;
    case 332u: goto L_002B7518;
    case 333u: goto L_002B7544;
    case 334u: goto L_002B7590;
    case 335u: goto L_002B75B4;
    case 336u: goto L_002B75C4;
    case 337u: goto L_002B7630;
    case 338u: goto L_002B764C;
    case 339u: goto L_002B7680;
    case 340u: goto L_002B76B0;
    case 341u: goto L_002B7720;
    case 342u: goto L_002B7758;
    case 343u: goto L_002B7760;
    case 344u: goto L_002B7780;
    case 345u: goto L_002B77E0;
    case 346u: goto L_002B780C;
    case 347u: goto L_002B7818;
    case 348u: goto L_002B7860;
    case 349u: goto L_002B789C;
    case 350u: goto L_002B78A4;
    case 351u: goto L_002B78C0;
    case 352u: goto L_002B7910;
    case 353u: goto L_002B7924;
    case 354u: goto L_002B7940;
    case 355u: goto L_002B7948;
    case 356u: goto L_002B7950;
    case 357u: goto L_002B7958;
    case 358u: goto L_002B7960;
    case 359u: goto L_002B7968;
    case 360u: goto L_002B7994;
    case 361u: goto L_002B79E0;
    case 362u: goto L_002B7A30;
    case 363u: goto L_002B7A3C;
    case 364u: goto L_002B7A64;
    case 365u: goto L_002B7A70;
    case 366u: goto L_002B7A7C;
    case 367u: goto L_002B7A88;
    case 368u: goto L_002B7A94;
    case 369u: goto L_002B7AA0;
    case 370u: goto L_002B7B50;
    case 371u: goto L_002B7B94;
    case 372u: goto L_002B7BB8;
    case 373u: goto L_002B7BC4;
    case 374u: goto L_002B7C00;
    case 375u: goto L_002B7C10;
    case 376u: goto L_002B7C20;
    case 377u: goto L_002B7C30;
    case 378u: goto L_002B7C40;
    case 379u: goto L_002B7C50;
    case 380u: goto L_002B7C60;
    case 381u: goto L_002B7C70;
    case 382u: goto L_002B7C80;
    case 383u: goto L_002B7C90;
    case 384u: goto L_002B7CA0;
    case 385u: goto L_002B7CB0;
    case 386u: goto L_002B7CC0;
    case 387u: goto L_002B7CD0;
    case 388u: goto L_002B7CE0;
    case 389u: goto L_002B7CF0;
    case 390u: goto L_002B7D00;
    case 391u: goto L_002B7D10;
    case 392u: goto L_002B7D20;
    case 393u: goto L_002B7D30;
    case 394u: goto L_002B7D40;
    case 395u: goto L_002B7D50;
    case 396u: goto L_002B7D60;
    case 397u: goto L_002B7D70;
    case 398u: goto L_002B7D80;
    case 399u: goto L_002B7D90;
    case 400u: goto L_002B7DA0;
    case 401u: goto L_002B7DB0;
    case 402u: goto L_002B7DC0;
    case 403u: goto L_002B7DF0;
    case 404u: goto L_002B7E4C;
    case 405u: goto L_002B7E5C;
    case 406u: goto L_002B7E6C;
    case 407u: goto L_002B7E88;
    case 408u: goto L_002B7E94;
    case 409u: goto L_002B7EC8;
    case 410u: goto L_002B7EDC;
    case 411u: goto L_002B7F0C;
    case 412u: goto L_002B7F40;
    case 413u: goto L_002B7F50;
    case 414u: goto L_002B7F60;
    case 415u: goto L_002B7F70;
    case 416u: goto L_002B7F80;
    case 417u: goto L_002B7F90;
    case 418u: goto L_002B7FA0;
    case 419u: goto L_002B7FB0;
    case 420u: goto L_002B7FC0;
    case 421u: goto L_002B7FD0;
    case 422u: goto L_002B7FE0;
    case 423u: goto L_002B7FF0;
    default: bad_entry(c, 0x002B4000u); return;
    }
L_002B4000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B4104; } }
L_002B4008:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4030u); set32(c.r[6], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002B4030u) [[unlikely]] return; }
L_002B4030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B405C; } }
    set32(c.r[25], ld32((c.r[2].w[0] + 56u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B404Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B404Cu) [[unlikely]] return; }
L_002B404C:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B405C; } }
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B405C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4008u | kUnwind; return; } goto L_002B4008; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24344u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 144u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4094u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002B4094u) [[unlikely]] return; }
L_002B4094:
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40B0u); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B40B0u) [[unlikely]] return; }
L_002B40B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B40C8u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B40C8u) [[unlikely]] return; }
L_002B40C8:
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[6]);
    set32(c.r[3], 0u - 9u);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u + 300u);
    st128((c.r[5].w[0] + 224u) & ~15u, c.r[6]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    st32((c.r[5].w[0] + 212u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 397u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_002B4114; } }
L_002B4104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B410Cu); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002B410Cu) [[unlikely]] return; }
L_002B410C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4114u); set32(c.r[4], ld32((c.r[17].w[0] + 136u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002B4114u) [[unlikely]] return; }
L_002B4114:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], 0u + 290u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B4184; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28344u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B4180; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 28348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B4180; } }
L_002B4140:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[5], ld32((c.r[1].w[0] - 24344u)));
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4170u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0066(c, 208u, depth + 1u); else { c.pc = 0x0029A200u; return; } if (c.pc != 0x002B4170u) [[unlikely]] return; }
L_002B4170:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4140u | kUnwind; return; } goto L_002B4140; } }
L_002B4180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B4184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B418Cu);  if (depth < kMaxDepth) unit_006D(c, 16u, depth + 1u); else { c.pc = 0x002B41F0u; return; } if (c.pc != 0x002B418Cu) [[unlikely]] return; }
L_002B418C:
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41B8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002B41B8u) [[unlikely]] return; }
L_002B41B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002B41C8u) [[unlikely]] return; }
L_002B41C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B41D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002B41D8u) [[unlikely]] return; }
L_002B41D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B41F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B4278; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B422Cu); set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002B422Cu) [[unlikely]] return; }
L_002B422C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B4278; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47500000u);
    c.r[3].d[0] = c.r[3].d[0] | 21076ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B4278; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4268u); st128((c.r[5].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0024(c, 356u, depth + 1u); else { c.pc = 0x001934E0u; return; } if (c.pc != 0x002B4268u) [[unlikely]] return; }
L_002B4268:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4278u); set32(c.r[5], c.r[2].w[0] + 208u);  if (depth < kMaxDepth) unit_0024(c, 357u, depth + 1u); else { c.pc = 0x00193500u; return; } if (c.pc != 0x002B4278u) [[unlikely]] return; }
L_002B4278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B4290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B42A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B42C8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B42C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B42C8u) [[unlikely]] return; }
L_002B42C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B42E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B42FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B42FCu); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0049(c, 146u, depth + 1u); else { c.pc = 0x00225E70u; return; } if (c.pc != 0x002B42FCu) [[unlikely]] return; }
L_002B42FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B4310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002B4324u) [[unlikely]] return; }
L_002B4324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4370u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B4370u) [[unlikely]] return; }
L_002B4370:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B439C; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_002B439C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B43A8u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B43A8u) [[unlikely]] return; }
L_002B43A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002B43B4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002B43B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[1].w[0] - 28160u));
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 340u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st16((c.r[2].w[0] + 596u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B4414; } }
    set32(c.r[2], c.r[2].w[0] - 1000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B440Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B440Cu) [[unlikely]] return; }
L_002B440C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_002B4418; } }
L_002B4414:
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 1;
L_002B4418:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B454C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8416u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44AC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B44ACu) [[unlikely]] return; }
L_002B44AC:
    st32((c.r[17].w[0] + 128u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B44D4u) [[unlikely]] return; }
L_002B44D4:
    st32((c.r[17].w[0] + 136u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B44FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B44FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B44FCu) [[unlikely]] return; }
L_002B44FC:
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4524; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4524u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4524u) [[unlikely]] return; }
L_002B4524:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4534u); st32((c.r[17].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002B4534u) [[unlikely]] return; }
L_002B4534:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B4550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B454Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B454Cu) [[unlikely]] return; }
L_002B454C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B4550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45A4u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002B45A4u) [[unlikely]] return; }
L_002B45A4:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B45CCu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002B45CCu) [[unlikely]] return; }
L_002B45CC:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B45E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002B45F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B4600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B4708; } }
    set32(c.r[3], 0u + 60u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + 168u);  if (t) { goto L_002B46E0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 254ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B46B8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    st32((c.r[2].w[0] + 176u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4668u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002B4668u) [[unlikely]] return; }
L_002B4668:
    set32(c.r[8], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 397u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 397u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);
    c.budget -= 20;
L_002B46B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B4780; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_002B4780; } }
L_002B46E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B4780; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B4780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_002B4780; } }
L_002B4708:
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4718u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4718u) [[unlikely]] return; }
L_002B4718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B4780; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[7].w[0] + 168u), 0u);
    set32(c.r[7], ld32((c.r[16].w[0] + 136u)));
    st32((c.r[7].w[0] + 176u), 0u);
    set32(c.r[8], ld32((c.r[16].w[0] + 116u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 397u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 397u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st128((c.r[3].w[0] + 224u) & ~15u, c.r[4]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);
    c.budget -= 24;
L_002B4780:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_002B4794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4794u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002B4794u) [[unlikely]] return; }
L_002B4794:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B47F4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 52u, depth + 1u); else { c.pc = 0x002B4850u; return; } if (c.pc != 0x002B47ACu) [[unlikely]] return; }
L_002B47AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002B47BCu) [[unlikely]] return; }
L_002B47BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47D8u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002B47D8u) [[unlikely]] return; }
L_002B47D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B47F4u); set32(c.r[5], ld32((c.r[16].w[0] + 132u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002B47F4u) [[unlikely]] return; }
L_002B47F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4838; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4838u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4838u) [[unlikely]] return; }
L_002B4838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B4850:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 136u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B4874; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_002B4874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53330000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4880u); c.r[5].d[0] = c.r[2].d[0] | 19799ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B4880u) [[unlikely]] return; }
L_002B4880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B4894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B4894; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B4894:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002B49B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] - 17216u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[3].w[0]) & ~15u, c.r[9]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[8], c.r[8].w[0] - 17200u);
    set32(c.r[10], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 17168u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st128((c.r[2].w[0]) & ~15u, c.r[9]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[8].w[0]) & ~15u, c.r[9]);
    set32(c.r[3], c.r[3].w[0] - 17152u);
    if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[7].d[0];
    ld128((c.r[8].w[0] + 16u) & ~15u, c.r[8]);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[8]);
    ld128((c.r[5].w[0]) & ~15u, c.r[5]);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    ld128((c.r[3].w[0]) & ~15u, c.r[5]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 27;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[8], c.r[29].w[0] + 48u);  if (t) { goto L_002B4918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[29].w[0] + 96u);  if (t) { goto L_002B4918; } }
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002B4918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002B49A4; } }
L_002B4920:
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0] + 176u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B49B0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_002B49A0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 340u));
    st32((c.r[5].w[0] + 324u), c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[1] = ld32((c.r[1].w[0] - 28168u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 340u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st16((c.r[2].w[0] + 596u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 598u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002B49B0; } }
L_002B49A0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002B49A4:
    c.r[3].d[0] = c.r[9].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4920u | kUnwind; return; } goto L_002B4920; } }
L_002B49B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], c.r[2].w[0] + 176u);
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B49D0; } }
    set32(c.r[2], 0u + 4095u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002B49D0:
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B49E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B49E0u) [[unlikely]] return; }
L_002B49E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002B4A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00198E50u; return; } if (c.pc != 0x002B4A14u) [[unlikely]] return; }
L_002B4A14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[3], c.r[3].w[0] + 8336u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A40u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_005A(c, 397u, depth + 1u); else { c.pc = 0x0026B8C0u; return; } if (c.pc != 0x002B4A40u) [[unlikely]] return; }
L_002B4A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A60u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_005A(c, 397u, depth + 1u); else { c.pc = 0x0026B8C0u; return; } if (c.pc != 0x002B4A60u) [[unlikely]] return; }
L_002B4A60:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B4A74u) [[unlikely]] return; }
L_002B4A74:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4A9Cu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002B4A9Cu) [[unlikely]] return; }
L_002B4A9C:
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 28176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4AB0u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0026C100u; return; } if (c.pc != 0x002B4AB0u) [[unlikely]] return; }
L_002B4AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 28176u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4AC0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_005B(c, 4u, depth + 1u); else { c.pc = 0x0026C100u; return; } if (c.pc != 0x002B4AC0u) [[unlikely]] return; }
L_002B4AC0:
    set32(c.r[2], 0u + 31u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 256u);  if (t) { goto L_002B4B24; } }
    set32(c.r[2], c.r[3].w[0] - 1000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26176u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B1Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002B4B1Cu) [[unlikely]] return; }
L_002B4B1C:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 256u);
    c.budget -= 2;
L_002B4B24:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B4B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B4BF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8336u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4B8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4B8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4B8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4B8Cu) [[unlikely]] return; }
L_002B4B8C:
    st32((c.r[17].w[0] + 132u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4BB4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B4BB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BB4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4BB4u) [[unlikely]] return; }
L_002B4BB4:
    set32(c.r[4], c.r[17].w[0] + 192u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BC4u); st32((c.r[17].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_005A(c, 400u, depth + 1u); else { c.pc = 0x0026B930u; return; } if (c.pc != 0x002B4BC4u) [[unlikely]] return; }
L_002B4BC4:
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005A(c, 400u, depth + 1u); else { c.pc = 0x0026B930u; return; } if (c.pc != 0x002B4BD0u) [[unlikely]] return; }
L_002B4BD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0026(c, 119u, depth + 1u); else { c.pc = 0x00198EB0u; return; } if (c.pc != 0x002B4BDCu) [[unlikely]] return; }
L_002B4BDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B4BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4BF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B4BF4u) [[unlikely]] return; }
L_002B4BF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B4BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B4C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 136u)));  c.pc = t; return; }
L_002B4C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B4C30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C50u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006D(c, 88u, depth + 1u); else { c.pc = 0x002B4E70u; return; } if (c.pc != 0x002B4C50u) [[unlikely]] return; }
L_002B4C50:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B4E4C; } }
    c.f[0] = ld32((c.r[19].w[0] + 192u));
    set32(c.r[16], c.r[29].w[0] + 120u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);  if (t) { goto L_002B4D14; } }
L_002B4C84:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4C98u); set32(c.r[5], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4C98u) [[unlikely]] return; }
L_002B4C98:
    set32(c.r[17], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    ld128((c.r[17].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4CB0u); st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x002B4CB0u) [[unlikely]] return; }
L_002B4CB0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 144u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D10u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4D10u) [[unlikely]] return; }
L_002B4D10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002B4D14:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 236u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4C84u | kUnwind; return; } goto L_002B4C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 207u, depth + 1u); else { c.pc = 0x001B1B60u; return; } if (c.pc != 0x002B4D34u) [[unlikely]] return; }
L_002B4D34:
    set32(c.r[2], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D54u); set32(c.r[6], c.r[2].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4D54u) [[unlikely]] return; }
L_002B4D54:
    set32(c.r[4], ld32((c.r[19].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 192u);  if (t) { goto L_002B4D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D68u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002B4D68u) [[unlikely]] return; }
L_002B4D68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4D84u); set32(c.r[5], ld32((c.r[19].w[0] + 136u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002B4D84u) [[unlikely]] return; }
L_002B4D84:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002B4E44; } }
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[4] = c.r[3].w[0];
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = c.f[3] ^ fp::kSign;
    fpu_div(c, 12u, c.f[3], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[12]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[2]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B4DF4; } }
    c.f[12] = c.f[2];
    c.budget -= 1;
L_002B4DF4:
    c.f[0] = ld32((c.r[1].w[0] - 28184u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B4E08; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002B4E08:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E14u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002B4E14u) [[unlikely]] return; }
L_002B4E14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E34u); set32(c.r[7], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x002B4E34u) [[unlikely]] return; }
L_002B4E34:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E40u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006D(c, 114u, depth + 1u); else { c.pc = 0x002B5360u; return; } if (c.pc != 0x002B4E40u) [[unlikely]] return; }
L_002B4E40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002B4E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E4Cu);  if (depth < kMaxDepth) unit_006D(c, 101u, depth + 1u); else { c.pc = 0x002B5140u; return; } if (c.pc != 0x002B4E4Cu) [[unlikely]] return; }
L_002B4E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002B4E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4E8Cu) [[unlikely]] return; }
L_002B4E8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4E9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0034(c, 137u, depth + 1u); else { c.pc = 0x001D15B0u; return; } if (c.pc != 0x002B4E9Cu) [[unlikely]] return; }
L_002B4E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002B4ECC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 256u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002B4FAC; } }
L_002B4ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4ED4u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0034(c, 141u, depth + 1u); else { c.pc = 0x001D1670u; return; } if (c.pc != 0x002B4ED4u) [[unlikely]] return; }
L_002B4ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_002B4F04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 256u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002B4FAC; } }
L_002B4F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4F0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_0034(c, 140u, depth + 1u); else { c.pc = 0x001D1640u; return; } if (c.pc != 0x002B4F0Cu) [[unlikely]] return; }
L_002B4F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_002B4F48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[1].w[0] - 28192u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[16].w[0] + 256u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002B4FAC; } }
L_002B4F48:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 587u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002B4F88; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 256u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_002B4FAC; } }
L_002B4F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 256u), 0u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    c.budget -= 9;
L_002B4FAC:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 138u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002B4FBCu) [[unlikely]] return; }
L_002B4FBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.f[12] = ld32((c.r[2].w[0] + 212u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FCCu); set32(c.r[4], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x001444F0u; return; } if (c.pc != 0x002B4FCCu) [[unlikely]] return; }
L_002B4FCC:
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 188u)));
    c.f[12] = ld32((c.r[16].w[0] + 256u));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B4FF8u); set32(c.r[4], c.r[16].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B4FF8u) [[unlikely]] return; }
L_002B4FF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 240u)));
    c.f[12] = ld32((c.r[16].w[0] + 264u));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B500Cu); set32(c.r[4], c.r[16].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B500Cu) [[unlikely]] return; }
L_002B500C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002B5130; } }
L_002B5014:
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B50D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.r[1].d[0] = c.r[3].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B508C; } }
    set32(c.r[2], 0u + 61u);
    set32(c.r[25], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 256u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5058u); c.f[12] = fp::mul(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5058u) [[unlikely]] return; }
L_002B5058:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], 0u + 61u);
    set32(c.r[25], ld32((c.r[16].w[0] + 240u)));
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5084u); c.f[12] = fp::mul(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5084u) [[unlikely]] return; }
L_002B5084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 244u)));  if (t) { goto L_002B50D8; } }
L_002B508C:
    st32((c.r[16].w[0] + 244u), 0u);
    set32(c.r[4], 0u + 61u);
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.f[0] = ld32((c.r[16].w[0] + 256u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 256u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.budget -= 18;
L_002B50D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_002B50D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B512C; } }
    c.f[0] = ld32((c.r[1].w[0] - 28200u));
    c.f[1] = ld32((c.r[16].w[0] + 256u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 264u));
    c.f[0] = ld32((c.r[1].w[0] - 28200u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 264u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 188u)));
    c.f[12] = ld32((c.r[16].w[0] + 256u));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5118u); set32(c.r[4], c.r[16].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5118u) [[unlikely]] return; }
L_002B5118:
    set32(c.r[25], ld32((c.r[16].w[0] + 240u)));
    c.f[12] = ld32((c.r[16].w[0] + 264u));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B512Cu); set32(c.r[4], c.r[16].w[0] + 192u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B512Cu) [[unlikely]] return; }
L_002B512C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002B5130:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B5140:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B533C; } }
    c.f[2] = ld32((c.r[18].w[0] + 204u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = ld32((c.r[18].w[0] + 152u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B533C; } }
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[1] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { goto L_002B5330; } }
L_002B51B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002B533C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B532C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 340u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B532C; } }
    set32(c.r[3], 0u + 342u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B532C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B520Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x002B520Cu) [[unlikely]] return; }
L_002B520C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B521Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x002B521Cu) [[unlikely]] return; }
L_002B521C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B522Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x002B522Cu) [[unlikely]] return; }
L_002B522C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B523Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 129u, depth + 1u); else { c.pc = 0x001D1410u; return; } if (c.pc != 0x002B523Cu) [[unlikely]] return; }
L_002B523C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B524Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 133u, depth + 1u); else { c.pc = 0x001D14E0u; return; } if (c.pc != 0x002B524Cu) [[unlikely]] return; }
L_002B524C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B525Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x002B525Cu) [[unlikely]] return; }
L_002B525C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B5274; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B526Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x002B526Cu) [[unlikely]] return; }
L_002B526C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B532C; } }
L_002B5274:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[6].d[0] = 0ull + 0ull;
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5294u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 247u, depth + 1u); else { c.pc = 0x001437D0u; return; } if (c.pc != 0x002B5294u) [[unlikely]] return; }
L_002B5294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B532C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B52F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 340u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B52E4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002B52E4u) [[unlikely]] return; }
L_002B52E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B5308; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B52F0:
    set32(c.r[5], 0u + 342u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5304u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002B5304u) [[unlikely]] return; }
L_002B5304:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B5308:
    set32(c.r[5], 0u + 138u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5314u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 236u, depth + 1u); else { c.pc = 0x003ADA80u; return; } if (c.pc != 0x002B5314u) [[unlikely]] return; }
L_002B5314:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 396u));
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002B532C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B5330:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B51B4u | kUnwind; return; } goto L_002B51B4; } }
L_002B533C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002B5360:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[1] = c.r[3].w[0];
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_002B53E8; } }
L_002B5384:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B53E4; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002B53E4; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002B53E4; } }
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 224u));
    c.f[0] = fp::sub(c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[1], c.f[4]);  if (t) { goto L_002B53E4; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002B53E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B53F4; } }
L_002B53E4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002B53E8:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5384u | kUnwind; return; } goto L_002B5384; } }
L_002B53F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B5400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B54F0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 272u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B54F0; } }
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002B54D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[2].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 8u), 0ull);
    st64((c.r[10].w[0] + 16u), 0ull);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_002B54D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B54F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B54F0u) [[unlikely]] return; }
L_002B54F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B55C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 68u);
    set32(c.r[2], 0u + 66u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0]), c.r[8].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[9].w[0] + 8u), 0ull);
    st64((c.r[9].w[0] + 16u), 0ull);
    st32((c.r[9].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[9].w[0] + 28u), c.r[6].w[0]);
    st64((c.r[9].w[0] + 32u), c.r[5].d[0]);
    st64((c.r[9].w[0] + 40u), c.r[4].d[0]);
    st64((c.r[9].w[0] + 48u), c.r[3].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 39;
L_002B55C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5618; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 272u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B5618; } }
    c.f[12] = ld32((c.r[1].w[0] - 28184u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B55ECu); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002B55ECu) [[unlikely]] return; }
L_002B55EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5604u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5604u) [[unlikely]] return; }
L_002B5604:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5618u); set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (depth < kMaxDepth) unit_0015(c, 85u, depth + 1u); else { c.pc = 0x00156E00u; return; } if (c.pc != 0x002B5618u) [[unlikely]] return; }
L_002B5618:
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5630u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5630u) [[unlikely]] return; }
L_002B5630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B5640:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4C30u | kUnwind; return; } goto L_002B4C30; }
L_002B5650:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5400u | kUnwind; return; } goto L_002B5400; }
L_002B5660:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5500u | kUnwind; return; } goto L_002B5500; }
L_002B5670:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002B5680:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4600u | kUnwind; return; } goto L_002B4600; }
L_002B5690:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B4810u | kUnwind; return; } goto L_002B4810; }
L_002B56A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002B56B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 128u)));  c.pc = t; return; }
L_002B56C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B3FC0u | kUnwind; return; } [[clang::musttail]] return unit_006C(c, 367u, depth); }
L_002B56D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B42A0u | kUnwind; return; } goto L_002B42A0; }
L_002B56E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B42E0u | kUnwind; return; } goto L_002B42E0; }
L_002B56F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002B5700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5724u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002B5724u) [[unlikely]] return; }
L_002B5724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 8592u);
    set32(c.r[3], c.r[3].w[0] + 8608u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_002B574C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 11264u);  if (t) { goto L_002B5780; } }
L_002B574C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002B5760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 11776u);  if (t) { goto L_002B5780; } }
L_002B5760:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002B5770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 11776u);  if (t) { goto L_002B5780; } }
L_002B5770:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 48u);  if (t) { goto L_002B5784; } }
    set32(c.r[16], 0u + 11776u);
    c.budget -= 1;
L_002B5780:
    set32(c.r[4], 0u + 48u);
    c.budget -= 1;
L_002B5784:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5794u); st32((c.r[29].w[0] + 88u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B5794u) [[unlikely]] return; }
L_002B5794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B57A8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57A8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002C(c, 41u, depth + 1u); else { c.pc = 0x001B0720u; return; } if (c.pc != 0x002B57A8u) [[unlikely]] return; }
L_002B57A8:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57B4u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B57B4u) [[unlikely]] return; }
L_002B57B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002B57E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57C8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002B57C8u) [[unlikely]] return; }
L_002B57C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 168u, depth + 1u); else { c.pc = 0x00166120u; return; } if (c.pc != 0x002B57DCu) [[unlikely]] return; }
L_002B57DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002B57E0:
    st32((c.r[17].w[0] + 48u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B57F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B57F8u) [[unlikely]] return; }
L_002B57F8:
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[16].d[0] & 16383ull;
    c.r[6].d[0] = ld16((c.r[17].w[0] + 56u));
    set32(c.r[2], 0u - 16384u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 128u);
    set32(c.r[16], c.r[17].w[0] + 56u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5824u); st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0013(c, 8u, depth + 1u); else { c.pc = 0x0014C060u; return; } if (c.pc != 0x002B5824u) [[unlikely]] return; }
L_002B5824:
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[12], 0u - 1009u);
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(28ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[4].d[0] = c.r[3].d[0] << 14;
    c.r[3].d[0] = c.r[2].d[0] | 16383ull;
    set32(c.r[7], 0u - 5u);
    c.r[2].d[0] = 0ull & 63ull;
    set32(c.r[24], 0u - 121u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[13], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(7ll);
    st64((c.r[16].w[0]), c.r[4].d[0]);
    set32(c.r[3], 0u - 4u);
    c.r[14].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[10].d[0] = c.r[2].d[0] << 30;
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], 0u - 61u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[9].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[3].w[0] << 7);
    c.r[3].d[0] = 0ull & 3ull;
    set32(c.r[5], 0u - 25u);
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    set32(c.r[6], c.r[3].w[0] << 3);
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[3].d[0] = 0ull & 16383ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[4].d[0] = c.r[3].d[0] << 37;
    c.r[19].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[12].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 31ull;
    c.r[12].d[0] = c.r[12].d[0] << 16;
    c.r[13].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.r[3].d[0] = 0ull & 15ull;
    c.r[25].d[0] = c.r[12].d[0] | c.r[13].d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[15], 0u - 129u);
    set32(c.r[13], 0u - 32u);
    c.r[12].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[14].d[0] = 0ull & 31ull;
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[2].d[0] = 0ull & 7ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[12], c.r[2].w[0] << 5);
    c.r[19].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[11], 0u - 225u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st64((c.r[16].w[0]), c.r[9].d[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[25].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[24].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[18].d[0];
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.budget -= 86;
L_002B597C:
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B59C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B5A68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8592u);
    set32(c.r[2], c.r[2].w[0] + 8608u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5A18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5A18; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A18u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5A18u) [[unlikely]] return; }
L_002B5A18:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5A40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5A40; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5A40u) [[unlikely]] return; }
L_002B5A40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A50u); st32((c.r[17].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002B5A50u) [[unlikely]] return; }
L_002B5A50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B5A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5A68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B5A68u) [[unlikely]] return; }
L_002B5A68:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B5A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5A80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[7].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002B5B58; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B5B58; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5B58; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5AE8u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_002C(c, 62u, depth + 1u); else { c.pc = 0x001B0BB0u; return; } if (c.pc != 0x002B5AE8u) [[unlikely]] return; }
L_002B5AE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_002B5B50; } }
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5B50; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_002B5B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B5B1Cu) [[unlikely]] return; }
L_002B5B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B5B30; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 162u, depth + 1u); else { c.pc = 0x002B5BF0u; return; } if (c.pc != 0x002B5B30u) [[unlikely]] return; }
L_002B5B30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B50u); set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002B5B50u) [[unlikely]] return; }
L_002B5B50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B5B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B5B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 65u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B5B9C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5B9Cu);  if (depth < kMaxDepth) unit_002C(c, 58u, depth + 1u); else { c.pc = 0x001B0B50u; return; } if (c.pc != 0x002B5B9Cu) [[unlikely]] return; }
L_002B5B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5BDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5BDCu) [[unlikely]] return; }
L_002B5BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B5BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x002B5C10u) [[unlikely]] return; }
L_002B5C10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8576u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B5C88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C70u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x002B5C70u) [[unlikely]] return; }
L_002B5C70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B5C8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5C88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B5C88u) [[unlikely]] return; }
L_002B5C88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B5C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5CA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_002B5CCC; } }
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 4512u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002B5CCC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 56u));
    st64((c.r[5].w[0] + 72u), c.r[3].d[0]);
    c.budget -= 3;
L_002B5CCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B5CE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002B5CF4; } }
    set32(c.r[8], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 1;
L_002B5CF4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_002B5D34; } }
L_002B5D00:
    set32(c.r[3], ld32((c.r[8].w[0] + 60u)));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B5D2C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002B5D2C; } }
    st8((c.r[3].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B5D2C:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002B5D34:
    c.r[3].d[0] = ld16((c.r[8].w[0] + 64u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5D00u | kUnwind; return; } goto L_002B5D00; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B5D50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5B70u | kUnwind; return; } goto L_002B5B70; }
L_002B5D60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B59C0u | kUnwind; return; } goto L_002B59C0; }
L_002B5D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5D8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002B5D8Cu) [[unlikely]] return; }
L_002B5D8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8656u);
    set32(c.r[2], c.r[2].w[0] + 8672u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DB4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B5DB4u) [[unlikely]] return; }
L_002B5DB4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_002B5DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DC8u);  if (depth < kMaxDepth) unit_003F(c, 267u, depth + 1u); else { c.pc = 0x001FE610u; return; } if (c.pc != 0x002B5DC8u) [[unlikely]] return; }
L_002B5DC8:
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x24020000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5DE8u); c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002B5DE8u) [[unlikely]] return; }
L_002B5DE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 2;
L_002B5DF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0] + 44u), c.r[18].w[0]);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.f[2] = ld32((c.r[1].w[0] + 1424u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 1420u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 160u), c.f[0]);
    st32((c.r[2].w[0] + 164u), c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5E44u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5E44u) [[unlikely]] return; }
L_002B5E44:
    set32(c.r[3], 0u + 64u);
    set32(c.r[2], 0u + 100u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[3].w[0] + 232u), c.r[4].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B5E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B5F00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8656u);
    set32(c.r[2], c.r[2].w[0] + 8672u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5ED8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B5ED8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5ED8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B5ED8u) [[unlikely]] return; }
L_002B5ED8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5EE8u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002B5EE8u) [[unlikely]] return; }
L_002B5EE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B5F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B5F00u) [[unlikely]] return; }
L_002B5F00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B5F04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B5F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B5F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B5F60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_002B5F70:
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B5F80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5F50u | kUnwind; return; } goto L_002B5F50; }
L_002B5F90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B5E80u | kUnwind; return; } goto L_002B5E80; }
L_002B5FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 218u, depth + 1u); else { c.pc = 0x001667A0u; return; } if (c.pc != 0x002B5FB4u) [[unlikely]] return; }
L_002B5FB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8720u);
    set32(c.r[2], c.r[2].w[0] + 8736u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FD4u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B5FD4u) [[unlikely]] return; }
L_002B5FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002B5FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B5FE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 68u, depth + 1u); else { c.pc = 0x001B0C40u; return; } if (c.pc != 0x002B5FE4u) [[unlikely]] return; }
L_002B5FE4:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B6000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002B6084; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 8720u);
    set32(c.r[2], c.r[2].w[0] + 8736u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6038u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 269u, depth + 1u); else { c.pc = 0x003ADFD0u; return; } if (c.pc != 0x002B6038u) [[unlikely]] return; }
L_002B6038:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B605C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002B605C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B605Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B605Cu) [[unlikely]] return; }
L_002B605C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B606Cu); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0019(c, 221u, depth + 1u); else { c.pc = 0x00166810u; return; } if (c.pc != 0x002B606Cu) [[unlikely]] return; }
L_002B606C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002B6088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B6084u) [[unlikely]] return; }
L_002B6084:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B6088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B60A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B60B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002B60C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B60D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B60E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B6154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B610Cu);  if (depth < kMaxDepth) unit_001A(c, 37u, depth + 1u); else { c.pc = 0x00168880u; return; } if (c.pc != 0x002B610Cu) [[unlikely]] return; }
L_002B610C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002B611C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 36u)));  if (t) { goto L_002B6154; } }
L_002B611C:
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_002B612C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002B612C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6134u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B6134u) [[unlikely]] return; }
L_002B6134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B6148; } }
L_002B6144:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6154; } }
    c.r[16].d[0] = ld8((c.r[2].w[0] + 383u));
    c.budget -= 1;
L_002B6154:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6164u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x002B6164u) [[unlikely]] return; }
L_002B6164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B616Cu); set32(c.r[4], 0u + 301u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x002B616Cu) [[unlikely]] return; }
L_002B616C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B6190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28320u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B61E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_002B61C0; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_002B61C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61C8u); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002B61C8u) [[unlikely]] return; }
L_002B61C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B61D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002B61DC; } }
L_002B61D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B61DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B61E8; } }
    c.r[16].d[0] = ld8((c.r[2].w[0] + 379u));
    c.budget -= 1;
L_002B61E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B61F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002C(c, 75u, depth + 1u); else { c.pc = 0x001B0D00u; return; } if (c.pc != 0x002B61F8u) [[unlikely]] return; }
L_002B61F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6200u); set32(c.r[4], 0u + 303u);  if (depth < kMaxDepth) unit_00AB(c, 264u, depth + 1u); else { c.pc = 0x003ADF30u; return; } if (c.pc != 0x002B6200u) [[unlikely]] return; }
L_002B6200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B6220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B623Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B623Cu) [[unlikely]] return; }
L_002B623C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B6250:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B60D0u | kUnwind; return; } goto L_002B60D0; }
L_002B6260:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6000u | kUnwind; return; } goto L_002B6000; }
L_002B6270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6294u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B6294u) [[unlikely]] return; }
L_002B6294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24336u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002B62F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002B62ACu) [[unlikely]] return; }
L_002B62AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002B62E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62C0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002B62C0u) [[unlikely]] return; }
L_002B62C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62C8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002B62C8u) [[unlikely]] return; }
L_002B62C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].d[0] = c.r[1].d[0] | 37860ull;
    set32(c.r[5], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].d[0] = 0ull | 40700ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62E4u); set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_006D(c, 226u, depth + 1u); else { c.pc = 0x002B6360u; return; } if (c.pc != 0x002B62E4u) [[unlikely]] return; }
L_002B62E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002B62E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24336u), c.r[17].w[0]);
    c.budget -= 2;
L_002B62F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B62F8u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002B62F8u) [[unlikely]] return; }
L_002B62F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B6310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 24336u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B6338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6330u);  if (depth < kMaxDepth) unit_006D(c, 248u, depth + 1u); else { c.pc = 0x002B6620u; return; } if (c.pc != 0x002B6330u) [[unlikely]] return; }
L_002B6330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24336u), 0u);
    c.budget -= 2;
L_002B6338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B6350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] - 24336u)));  c.pc = t; return; }
L_002B6360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 33664ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[5].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[5].w[0] + 576u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 37984ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[1].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 47984ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[1].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 47988ull;
    set32(c.r[2], c.r[5].w[0] + c.r[1].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 28;
L_002B63D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B65E8; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28144u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B63F0:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6400u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B6400u) [[unlikely]] return; }
L_002B6400:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B641C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B642Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B642Cu) [[unlikely]] return; }
L_002B642C:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B6448:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6458u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B6458u) [[unlikely]] return; }
L_002B6458:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6470; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B6470:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6488u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B6488u) [[unlikely]] return; }
L_002B6488:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B64A0; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B64A0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B65E8; } }
L_002B64AC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64BCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B64BCu) [[unlikely]] return; }
L_002B64BC:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B64D4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B64D4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B64ECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B64ECu) [[unlikely]] return; }
L_002B64EC:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B6504; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B6504:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B65E8; } }
L_002B6510:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6520u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B6520u) [[unlikely]] return; }
L_002B6520:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B653C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 14u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B654Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B654Cu) [[unlikely]] return; }
L_002B654C:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B6568:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6578u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B6578u) [[unlikely]] return; }
L_002B6578:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B6594:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B65A4u) [[unlikely]] return; }
L_002B65A4:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B65E8; } }
L_002B65C0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B65D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 337u, depth + 1u); else { c.pc = 0x002B7630u; return; } if (c.pc != 0x002B65D0u) [[unlikely]] return; }
L_002B65D0:
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B65E8; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_002B65E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B63D0u | kUnwind; return; } goto L_002B63D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[1].w[0] - 24336u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B6620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B6654; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002B6650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6650u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002B6650u) [[unlikely]] return; }
L_002B6650:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B6654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B6670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 17120u);  if (t) { goto L_002B6694; } }
L_002B6680:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002B66A0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002B6694:
    c.r[3].d[0] = c.r[2].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6680u | kUnwind; return; } goto L_002B6680; } }
L_002B66A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B66B0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B66E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006D(c, 339u, depth + 1u); else { c.pc = 0x002B7680u; return; } if (c.pc != 0x002B66E8u) [[unlikely]] return; }
L_002B66E8:
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 28032u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 15;
L_002B6724:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] << 2);  if (t) { goto L_002B67E0; } }
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B673C:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B67E0; } }
L_002B6758:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B67E0; } }
L_002B6774:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B67E0; } }
L_002B6790:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B67E0; } }
L_002B67AC:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002B67E0; } }
L_002B67C8:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 44u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_002B67E0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6724u | kUnwind; return; } goto L_002B6724; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B683C; } }
L_002B6800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6808u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6808u) [[unlikely]] return; }
L_002B6808:
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 520u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);  if (t) { goto L_002B6824; } }
    breakpoint(c, 0x002B6820u);
    c.budget -= 1;
L_002B6824:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6800u | kUnwind; return; } goto L_002B6800; } }
L_002B683C:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 195u));
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B6D3C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6870u); set32(c.r[17], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6870u) [[unlikely]] return; }
L_002B6870:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B68A0; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6894; } }
    breakpoint(c, 0x002B6890u);
    c.budget -= 1;
L_002B6894:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B68A4; } }
L_002B68A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B68A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B68B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002B68C8; } }
L_002B68B4:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B68C4; } }
    breakpoint(c, 0x002B68C0u);
    c.budget -= 1;
L_002B68C4:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B68C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68D0u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B68D0u) [[unlikely]] return; }
L_002B68D0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6D2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B68E4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B68E4u) [[unlikely]] return; }
L_002B68E4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6914; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6908; } }
    breakpoint(c, 0x002B6904u);
    c.budget -= 1;
L_002B6908:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6918; } }
L_002B6914:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6918:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B6928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_002B693C; } }
L_002B6928:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6938; } }
    breakpoint(c, 0x002B6934u);
    c.budget -= 1;
L_002B6938:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B693C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6944u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B6944u) [[unlikely]] return; }
L_002B6944:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B695Cu); set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B695Cu) [[unlikely]] return; }
L_002B695C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B698C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6980; } }
    breakpoint(c, 0x002B697Cu);
    c.budget -= 1;
L_002B6980:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6990; } }
L_002B698C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B69A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_002B69B4; } }
L_002B69A0:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B69B0; } }
    breakpoint(c, 0x002B69ACu);
    c.budget -= 1;
L_002B69B0:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B69B4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002B6BC0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B69E4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B69E4:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B69FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B69FC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B6A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A08u); set32(c.r[17], c.r[18].w[0] << 1);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6A08u) [[unlikely]] return; }
L_002B6A08:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6A38; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6A2C; } }
    breakpoint(c, 0x002B6A28u);
    c.budget -= 1;
L_002B6A2C:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6A3C; } }
L_002B6A38:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6A3C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B6A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 86u);  if (t) { goto L_002B6A60; } }
L_002B6A4C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6A5C; } }
    breakpoint(c, 0x002B6A58u);
    c.budget -= 1;
L_002B6A5C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B6A60:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B6BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A80u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6A80u) [[unlikely]] return; }
L_002B6A80:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6A94u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6A94u) [[unlikely]] return; }
L_002B6A94:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6AC4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6AB8; } }
    breakpoint(c, 0x002B6AB4u);
    c.budget -= 1;
L_002B6AB8:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6AC8; } }
L_002B6AC4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6AC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B6AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002B6AEC; } }
L_002B6AD8:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6AE8; } }
    breakpoint(c, 0x002B6AE4u);
    c.budget -= 1;
L_002B6AE8:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B6AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6AF4u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6AF4u) [[unlikely]] return; }
L_002B6AF4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B08u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6B08u) [[unlikely]] return; }
L_002B6B08:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[5].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6B38; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6B2C; } }
    breakpoint(c, 0x002B6B28u);
    c.budget -= 1;
L_002B6B2C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));  if (t) { goto L_002B6B40; } }
L_002B6B38:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));
    c.budget -= 2;
L_002B6B40:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_002B6B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + 86u);  if (t) { goto L_002B6B6C; } }
L_002B6B54:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6B68; } }
    breakpoint(c, 0x002B6B64u);
    c.budget -= 1;
L_002B6B68:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B6B6C:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6B78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B6B78u) [[unlikely]] return; }
L_002B6B78:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6B90; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B6B90:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6BA8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B6BA8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6A00u | kUnwind; return; } goto L_002B6A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002B6D30; } }
L_002B6BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6BC8u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6BC8u) [[unlikely]] return; }
L_002B6BC8:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6BF8; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6BEC; } }
    breakpoint(c, 0x002B6BE8u);
    c.budget -= 1;
L_002B6BEC:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6BFC; } }
L_002B6BF8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6BFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B6C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 86u);  if (t) { goto L_002B6C20; } }
L_002B6C0C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6C1C; } }
    breakpoint(c, 0x002B6C18u);
    c.budget -= 1;
L_002B6C1C:
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B6C20:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B6C38u) [[unlikely]] return; }
L_002B6C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6C40u); c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002B6C40u) [[unlikely]] return; }
L_002B6C40:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 520u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002B6C70; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6C64; } }
    breakpoint(c, 0x002B6C60u);
    c.budget -= 1;
L_002B6C64:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B6C74; } }
L_002B6C70:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002B6C74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002B6C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 86u);  if (t) { goto L_002B6C98; } }
L_002B6C84:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_002B6C94; } }
    breakpoint(c, 0x002B6C90u);
    c.budget -= 1;
L_002B6C94:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_002B6C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6CA0u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6CA0u) [[unlikely]] return; }
L_002B6CA0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6D2C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6CC0u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6CC0u) [[unlikely]] return; }
L_002B6CC0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B6D2C; } }
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6CE4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6CE4:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6CFC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6CFC:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6D14; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6D14:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6D2C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6D2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B6D30:
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6868u | kUnwind; return; } goto L_002B6868; } }
L_002B6D3C:
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D48u); set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (depth < kMaxDepth) unit_006E(c, 91u, depth + 1u); else { c.pc = 0x002B8550u; return; } if (c.pc != 0x002B6D48u) [[unlikely]] return; }
L_002B6D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B6DEC; } }
L_002B6D50:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], c.r[19].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_002B6DD8; } }
L_002B6D60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_002B6DD4; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 44u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 44u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002B6DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6D80u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6D80u) [[unlikely]] return; }
L_002B6D80:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6DD4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DA0u); set32(c.r[22], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6DA0u) [[unlikely]] return; }
L_002B6DA0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B6DD4; } }
    set32(c.r[6], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6DBCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B6DBCu) [[unlikely]] return; }
L_002B6DBC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 17u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6DD4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B6DD4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B6DD8:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D60u | kUnwind; return; } goto L_002B6D60; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B6DEC:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6D50u | kUnwind; return; } goto L_002B6D50; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 194u));
    set32(c.r[21], ld32((c.r[19].w[0] + 232u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 44u));
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_002B6E1C; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002B6E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B73CC; } }
L_002B6E24:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002B73D8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_002B6E4C; } }
    c.r[22].d[0] = ld8((c.r[19].w[0] + 195u));
    set32(c.r[30], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[19].w[0] + 194u));  if (t) { goto L_002B6E68; } }
L_002B6E4C:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = ld8((c.r[3].w[0] + 223u));
    c.r[22].d[0] = ld8((c.r[3].w[0] + 226u));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 208u)));
    st32((c.r[29].w[0] + 208u), c.r[18].w[0]);
    c.budget -= 7;
L_002B6E68:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6E74u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0020(c, 143u, depth + 1u); else { c.pc = 0x00181D30u; return; } if (c.pc != 0x002B6E74u) [[unlikely]] return; }
L_002B6E74:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[22].w[0] << 2);  if (t) { goto L_002B73D8; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_002B73B8; } }
L_002B6E9C:
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 44u));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_002B71BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_002B7054; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6ECCu); set32(c.r[23], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6ECCu) [[unlikely]] return; }
L_002B6ECC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[5], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6EE4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B6EE4u) [[unlikely]] return; }
L_002B6EE4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6F10; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6F10:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6F28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B6F28:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B6FA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F3Cu); set32(c.r[4], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6F3Cu) [[unlikely]] return; }
L_002B6F3C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F54u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6F54u) [[unlikely]] return; }
L_002B6F54:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6F74u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B6F74u) [[unlikely]] return; }
L_002B6F74:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B6F8C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B6F8C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7050; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B7050; } }
L_002B6FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_002B7040; } }
L_002B6FB0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == c.r[18].d[0];  if (t) { goto L_002B703C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6FC4u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6FC4u) [[unlikely]] return; }
L_002B6FC4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B703C; } }
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 20u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B6FE8u); set32(c.r[4], ld32((c.r[3].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B6FE8u) [[unlikely]] return; }
L_002B6FE8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B703C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B700Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B700Cu) [[unlikely]] return; }
L_002B700C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7024; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B7024:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B703C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B703C:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_002B7040:
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6FB0u | kUnwind; return; } goto L_002B6FB0; } }
L_002B7050:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002B7054:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7064u); set32(c.r[23], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B7064u) [[unlikely]] return; }
L_002B7064:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B707Cu); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B707Cu) [[unlikely]] return; }
L_002B707C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B709Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B709Cu) [[unlikely]] return; }
L_002B709C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_002B70B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002B73B4; } }
L_002B70B0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[30].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 28064u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B70D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B70F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7118:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B713C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7158:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7174:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 15u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7198:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 11u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B71BC:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B71CCu); set32(c.r[23], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B71CCu) [[unlikely]] return; }
L_002B71CC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B71E4u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_006E(c, 105u, depth + 1u); else { c.pc = 0x002B8850u; return; } if (c.pc != 0x002B71E4u) [[unlikely]] return; }
L_002B71E4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002B728C; } }
    set32(c.r[5], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7204u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B7204u) [[unlikely]] return; }
L_002B7204:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7230; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B7230:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7248; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002B7248:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B725Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B725Cu) [[unlikely]] return; }
L_002B725C:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B7274; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B7274:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B728C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B728C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B72A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B72A0u) [[unlikely]] return; }
L_002B72A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_002B72B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002B73B4; } }
L_002B72B4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[30].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 28096u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B72D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[22].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B72F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[22].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B731C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[22].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7340:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B735C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7378:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B73B4; } }
L_002B7394:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[22].d[0];  if (t) { goto L_002B73B4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[1].d[0] = c.r[3].sd[0] < 99ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B73B4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002B73B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B73B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 196u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6E9Cu | kUnwind; return; } goto L_002B6E9C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B73CC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B6E24u | kUnwind; return; } goto L_002B6E24; } }
L_002B73D8:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002B7400; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_002B7400:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002B741C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_002B741C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002B7450:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const bool t = c.r[21].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002B7494; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002B7494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002B7554; } }
L_002B749C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B74A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 340u, depth + 1u); else { c.pc = 0x002B76B0u; return; } if (c.pc != 0x002B74A4u) [[unlikely]] return; }
L_002B74A4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002B7560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));  if (t) { goto L_002B753C; } }
L_002B74B8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B750C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B74DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[20].w[0] + 5u));  if (t) { goto L_002B7508; } }
L_002B74E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[20].w[0] + 6u));  if (t) { goto L_002B7508; } }
L_002B74EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[20].w[0] + 7u));  if (t) { goto L_002B7508; } }
L_002B74F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[20].w[0] + 8u));  if (t) { goto L_002B7508; } }
L_002B74FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[20].w[0] + 9u));  if (t) { goto L_002B7508; } }
L_002B7504:
    c.r[16].d[0] = ld8((c.r[20].w[0] + 10u));
    c.budget -= 1;
L_002B7508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002B750C:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7518u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x00338A00u; return; } if (c.pc != 0x002B7518u) [[unlikely]] return; }
L_002B7518:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7534; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 4;
L_002B7534:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));
    c.budget -= 2;
L_002B753C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7544u);  if (depth < kMaxDepth) unit_006E(c, 100u, depth + 1u); else { c.pc = 0x002B8770u; return; } if (c.pc != 0x002B7544u) [[unlikely]] return; }
L_002B7544:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B74B8u | kUnwind; return; } goto L_002B74B8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002B7554:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B749Cu | kUnwind; return; } goto L_002B749C; } }
L_002B7560:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002B7590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B75B4u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B75B4u) [[unlikely]] return; }
L_002B75B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B75C4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B75C4u) [[unlikely]] return; }
L_002B75C4:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_002B75E4; } }
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002B75FC; } }
L_002B75E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] - 1u);  if (t) { goto L_002B75FC; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002B75FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[3], c.r[3].w[0] << 1);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002B7630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B764Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 250u, depth + 1u); else { c.pc = 0x002B6670u; return; } if (c.pc != 0x002B764Cu) [[unlikely]] return; }
L_002B764C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] << 5);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B7680:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002B76B0:
    c.r[2].d[0] = c.r[5].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B76C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7718; } }
L_002B76C4:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B76E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B7718; } }
L_002B76E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002B76FC; } }
    set32(c.r[5], c.r[5].w[0] + 200u);
    c.budget -= 1;
L_002B76FC:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002B7718:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B7720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002B77A4; } }
L_002B7758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7760u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 340u, depth + 1u); else { c.pc = 0x002B76B0u; return; } if (c.pc != 0x002B7760u) [[unlikely]] return; }
L_002B7760:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002B7774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002B77B4; } }
L_002B7774:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7780u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 352u, depth + 1u); else { c.pc = 0x002B7910u; return; } if (c.pc != 0x002B7780u) [[unlikely]] return; }
L_002B7780:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B77A0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[16].d[0]; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002B779C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002B77B8; } }
L_002B779C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002B77A0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002B77A4:
    c.r[2].d[0] = c.r[19].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7758u | kUnwind; return; } goto L_002B7758; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B77B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002B77B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B77E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B7828; } }
L_002B780C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7818u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 341u, depth + 1u); else { c.pc = 0x002B7720u; return; } if (c.pc != 0x002B7818u) [[unlikely]] return; }
L_002B7818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B7834; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002B7828:
    c.r[2].d[0] = c.r[17].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B780Cu | kUnwind; return; } goto L_002B780C; } }
L_002B7834:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002B7860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002B78D4; } }
L_002B789C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B78A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 340u, depth + 1u); else { c.pc = 0x002B76B0u; return; } if (c.pc != 0x002B78A4u) [[unlikely]] return; }
L_002B78A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002B78E0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B78C0u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 361u, depth + 1u); else { c.pc = 0x002B79E0u; return; } if (c.pc != 0x002B78C0u) [[unlikely]] return; }
L_002B78C0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B78D0; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002B78D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002B78D4:
    c.r[2].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B789Cu | kUnwind; return; } goto L_002B789C; } }
L_002B78E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002B7910:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27968u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_002B79BC; } }
L_002B7924:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_002B7970; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B7940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 5u));  if (t) { goto L_002B796C; } }
L_002B7948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 6u));  if (t) { goto L_002B796C; } }
L_002B7950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 7u));  if (t) { goto L_002B796C; } }
L_002B7958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 8u));  if (t) { goto L_002B796C; } }
L_002B7960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 9u));  if (t) { goto L_002B796C; } }
L_002B7968:
    c.r[7].d[0] = ld8((c.r[5].w[0] + 10u));
    c.budget -= 1;
L_002B796C:
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_002B7970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B7980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B79CC; } }
L_002B7980:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002B79B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_002B79B0; } }
L_002B7994:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002B79A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B79CC; } }
L_002B79A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 2;
L_002B79B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7994u | kUnwind; return; } goto L_002B7994; } }
L_002B79B8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002B79BC:
    c.r[2].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7924u | kUnwind; return; } goto L_002B7924; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002B79CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B79E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u - 1u);
    st32((c.r[29].w[0] + 172u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[7].w[0]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
L_002B7A30:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7A3Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 52u, depth + 1u); else { c.pc = 0x00130530u; return; } if (c.pc != 0x002B7A3Cu) [[unlikely]] return; }
L_002B7A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;  if (t) { goto L_002B7AE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_002B7AA8; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 27936u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B4000u < 16384u) { entry = entries_006D[(t - 0x002B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B7A64:
    c.r[17].d[0] = ld8((c.r[20].w[0] + 11u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[20].w[0] + 5u));  if (t) { goto L_002B7AA8; } }
L_002B7A70:
    c.r[17].d[0] = ld8((c.r[20].w[0] + 12u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[20].w[0] + 6u));  if (t) { goto L_002B7AA8; } }
L_002B7A7C:
    c.r[17].d[0] = ld8((c.r[20].w[0] + 13u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[20].w[0] + 7u));  if (t) { goto L_002B7AA8; } }
L_002B7A88:
    c.r[17].d[0] = ld8((c.r[20].w[0] + 14u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[20].w[0] + 8u));  if (t) { goto L_002B7AA8; } }
L_002B7A94:
    c.r[17].d[0] = ld8((c.r[20].w[0] + 15u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[20].w[0] + 9u));  if (t) { goto L_002B7AA8; } }
L_002B7AA0:
    c.r[18].d[0] = ld8((c.r[20].w[0] + 10u));
    c.r[17].d[0] = ld8((c.r[20].w[0] + 16u));
    c.budget -= 2;
L_002B7AA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B7AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_002B7AE0; } }
L_002B7AC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002B7AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_002B7AE0; } }
L_002B7AD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[23].d[0];  if (t) { goto L_002B7AE0; } }
    c.r[30].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_002B7AE0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7A30u | kUnwind; return; } goto L_002B7A30; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[22].d[0]; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002B7B1C; } }
    set32(c.r[2], 0u + 118u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_002B7B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002B7B18; } }
L_002B7B0C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[30].d[0];  if (t) { goto L_002B7B18; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002B7B18:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002B7B1C:
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
L_002B7B50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 17;
L_002B7B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == c.r[6].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002B7BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7BB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B7BB8u) [[unlikely]] return; }
L_002B7BB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7BC4u); set32(c.r[25], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x002B7BC4u) [[unlikely]] return; }
L_002B7BC4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002B7BCC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B94u | kUnwind; return; } goto L_002B7B94; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002B7C00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16736u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));  c.pc = t; return; }
L_002B7C20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16720u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));  c.pc = t; return; }
L_002B7C40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16704u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));  c.pc = t; return; }
L_002B7C60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16688u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));  c.pc = t; return; }
L_002B7C80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16672u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));  c.pc = t; return; }
L_002B7CA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16656u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));  c.pc = t; return; }
L_002B7CC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16640u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 9u));  c.pc = t; return; }
L_002B7CE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16624u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 10u));  c.pc = t; return; }
L_002B7D00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16608u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 11u));  c.pc = t; return; }
L_002B7D20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16592u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));  c.pc = t; return; }
L_002B7D40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16576u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));  c.pc = t; return; }
L_002B7D60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16560u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 14u));  c.pc = t; return; }
L_002B7D80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16544u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 15u));  c.pc = t; return; }
L_002B7DA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[6], c.r[6].w[0] - 16528u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7B50u | kUnwind; return; } goto L_002B7B50; }
L_002B7DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 16u));  c.pc = t; return; }
L_002B7DC0:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B7DE0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_002B7DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002B7DF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 760u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[8].w[0]));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E4Cu); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x002B7E4Cu) [[unlikely]] return; }
L_002B7E4C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002B7E5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[22].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002B7EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006E(c, 102u, depth + 1u); else { c.pc = 0x002B8790u; return; } if (c.pc != 0x002B7E6Cu) [[unlikely]] return; }
L_002B7E6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_002B7EA4; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E88u); st32((c.r[18].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_006D(c, 334u, depth + 1u); else { c.pc = 0x002B7590u; return; } if (c.pc != 0x002B7E88u) [[unlikely]] return; }
L_002B7E88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7E94u); set32(c.r[25], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x002B7E94u) [[unlikely]] return; }
L_002B7E94:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 4;
L_002B7EA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x002B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7E5Cu | kUnwind; return; } goto L_002B7E5C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7EC8u); set32(c.r[7], c.r[7].w[0] + 32192u);  if (depth < kMaxDepth) unit_0009(c, 126u, depth + 1u); else { c.pc = 0x00126150u; return; } if (c.pc != 0x002B7EC8u) [[unlikely]] return; }
L_002B7EC8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002B7ED4; } }
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002B7ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002B7EF0; } }
L_002B7EDC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 5;
L_002B7EF0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7EDCu | kUnwind; return; } goto L_002B7EDC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002B7F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B7F0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x002B7F0Cu) [[unlikely]] return; }
L_002B7F0C:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002B7F10:
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
L_002B7F40:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16512u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0]));  c.pc = t; return; }
L_002B7F60:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16496u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7F70:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16480u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7F80:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16464u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7F90:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16448u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FA0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FB0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FC0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16400u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FD0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16384u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FE0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
L_002B7FF0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { set32(c.r[8], c.r[8].w[0] - 16352u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B7DF0u | kUnwind; return; } goto L_002B7DF0; }
}

}
