#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 14, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 360,
    0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371,
    0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0,
    380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409,
    0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
};

void unit_001A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00168000;
    case 2u: goto L_0016803C;
    case 3u: goto L_0016804C;
    case 4u: goto L_00168100;
    case 5u: goto L_00168138;
    case 6u: goto L_00168140;
    case 7u: goto L_00168180;
    case 8u: goto L_00168188;
    case 9u: goto L_00168260;
    case 10u: goto L_001682AC;
    case 11u: goto L_001682D0;
    case 12u: goto L_001682EC;
    case 13u: goto L_00168310;
    case 14u: goto L_00168314;
    case 15u: goto L_00168318;
    case 16u: goto L_00168338;
    case 17u: goto L_00168374;
    case 18u: goto L_001683A8;
    case 19u: goto L_001683FC;
    case 20u: goto L_00168414;
    case 21u: goto L_00168460;
    case 22u: goto L_001684C0;
    case 23u: goto L_00168544;
    case 24u: goto L_00168598;
    case 25u: goto L_001685B0;
    case 26u: goto L_001685FC;
    case 27u: goto L_00168664;
    case 28u: goto L_0016866C;
    case 29u: goto L_00168680;
    case 30u: goto L_001686A8;
    case 31u: goto L_001686D0;
    case 32u: goto L_001686F0;
    case 33u: goto L_0016871C;
    case 34u: goto L_00168740;
    case 35u: goto L_00168804;
    case 36u: goto L_00168850;
    case 37u: goto L_00168880;
    case 38u: goto L_001688D0;
    case 39u: goto L_001688F4;
    case 40u: goto L_00168910;
    case 41u: goto L_00168940;
    case 42u: goto L_00168960;
    case 43u: goto L_001689C8;
    case 44u: goto L_00168A20;
    case 45u: goto L_00168AA0;
    case 46u: goto L_00168AC8;
    case 47u: goto L_00168B34;
    case 48u: goto L_00168BD0;
    case 49u: goto L_00168BE8;
    case 50u: goto L_00168C20;
    case 51u: goto L_00168C30;
    case 52u: goto L_00168C40;
    case 53u: goto L_00168C60;
    case 54u: goto L_00168C78;
    case 55u: goto L_00168C98;
    case 56u: goto L_00168CD0;
    case 57u: goto L_00168D04;
    case 58u: goto L_00168D2C;
    case 59u: goto L_00168DB0;
    case 60u: goto L_00168DC8;
    case 61u: goto L_00168E00;
    case 62u: goto L_00168E0C;
    case 63u: goto L_00168E40;
    case 64u: goto L_00168E70;
    case 65u: goto L_00168E98;
    case 66u: goto L_00168EB0;
    case 67u: goto L_00168ED4;
    case 68u: goto L_00168EEC;
    case 69u: goto L_00168F10;
    case 70u: goto L_00168F30;
    case 71u: goto L_00168F44;
    case 72u: goto L_00168F60;
    case 73u: goto L_00168F80;
    case 74u: goto L_00168FA0;
    case 75u: goto L_00168FBC;
    case 76u: goto L_00168FCC;
    case 77u: goto L_00168FD4;
    case 78u: goto L_00168FE4;
    case 79u: goto L_00168FF0;
    case 80u: goto L_00169010;
    case 81u: goto L_00169030;
    case 82u: goto L_0016904C;
    case 83u: goto L_00169054;
    case 84u: goto L_00169060;
    case 85u: goto L_001690A4;
    case 86u: goto L_001690B4;
    case 87u: goto L_001690E0;
    case 88u: goto L_0016912C;
    case 89u: goto L_00169130;
    case 90u: goto L_0016915C;
    case 91u: goto L_00169190;
    case 92u: goto L_00169198;
    case 93u: goto L_001691A0;
    case 94u: goto L_001691AC;
    case 95u: goto L_001691B8;
    case 96u: goto L_001691C4;
    case 97u: goto L_001691DC;
    case 98u: goto L_00169200;
    case 99u: goto L_0016921C;
    case 100u: goto L_00169228;
    case 101u: goto L_00169234;
    case 102u: goto L_00169238;
    case 103u: goto L_00169258;
    case 104u: goto L_0016927C;
    case 105u: goto L_00169290;
    case 106u: goto L_001692A4;
    case 107u: goto L_001692BC;
    case 108u: goto L_001692CC;
    case 109u: goto L_001692E4;
    case 110u: goto L_001692F8;
    case 111u: goto L_00169308;
    case 112u: goto L_0016931C;
    case 113u: goto L_0016932C;
    case 114u: goto L_0016933C;
    case 115u: goto L_00169344;
    case 116u: goto L_0016935C;
    case 117u: goto L_00169368;
    case 118u: goto L_00169380;
    case 119u: goto L_0016938C;
    case 120u: goto L_001693A4;
    case 121u: goto L_001693B4;
    case 122u: goto L_001693C4;
    case 123u: goto L_001693D4;
    case 124u: goto L_001693EC;
    case 125u: goto L_001693FC;
    case 126u: goto L_0016940C;
    case 127u: goto L_00169424;
    case 128u: goto L_00169434;
    case 129u: goto L_00169444;
    case 130u: goto L_00169474;
    case 131u: goto L_00169484;
    case 132u: goto L_00169490;
    case 133u: goto L_0016949C;
    case 134u: goto L_001694A8;
    case 135u: goto L_001694B0;
    case 136u: goto L_001694D0;
    case 137u: goto L_001694E0;
    case 138u: goto L_00169528;
    case 139u: goto L_00169538;
    case 140u: goto L_00169550;
    case 141u: goto L_00169560;
    case 142u: goto L_0016957C;
    case 143u: goto L_00169588;
    case 144u: goto L_0016959C;
    case 145u: goto L_001695C0;
    case 146u: goto L_001695D0;
    case 147u: goto L_001695EC;
    case 148u: goto L_001695F8;
    case 149u: goto L_0016960C;
    case 150u: goto L_00169628;
    case 151u: goto L_00169698;
    case 152u: goto L_001696E8;
    case 153u: goto L_001696FC;
    case 154u: goto L_00169710;
    case 155u: goto L_00169760;
    case 156u: goto L_00169774;
    case 157u: goto L_00169798;
    case 158u: goto L_001697B8;
    case 159u: goto L_001697E4;
    case 160u: goto L_00169810;
    case 161u: goto L_0016984C;
    case 162u: goto L_00169874;
    case 163u: goto L_0016987C;
    case 164u: goto L_00169898;
    case 165u: goto L_001698AC;
    case 166u: goto L_001698D8;
    case 167u: goto L_00169920;
    case 168u: goto L_00169944;
    case 169u: goto L_00169974;
    case 170u: goto L_00169980;
    case 171u: goto L_0016999C;
    case 172u: goto L_001699BC;
    case 173u: goto L_001699D0;
    case 174u: goto L_001699E0;
    case 175u: goto L_001699F0;
    case 176u: goto L_00169A6C;
    case 177u: goto L_00169A78;
    case 178u: goto L_00169A90;
    case 179u: goto L_00169AE8;
    case 180u: goto L_00169B08;
    case 181u: goto L_00169B14;
    case 182u: goto L_00169B2C;
    case 183u: goto L_00169B40;
    case 184u: goto L_00169B50;
    case 185u: goto L_00169B6C;
    case 186u: goto L_00169B78;
    case 187u: goto L_00169B90;
    case 188u: goto L_00169BA4;
    case 189u: goto L_00169BDC;
    case 190u: goto L_00169CB4;
    case 191u: goto L_00169CF4;
    case 192u: goto L_00169CFC;
    case 193u: goto L_00169D30;
    case 194u: goto L_00169D44;
    case 195u: goto L_00169D9C;
    case 196u: goto L_00169DCC;
    case 197u: goto L_00169DF0;
    case 198u: goto L_00169E00;
    case 199u: goto L_00169E10;
    case 200u: goto L_00169E1C;
    case 201u: goto L_00169E28;
    case 202u: goto L_00169E50;
    case 203u: goto L_00169E60;
    case 204u: goto L_00169E74;
    case 205u: goto L_00169EAC;
    case 206u: goto L_00169EC8;
    case 207u: goto L_00169EDC;
    case 208u: goto L_00169F98;
    case 209u: goto L_00169FA0;
    case 210u: goto L_00169FF0;
    case 211u: goto L_0016A030;
    case 212u: goto L_0016A054;
    case 213u: goto L_0016A060;
    case 214u: goto L_0016A084;
    case 215u: goto L_0016A090;
    case 216u: goto L_0016A0B4;
    case 217u: goto L_0016A0C0;
    case 218u: goto L_0016A0E4;
    case 219u: goto L_0016A0F0;
    case 220u: goto L_0016A154;
    case 221u: goto L_0016A168;
    case 222u: goto L_0016A17C;
    case 223u: goto L_0016A194;
    case 224u: goto L_0016A1A8;
    case 225u: goto L_0016A224;
    case 226u: goto L_0016A234;
    case 227u: goto L_0016A254;
    case 228u: goto L_0016A278;
    case 229u: goto L_0016A298;
    case 230u: goto L_0016A310;
    case 231u: goto L_0016A360;
    case 232u: goto L_0016A3A0;
    case 233u: goto L_0016A3B0;
    case 234u: goto L_0016A3D4;
    case 235u: goto L_0016A3E0;
    case 236u: goto L_0016A410;
    case 237u: goto L_0016A420;
    case 238u: goto L_0016A434;
    case 239u: goto L_0016A480;
    case 240u: goto L_0016A494;
    case 241u: goto L_0016A4B8;
    case 242u: goto L_0016A4CC;
    case 243u: goto L_0016A4EC;
    case 244u: goto L_0016A50C;
    case 245u: goto L_0016A5A8;
    case 246u: goto L_0016A5C0;
    case 247u: goto L_0016A5D4;
    case 248u: goto L_0016A5E4;
    case 249u: goto L_0016A600;
    case 250u: goto L_0016A614;
    case 251u: goto L_0016A624;
    case 252u: goto L_0016A640;
    case 253u: goto L_0016A65C;
    case 254u: goto L_0016A664;
    case 255u: goto L_0016A690;
    case 256u: goto L_0016A6C0;
    case 257u: goto L_0016A6F4;
    case 258u: goto L_0016A71C;
    case 259u: goto L_0016A73C;
    case 260u: goto L_0016A7D0;
    case 261u: goto L_0016A80C;
    case 262u: goto L_0016A840;
    case 263u: goto L_0016A860;
    case 264u: goto L_0016A890;
    case 265u: goto L_0016A8D8;
    case 266u: goto L_0016A8F0;
    case 267u: goto L_0016A910;
    case 268u: goto L_0016A970;
    case 269u: goto L_0016A980;
    case 270u: goto L_0016A9A8;
    case 271u: goto L_0016A9E0;
    case 272u: goto L_0016AA10;
    case 273u: goto L_0016AA30;
    case 274u: goto L_0016AA54;
    case 275u: goto L_0016AA60;
    case 276u: goto L_0016AA64;
    case 277u: goto L_0016AA88;
    case 278u: goto L_0016AAA0;
    case 279u: goto L_0016AAAC;
    case 280u: goto L_0016AAC4;
    case 281u: goto L_0016AAD0;
    case 282u: goto L_0016AAE8;
    case 283u: goto L_0016AB04;
    case 284u: goto L_0016AB14;
    case 285u: goto L_0016AB24;
    case 286u: goto L_0016AB3C;
    case 287u: goto L_0016AB4C;
    case 288u: goto L_0016AB5C;
    case 289u: goto L_0016AB74;
    case 290u: goto L_0016AB84;
    case 291u: goto L_0016AB94;
    case 292u: goto L_0016ABCC;
    case 293u: goto L_0016ABF0;
    case 294u: goto L_0016AC00;
    case 295u: goto L_0016AC48;
    case 296u: goto L_0016AC60;
    case 297u: goto L_0016AC80;
    case 298u: goto L_0016ACA0;
    case 299u: goto L_0016ACB0;
    case 300u: goto L_0016ACC0;
    case 301u: goto L_0016ACD0;
    case 302u: goto L_0016ACE0;
    case 303u: goto L_0016ACF0;
    case 304u: goto L_0016AD00;
    case 305u: goto L_0016AD10;
    case 306u: goto L_0016AD20;
    case 307u: goto L_0016AD80;
    case 308u: goto L_0016ADE0;
    case 309u: goto L_0016AE40;
    case 310u: goto L_0016AEA0;
    case 311u: goto L_0016AF00;
    case 312u: goto L_0016AF60;
    case 313u: goto L_0016AF70;
    case 314u: goto L_0016AFA0;
    case 315u: goto L_0016B020;
    case 316u: goto L_0016B080;
    case 317u: goto L_0016B0E0;
    case 318u: goto L_0016B140;
    case 319u: goto L_0016B180;
    case 320u: goto L_0016B1A0;
    case 321u: goto L_0016B200;
    case 322u: goto L_0016B210;
    case 323u: goto L_0016B2C0;
    case 324u: goto L_0016B324;
    case 325u: goto L_0016B334;
    case 326u: goto L_0016B380;
    case 327u: goto L_0016B3C4;
    case 328u: goto L_0016B3F0;
    case 329u: goto L_0016B434;
    case 330u: goto L_0016B440;
    case 331u: goto L_0016B470;
    case 332u: goto L_0016B4D0;
    case 333u: goto L_0016B500;
    case 334u: goto L_0016B53C;
    case 335u: goto L_0016B560;
    case 336u: goto L_0016B590;
    case 337u: goto L_0016B5F4;
    case 338u: goto L_0016B624;
    case 339u: goto L_0016B660;
    case 340u: goto L_0016B680;
    case 341u: goto L_0016B6B0;
    case 342u: goto L_0016B714;
    case 343u: goto L_0016B744;
    case 344u: goto L_0016B780;
    case 345u: goto L_0016B7A0;
    case 346u: goto L_0016B7D0;
    case 347u: goto L_0016B834;
    case 348u: goto L_0016B864;
    case 349u: goto L_0016B880;
    case 350u: goto L_0016B8A0;
    case 351u: goto L_0016B8C0;
    case 352u: goto L_0016B8F0;
    case 353u: goto L_0016B954;
    case 354u: goto L_0016B984;
    case 355u: goto L_0016B9C0;
    case 356u: goto L_0016B9E0;
    case 357u: goto L_0016BA20;
    case 358u: goto L_0016BA5C;
    case 359u: goto L_0016BA64;
    case 360u: goto L_0016BA7C;
    case 361u: goto L_0016BA84;
    case 362u: goto L_0016BA8C;
    case 363u: goto L_0016BA94;
    case 364u: goto L_0016BAB0;
    case 365u: goto L_0016BAB8;
    case 366u: goto L_0016BAC0;
    case 367u: goto L_0016BAC8;
    case 368u: goto L_0016BAE4;
    case 369u: goto L_0016BAEC;
    case 370u: goto L_0016BAF4;
    case 371u: goto L_0016BAFC;
    case 372u: goto L_0016BB18;
    case 373u: goto L_0016BB20;
    case 374u: goto L_0016BB28;
    case 375u: goto L_0016BB30;
    case 376u: goto L_0016BB4C;
    case 377u: goto L_0016BB54;
    case 378u: goto L_0016BB5C;
    case 379u: goto L_0016BB64;
    case 380u: goto L_0016BB80;
    case 381u: goto L_0016BB88;
    case 382u: goto L_0016BB90;
    case 383u: goto L_0016BBAC;
    case 384u: goto L_0016BBB4;
    case 385u: goto L_0016BC30;
    case 386u: goto L_0016BC44;
    case 387u: goto L_0016BC60;
    case 388u: goto L_0016BC70;
    case 389u: goto L_0016BC80;
    case 390u: goto L_0016BCA0;
    case 391u: goto L_0016BCD4;
    case 392u: goto L_0016BCE8;
    case 393u: goto L_0016BCF8;
    case 394u: goto L_0016BD0C;
    case 395u: goto L_0016BD20;
    case 396u: goto L_0016BD30;
    case 397u: goto L_0016BD40;
    case 398u: goto L_0016BD4C;
    case 399u: goto L_0016BD80;
    case 400u: goto L_0016BD8C;
    case 401u: goto L_0016BDD0;
    case 402u: goto L_0016BE08;
    case 403u: goto L_0016BE40;
    case 404u: goto L_0016BE70;
    case 405u: goto L_0016BEB0;
    case 406u: goto L_0016BEC4;
    case 407u: goto L_0016BED4;
    case 408u: goto L_0016BEE8;
    case 409u: goto L_0016BEFC;
    case 410u: goto L_0016BF0C;
    case 411u: goto L_0016BF18;
    case 412u: goto L_0016BF28;
    case 413u: goto L_0016BF40;
    case 414u: goto L_0016BF68;
    case 415u: goto L_0016BF9C;
    case 416u: goto L_0016BFC8;
    case 417u: goto L_0016BFD8;
    case 418u: goto L_0016BFF0;
    default: bad_entry(c, 0x00168000u); return;
    }
L_00168000:
    set32(c.r[3], 0u + 9999u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[17].w[0] + 224u), c.f[0]);
    st32((c.r[17].w[0] + 228u), c.f[2]);
    st32((c.r[17].w[0] + 232u), c.f[1]);
    st32((c.r[17].w[0] + 236u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[17].w[0] + 208u), c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 220u), c.r[4].w[0]);
    c.r[6].d[0] = ld16((c.r[18].w[0] + 36u));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001680B0; } }
L_0016803C:
    set32(c.r[7], ld32((c.r[21].w[0] + 36u)));
    c.r[8].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001680A0; } }
L_0016804C:
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.r[5].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[9].w[0] + 1u);  if (t) { goto L_0016809C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001680B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_001680B0; } }
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0016809C:
    c.r[9].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001680A0:
    c.r[3].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016804Cu | kUnwind; return; } goto L_0016804C; } }
L_001680B0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168140; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 2116u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001680F8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 392u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001680F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 2;
L_00168100:
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168138u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168138u) [[unlikely]] return; }
L_00168138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168310; } }
L_00168140:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168180u) [[unlikely]] return; }
L_00168180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168310; } }
L_00168188:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016826C; } }
    c.r[3].d[0] = c.r[30].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016826C; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001681C8; } }
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[21].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00168310; } }
L_001681C8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[4].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00168310; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    st16((c.r[21].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 26u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00168210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00168220; } }
L_00168210:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 30u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
L_00168220:
    st16((c.r[21].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00168264; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[18].w[0] + 16u);  if (t) { goto L_00168248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[21].w[0] + 40u);  if (t) { goto L_00168248; } }
    set32(c.r[7], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_00168248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[5], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168260u); c.r[9].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 70u, depth + 1u); else { c.pc = 0x00165600u; return; } if (c.pc != 0x00168260u) [[unlikely]] return; }
L_00168260:
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00168264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168310; } }
L_0016826C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 20u));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[4].d[0] = c.r[23].d[0] & 65535ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00168310; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001682D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682ACu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001682ACu) [[unlikely]] return; }
L_001682AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[9].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[7].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682D0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00226D00u; return; } if (c.pc != 0x001682D0u) [[unlikely]] return; }
L_001682D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168310; } }
L_001682D8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001682ECu); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001682ECu) [[unlikely]] return; }
L_001682EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168310; } }
    c.r[9].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.r[7].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168310u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 230u, depth + 1u); else { c.pc = 0x00226D00u; return; } if (c.pc != 0x00168310u) [[unlikely]] return; }
L_00168310:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00168314:
    c.r[20].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00168318:
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00167CA8u | kUnwind; return; } [[clang::musttail]] return unit_0019(c, 360u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00168388; } }
L_00168338:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_00168384; } }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00168380; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168374u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168374u) [[unlikely]] return; }
L_00168374:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016848C; } }
L_00168380:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00168384:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00168388:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168338u | kUnwind; return; } goto L_00168338; } }
    c.r[18].d[0] = ld16((c.r[21].w[0] + 26u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00168474; } }
L_001683A8:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_00168470; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00168428; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001683EC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_00168428; } }
L_001683EC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001683FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001683FCu) [[unlikely]] return; }
L_001683FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016848C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168414u) [[unlikely]] return; }
L_00168414:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00168428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00168490; } }
L_00168428:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016846C; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 30u));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00168450; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_0016846C; } }
L_00168450:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168460u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168460u) [[unlikely]] return; }
L_00168460:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016848C; } }
L_0016846C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00168470:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00168474:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001683A8u | kUnwind; return; } goto L_001683A8; } }
    st8((c.r[21].w[0] + 67u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0016848C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00168490:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001684C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 26u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001684F4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0016850C; } }
L_001684F4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0016850C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0016850C:
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168538; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    set32(c.r[4], ld32((c.r[4].w[0] + 448u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168538; } }
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00168538:
    c.r[18].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00168610; } }
L_00168544:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0016860C; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001685C4; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00168588; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_001685C4; } }
L_00168588:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00168598u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00168598u) [[unlikely]] return; }
L_00168598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001686A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001685B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001685B0u) [[unlikely]] return; }
L_001685B0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001685C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001686AC; } }
L_001685C4:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00168608; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 30u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001685EC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[4].d[0];  if (t) { goto L_00168608; } }
L_001685EC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001685FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001685FCu) [[unlikely]] return; }
L_001685FC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001686A8; } }
L_00168608:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016860C:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00168610:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 64u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168544u | kUnwind; return; } goto L_00168544; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 30u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001686A8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016869C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00168678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168664u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 288u, depth + 1u); else { c.pc = 0x00166EB0u; return; } if (c.pc != 0x00168664u) [[unlikely]] return; }
L_00168664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016866Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 292u, depth + 1u); else { c.pc = 0x00166FA0u; return; } if (c.pc != 0x0016866Cu) [[unlikely]] return; }
L_0016866C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001686A8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00168678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168680u);  if (depth < kMaxDepth) unit_0019(c, 351u, depth + 1u); else { c.pc = 0x00167AB0u; return; } if (c.pc != 0x00168680u) [[unlikely]] return; }
L_00168680:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001686A8; } }
L_0016869C:
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001686A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 288u, depth + 1u); else { c.pc = 0x00166EB0u; return; } if (c.pc != 0x001686A8u) [[unlikely]] return; }
L_001686A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001686AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001686D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_001686F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00168820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53340000u);
    set32(c.r[4], c.r[3].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016871Cu); c.r[5].d[0] = c.r[2].d[0] | 16724ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0016871Cu) [[unlikely]] return; }
L_0016871C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00168728; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00168728:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00168820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168740u); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00168740u) [[unlikely]] return; }
L_00168740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0016874C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0016874C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00168820; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0016876C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00168784; } }
L_0016876C:
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 136u), 0u);
    st32((c.r[5].w[0] + 140u), 0u);
    st32((c.r[5].w[0] + 144u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 148u), 0u);  if (t) { goto L_00168798; } }
L_00168784:
    st32((c.r[5].w[0] + 152u), 0u);
    st32((c.r[5].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 144u), 0u);
    st32((c.r[5].w[0] + 148u), 0u);
    c.budget -= 5;
L_00168798:
    set32(c.r[9], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4C460000u);
    set32(c.r[7], 0u - 5u);
    c.r[5].d[0] = c.r[2].d[0] | 16707ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = ld8((c.r[9].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[9].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 395u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 980u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 984u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168804u); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00168804u) [[unlikely]] return; }
L_00168804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00168810; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00168810:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00168820; } }
    c.f[0] = ld32((c.r[1].w[0] - 10664u));
    st32((c.r[3].w[0] + 92u), c.f[0]);
    c.budget -= 2;
L_00168820:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001686F0u | kUnwind; return; } goto L_001686F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00168850:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00168864; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 1;
L_00168864:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168878; } }
L_00168874:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00168878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168880:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001688C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24400u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001688AC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001688C4; } }
L_001688AC:
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[2], 0u + 212u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 332u)));  if (t) { goto L_001688C8; } }
L_001688C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001688C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001688D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001688F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001688F4u) [[unlikely]] return; }
L_001688F4:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00168944; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00168940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168940u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00168940u) [[unlikely]] return; }
L_00168940:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00168944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00168960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[14], c.r[29].w[0] + 3u);
    set32(c.r[11], 0u - 129u);
    c.r[13].d[0] = ld8((c.r[14].w[0]));
    set32(c.r[12], c.r[2].w[0] << 7);
    set32(c.r[10], c.r[2].w[0] << 6);
    set32(c.r[9], 0u - 65u);
    set32(c.r[3], 0u - 16384u);
    c.r[5].d[0] = c.r[5].d[0] & 16383ull;
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[14].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[29].w[0] + 2u));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[29].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168A78; } }
L_001689C8:
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[11], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00168A74; } }
    set32(c.r[5], ld32((c.r[11].w[0] + 260u)));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[11].w[0] + 256u)));
    set32(c.r[7], c.r[11].w[0] + 260u);
    c.r[5].d[0] = c.r[5].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[6].w[0] - 1u);  if (t) { goto L_00168A74; } }
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[5].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.r[5].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00168A74; } }
    set32(c.r[5], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 1;
L_00168A20:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[5].d[0] << 34;
    c.r[5].d[0] = c.r[5].d[0] >> 34;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_00168A54; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[11].w[0] + 256u);  if (t) { goto L_00168A4C; } }
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_00168A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_00168A8C; } }
L_00168A54:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[6].w[0] - 1u);  if (t) { goto L_00168A68; } }
L_00168A64:
    set32(c.r[10], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00168A68:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[10].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168A20u | kUnwind; return; } goto L_00168A20; } }
L_00168A74:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00168A78:
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001689C8u | kUnwind; return; } goto L_001689C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_00168A8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168AC8u); set32(c.r[8], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168AC8u) [[unlikely]] return; }
L_00168AC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168BAC; } }
L_00168AD8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] - 256u);  if (t) { goto L_00168B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00168BAC; } }
L_00168B0C:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00168B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168BAC; } }
L_00168B2C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 96u);
    c.budget -= 2;
L_00168B34:
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] - 96u);  if (t) { goto L_00168B58; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[6].w[0]));  if (t) { goto L_00168B5C; } }
L_00168B58:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00168B5C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[18].d[0]; c.r[1].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_00168B74; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00168BAC; } }
L_00168B74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00168B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168BAC; } }
L_00168B84:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_00168BA0; } }
L_00168B98:
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00168BA0:
    c.r[1].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168B34u | kUnwind; return; } goto L_00168B34; } }
L_00168BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00168BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168BE8u); set32(c.r[8], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168BE8u) [[unlikely]] return; }
L_00168BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168C0C; } }
L_00168BF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00168C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C30u); set32(c.r[8], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168C30u) [[unlikely]] return; }
L_00168C30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00168C40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00168C60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C78u); set32(c.r[8], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168C78u) [[unlikely]] return; }
L_00168C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168CB0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00168C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00168CA8; } }
L_00168C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168C98u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x00168C98u) [[unlikely]] return; }
L_00168C98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);  if (t) { goto L_00168CA4; } }
    breakpoint(c, 0x00168CA0u);
    c.budget -= 1;
L_00168CA4:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 1;
L_00168CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00168CB8; } }
L_00168CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168C60u | kUnwind; return; } goto L_00168C60; } }
L_00168CB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00168CD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168D04u); set32(c.r[8], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168D04u) [[unlikely]] return; }
L_00168D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00168D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168D8C; } }
L_00168D14:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_00168D78; } }
L_00168D2C:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 16383ull;
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00168D8C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00168D88; } }
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_00168D6C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00168D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00168D90; } }
L_00168D6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
L_00168D78:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168D2Cu | kUnwind; return; } goto L_00168D2C; } }
L_00168D88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00168D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00168D90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00168DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168DC8u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x00168DC8u) [[unlikely]] return; }
L_00168DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00168DE0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
L_00168DE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168E00:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00168E28; } }
L_00168E0C:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00168E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00168E34; } }
L_00168E24:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00168E28:
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00168E0Cu | kUnwind; return; } goto L_00168E0C; } }
L_00168E34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00168E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1408u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00168E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 8704u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 10751u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[29].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168E98u); st16((c.r[29].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 114u, depth + 1u); else { c.pc = 0x00194FD0u; return; } if (c.pc != 0x00168E98u) [[unlikely]] return; }
L_00168E98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00168EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168ED4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 116u, depth + 1u); else { c.pc = 0x00195030u; return; } if (c.pc != 0x00168ED4u) [[unlikely]] return; }
L_00168ED4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00168EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168EECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00168EECu) [[unlikely]] return; }
L_00168EEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00168EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00168F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 25344u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 548u);  if (t) { goto L_00168F50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00168F30u) [[unlikely]] return; }
L_00168F30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F44u);  if (depth < kMaxDepth) unit_001A(c, 64u, depth + 1u); else { c.pc = 0x00168E70u; return; } if (c.pc != 0x00168F44u) [[unlikely]] return; }
L_00168F44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00168F48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25344u), c.r[4].w[0]);
    c.budget -= 2;
L_00168F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00168F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25344u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00168F80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168F80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001A(c, 66u, depth + 1u); else { c.pc = 0x00168EB0u; return; } if (c.pc != 0x00168F80u) [[unlikely]] return; }
L_00168F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25344u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00168FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00168FBCu) [[unlikely]] return; }
L_00168FBC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00195090u; return; } if (c.pc != 0x00168FCCu) [[unlikely]] return; }
L_00168FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FD4u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00168FD4u) [[unlikely]] return; }
L_00168FD4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FE4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00195090u; return; } if (c.pc != 0x00168FE4u) [[unlikely]] return; }
L_00168FE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00168FF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 120u, depth + 1u); else { c.pc = 0x001950B0u; return; } if (c.pc != 0x00168FF0u) [[unlikely]] return; }
L_00168FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00169010:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 84u)));  c.pc = t; return; }
L_00169030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016904Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x0016904Cu) [[unlikely]] return; }
L_0016904C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169054u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00169054u) [[unlikely]] return; }
L_00169054:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00169060u) [[unlikely]] return; }
L_00169060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 16624u);
    set32(c.r[2], c.r[2].w[0] - 16536u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 16496u);
    set32(c.r[2], 0u + 148u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    st8((c.r[17].w[0] + 196u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 200u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690A4u); st32((c.r[17].w[0] + 204u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x001690A4u) [[unlikely]] return; }
L_001690A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001690BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001690B4u);  if (depth < kMaxDepth) unit_0076(c, 189u, depth + 1u); else { c.pc = 0x002D9920u; return; } if (c.pc != 0x001690B4u) [[unlikely]] return; }
L_001690B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 432u)));  if (t) { goto L_001690C0; } }
L_001690BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001690C0:
    st32((c.r[17].w[0] + 208u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001690E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001691DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16624u);
    set32(c.r[3], c.r[3].w[0] - 16536u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16496u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016912Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 160u, depth + 1u); else { c.pc = 0x00169810u; return; } if (c.pc != 0x0016912Cu) [[unlikely]] return; }
L_0016912C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169130:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 40u);  if (t) { goto L_0016915C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016915C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016915Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016915Cu) [[unlikely]] return; }
L_0016915C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169130u | kUnwind; return; } goto L_00169130; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00169190; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00169190; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169190u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169190u) [[unlikely]] return; }
L_00169190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169198u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x00168F60u; return; } if (c.pc != 0x00169198u) [[unlikely]] return; }
L_00169198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691A0u); set32(c.r[4], ld32((c.r[17].w[0] + 208u)));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001691A0u) [[unlikely]] return; }
L_001691A0:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001691ACu) [[unlikely]] return; }
L_001691AC:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012E740u; return; } if (c.pc != 0x001691B8u) [[unlikely]] return; }
L_001691B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x001691C4u) [[unlikely]] return; }
L_001691C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001691E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001691DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001691DCu) [[unlikely]] return; }
L_001691DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001691E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00169200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016921Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001A(c, 69u, depth + 1u); else { c.pc = 0x00168F10u; return; } if (c.pc != 0x0016921Cu) [[unlikely]] return; }
L_0016921C:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169228u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00169228u) [[unlikely]] return; }
L_00169228:
    set32(c.r[4], c.r[17].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169234u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00169234u) [[unlikely]] return; }
L_00169234:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169238:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169238u | kUnwind; return; } goto L_00169238; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169258:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 108u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169258u | kUnwind; return; } goto L_00169258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016927Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0016927Cu) [[unlikely]] return; }
L_0016927C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169290u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00169290u) [[unlikely]] return; }
L_00169290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[4], c.r[4].w[0] + 2960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692A4u); st32((c.r[29].w[0] + 120u), 0u);  if (depth < kMaxDepth) unit_000B(c, 287u, depth + 1u); else { c.pc = 0x0012E330u; return; } if (c.pc != 0x001692A4u) [[unlikely]] return; }
L_001692A4:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001692BCu) [[unlikely]] return; }
L_001692BC:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x001692CCu) [[unlikely]] return; }
L_001692CC:
    set32(c.r[3], 0u + 13824u);
    set32(c.r[2], 0u + 14847u);
    st16((c.r[29].w[0] + 116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692E4u); st16((c.r[29].w[0] + 118u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001692E4u) [[unlikely]] return; }
L_001692E4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0016930C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001692F8u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001692F8u) [[unlikely]] return; }
L_001692F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169308u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 297u, depth + 1u); else { c.pc = 0x001A78D0u; return; } if (c.pc != 0x00169308u) [[unlikely]] return; }
L_00169308:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016930C:
    st32((c.r[17].w[0] + 36u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016931Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0029(c, 313u, depth + 1u); else { c.pc = 0x001A7B60u; return; } if (c.pc != 0x0016931Cu) [[unlikely]] return; }
L_0016931C:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016932Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0016932Cu) [[unlikely]] return; }
L_0016932C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25344u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016933Cu); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_001A(c, 74u, depth + 1u); else { c.pc = 0x00168FA0u; return; } if (c.pc != 0x0016933Cu) [[unlikely]] return; }
L_0016933C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169344u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169344u) [[unlikely]] return; }
L_00169344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016935C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016935Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0016935Cu) [[unlikely]] return; }
L_0016935C:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169368u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169368u) [[unlikely]] return; }
L_00169368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169380; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169380u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00169380u) [[unlikely]] return; }
L_00169380:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016938Cu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016938Cu) [[unlikely]] return; }
L_0016938C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001693A4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693A4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x001693A4u) [[unlikely]] return; }
L_001693A4:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693B4u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001693B4u) [[unlikely]] return; }
L_001693B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001693C4u) [[unlikely]] return; }
L_001693C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693D4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x001693D4u) [[unlikely]] return; }
L_001693D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693ECu); set32(c.r[5], 0u + 10004u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x001693ECu) [[unlikely]] return; }
L_001693EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001693FCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x001693FCu) [[unlikely]] return; }
L_001693FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016940Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016940Cu) [[unlikely]] return; }
L_0016940C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169424u); set32(c.r[5], 0u + 10005u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00169424u) [[unlikely]] return; }
L_00169424:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169434u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00169434u) [[unlikely]] return; }
L_00169434:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169444u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00169444u) [[unlikely]] return; }
L_00169444:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169474u); st32((c.r[17].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 83u, depth + 1u); else { c.pc = 0x00141160u; return; } if (c.pc != 0x00169474u) [[unlikely]] return; }
L_00169474:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169484u) [[unlikely]] return; }
L_00169484:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169490u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x00169490u) [[unlikely]] return; }
L_00169490:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016949Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0016949Cu) [[unlikely]] return; }
L_0016949C:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001694A8u) [[unlikely]] return; }
L_001694A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001694B0u); set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001694B0u) [[unlikely]] return; }
L_001694B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001694D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[1].w[0] + 25344u)));  c.pc = t; return; }
L_001694E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001697E4; } }
    set32(c.r[2], 0u + 148u);
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169528u); st8((c.r[20].w[0] + 196u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_001A(c, 160u, depth + 1u); else { c.pc = 0x00169810u; return; } if (c.pc != 0x00169528u) [[unlikely]] return; }
L_00169528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169538u); st32((c.r[20].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_001A(c, 63u, depth + 1u); else { c.pc = 0x00168E40u; return; } if (c.pc != 0x00169538u) [[unlikely]] return; }
L_00169538:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169550u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x00169550u) [[unlikely]] return; }
L_00169550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 288u);  if (t) { goto L_001695AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169560u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169560u) [[unlikely]] return; }
L_00169560:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001695A0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016957Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016957Cu) [[unlikely]] return; }
L_0016957C:
    set32(c.r[16], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169588u); set32(c.r[4], 0u + 103u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00169588u) [[unlikely]] return; }
L_00169588:
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016959Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x0016959Cu) [[unlikely]] return; }
L_0016959C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001695A0:
    st32((c.r[20].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 200u), 0u);  if (t) { goto L_0016961C; } }
L_001695AC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 10656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001695C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x001695C0u) [[unlikely]] return; }
L_001695C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00169620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001695D0u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001695D0u) [[unlikely]] return; }
L_001695D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00169610; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001695ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001695ECu) [[unlikely]] return; }
L_001695EC:
    set32(c.r[16], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001695F8u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x001695F8u) [[unlikely]] return; }
L_001695F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 204u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016960Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x0016960Cu) [[unlikely]] return; }
L_0016960C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00169610:
    st32((c.r[20].w[0] + 108u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 3;
L_0016961C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00169620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169628u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00169628u) [[unlikely]] return; }
L_00169628:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001696A0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 108u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3040u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169698u); c.f[14] = ld32((c.r[1].w[0] + 3032u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169698u) [[unlikely]] return; }
L_00169698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 108u)));  if (t) { goto L_001696EC; } }
L_001696A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[0] = ld32((c.r[1].w[0] + 3024u));
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3040u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001696E8u); c.f[14] = ld32((c.r[1].w[0] + 3032u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001696E8u) [[unlikely]] return; }
L_001696E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_001696EC:
    set32(c.r[16], 0u + 1u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_0016972C; } }
L_001696FC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00169738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169710u); set32(c.r[5], c.r[5].w[0] - 10456u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00169710u) [[unlikely]] return; }
L_00169710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169738; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 192u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 5;
L_0016972C:
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001696FCu | kUnwind; return; } goto L_001696FC; } }
L_00169738:
    set32(c.r[2], ld32((c.r[20].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169754; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] - 23u);
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_00169754:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001697A0; } }
L_00169760:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001697AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169774u); set32(c.r[5], c.r[5].w[0] - 10456u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00127AA0u; return; } if (c.pc != 0x00169774u) [[unlikely]] return; }
L_00169774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001697B0; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169798u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169798u) [[unlikely]] return; }
L_00169798:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001697A0:
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169760u | kUnwind; return; } goto L_00169760; } }
L_001697AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001697B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001697B8u);  if (depth < kMaxDepth) unit_001A(c, 167u, depth + 1u); else { c.pc = 0x00169920u; return; } if (c.pc != 0x001697B8u) [[unlikely]] return; }
L_001697B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001697D4; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 26472u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001697D4; } }
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001697D4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001697E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001697E4u) [[unlikely]] return; }
L_001697E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00169810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016984C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016984C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016984Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016984Cu) [[unlikely]] return; }
L_0016984C:
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00169874; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00169874; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169874u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169874u) [[unlikely]] return; }
L_00169874:
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016987C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 60u);  if (t) { goto L_00169898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169898u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00169898u) [[unlikely]] return; }
L_00169898:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016987Cu | kUnwind; return; } goto L_0016987C; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001698AC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 108u);  if (t) { goto L_001698D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001698D8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001698D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001698D8u) [[unlikely]] return; }
L_001698D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001698ACu | kUnwind; return; } goto L_001698AC; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00169920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00169988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169944u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169944u) [[unlikely]] return; }
L_00169944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00169974; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00169958; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_00169958:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 25360u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169974u); c.r[10].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 371u, depth + 1u); else { c.pc = 0x0012EBA0u; return; } if (c.pc != 0x00169974u) [[unlikely]] return; }
L_00169974:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169980u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00169980u) [[unlikely]] return; }
L_00169980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001699E4; } }
L_00169988:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001699D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016999Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016999Cu) [[unlikely]] return; }
L_0016999C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001699BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001699B0; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 1;
L_001699B0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 391u, depth + 1u); else { c.pc = 0x0012EF90u; return; } if (c.pc != 0x001699BCu) [[unlikely]] return; }
L_001699BC:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699D0u); st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001699D0u) [[unlikely]] return; }
L_001699D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001699E0; } }
L_001699D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001699E0u); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x001699E0u) [[unlikely]] return; }
L_001699E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001699E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001699F0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00169FB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[2], c.r[2].w[0] + 1432u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[6].w[0]), c.r[5].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1440u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A6Cu); st64((c.r[3].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00169A6Cu) [[unlikely]] return; }
L_00169A6C:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00169E98; } }
L_00169A78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00169E90; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169A90u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x00169A90u) [[unlikely]] return; }
L_00169A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00169AD8; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00169AC4; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_00169E90; } }
L_00169AC4:
    set32(c.r[2], ld32((c.r[21].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[19].w[0] + 1u);  if (t) { goto L_00169E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_00169E90; } }
L_00169AD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3008u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169AE8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x00169AE8u) [[unlikely]] return; }
L_00169AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], 0u - 1u);  if (t) { goto L_00169D28; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B08u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169B08u) [[unlikely]] return; }
L_00169B08:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B14u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169B14u) [[unlikely]] return; }
L_00169B14:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 288u);  if (t) { goto L_00169B48; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 408u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B2Cu); set32(c.r[4], 0u + 94u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00169B2Cu) [[unlikely]] return; }
L_00169B2C:
    set32(c.r[5], ld32((c.r[21].w[0] + 204u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B40u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00169B40u) [[unlikely]] return; }
L_00169B40:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 288u);
    c.budget -= 2;
L_00169B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B50u); st32((c.r[21].w[0] + 160u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169B50u) [[unlikely]] return; }
L_00169B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_00169B6C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 408u)));
    set32(c.r[7], ld32((c.r[1].w[0] + 1448u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00169B6Cu) [[unlikely]] return; }
L_00169B6C:
    st32((c.r[21].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B78u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169B78u) [[unlikely]] return; }
L_00169B78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00169BA8; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 408u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169B90u); set32(c.r[4], 0u + 95u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00169B90u) [[unlikely]] return; }
L_00169B90:
    set32(c.r[5], ld32((c.r[21].w[0] + 204u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169BA4u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00169BA4u) [[unlikely]] return; }
L_00169BA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00169BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[21].w[0] + 164u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1456u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 13;
L_00169BDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1420u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_00169C00; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00169C00:
    set32(c.r[2], 0u + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 513ll ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);  if (t) { goto L_00169C64; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 108u);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00169CA4; } }
L_00169C64:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 3024u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] + 108u);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 16;
L_00169CA4:
    c.f[0] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[20].w[0] + 408u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CB4u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0018(c, 70u, depth + 1u); else { c.pc = 0x00162370u; return; } if (c.pc != 0x00169CB4u) [[unlikely]] return; }
L_00169CB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00169CC4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00169CC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 176u)));
    c.f[14] = ld32((c.r[1].w[0] + 3032u));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CF4u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169CF4u) [[unlikely]] return; }
L_00169CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169CFCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00169CFCu) [[unlikely]] return; }
L_00169CFC:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[6]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169BDCu | kUnwind; return; } goto L_00169BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00169FBC; } }
L_00169D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00169D58; } }
L_00169D30:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169D44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128038u; return; } if (c.pc != 0x00169D44u) [[unlikely]] return; }
L_00169D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00169D54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00169D60; } }
L_00169D54:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_00169D58:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169D30u | kUnwind; return; } goto L_00169D30; } }
L_00169D60:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == c.r[2].d[0];  if (t) { goto L_00169E90; } }
    set32(c.r[22], c.r[22].w[0] << 2);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[23].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[3], 0u + 10u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_00169DAC; } }
L_00169D9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00169DBC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00169DAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169D9Cu | kUnwind; return; } goto L_00169D9C; } }
L_00169DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[23].w[0] + c.r[22].w[0]);  if (t) { goto L_00169E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DCCu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00169DCCu) [[unlikely]] return; }
L_00169DCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169DF0u); set32(c.r[17], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00169DF0u) [[unlikely]] return; }
L_00169DF0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E00u); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00169E00u) [[unlikely]] return; }
L_00169E00:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E10u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00169E10u) [[unlikely]] return; }
L_00169E10:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E1Cu); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00169E1Cu) [[unlikely]] return; }
L_00169E1C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E28u); set32(c.r[5], ld32((c.r[29].w[0] + 192u)));  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00169E28u) [[unlikely]] return; }
L_00169E28:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { goto L_00169EA4; } }
L_00169E3C:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E50u); set32(c.r[18], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00169E50u) [[unlikely]] return; }
L_00169E50:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E60u); set32(c.r[5], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x00169E60u) [[unlikely]] return; }
L_00169E60:
    set32(c.r[20], c.r[23].w[0] + c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169E74u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 12u, depth + 1u); else { c.pc = 0x001281F0u; return; } if (c.pc != 0x00169E74u) [[unlikely]] return; }
L_00169E74:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_00169EA4; } }
L_00169E90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_00169E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00169A78u | kUnwind; return; } goto L_00169A78; } }
L_00169EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EACu); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00169EACu) [[unlikely]] return; }
L_00169EAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00169EE0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EC8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169EC8u) [[unlikely]] return; }
L_00169EC8:
    set32(c.r[5], ld32((c.r[21].w[0] + 204u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 408u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169EDCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 121u, depth + 1u); else { c.pc = 0x001632D0u; return; } if (c.pc != 0x00169EDCu) [[unlikely]] return; }
L_00169EDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00169EE0:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_00169F38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00169F58; } }
L_00169F38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 3024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 3016u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
L_00169F58:
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 176u)));
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[19].w[0]);
    c.f[14] = ld32((c.r[1].w[0] + 3032u));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00169F98u); c.f[13] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00169F98u) [[unlikely]] return; }
L_00169F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00169FA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00169FA0u) [[unlikely]] return; }
L_00169FA0:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00169FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00169FBC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00169FF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A024; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0016A014; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_0016A024; } }
L_0016A014:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0016A024; } }
    st32((c.r[4].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 1;
L_0016A024:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E500u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 304u, depth); }
L_0016A030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016A054; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A054u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A054u) [[unlikely]] return; }
L_0016A054:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016A084; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A084u) [[unlikely]] return; }
L_0016A084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016A0B4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A0B4u) [[unlikely]] return; }
L_0016A0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016A0E4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A0E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A0E4u) [[unlikely]] return; }
L_0016A0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A130; } }
    st32((c.r[4].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    c.budget -= 4;
L_0016A130:
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0016A1F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0016A30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0016A154u) [[unlikely]] return; }
L_0016A154:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0016A18C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A168u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A168u) [[unlikely]] return; }
L_0016A168:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A17Cu); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A17Cu) [[unlikely]] return; }
L_0016A17C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);  if (t) { goto L_0016A1B4; } }
L_0016A18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A194u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A194u) [[unlikely]] return; }
L_0016A194:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A1A8u); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A1A8u) [[unlikely]] return; }
L_0016A1A8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.budget -= 3;
L_0016A1B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 300u), c.r[16].w[0]);  if (t) { goto L_0016A308; } }
L_0016A1F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0016A308; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_0016A308; } }
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016A308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A224u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0016A224u) [[unlikely]] return; }
L_0016A224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0016A270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A234u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A234u) [[unlikely]] return; }
L_0016A234:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A254u); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A254u) [[unlikely]] return; }
L_0016A254:
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);  if (t) { goto L_0016A2B0; } }
L_0016A270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A278u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A278u) [[unlikely]] return; }
L_0016A278:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A298u); st128((c.r[2].w[0] + 48u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0016A298u) [[unlikely]] return; }
L_0016A298:
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st128((c.r[3].w[0] + 48u) & ~15u, c.r[4]);
    c.budget -= 6;
L_0016A2B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    st32((c.r[3].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    c.budget -= 22;
L_0016A308:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0016A30C:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0016A310:
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + 108u);
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A334; } }
    st32((c.r[4].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 256u)));
    st32((c.r[3].w[0] + 300u), c.r[16].w[0]);
    c.budget -= 4;
L_0016A334:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A310u | kUnwind; return; } goto L_0016A310; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A360:
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0016A38C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016A388; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0016A38C; } }
L_0016A388:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 1;
L_0016A38C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A3A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016A3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016A3D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A3D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A3D4u) [[unlikely]] return; }
L_0016A3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016A410; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 196u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A410; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A410u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A410u) [[unlikely]] return; }
L_0016A410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016A420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 319u, depth + 1u); else { c.pc = 0x0012E600u; return; } if (c.pc != 0x0016A434u) [[unlikely]] return; }
L_0016A434:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0016A444; } }
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_0016A444:
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 120u);  if (t) { goto L_0016A460; } }
    set32(c.r[3], 0u + 210u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_0016A464; } }
L_0016A460:
    st32((c.r[16].w[0] + 180u), c.r[3].w[0]);
    c.budget -= 1;
L_0016A464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016A480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x0016A494u) [[unlikely]] return; }
L_0016A494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1472u);
    set32(c.r[4], 0u + 36u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A4B8u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016A4B8u) [[unlikely]] return; }
L_0016A4B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016A4CC; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A4CCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 268u, depth + 1u); else { c.pc = 0x00227540u; return; } if (c.pc != 0x0016A4CCu) [[unlikely]] return; }
L_0016A4CC:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A4ECu); set32(c.r[5], 0u + 26u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A4ECu) [[unlikely]] return; }
L_0016A4EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A50Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A50Cu) [[unlikely]] return; }
L_0016A50C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 1420u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016A57C; } }
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 17;
L_0016A57C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A5B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0016A5A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A5A8u) [[unlikely]] return; }
L_0016A5A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 2;
L_0016A5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016A5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x0016A5D4u) [[unlikely]] return; }
L_0016A5D4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A5E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A5E4u) [[unlikely]] return; }
L_0016A5E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016A600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x0016A614u) [[unlikely]] return; }
L_0016A614:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A624u) [[unlikely]] return; }
L_0016A624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016A640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A65Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 322u, depth + 1u); else { c.pc = 0x0012E640u; return; } if (c.pc != 0x0016A65Cu) [[unlikely]] return; }
L_0016A65C:
    st32((c.r[18].w[0] + 180u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016A664:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 108u);  if (t) { goto L_0016A690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A690; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A690u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A690u) [[unlikely]] return; }
L_0016A690:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A664u | kUnwind; return; } goto L_0016A664; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016A6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1504u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st64((c.r[5].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A6F4u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0016A6F4u) [[unlikely]] return; }
L_0016A6F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A71Cu); set32(c.r[5], 0u + 27u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A71Cu) [[unlikely]] return; }
L_0016A71C:
    set32(c.r[2], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A73Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A73Cu) [[unlikely]] return; }
L_0016A73C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44200000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.f[1] = ld32((c.r[1].w[0] + 1420u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0016A7AC; } }
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 124u), c.r[4].w[0]);
    c.budget -= 17;
L_0016A7AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016A7BC; } }
    st32((c.r[3].w[0] + 36u), 0u);
    c.budget -= 1;
L_0016A7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016A7D0:
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
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A80Cu); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 81u, depth + 1u); else { c.pc = 0x00169030u; return; } if (c.pc != 0x0016A80Cu) [[unlikely]] return; }
L_0016A80C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16800u);
    set32(c.r[3], c.r[3].w[0] - 16712u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16672u);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A840u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A840u) [[unlikely]] return; }
L_0016A840:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A860u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A860u) [[unlikely]] return; }
L_0016A860:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016A890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016A8F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 16800u);
    set32(c.r[3], c.r[3].w[0] - 16712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16672u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A8D8u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 87u, depth + 1u); else { c.pc = 0x001690E0u; return; } if (c.pc != 0x0016A8D8u) [[unlikely]] return; }
L_0016A8D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016A8F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A8F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0016A8F0u) [[unlikely]] return; }
L_0016A8F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016A8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016A910:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
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
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0016A978; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A970u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016A970u) [[unlikely]] return; }
L_0016A970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0016A9B8; } }
L_0016A978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A980u); set32(c.r[4], 0u + 212u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016A980u) [[unlikely]] return; }
L_0016A980:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016A9AC; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016A9A8u); c.r[10].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 260u, depth + 1u); else { c.pc = 0x0016A7D0u; return; } if (c.pc != 0x0016A9A8u) [[unlikely]] return; }
L_0016A9A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016A9AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25376u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 3;
L_0016A9B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016A9E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016AA10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016AA10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AA10u) [[unlikely]] return; }
L_0016AA10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 25376u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016AA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 48u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA54u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016AA54u) [[unlikely]] return; }
L_0016AA54:
    set32(c.r[4], c.r[17].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA60u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0016AA60u) [[unlikely]] return; }
L_0016AA60:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016AA64:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016AA64u | kUnwind; return; } goto L_0016AA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AA88u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016AA88u) [[unlikely]] return; }
L_0016AA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AAA0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAA0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0016AAA0u) [[unlikely]] return; }
L_0016AAA0:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAACu); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016AAACu) [[unlikely]] return; }
L_0016AAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AAC4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAC4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0016AAC4u) [[unlikely]] return; }
L_0016AAC4:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAD0u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016AAD0u) [[unlikely]] return; }
L_0016AAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016AAE8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 204u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AAE8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0016AAE8u) [[unlikely]] return; }
L_0016AAE8:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[5], 0u + 10000u);
    set32(c.r[16], c.r[2].w[0] + 624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016AB04u) [[unlikely]] return; }
L_0016AB04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016AB14u) [[unlikely]] return; }
L_0016AB14:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB24u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016AB24u) [[unlikely]] return; }
L_0016AB24:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10004u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB3Cu); st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016AB3Cu) [[unlikely]] return; }
L_0016AB3C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB4Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016AB4Cu) [[unlikely]] return; }
L_0016AB4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB5Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016AB5Cu) [[unlikely]] return; }
L_0016AB5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10005u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB74u); st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0016AB74u) [[unlikely]] return; }
L_0016AB74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB84u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0016AB84u) [[unlikely]] return; }
L_0016AB84:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AB94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0016AB94u) [[unlikely]] return; }
L_0016AB94:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC3850000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ABCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016ABCCu) [[unlikely]] return; }
L_0016ABCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016ABF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32u);  c.pc = t; return; }
L_0016AC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0016AC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0016AC84; } }
L_0016AC24:
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0016AC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016AC88; } }
L_0016AC38:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016AC48u) [[unlikely]] return; }
L_0016AC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016AC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0016AC84; } }
L_0016AC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC60u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0016AC60u) [[unlikely]] return; }
L_0016AC60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016AC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016AC84; } }
L_0016AC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016AC80u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0016AC80u) [[unlikely]] return; }
L_0016AC80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016AC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0016AC88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0016ACA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001690E0u | kUnwind; return; } goto L_001690E0; }
L_0016ACB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001690E0u | kUnwind; return; } goto L_001690E0; }
L_0016ACC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A3E0u | kUnwind; return; } goto L_0016A3E0; }
L_0016ACD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A3B0u | kUnwind; return; } goto L_0016A3B0; }
L_0016ACE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A3A0u | kUnwind; return; } goto L_0016A3A0; }
L_0016ACF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A890u | kUnwind; return; } goto L_0016A890; }
L_0016AD00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A0F0u | kUnwind; return; } goto L_0016A0F0; }
L_0016AD10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016A890u | kUnwind; return; } goto L_0016A890; }
L_0016AD20:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_0016AD4C; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 278u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0016AD70; } }
L_0016AD4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25974u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016AD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AD80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016ADAC; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 182u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0016ADD0; } }
L_0016ADAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15820u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016ADD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016ADE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016AE0C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3126u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0016AE30; } }
L_0016AE0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12876u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016AE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AE40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016AE6C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6070u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0016AE90; } }
L_0016AE6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9932u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016AE90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AEA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016AECC; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4598u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0016AEF0; } }
L_0016AECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11404u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016AEF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AF00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016AF2C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1654u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_0016AF50; } }
L_0016AF2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14348u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
L_0016AF50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016AF60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0016AF70:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0016AFA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_0016AFD4; } }
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 278u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016B010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 278u);  if (t) { goto L_0016B010; } }
L_0016AFD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25974u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_0016B00C; } }
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 294u);  if (t) { goto L_0016B010; } }
L_0016B00C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016B010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B020:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016B048; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 160u);  if (t) { goto L_0016B070; } }
L_0016B048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 24014ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_0016B070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B080:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016B0A8; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 3104u);  if (t) { goto L_0016B0D0; } }
L_0016B0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 26958ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_0016B0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B0E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016B108; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 6048u);  if (t) { goto L_0016B130; } }
L_0016B108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 29902ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_0016B130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B140:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016B168; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4576u);  if (t) { goto L_0016B190; } }
L_0016B168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 6;
L_0016B180:
    c.r[1].d[0] = c.r[1].d[0] | 28430ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_0016B190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B1A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0016B1C8; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1632u);  if (t) { goto L_0016B1F0; } }
L_0016B1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 25486ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 10;
L_0016B1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016B200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0016B210:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0016B240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0016B248; } }
L_0016B240:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[6].w[0] + 25696u);
    c.budget -= 2;
L_0016B248:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] << 3);  if (t) { goto L_0016B340; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] << 3);  if (t) { goto L_0016B280; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0016B35C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016B35C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016B35C; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 1;
L_0016B280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B2C0u); set32(c.r[6], 0u + 1120u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0016B2C0u) [[unlikely]] return; }
L_0016B2C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 26051u);
    set32(c.r[3], c.r[19].w[0] + 86u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 25972u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0016B32C; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 9);
    set32(c.r[6], 0u + 4608u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 884u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B324u); set32(c.r[5], c.r[2].w[0] + 884u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0016B324u) [[unlikely]] return; }
L_0016B324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B358; } }
L_0016B32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B334u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 288u, depth + 1u); else { c.pc = 0x003AA850u; return; } if (c.pc != 0x0016B334u) [[unlikely]] return; }
L_0016B334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016B358; } }
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 1;
L_0016B340:
    set32(c.r[3], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 278u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0016B358:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016B35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016B424; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 40u);  if (t) { goto L_0016B3BC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0016B434; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016B434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0016B438; } }
    set32(c.r[7], 0u + 40u);
    c.budget -= 1;
L_0016B3BC:
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0016B3C4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 4u);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B3C4u | kUnwind; return; } goto L_0016B3C4; } }
    set32(c.r[9], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[5].w[0] + 160u);
    set32(c.r[7], 0u + 11u);
    c.budget -= 3;
L_0016B3F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B3F0u | kUnwind; return; } goto L_0016B3F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 182u)));
    st8((c.r[5].w[0] + 182u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 183u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 183u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0016B434; } }
L_0016B424:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B434u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x0016B434u) [[unlikely]] return; }
L_0016B434:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016B438:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016B440:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B470u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016B470u) [[unlikely]] return; }
L_0016B470:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 23854ull;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0016B534; } }
    set32(c.r[8], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[4], 0u + 40u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0016B4D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B4D0u | kUnwind; return; } goto L_0016B4D0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[2].w[0] + 160u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0016B500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B500u | kUnwind; return; } goto L_0016B500; } }
    set32(c.r[3], c.r[9].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 182u)));
    st8((c.r[6].w[0] + 182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 183u)));
    st8((c.r[6].w[0] + 183u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B53Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 326u, depth + 1u); else { c.pc = 0x0016B380u; return; } if (c.pc != 0x0016B53Cu) [[unlikely]] return; }
L_0016B53C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B560:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B590u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016B590u) [[unlikely]] return; }
L_0016B590:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 26798ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 26798ull;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0016B658; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[8], c.r[2].w[0] + 2944u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0016B5F4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B5F4u | kUnwind; return; } goto L_0016B5F4; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[2].w[0] + 3104u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0016B624:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B624u | kUnwind; return; } goto L_0016B624; } }
    set32(c.r[3], c.r[9].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3126u)));
    st8((c.r[6].w[0] + 182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3127u)));
    st8((c.r[6].w[0] + 183u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 326u, depth + 1u); else { c.pc = 0x0016B380u; return; } if (c.pc != 0x0016B660u) [[unlikely]] return; }
L_0016B660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B680:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B6B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016B6B0u) [[unlikely]] return; }
L_0016B6B0:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 29742ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 29742ull;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0016B778; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[8], c.r[2].w[0] + 5888u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0016B714:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B714u | kUnwind; return; } goto L_0016B714; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[2].w[0] + 6048u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0016B744:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B744u | kUnwind; return; } goto L_0016B744; } }
    set32(c.r[3], c.r[9].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6070u)));
    st8((c.r[6].w[0] + 182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6071u)));
    st8((c.r[6].w[0] + 183u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B780u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 326u, depth + 1u); else { c.pc = 0x0016B380u; return; } if (c.pc != 0x0016B780u) [[unlikely]] return; }
L_0016B780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B7A0:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B7D0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016B7D0u) [[unlikely]] return; }
L_0016B7D0:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 28270ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 28270ull;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0016B898; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[8], c.r[2].w[0] + 4416u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0016B834:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B834u | kUnwind; return; } goto L_0016B834; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[2].w[0] + 4576u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0016B864:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B864u | kUnwind; return; } goto L_0016B864; } }
    goto L_0016B884;
L_0016B880:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 1;
L_0016B884:
    set32(c.r[3], c.r[9].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4598u)));
    st8((c.r[6].w[0] + 182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4599u)));
    st8((c.r[6].w[0] + 183u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 326u, depth + 1u); else { c.pc = 0x0016B380u; return; } if (c.pc != 0x0016B8A0u) [[unlikely]] return; }
L_0016B8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B8C0:
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
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B8F0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016B8F0u) [[unlikely]] return; }
L_0016B8F0:
    set32(c.r[2], c.r[18].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25680u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 25326ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[2].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], c.r[4].w[0] + c.r[9].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 25326ull;
    c.budget -= 21;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0016B9B8; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 40u);
    set32(c.r[8], c.r[2].w[0] + 1472u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_0016B954:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 4u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B954u | kUnwind; return; } goto L_0016B954; } }
    set32(c.r[2], c.r[9].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[6].w[0] + 160u);
    set32(c.r[8], c.r[2].w[0] + 1632u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0016B984:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016B984u | kUnwind; return; } goto L_0016B984; } }
    set32(c.r[3], c.r[9].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1654u)));
    st8((c.r[6].w[0] + 182u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1655u)));
    st8((c.r[6].w[0] + 183u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016B9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016B9C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 326u, depth + 1u); else { c.pc = 0x0016B380u; return; } if (c.pc != 0x0016B9C0u) [[unlikely]] return; }
L_0016B9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016B9E0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016BA10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0016BA0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0016BA10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BA10; } }
L_0016BA0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0016BA10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016BA20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016BC44; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[4].w[0] + 3056u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016BA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA64u); set32(c.r[4], 0u + 1268u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BA64u) [[unlikely]] return; }
L_0016BA64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA7Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 22u, depth + 1u); else { c.pc = 0x0019C5D0u; return; } if (c.pc != 0x0016BA7Cu) [[unlikely]] return; }
L_0016BA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0016BC48; } }
L_0016BA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA8Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016BA8Cu) [[unlikely]] return; }
L_0016BA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BA94u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BA94u) [[unlikely]] return; }
L_0016BA94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAB0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BAB0u) [[unlikely]] return; }
L_0016BAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016BAC0u) [[unlikely]] return; }
L_0016BAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAC8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BAC8u) [[unlikely]] return; }
L_0016BAC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BAE4u) [[unlikely]] return; }
L_0016BAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016BAF4u) [[unlikely]] return; }
L_0016BAF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BAFCu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BAFCu) [[unlikely]] return; }
L_0016BAFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BB18u) [[unlikely]] return; }
L_0016BB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB28u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016BB28u) [[unlikely]] return; }
L_0016BB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB30u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BB30u) [[unlikely]] return; }
L_0016BB30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BB4Cu) [[unlikely]] return; }
L_0016BB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB5Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 77u, depth + 1u); else { c.pc = 0x00378BF0u; return; } if (c.pc != 0x0016BB5Cu) [[unlikely]] return; }
L_0016BB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB64u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BB64u) [[unlikely]] return; }
L_0016BB64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB80u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BB80u) [[unlikely]] return; }
L_0016BB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BB90u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BB90u) [[unlikely]] return; }
L_0016BB90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BBACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 382u, depth + 1u); else { c.pc = 0x001871A0u; return; } if (c.pc != 0x0016BBACu) [[unlikely]] return; }
L_0016BBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BBB4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_0016BC14; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[17], 0u + 5u);  if (t) { goto L_0016BC08; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_0016BBFC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0016BBF4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 28u);  if (t) { goto L_0016BC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC1C; } }
L_0016BBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016BC24; } }
L_0016BBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0016BC24; } }
    set32(c.r[17], 0u + 5u);
    c.budget -= 1;
L_0016BC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC24; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0016BC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC24; } }
L_0016BC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BC44; } }
L_0016BC24:
    set32(c.r[4], 0u + 28u);
    c.budget -= 1;
L_0016BC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0016BC30u) [[unlikely]] return; }
L_0016BC30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016BC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 26u, depth + 1u); else { c.pc = 0x0016C330u; return; } if (c.pc != 0x0016BC44u) [[unlikely]] return; }
L_0016BC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016BC48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016BC60:
    set32(c.r[4], c.r[4].w[0] + 86u);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D050u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 108u, depth); }
L_0016BC70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BC80u); set32(c.r[4], c.r[4].w[0] + 86u);  if (depth < kMaxDepth) unit_0089(c, 12u, depth + 1u); else { c.pc = 0x00324110u; return; } if (c.pc != 0x0016BC80u) [[unlikely]] return; }
L_0016BC80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016BCA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0016BD30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016BCD4:
    set32(c.r[3], c.r[5].w[0] + 7000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0016BD30; } }
L_0016BCE8:
    set32(c.r[2], c.r[5].w[0] + 7020u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0016BD30; } }
L_0016BCF8:
    set32(c.r[3], c.r[5].w[0] + 7040u);
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0016BD30; } }
L_0016BD0C:
    set32(c.r[3], c.r[5].w[0] + 7200u);
    set32(c.r[2], 0u + 92u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0016BD30; } }
L_0016BD20:
    set32(c.r[3], c.r[5].w[0] + 7220u);
    set32(c.r[2], 0u + 109u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
L_0016BD30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 3924u);  if (t) { goto L_0016BD64; } }
L_0016BD40:
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD4Cu); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_001A(c, 401u, depth + 1u); else { c.pc = 0x0016BDD0u; return; } if (c.pc != 0x0016BD4Cu) [[unlikely]] return; }
L_0016BD4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016BDB4; } }
L_0016BD5C:
    set32(c.r[17], c.r[17].w[0] + 368u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0016BD64:
    c.r[2].d[0] = c.r[16].sd[0] < 162ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BD40u | kUnwind; return; } goto L_0016BD40; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 25696u);  if (t) { goto L_0016BDA4; } }
L_0016BD80:
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BD8Cu); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_001A(c, 401u, depth + 1u); else { c.pc = 0x0016BDD0u; return; } if (c.pc != 0x0016BD8Cu) [[unlikely]] return; }
L_0016BD8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BD9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016BDB4; } }
L_0016BD9C:
    set32(c.r[17], c.r[17].w[0] + 1120u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0016BDA4:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BD80u | kUnwind; return; } goto L_0016BD80; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016BDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016BDD0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016BDF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BE38; } }
L_0016BDF4:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016BE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0016BE2C; } }
L_0016BE08:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016BE24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016BE38; } }
L_0016BE24:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 2;
L_0016BE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BE08u | kUnwind; return; } goto L_0016BE08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016BE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016BE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + 1536u);
    set32(c.r[2], c.r[4].w[0] << 1);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016BE70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_0016BF0C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 3120u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00168000u < 16384u) { entry = entries_001A[(t - 0x00168000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016BEB0:
    set32(c.r[3], c.r[5].w[0] + 7000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0016BF0C; } }
L_0016BEC4:
    set32(c.r[2], c.r[5].w[0] + 7020u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_0016BF0C; } }
L_0016BED4:
    set32(c.r[3], c.r[5].w[0] + 7040u);
    set32(c.r[2], 0u + 51u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0016BF0C; } }
L_0016BEE8:
    set32(c.r[3], c.r[5].w[0] + 7200u);
    set32(c.r[2], 0u + 92u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0016BF0C; } }
L_0016BEFC:
    set32(c.r[3], c.r[5].w[0] + 7220u);
    set32(c.r[2], 0u + 109u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_0016BF0C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 3924u);
    c.budget -= 3;
L_0016BF18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF28u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_001A(c, 401u, depth + 1u); else { c.pc = 0x0016BDD0u; return; } if (c.pc != 0x0016BF28u) [[unlikely]] return; }
L_0016BF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016BFAC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016BF94; } }
L_0016BF40:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016BF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF68u);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016BF68u) [[unlikely]] return; }
L_0016BF68:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0016BF7C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BF40u | kUnwind; return; } goto L_0016BF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0016BFB0; } }
L_0016BF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BF9Cu);  if (depth < kMaxDepth) unit_001A(c, 403u, depth + 1u); else { c.pc = 0x0016BE40u; return; } if (c.pc != 0x0016BF9Cu) [[unlikely]] return; }
L_0016BF9C:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0016BFAC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0016BFB0:
    c.r[2].d[0] = c.r[18].sd[0] < 162ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 368u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016BF18u | kUnwind; return; } goto L_0016BF18; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[19].w[0] + 25696u);
    c.budget -= 3;
L_0016BFC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016BFD8u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_001A(c, 401u, depth + 1u); else { c.pc = 0x0016BDD0u; return; } if (c.pc != 0x0016BFD8u) [[unlikely]] return; }
L_0016BFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001B(c, 5u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_001B(c, 3u, depth); } }
L_0016BFF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 4;
    [[clang::musttail]] return unit_001B(c, 1u, depth);
}

}
