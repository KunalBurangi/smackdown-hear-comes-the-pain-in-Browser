#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250,
    0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333,
    0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0,
    367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0,
    0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0,
};

void unit_008F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0033C000;
    case 2u: goto L_0033C048;
    case 3u: goto L_0033C08C;
    case 4u: goto L_0033C0A4;
    case 5u: goto L_0033C0AC;
    case 6u: goto L_0033C0C0;
    case 7u: goto L_0033C0E0;
    case 8u: goto L_0033C0EC;
    case 9u: goto L_0033C110;
    case 10u: goto L_0033C160;
    case 11u: goto L_0033C174;
    case 12u: goto L_0033C1A0;
    case 13u: goto L_0033C1BC;
    case 14u: goto L_0033C1D8;
    case 15u: goto L_0033C1E8;
    case 16u: goto L_0033C1FC;
    case 17u: goto L_0033C214;
    case 18u: goto L_0033C22C;
    case 19u: goto L_0033C234;
    case 20u: goto L_0033C248;
    case 21u: goto L_0033C254;
    case 22u: goto L_0033C268;
    case 23u: goto L_0033C28C;
    case 24u: goto L_0033C2C0;
    case 25u: goto L_0033C30C;
    case 26u: goto L_0033C32C;
    case 27u: goto L_0033C354;
    case 28u: goto L_0033C364;
    case 29u: goto L_0033C374;
    case 30u: goto L_0033C3E0;
    case 31u: goto L_0033C400;
    case 32u: goto L_0033C424;
    case 33u: goto L_0033C430;
    case 34u: goto L_0033C448;
    case 35u: goto L_0033C450;
    case 36u: goto L_0033C458;
    case 37u: goto L_0033C468;
    case 38u: goto L_0033C49C;
    case 39u: goto L_0033C4B0;
    case 40u: goto L_0033C50C;
    case 41u: goto L_0033C514;
    case 42u: goto L_0033C528;
    case 43u: goto L_0033C584;
    case 44u: goto L_0033C598;
    case 45u: goto L_0033C5A8;
    case 46u: goto L_0033C5D0;
    case 47u: goto L_0033C618;
    case 48u: goto L_0033C640;
    case 49u: goto L_0033C668;
    case 50u: goto L_0033C670;
    case 51u: goto L_0033C69C;
    case 52u: goto L_0033C6B0;
    case 53u: goto L_0033C6DC;
    case 54u: goto L_0033C704;
    case 55u: goto L_0033C730;
    case 56u: goto L_0033C74C;
    case 57u: goto L_0033C788;
    case 58u: goto L_0033C7A0;
    case 59u: goto L_0033C7C4;
    case 60u: goto L_0033C7DC;
    case 61u: goto L_0033C7E8;
    case 62u: goto L_0033C848;
    case 63u: goto L_0033C850;
    case 64u: goto L_0033C868;
    case 65u: goto L_0033C874;
    case 66u: goto L_0033C8D4;
    case 67u: goto L_0033C8F4;
    case 68u: goto L_0033C908;
    case 69u: goto L_0033C918;
    case 70u: goto L_0033C928;
    case 71u: goto L_0033C938;
    case 72u: goto L_0033C954;
    case 73u: goto L_0033C980;
    case 74u: goto L_0033C9C8;
    case 75u: goto L_0033CA40;
    case 76u: goto L_0033CA7C;
    case 77u: goto L_0033CA84;
    case 78u: goto L_0033CB14;
    case 79u: goto L_0033CB58;
    case 80u: goto L_0033CB64;
    case 81u: goto L_0033CB6C;
    case 82u: goto L_0033CBCC;
    case 83u: goto L_0033CC30;
    case 84u: goto L_0033CC6C;
    case 85u: goto L_0033CCA8;
    case 86u: goto L_0033CCD4;
    case 87u: goto L_0033CCF4;
    case 88u: goto L_0033CD0C;
    case 89u: goto L_0033CD2C;
    case 90u: goto L_0033CD6C;
    case 91u: goto L_0033CDD8;
    case 92u: goto L_0033CE14;
    case 93u: goto L_0033CE5C;
    case 94u: goto L_0033CE98;
    case 95u: goto L_0033CED0;
    case 96u: goto L_0033CEF0;
    case 97u: goto L_0033CEF8;
    case 98u: goto L_0033CF2C;
    case 99u: goto L_0033CF7C;
    case 100u: goto L_0033CFA8;
    case 101u: goto L_0033CFE0;
    case 102u: goto L_0033D000;
    case 103u: goto L_0033D008;
    case 104u: goto L_0033D01C;
    case 105u: goto L_0033D0B4;
    case 106u: goto L_0033D0C8;
    case 107u: goto L_0033D0E4;
    case 108u: goto L_0033D10C;
    case 109u: goto L_0033D160;
    case 110u: goto L_0033D198;
    case 111u: goto L_0033D1B8;
    case 112u: goto L_0033D1C0;
    case 113u: goto L_0033D1F8;
    case 114u: goto L_0033D270;
    case 115u: goto L_0033D284;
    case 116u: goto L_0033D2D0;
    case 117u: goto L_0033D324;
    case 118u: goto L_0033D338;
    case 119u: goto L_0033D364;
    case 120u: goto L_0033D3C0;
    case 121u: goto L_0033D3D4;
    case 122u: goto L_0033D438;
    case 123u: goto L_0033D44C;
    case 124u: goto L_0033D468;
    case 125u: goto L_0033D490;
    case 126u: goto L_0033D4E0;
    case 127u: goto L_0033D520;
    case 128u: goto L_0033D540;
    case 129u: goto L_0033D55C;
    case 130u: goto L_0033D58C;
    case 131u: goto L_0033D5B4;
    case 132u: goto L_0033D600;
    case 133u: goto L_0033D640;
    case 134u: goto L_0033D660;
    case 135u: goto L_0033D68C;
    case 136u: goto L_0033D6A8;
    case 137u: goto L_0033D6E0;
    case 138u: goto L_0033D720;
    case 139u: goto L_0033D740;
    case 140u: goto L_0033D768;
    case 141u: goto L_0033D784;
    case 142u: goto L_0033D7C4;
    case 143u: goto L_0033D804;
    case 144u: goto L_0033D824;
    case 145u: goto L_0033D854;
    case 146u: goto L_0033D878;
    case 147u: goto L_0033D898;
    case 148u: goto L_0033D8AC;
    case 149u: goto L_0033D8E4;
    case 150u: goto L_0033D924;
    case 151u: goto L_0033D944;
    case 152u: goto L_0033D984;
    case 153u: goto L_0033D9AC;
    case 154u: goto L_0033D9C8;
    case 155u: goto L_0033DA00;
    case 156u: goto L_0033DA40;
    case 157u: goto L_0033DA60;
    case 158u: goto L_0033DA90;
    case 159u: goto L_0033DAB4;
    case 160u: goto L_0033DAC8;
    case 161u: goto L_0033DB00;
    case 162u: goto L_0033DB40;
    case 163u: goto L_0033DB60;
    case 164u: goto L_0033DB6C;
    case 165u: goto L_0033DB78;
    case 166u: goto L_0033DBA0;
    case 167u: goto L_0033DBEC;
    case 168u: goto L_0033DC08;
    case 169u: goto L_0033DC40;
    case 170u: goto L_0033DC80;
    case 171u: goto L_0033DCA0;
    case 172u: goto L_0033DCB0;
    case 173u: goto L_0033DD10;
    case 174u: goto L_0033DD2C;
    case 175u: goto L_0033DD84;
    case 176u: goto L_0033DDC4;
    case 177u: goto L_0033DDE4;
    case 178u: goto L_0033DE04;
    case 179u: goto L_0033DE10;
    case 180u: goto L_0033DE38;
    case 181u: goto L_0033DEA4;
    case 182u: goto L_0033DEC0;
    case 183u: goto L_0033DF18;
    case 184u: goto L_0033DF58;
    case 185u: goto L_0033DF78;
    case 186u: goto L_0033DFA8;
    case 187u: goto L_0033DFC0;
    case 188u: goto L_0033E00C;
    case 189u: goto L_0033E04C;
    case 190u: goto L_0033E06C;
    case 191u: goto L_0033E088;
    case 192u: goto L_0033E0A0;
    case 193u: goto L_0033E0EC;
    case 194u: goto L_0033E12C;
    case 195u: goto L_0033E14C;
    case 196u: goto L_0033E190;
    case 197u: goto L_0033E1A4;
    case 198u: goto L_0033E1F8;
    case 199u: goto L_0033E20C;
    case 200u: goto L_0033E228;
    case 201u: goto L_0033E258;
    case 202u: goto L_0033E270;
    case 203u: goto L_0033E2C4;
    case 204u: goto L_0033E2DC;
    case 205u: goto L_0033E2F4;
    case 206u: goto L_0033E310;
    case 207u: goto L_0033E334;
    case 208u: goto L_0033E348;
    case 209u: goto L_0033E35C;
    case 210u: goto L_0033E364;
    case 211u: goto L_0033E378;
    case 212u: goto L_0033E388;
    case 213u: goto L_0033E3A8;
    case 214u: goto L_0033E3B4;
    case 215u: goto L_0033E3BC;
    case 216u: goto L_0033E3C4;
    case 217u: goto L_0033E3D0;
    case 218u: goto L_0033E3E4;
    case 219u: goto L_0033E3F4;
    case 220u: goto L_0033E3FC;
    case 221u: goto L_0033E420;
    case 222u: goto L_0033E440;
    case 223u: goto L_0033E498;
    case 224u: goto L_0033E4A4;
    case 225u: goto L_0033E4D4;
    case 226u: goto L_0033E514;
    case 227u: goto L_0033E560;
    case 228u: goto L_0033E598;
    case 229u: goto L_0033E5B0;
    case 230u: goto L_0033E5C4;
    case 231u: goto L_0033E5D0;
    case 232u: goto L_0033E630;
    case 233u: goto L_0033E694;
    case 234u: goto L_0033E6AC;
    case 235u: goto L_0033E6BC;
    case 236u: goto L_0033E6C8;
    case 237u: goto L_0033E6D4;
    case 238u: goto L_0033E6E0;
    case 239u: goto L_0033E70C;
    case 240u: goto L_0033E724;
    case 241u: goto L_0033E740;
    case 242u: goto L_0033E754;
    case 243u: goto L_0033E764;
    case 244u: goto L_0033E780;
    case 245u: goto L_0033E798;
    case 246u: goto L_0033E7AC;
    case 247u: goto L_0033E7C8;
    case 248u: goto L_0033E7DC;
    case 249u: goto L_0033E7EC;
    case 250u: goto L_0033E7FC;
    case 251u: goto L_0033E80C;
    case 252u: goto L_0033E820;
    case 253u: goto L_0033E828;
    case 254u: goto L_0033E848;
    case 255u: goto L_0033E854;
    case 256u: goto L_0033E860;
    case 257u: goto L_0033E88C;
    case 258u: goto L_0033E894;
    case 259u: goto L_0033E89C;
    case 260u: goto L_0033E8B0;
    case 261u: goto L_0033E8C4;
    case 262u: goto L_0033E8D8;
    case 263u: goto L_0033E908;
    case 264u: goto L_0033E920;
    case 265u: goto L_0033E92C;
    case 266u: goto L_0033E958;
    case 267u: goto L_0033E960;
    case 268u: goto L_0033E970;
    case 269u: goto L_0033E984;
    case 270u: goto L_0033E9A0;
    case 271u: goto L_0033E9B8;
    case 272u: goto L_0033E9C4;
    case 273u: goto L_0033E9F0;
    case 274u: goto L_0033E9F8;
    case 275u: goto L_0033EA10;
    case 276u: goto L_0033EA2C;
    case 277u: goto L_0033EA44;
    case 278u: goto L_0033EA60;
    case 279u: goto L_0033EA94;
    case 280u: goto L_0033EAA4;
    case 281u: goto L_0033EAC0;
    case 282u: goto L_0033EADC;
    case 283u: goto L_0033EAF0;
    case 284u: goto L_0033EB10;
    case 285u: goto L_0033EB24;
    case 286u: goto L_0033EB50;
    case 287u: goto L_0033EB80;
    case 288u: goto L_0033EB90;
    case 289u: goto L_0033EBA4;
    case 290u: goto L_0033EBBC;
    case 291u: goto L_0033EBD0;
    case 292u: goto L_0033EBE4;
    case 293u: goto L_0033EBFC;
    case 294u: goto L_0033EC10;
    case 295u: goto L_0033EC24;
    case 296u: goto L_0033EC3C;
    case 297u: goto L_0033EC50;
    case 298u: goto L_0033EC64;
    case 299u: goto L_0033EC7C;
    case 300u: goto L_0033EC90;
    case 301u: goto L_0033ECB0;
    case 302u: goto L_0033ED10;
    case 303u: goto L_0033ED60;
    case 304u: goto L_0033ED94;
    case 305u: goto L_0033EDB4;
    case 306u: goto L_0033EDBC;
    case 307u: goto L_0033EDE8;
    case 308u: goto L_0033EE08;
    case 309u: goto L_0033EE58;
    case 310u: goto L_0033EE70;
    case 311u: goto L_0033EE78;
    case 312u: goto L_0033EEA4;
    case 313u: goto L_0033EEBC;
    case 314u: goto L_0033EEC4;
    case 315u: goto L_0033EEF4;
    case 316u: goto L_0033EF0C;
    case 317u: goto L_0033EF14;
    case 318u: goto L_0033EF24;
    case 319u: goto L_0033EF40;
    case 320u: goto L_0033EF54;
    case 321u: goto L_0033EF5C;
    case 322u: goto L_0033EF84;
    case 323u: goto L_0033EF9C;
    case 324u: goto L_0033EFA4;
    case 325u: goto L_0033EFB4;
    case 326u: goto L_0033EFD0;
    case 327u: goto L_0033F000;
    case 328u: goto L_0033F010;
    case 329u: goto L_0033F01C;
    case 330u: goto L_0033F04C;
    case 331u: goto L_0033F06C;
    case 332u: goto L_0033F074;
    case 333u: goto L_0033F07C;
    case 334u: goto L_0033F08C;
    case 335u: goto L_0033F0A0;
    case 336u: goto L_0033F0F0;
    case 337u: goto L_0033F130;
    case 338u: goto L_0033F170;
    case 339u: goto L_0033F1B0;
    case 340u: goto L_0033F1CC;
    case 341u: goto L_0033F1F4;
    case 342u: goto L_0033F20C;
    case 343u: goto L_0033F214;
    case 344u: goto L_0033F224;
    case 345u: goto L_0033F240;
    case 346u: goto L_0033F270;
    case 347u: goto L_0033F280;
    case 348u: goto L_0033F28C;
    case 349u: goto L_0033F2A4;
    case 350u: goto L_0033F2AC;
    case 351u: goto L_0033F2BC;
    case 352u: goto L_0033F2CC;
    case 353u: goto L_0033F2E0;
    case 354u: goto L_0033F320;
    case 355u: goto L_0033F360;
    case 356u: goto L_0033F374;
    case 357u: goto L_0033F37C;
    case 358u: goto L_0033F3C4;
    case 359u: goto L_0033F3DC;
    case 360u: goto L_0033F3E4;
    case 361u: goto L_0033F3F4;
    case 362u: goto L_0033F410;
    case 363u: goto L_0033F440;
    case 364u: goto L_0033F450;
    case 365u: goto L_0033F468;
    case 366u: goto L_0033F470;
    case 367u: goto L_0033F480;
    case 368u: goto L_0033F490;
    case 369u: goto L_0033F514;
    case 370u: goto L_0033F550;
    case 371u: goto L_0033F5D8;
    case 372u: goto L_0033F610;
    case 373u: goto L_0033F698;
    case 374u: goto L_0033F6D0;
    case 375u: goto L_0033F758;
    case 376u: goto L_0033F790;
    case 377u: goto L_0033F814;
    case 378u: goto L_0033F860;
    case 379u: goto L_0033F884;
    case 380u: goto L_0033F894;
    case 381u: goto L_0033F8A4;
    case 382u: goto L_0033F8FC;
    case 383u: goto L_0033F914;
    case 384u: goto L_0033F91C;
    case 385u: goto L_0033F92C;
    case 386u: goto L_0033F940;
    case 387u: goto L_0033F970;
    case 388u: goto L_0033F980;
    case 389u: goto L_0033F98C;
    case 390u: goto L_0033F9A4;
    case 391u: goto L_0033F9AC;
    case 392u: goto L_0033F9BC;
    case 393u: goto L_0033F9CC;
    case 394u: goto L_0033F9E0;
    case 395u: goto L_0033FA68;
    case 396u: goto L_0033FAB0;
    case 397u: goto L_0033FAD4;
    case 398u: goto L_0033FAE8;
    case 399u: goto L_0033FAF8;
    case 400u: goto L_0033FB50;
    case 401u: goto L_0033FB68;
    case 402u: goto L_0033FB70;
    case 403u: goto L_0033FB80;
    case 404u: goto L_0033FBA0;
    case 405u: goto L_0033FBD0;
    case 406u: goto L_0033FBE0;
    case 407u: goto L_0033FBEC;
    case 408u: goto L_0033FC04;
    case 409u: goto L_0033FC0C;
    case 410u: goto L_0033FC1C;
    case 411u: goto L_0033FC2C;
    case 412u: goto L_0033FC40;
    case 413u: goto L_0033FCCC;
    case 414u: goto L_0033FCF4;
    case 415u: goto L_0033FD30;
    case 416u: goto L_0033FD54;
    case 417u: goto L_0033FD68;
    case 418u: goto L_0033FD78;
    case 419u: goto L_0033FDD0;
    case 420u: goto L_0033FDE8;
    case 421u: goto L_0033FDF0;
    case 422u: goto L_0033FE00;
    case 423u: goto L_0033FE20;
    case 424u: goto L_0033FE50;
    case 425u: goto L_0033FE60;
    case 426u: goto L_0033FE6C;
    case 427u: goto L_0033FE84;
    case 428u: goto L_0033FE8C;
    case 429u: goto L_0033FE9C;
    case 430u: goto L_0033FEAC;
    case 431u: goto L_0033FEC0;
    case 432u: goto L_0033FF44;
    case 433u: goto L_0033FF90;
    case 434u: goto L_0033FFB0;
    case 435u: goto L_0033FFC4;
    case 436u: goto L_0033FFDC;
    case 437u: goto L_0033FFF8;
    default: bad_entry(c, 0x0033C000u); return;
    }
L_0033C000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 118u);
    st32((c.r[17].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033C034; } }
    set32(c.r[2], 0u + 25500u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0033C04C; } }
L_0033C034:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C048u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 99u, depth + 1u); else { c.pc = 0x0012CCE0u; return; } if (c.pc != 0x0033C048u) [[unlikely]] return; }
L_0033C048:
    st16((c.r[17].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0033C04C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[5], c.r[7].w[0] + 30u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], 0u + 4u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 20u));
    set32(c.r[4], c.r[3].w[0] + 270u);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 12u));
    st8((c.r[3].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 21u)));
    st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 34u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C08Cu); st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0033C08Cu) [[unlikely]] return; }
L_0033C08C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C000u | kUnwind; return; } goto L_0033C000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0A4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033C0A4u) [[unlikely]] return; }
L_0033C0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0ACu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x0033C0ACu) [[unlikely]] return; }
L_0033C0AC:
    c.r[6].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0C0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 424u, depth + 1u); else { c.pc = 0x0033BE20u; return; } if (c.pc != 0x0033C0C0u) [[unlikely]] return; }
L_0033C0C0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0033C0E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0E0u); set32(c.r[4], c.r[4].w[0] + 8896u);  if (depth < kMaxDepth) unit_0084(c, 49u, depth + 1u); else { c.pc = 0x00310560u; return; } if (c.pc != 0x0033C0E0u) [[unlikely]] return; }
L_0033C0E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C0ECu);  if (depth < kMaxDepth) unit_008E(c, 291u, depth + 1u); else { c.pc = 0x0033A990u; return; } if (c.pc != 0x0033C0ECu) [[unlikely]] return; }
L_0033C0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033C110:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033C150; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_0033C14C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033C14C; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0033C14C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033C14C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033C150; } }
L_0033C14C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033C150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 21u, depth + 1u); else { c.pc = 0x00140440u; return; } if (c.pc != 0x0033C174u) [[unlikely]] return; }
L_0033C174:
    c.f[1] = c.r[16].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033C1A0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 2u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 7;
L_0033C1BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1D8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 131u, depth + 1u); else { c.pc = 0x00339460u; return; } if (c.pc != 0x0033C1D8u) [[unlikely]] return; }
L_0033C1D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0088(c, 510u, depth + 1u); else { c.pc = 0x00323260u; return; } if (c.pc != 0x0033C1E8u) [[unlikely]] return; }
L_0033C1E8:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0; c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0033C28C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C1FCu) [[unlikely]] return; }
L_0033C1FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C214u); if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C214u) [[unlikely]] return; }
L_0033C214:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[7].d[0] = c.r[17].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[29].w[0] + 584u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C22Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008E(c, 416u, depth + 1u); else { c.pc = 0x0033BCD0u; return; } if (c.pc != 0x0033C22Cu) [[unlikely]] return; }
L_0033C22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C234u);  if (depth < kMaxDepth) unit_001C(c, 282u, depth + 1u); else { c.pc = 0x00173210u; return; } if (c.pc != 0x0033C234u) [[unlikely]] return; }
L_0033C234:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C248u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_001C(c, 260u, depth + 1u); else { c.pc = 0x00172FC0u; return; } if (c.pc != 0x0033C248u) [[unlikely]] return; }
L_0033C248:
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C254u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C254u) [[unlikely]] return; }
L_0033C254:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 353u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C268u); st8((c.r[29].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C268u) [[unlikely]] return; }
L_0033C268:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 354u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    st8((c.r[29].w[0] + 88u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C28Cu); st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001C(c, 268u, depth + 1u); else { c.pc = 0x00173090u; return; } if (c.pc != 0x0033C28Cu) [[unlikely]] return; }
L_0033C28C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C1BCu | kUnwind; return; } goto L_0033C1BC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_0033C2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[17].w[0]);  if (t) { goto L_0033C2F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 440u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033C2F8; } }
L_0033C2F4:
    st8((c.r[18].w[0] + 440u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033C2F8:
    st8((c.r[18].w[0] + 441u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 5;
L_0033C30C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C30Cu | kUnwind; return; } goto L_0033C30C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C32C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C32Cu | kUnwind; return; } goto L_0033C32C; } }
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C354u); set32(c.r[5], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x0033C354u) [[unlikely]] return; }
L_0033C354:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C364u); st8((c.r[18].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C364u) [[unlikely]] return; }
L_0033C364:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C374u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0010(c, 107u, depth + 1u); else { c.pc = 0x001415A0u; return; } if (c.pc != 0x0033C374u) [[unlikely]] return; }
L_0033C374:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C3AC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    st8((c.r[18].w[0] + 424u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 57u));
    st8((c.r[18].w[0] + 425u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 60u));
    st8((c.r[18].w[0] + 426u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 59u));
    st8((c.r[18].w[0] + 427u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 58u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 428u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033C3D4; } }
L_0033C3AC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 64u));
    st8((c.r[18].w[0] + 424u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 65u));
    st8((c.r[18].w[0] + 425u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 68u));
    st8((c.r[18].w[0] + 426u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 67u));
    st8((c.r[18].w[0] + 427u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 66u));
    st8((c.r[18].w[0] + 428u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0033C3D4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C3E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0033C3E0u) [[unlikely]] return; }
L_0033C3E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    st32((c.r[18].w[0] + 432u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 432u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0033C3F8; } }
    st32((c.r[18].w[0] + 432u), 0u);
    c.budget -= 1;
L_0033C3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C400u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0033C400u) [[unlikely]] return; }
L_0033C400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25556u)));
    st32((c.r[18].w[0] + 436u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C424u); set32(c.r[4], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0033C424u) [[unlikely]] return; }
L_0033C424:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C430u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C430u) [[unlikely]] return; }
L_0033C430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C448; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 208u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C448u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0033C448u) [[unlikely]] return; }
L_0033C448:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033C450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C458u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C458u) [[unlikely]] return; }
L_0033C458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_0033C46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C468u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0033C468u) [[unlikely]] return; }
L_0033C468:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_0033C46C:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C450u | kUnwind; return; } goto L_0033C450; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 440u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 272u);  if (t) { goto L_0033C584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C49Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C49Cu) [[unlikely]] return; }
L_0033C49C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C4B0; } }
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C4B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0033C4B0u) [[unlikely]] return; }
L_0033C4B0:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = ld32((c.r[1].w[0] - 9808u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 9816u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C50Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C50Cu) [[unlikely]] return; }
L_0033C50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C514u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C514u) [[unlikely]] return; }
L_0033C514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C528; } }
    c.r[5].d[0] = ld64((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C528u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0033C528u) [[unlikely]] return; }
L_0033C528:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B30000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.f[1] = ld32((c.r[1].w[0] - 9808u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 9816u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C584u) [[unlikely]] return; }
L_0033C584:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 440u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033C5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C598u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C598u) [[unlikely]] return; }
L_0033C598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033C5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5A8u);  if (depth < kMaxDepth) unit_008F(c, 196u, depth + 1u); else { c.pc = 0x0033E190u; return; } if (c.pc != 0x0033C5A8u) [[unlikely]] return; }
L_0033C5A8:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0033C5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033C5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033C704; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C618; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C618; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C618u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C618u) [[unlikely]] return; }
L_0033C618:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C640; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C640u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C640u) [[unlikely]] return; }
L_0033C640:
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C668; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C668; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C668u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C668u) [[unlikely]] return; }
L_0033C668:
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033C670:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 12u);  if (t) { goto L_0033C69C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C69C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C69Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C69Cu) [[unlikely]] return; }
L_0033C69C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C670u | kUnwind; return; } goto L_0033C670; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C6B0:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 24u);  if (t) { goto L_0033C6DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C6DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C6DCu) [[unlikely]] return; }
L_0033C6DC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C6B0u | kUnwind; return; } goto L_0033C6B0; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033C708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0033C704u) [[unlikely]] return; }
L_0033C704:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033C708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033C730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C74Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 163u, depth + 1u); else { c.pc = 0x00245520u; return; } if (c.pc != 0x0033C74Cu) [[unlikely]] return; }
L_0033C74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0033C75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033C788; } }
L_0033C75C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0033C770; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033C774; } }
L_0033C770:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C774:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C788u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 153u, depth + 1u); else { c.pc = 0x00245390u; return; } if (c.pc != 0x0033C788u) [[unlikely]] return; }
L_0033C788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 440u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033C8D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7C4u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C7C4u) [[unlikely]] return; }
L_0033C7C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033C7EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 221u, depth + 1u); else { c.pc = 0x0033E420u; return; } if (c.pc != 0x0033C7DCu) [[unlikely]] return; }
L_0033C7DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0033C7E8u) [[unlikely]] return; }
L_0033C7E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033C7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 9808u));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 9816u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C848u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C848u) [[unlikely]] return; }
L_0033C848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C850u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C850u) [[unlikely]] return; }
L_0033C850:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033C878; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 221u, depth + 1u); else { c.pc = 0x0033E420u; return; } if (c.pc != 0x0033C868u) [[unlikely]] return; }
L_0033C868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C874u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0033C874u) [[unlikely]] return; }
L_0033C874:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033C878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 9808u));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B30000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 9816u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C8D4u) [[unlikely]] return; }
L_0033C8D4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 441u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0033C954; } }
    set32(c.r[4], 0u + 160u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8F4u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033C8F4u) [[unlikely]] return; }
L_0033C8F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033C908; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C908u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0033C908u) [[unlikely]] return; }
L_0033C908:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C918u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0033C918u) [[unlikely]] return; }
L_0033C918:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C928u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0033C928u) [[unlikely]] return; }
L_0033C928:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C938u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0033C938u) [[unlikely]] return; }
L_0033C938:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C954u); set32(c.r[5], 0u + 53u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C954u) [[unlikely]] return; }
L_0033C954:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[3], 0u + 23u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C980:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 3104u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[6], c.r[29].w[0] + 416u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[5], 0u + 20u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
L_0033C9C8:
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C9C8u | kUnwind; return; } goto L_0033C9C8; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 52u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033E14C; } }
    c.f[1] = ld32((c.r[21].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[23], ld32((c.r[3].w[0] + 332u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 440u)));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CA40u) [[unlikely]] return; }
L_0033CA40:
    c.f[1] = ld32((c.r[21].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CA7Cu) [[unlikely]] return; }
L_0033CA7C:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[20].w[0] << 2);
    c.budget -= 2;
L_0033CA84:
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[3].w[0] + 416u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0033CAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0033CABC; } }
L_0033CAAC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033CABC; } }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0033CABC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033CD0C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 438u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033CAF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.f[20] = c.r[2].w[0];
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0033CB0C; } }
L_0033CAF4:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_0033CB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB14u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033CB14u) [[unlikely]] return; }
L_0033CB14:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[17].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[17].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[17].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[30], c.r[16].w[0] + 36u);  if (t) { goto L_0033CBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB58u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033CB58u) [[unlikely]] return; }
L_0033CB58:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB64u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x0033CB64u) [[unlikely]] return; }
L_0033CB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0033CB9C; } }
L_0033CB6C:
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[4].w[0] + 352u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_0033CB98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 32u);  if (t) { goto L_0033CB98; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0033CB98:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0033CB9C:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CB6Cu | kUnwind; return; } goto L_0033CB6C; } }
L_0033CBA8:
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 352u);  if (t) { goto L_0033CBC4; } }
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 356u), 0u);  if (t) { goto L_0033CBD4; } }
L_0033CBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBCCu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033CBCCu) [[unlikely]] return; }
L_0033CBCC:
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    c.budget -= 2;
L_0033CBD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033CC74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033CC38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CBFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_0033CC78; } }
L_0033CBFC:
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC30u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CC30u) [[unlikely]] return; }
L_0033CC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));  if (t) { goto L_0033CCAC; } }
L_0033CC38:
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC6Cu); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CC6Cu) [[unlikely]] return; }
L_0033CC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CCA8; } }
L_0033CC74:
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_0033CC78:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CCA8u); c.f[13] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CCA8u) [[unlikely]] return; }
L_0033CCA8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_0033CCAC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0033CCFC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CCD4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CCD4u) [[unlikely]] return; }
L_0033CCD4:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CCF4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CCF4u) [[unlikely]] return; }
L_0033CCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0033CD10; } }
L_0033CCFC:
    set32(c.r[25], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CD0Cu) [[unlikely]] return; }
L_0033CD0C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0033CD10:
    c.r[2].d[0] = c.r[20].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA84u | kUnwind; return; } goto L_0033CA84; } }
    c.r[4].d[0] = ld16((c.r[21].w[0]));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD2Cu); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0089(c, 24u, depth + 1u); else { c.pc = 0x003242C0u; return; } if (c.pc != 0x0033CD2Cu) [[unlikely]] return; }
L_0033CD2C:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033D0C8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033D024; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD6Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033CD6Cu) [[unlikely]] return; }
L_0033CD6C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[29].w[0] + 288u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033CE1C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CDE0; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434A0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDD8u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CDD8u) [[unlikely]] return; }
L_0033CDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0033CE9C; } }
L_0033CDE0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x434A0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE14u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CE14u) [[unlikely]] return; }
L_0033CE14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CE98; } }
L_0033CE1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CE64; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE5Cu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CE5Cu) [[unlikely]] return; }
L_0033CE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CE98; } }
L_0033CE64:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = c.r[2].w[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE98u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CE98u) [[unlikely]] return; }
L_0033CE98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0033CE9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CED0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CED0u) [[unlikely]] return; }
L_0033CED0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEF0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CEF0u) [[unlikely]] return; }
L_0033CEF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0033CEF8u) [[unlikely]] return; }
L_0033CEF8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 224u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033D020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF2Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033CF2Cu) [[unlikely]] return; }
L_0033CF2C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[29].w[0] + 224u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033CF84; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434A0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF7Cu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CF7Cu) [[unlikely]] return; }
L_0033CF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0033CFAC; } }
L_0033CF84:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433A0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CFA8u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CFA8u) [[unlikely]] return; }
L_0033CFA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_0033CFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CFE0u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CFE0u) [[unlikely]] return; }
L_0033CFE0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D000u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D000u) [[unlikely]] return; }
L_0033D000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D008u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0033D008u) [[unlikely]] return; }
L_0033D008:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0033D020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D01Cu);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x0033D01Cu) [[unlikely]] return; }
L_0033D01C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033D020:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0033D024:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033D0C8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.f[0] = ld32((c.r[1].w[0] - 9832u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9832u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[19].sd[0] >= 0; st32((c.r[3].w[0] + 60u), c.r[4].w[0]);  if (t) { goto L_0033D068; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0033D068:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[5].w[0];
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D0B4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D0B4u) [[unlikely]] return; }
L_0033D0B4:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D0C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D0C8u) [[unlikely]] return; }
L_0033D0C8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033D1BC; } }
    c.r[6].d[0] = ld8((c.r[21].w[0] + 412u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D0E4u); set32(c.r[5], c.r[5].w[0] - 9872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033D0E4u) [[unlikely]] return; }
L_0033D0E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9832u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9832u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D10Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D10Cu) [[unlikely]] return; }
L_0033D10C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D160u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D160u) [[unlikely]] return; }
L_0033D160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D198u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D198u) [[unlikely]] return; }
L_0033D198:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1B8u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D1B8u) [[unlikely]] return; }
L_0033D1B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D1BC:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 1;
L_0033D1C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[19], c.r[6].w[0] + 24u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[7].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1F8u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D1F8u) [[unlikely]] return; }
L_0033D1F8:
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.f[1] = c.r[16].w[0];
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    c.f[21] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[12] = c.r[4].w[0];
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D270u); c.f[13] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D270u) [[unlikely]] return; }
L_0033D270:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D284u) [[unlikely]] return; }
L_0033D284:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 424u));
    set32(c.r[17], c.r[2].w[0] + 424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2D0u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D2D0u) [[unlikely]] return; }
L_0033D2D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.f[21];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D324u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D324u) [[unlikely]] return; }
L_0033D324:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D338u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D338u) [[unlikely]] return; }
L_0033D338:
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D364u); st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D364u) [[unlikely]] return; }
L_0033D364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D3C0u); c.f[13] = fp::add(c.f[1], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D3C0u) [[unlikely]] return; }
L_0033D3C0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D3D4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x0033D3D4u) [[unlikely]] return; }
L_0033D3D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033D540; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D454; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033D400; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033D418; } }
L_0033D400:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0033D418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D438u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x0033D438u) [[unlikely]] return; }
L_0033D438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D44Cu); set32(c.r[5], c.r[5].w[0] - 9864u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033D44Cu) [[unlikely]] return; }
L_0033D44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D468; } }
L_0033D454:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D468u); set32(c.r[5], c.r[5].w[0] - 9872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033D468u) [[unlikely]] return; }
L_0033D468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D490u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D490u) [[unlikely]] return; }
L_0033D490:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::add(c.f[1], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D4E0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D4E0u) [[unlikely]] return; }
L_0033D4E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D520u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D520u) [[unlikely]] return; }
L_0033D520:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D540u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D540u) [[unlikely]] return; }
L_0033D540:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D1C0u | kUnwind; return; } goto L_0033D1C0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033D660; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D55C:
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 424u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D55Cu | kUnwind; return; } goto L_0033D55C; } }
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D58Cu); set32(c.r[5], c.r[5].w[0] - 9872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033D58Cu) [[unlikely]] return; }
L_0033D58C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9840u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9840u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5B4u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D5B4u) [[unlikely]] return; }
L_0033D5B4:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D600u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D600u) [[unlikely]] return; }
L_0033D600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D640u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D640u) [[unlikely]] return; }
L_0033D640:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D660u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D660u) [[unlikely]] return; }
L_0033D660:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033D824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D68Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D68Cu) [[unlikely]] return; }
L_0033D68C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6A8u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 55u, depth + 1u); else { c.pc = 0x0033C730u; return; } if (c.pc != 0x0033D6A8u) [[unlikely]] return; }
L_0033D6A8:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6E0u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D6E0u) [[unlikely]] return; }
L_0033D6E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D720u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D720u) [[unlikely]] return; }
L_0033D720:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D740u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D740u) [[unlikely]] return; }
L_0033D740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D768u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D768u) [[unlikely]] return; }
L_0033D768:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D784u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008F(c, 55u, depth + 1u); else { c.pc = 0x0033C730u; return; } if (c.pc != 0x0033D784u) [[unlikely]] return; }
L_0033D784:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], 0u + 365u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7C4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D7C4u) [[unlikely]] return; }
L_0033D7C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D804u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D804u) [[unlikely]] return; }
L_0033D804:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D824u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D824u) [[unlikely]] return; }
L_0033D824:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033D944; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D854u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D854u) [[unlikely]] return; }
L_0033D854:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 402u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 784u);  if (t) { goto L_0033D884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D878u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033D878u) [[unlikely]] return; }
L_0033D878:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033D8B4; } }
L_0033D884:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 569u);  if (t) { goto L_0033D8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D898u); set32(c.r[4], 0u + 785u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033D898u) [[unlikely]] return; }
L_0033D898:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033D8B4; } }
L_0033D8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8ACu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033D8ACu) [[unlikely]] return; }
L_0033D8AC:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.budget -= 2;
L_0033D8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8E4u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D8E4u) [[unlikely]] return; }
L_0033D8E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D924u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D924u) [[unlikely]] return; }
L_0033D924:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D944u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D944u) [[unlikely]] return; }
L_0033D944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] - 2464u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0033DA60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D984u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033D984u) [[unlikely]] return; }
L_0033D984:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 405u)));
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 454u);  if (t) { goto L_0033D9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9ACu);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033D9ACu) [[unlikely]] return; }
L_0033D9AC:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033D9D0; } }
L_0033D9B8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9C8u); set32(c.r[4], ld32((c.r[2].w[0] + 208u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033D9C8u) [[unlikely]] return; }
L_0033D9C8:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.budget -= 2;
L_0033D9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA00u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DA00u) [[unlikely]] return; }
L_0033DA00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA40u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DA40u) [[unlikely]] return; }
L_0033DA40:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA60u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DA60u) [[unlikely]] return; }
L_0033DA60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0033DB64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA90u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033DA90u) [[unlikely]] return; }
L_0033DA90:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 410u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 459u);  if (t) { goto L_0033DAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DAB4u); set32(c.r[4], 0u + 186u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033DAB4u) [[unlikely]] return; }
L_0033DAB4:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_0033DAD0; } }
L_0033DAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DAC8u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0033DAC8u) [[unlikely]] return; }
L_0033DAC8:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.budget -= 2;
L_0033DAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43320000u);
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB00u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DB00u) [[unlikely]] return; }
L_0033DB00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB40u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DB40u) [[unlikely]] return; }
L_0033DB40:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB60u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DB60u) [[unlikely]] return; }
L_0033DB60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033DB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB6Cu);  if (depth < kMaxDepth) unit_006D(c, 225u, depth + 1u); else { c.pc = 0x002B6350u; return; } if (c.pc != 0x0033DB6Cu) [[unlikely]] return; }
L_0033DB6C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
L_0033DB78:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 176u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DB78u | kUnwind; return; } goto L_0033DB78; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBA0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0089(c, 45u, depth + 1u); else { c.pc = 0x00324580u; return; } if (c.pc != 0x0033DBA0u) [[unlikely]] return; }
L_0033DBA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0033DCA4; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0033DCA4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0033DCA4; } }
    st32((c.r[29].w[0] + 176u), c.r[17].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBECu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033DBECu) [[unlikely]] return; }
L_0033DBEC:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC08u); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0033DC08u) [[unlikely]] return; }
L_0033DC08:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    st32((c.r[18].w[0] + 356u), 0u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.f[13] = c.r[3].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC40u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DC40u) [[unlikely]] return; }
L_0033DC40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DC80u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DC80u) [[unlikely]] return; }
L_0033DC80:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCA0u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DCA0u) [[unlikely]] return; }
L_0033DCA0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033DCA4:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCB0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0089(c, 45u, depth + 1u); else { c.pc = 0x00324580u; return; } if (c.pc != 0x0033DCB0u) [[unlikely]] return; }
L_0033DCB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 25500u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0033DDE8; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0033DDE8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0033DDE8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_0033DDE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 176u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD10u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033DD10u) [[unlikely]] return; }
L_0033DD10:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD2Cu); st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0033DD2Cu) [[unlikely]] return; }
L_0033DD2C:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43660000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD84u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DD84u) [[unlikely]] return; }
L_0033DD84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDC4u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DDC4u) [[unlikely]] return; }
L_0033DDC4:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDE4u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DDE4u) [[unlikely]] return; }
L_0033DDE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033DDE8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033DF8C; } }
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE04u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_006E(c, 6u, depth + 1u); else { c.pc = 0x002B8050u; return; } if (c.pc != 0x0033DE04u) [[unlikely]] return; }
L_0033DE04:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0033DF80; } }
L_0033DE10:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_0033DF8C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[3].w[0] + 192u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033DF7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_0033DE54; } }
L_0033DE38:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033DE5C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033DE54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DE38u | kUnwind; return; } goto L_0033DE38; } }
L_0033DE5C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[16].d[0];  if (t) { goto L_0033DF7C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033DF7C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 176u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 9824u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DEA4u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033DEA4u) [[unlikely]] return; }
L_0033DEA4:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DEC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012CDE0u; return; } if (c.pc != 0x0033DEC0u) [[unlikely]] return; }
L_0033DEC0:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43660000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF18u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DF18u) [[unlikely]] return; }
L_0033DF18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF58u); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DF58u) [[unlikely]] return; }
L_0033DF58:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF78u); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DF78u) [[unlikely]] return; }
L_0033DF78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0033DF7C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0033DF80:
    c.r[3].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DE10u | kUnwind; return; } goto L_0033DE10; } }
L_0033DF8C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033E06C; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 432u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFA8u); set32(c.r[5], c.r[5].w[0] - 9872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033DFA8u) [[unlikely]] return; }
L_0033DFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFC0u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033DFC0u) [[unlikely]] return; }
L_0033DFC0:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D00000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E00Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E00Cu) [[unlikely]] return; }
L_0033E00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E04Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E04Cu) [[unlikely]] return; }
L_0033E04C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E06Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E06Cu) [[unlikely]] return; }
L_0033E06C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033E14C; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 436u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E088u); set32(c.r[5], c.r[5].w[0] - 9872u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x0033E088u) [[unlikely]] return; }
L_0033E088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0A0u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0033E0A0u) [[unlikely]] return; }
L_0033E0A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AD0000u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D00000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[6]);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0ECu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E0ECu) [[unlikely]] return; }
L_0033E0EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 312u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[18].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E12Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E12Cu) [[unlikely]] return; }
L_0033E12C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E14Cu); c.r[8].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E14Cu) [[unlikely]] return; }
L_0033E14C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_0033E190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x0033E1A4u) [[unlikely]] return; }
L_0033E1A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0033E1D8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0033E1D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E238; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E204; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1F8u); set32(c.r[4], c.r[4].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0033E1F8u) [[unlikely]] return; }
L_0033E1F8:
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 3;
L_0033E204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E20Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0033E20Cu) [[unlikely]] return; }
L_0033E20C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 176u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E228u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 94u, depth + 1u); else { c.pc = 0x001008C0u; return; } if (c.pc != 0x0033E228u) [[unlikely]] return; }
L_0033E228:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
L_0033E238:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9856u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E258u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x0033E258u) [[unlikely]] return; }
L_0033E258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033E270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033E2F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 23696u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0033E2D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033E2D4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E2D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] - 16u);  if (t) { goto L_0033E2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2C4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0033E2C4u) [[unlikely]] return; }
L_0033E2C4:
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 3;
L_0033E2D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033E2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x0033E2DCu) [[unlikely]] return; }
L_0033E2DC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033E2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0033E2F4u) [[unlikely]] return; }
L_0033E2F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0033E2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E310:
    set32(c.r[29], c.r[29].w[0] - 2304u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E334u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x0033E334u) [[unlikely]] return; }
L_0033E334:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E348u); st32((c.r[29].w[0] + 2300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0033E348u) [[unlikely]] return; }
L_0033E348:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 2280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E35Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x0033E35Cu) [[unlikely]] return; }
L_0033E35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E364u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033E364u) [[unlikely]] return; }
L_0033E364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033E378; } }
    set32(c.r[5], c.r[29].w[0] + 2280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E378u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 127u, depth + 1u); else { c.pc = 0x0015D890u; return; } if (c.pc != 0x0033E378u) [[unlikely]] return; }
L_0033E378:
    st32((c.r[29].w[0] + 2296u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E388u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0025(c, 350u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x0033E388u) [[unlikely]] return; }
L_0033E388:
    set32(c.r[3], 0u + 10752u);
    set32(c.r[2], 0u + 10755u);
    st16((c.r[29].w[0] + 2292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st16((c.r[29].w[0] + 2294u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 2292u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 15u, depth + 1u); else { c.pc = 0x001801C0u; return; } if (c.pc != 0x0033E3A8u) [[unlikely]] return; }
L_0033E3A8:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3B4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 43u, depth + 1u); else { c.pc = 0x00180690u; return; } if (c.pc != 0x0033E3B4u) [[unlikely]] return; }
L_0033E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 46u, depth + 1u); else { c.pc = 0x00180720u; return; } if (c.pc != 0x0033E3BCu) [[unlikely]] return; }
L_0033E3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 48u, depth + 1u); else { c.pc = 0x00180760u; return; } if (c.pc != 0x0033E3C4u) [[unlikely]] return; }
L_0033E3C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0020(c, 26u, depth + 1u); else { c.pc = 0x00180340u; return; } if (c.pc != 0x0033E3D0u) [[unlikely]] return; }
L_0033E3D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 2296u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0033E3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3E4u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0033E3E4u) [[unlikely]] return; }
L_0033E3E4:
    set32(c.r[4], c.r[29].w[0] + 2280u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3F4u); st32((c.r[29].w[0] + 2296u), 0u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x0033E3F4u) [[unlikely]] return; }
L_0033E3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3FCu); set32(c.r[4], ld32((c.r[29].w[0] + 2300u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0033E3FCu) [[unlikely]] return; }
L_0033E3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2304u);  c.pc = t; return; }
L_0033E420:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));  c.pc = t; return; }
L_0033E440:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
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
    set32(c.r[30], ld32((c.r[29].w[0] + 168u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E498u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 38u, depth + 1u); else { c.pc = 0x001303B0u; return; } if (c.pc != 0x0033E498u) [[unlikely]] return; }
L_0033E498:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4A4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0033E4A4u) [[unlikely]] return; }
L_0033E4A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27056u);
    set32(c.r[3], c.r[3].w[0] + 27144u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27204u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4D4u); st32((c.r[21].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x0033E4D4u) [[unlikely]] return; }
L_0033E4D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[21].w[0] + 96u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431A0000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E514u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132AA0u; return; } if (c.pc != 0x0033E514u) [[unlikely]] return; }
L_0033E514:
    st32((c.r[21].w[0] + 448u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = ld32((c.r[1].w[0] - 9736u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    set32(c.r[4], c.r[21].w[0] + 452u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[5], 0u + 11u);
    set32(c.r[7], 0u + 830u);
    set32(c.r[8], c.r[8].w[0] - 9792u);
    set32(c.r[9], c.r[9].w[0] - 9760u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E560u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 34u, depth + 1u); else { c.pc = 0x00134330u; return; } if (c.pc != 0x0033E560u) [[unlikely]] return; }
L_0033E560:
    st32((c.r[21].w[0] + 580u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 584u), c.r[16].w[0]);
    st32((c.r[21].w[0] + 588u), c.r[22].w[0]);
    st32((c.r[21].w[0] + 592u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 596u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[21].w[0] + 600u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 604u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 592u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E5B4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E598u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033E598u) [[unlikely]] return; }
L_0033E598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x439A0000u);  if (t) { goto L_0033E5B0; } }
    c.f[12] = 0u;
    c.f[13] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009B(c, 308u, depth + 1u); else { c.pc = 0x0036E860u; return; } if (c.pc != 0x0033E5B0u) [[unlikely]] return; }
L_0033E5B0:
    st32((c.r[21].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 1;
L_0033E5B4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0033E5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5C4u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0033E5C4u) [[unlikely]] return; }
L_0033E5C4:
    st32((c.r[21].w[0] + 604u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0033E5E8; } }
L_0033E5D0:
    set32(c.r[2], ld32((c.r[21].w[0] + 604u)));
    set32(c.r[3], c.r[30].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0033E5E8:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E5D0u | kUnwind; return; } goto L_0033E5D0; } }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0033E5F8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0033E630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033E724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27056u);
    set32(c.r[3], c.r[3].w[0] + 27144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27204u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E694; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E694; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E694u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E694u) [[unlikely]] return; }
L_0033E694:
    st32((c.r[16].w[0] + 448u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0033E6AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6ACu);  if (depth < kMaxDepth) unit_009B(c, 336u, depth + 1u); else { c.pc = 0x0036EC50u; return; } if (c.pc != 0x0033E6ACu) [[unlikely]] return; }
L_0033E6AC:
    set32(c.r[4], c.r[16].w[0] + 452u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6BCu); st32((c.r[16].w[0] + 596u), 0u);  if (depth < kMaxDepth) unit_000D(c, 54u, depth + 1u); else { c.pc = 0x00134720u; return; } if (c.pc != 0x0033E6BCu) [[unlikely]] return; }
L_0033E6BC:
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 311u, depth + 1u); else { c.pc = 0x00132C60u; return; } if (c.pc != 0x0033E6C8u) [[unlikely]] return; }
L_0033E6C8:
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x0033E6D4u) [[unlikely]] return; }
L_0033E6D4:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x0033E6E0u) [[unlikely]] return; }
L_0033E6E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] << 48;  if (t) { goto L_0033E710; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 21408u);
    set32(c.r[2], c.r[2].w[0] - 21320u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E70Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 15u, depth + 1u); else { c.pc = 0x00130130u; return; } if (c.pc != 0x0033E70Cu) [[unlikely]] return; }
L_0033E70C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0033E710:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033E728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E724u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0033E724u) [[unlikely]] return; }
L_0033E724:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0033E728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033E740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 24u, depth + 1u); else { c.pc = 0x00130260u; return; } if (c.pc != 0x0033E754u) [[unlikely]] return; }
L_0033E754:
    st32((c.r[16].w[0] + 380u), 0u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E764u); st8((c.r[16].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0033E764u) [[unlikely]] return; }
L_0033E764:
    st32((c.r[16].w[0] + 412u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033E780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E798u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 25u, depth + 1u); else { c.pc = 0x00130270u; return; } if (c.pc != 0x0033E798u) [[unlikely]] return; }
L_0033E798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 139u, depth + 1u); else { c.pc = 0x001A95F0u; return; } if (c.pc != 0x0033E7ACu) [[unlikely]] return; }
L_0033E7AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + 624u);  if (t) { goto L_0033E80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7C8u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0033E7C8u) [[unlikely]] return; }
L_0033E7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033E7DC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7DCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x0033E7DCu) [[unlikely]] return; }
L_0033E7DC:
    st32((c.r[16].w[0] + 448u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7ECu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x0033E7ECu) [[unlikely]] return; }
L_0033E7EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7FCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x0033E7FCu) [[unlikely]] return; }
L_0033E7FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E80Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x0033E80Cu) [[unlikely]] return; }
L_0033E80C:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E820u); c.r[5].d[0] = ld16((c.r[16].w[0] + 580u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E820u) [[unlikely]] return; }
L_0033E820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E828u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0033E828u) [[unlikely]] return; }
L_0033E828:
    set32(c.r[3], ld32((c.r[16].w[0] + 580u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 126u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0033E840; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E848u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0033E848u) [[unlikely]] return; }
L_0033E848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 186u, depth + 1u); else { c.pc = 0x0037DB10u; return; } if (c.pc != 0x0033E854u) [[unlikely]] return; }
L_0033E854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E860u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009F(c, 179u, depth + 1u); else { c.pc = 0x0037D9B0u; return; } if (c.pc != 0x0033E860u) [[unlikely]] return; }
L_0033E860:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] - 2448u);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E88Cu); st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0033E88Cu) [[unlikely]] return; }
L_0033E88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E894u); set32(c.r[4], c.r[16].w[0] + 452u);  if (depth < kMaxDepth) unit_000D(c, 68u, depth + 1u); else { c.pc = 0x001348C0u; return; } if (c.pc != 0x0033E894u) [[unlikely]] return; }
L_0033E894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E89Cu); set32(c.r[4], ld32((c.r[16].w[0] + 600u)));  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x0033E89Cu) [[unlikely]] return; }
L_0033E89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033E8B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 26u, depth + 1u); else { c.pc = 0x00130280u; return; } if (c.pc != 0x0033E8C4u) [[unlikely]] return; }
L_0033E8C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033E8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8D8u);  if (depth < kMaxDepth) unit_000C(c, 31u, depth + 1u); else { c.pc = 0x001302F0u; return; } if (c.pc != 0x0033E8D8u) [[unlikely]] return; }
L_0033E8D8:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 604u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 5;
L_0033E8EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E908; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E908u); c.r[5].d[0] = ld16((c.r[16].w[0] + 584u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E908u) [[unlikely]] return; }
L_0033E908:
    set32(c.r[3], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[2], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033E92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E920u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0033E920u) [[unlikely]] return; }
L_0033E920:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E92Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0033E92Cu) [[unlikely]] return; }
L_0033E92C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 2416u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E958u); st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0033E958u) [[unlikely]] return; }
L_0033E958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E960u); set32(c.r[4], c.r[16].w[0] + 452u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0033E960u) [[unlikely]] return; }
L_0033E960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033E970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E984u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 27u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0033E984u) [[unlikely]] return; }
L_0033E984:
    set32(c.r[4], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033E9A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9A0u); c.r[5].d[0] = ld16((c.r[16].w[0] + 588u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E9A0u) [[unlikely]] return; }
L_0033E9A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 588u)));
    set32(c.r[2], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033E9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9B8u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0033E9B8u) [[unlikely]] return; }
L_0033E9B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 211u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0033E9C4u) [[unlikely]] return; }
L_0033E9C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] - 2384u);
    set32(c.r[2], 0u + 2u);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9F0u); st32((c.r[16].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x0033E9F0u) [[unlikely]] return; }
L_0033E9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9F8u); set32(c.r[4], c.r[16].w[0] + 452u);  if (depth < kMaxDepth) unit_000D(c, 69u, depth + 1u); else { c.pc = 0x001348D0u; return; } if (c.pc != 0x0033E9F8u) [[unlikely]] return; }
L_0033E9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033EA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 32u, depth + 1u); else { c.pc = 0x00130300u; return; } if (c.pc != 0x0033EA2Cu) [[unlikely]] return; }
L_0033EA2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[17].w[0] + 320u);
    st32((c.r[17].w[0] + 396u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 380u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA44u); st8((c.r[17].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0033EA44u) [[unlikely]] return; }
L_0033EA44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033EA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033EAA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0033EAA4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA94u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x0033EA94u) [[unlikely]] return; }
L_0033EA94:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EAA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EAA4u) [[unlikely]] return; }
L_0033EAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EADCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302B0u; return; } if (c.pc != 0x0033EADCu) [[unlikely]] return; }
L_0033EADC:
    st32((c.r[17].w[0] + 396u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 320u);
    st32((c.r[17].w[0] + 380u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EAF0u); st8((c.r[17].w[0] + 376u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0033EAF0u) [[unlikely]] return; }
L_0033EAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033EB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 304u, depth + 1u); else { c.pc = 0x0012E500u; return; } if (c.pc != 0x0033EB24u) [[unlikely]] return; }
L_0033EB24:
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 400u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 596u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033EB80; } }
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB80u); set32(c.r[4], ld32((c.r[4].w[0] + 596u)));  if (depth < kMaxDepth) unit_009B(c, 344u, depth + 1u); else { c.pc = 0x0036ED90u; return; } if (c.pc != 0x0033EB80u) [[unlikely]] return; }
L_0033EB80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0033EB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x0033EBA4u) [[unlikely]] return; }
L_0033EBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EBBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EBBCu) [[unlikely]] return; }
L_0033EBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0033EC90u; return; } if (c.pc != 0x0033EBE4u) [[unlikely]] return; }
L_0033EBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EBFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EBFCu) [[unlikely]] return; }
L_0033EBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0033EC90u; return; } if (c.pc != 0x0033EC24u) [[unlikely]] return; }
L_0033EC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EC3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EC3Cu) [[unlikely]] return; }
L_0033EC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 300u, depth + 1u); else { c.pc = 0x0033EC90u; return; } if (c.pc != 0x0033EC64u) [[unlikely]] return; }
L_0033EC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EC7C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EC7Cu) [[unlikely]] return; }
L_0033EC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EC90:
    set32(c.r[3], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033ECA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 1;
L_0033ECA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ECB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], 0u + 15u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 2304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 126u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 131u);
    set32(c.r[6], 0u + 5u);
    if (c.r[5].d[0] == 0) c.r[8].d[0] = c.r[2].d[0];
    set32(c.r[7], 0u + 468u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[9], 0u + 132u);
    set32(c.r[5], c.r[5].w[0] - 2352u);
    set32(c.r[10], 0u + 127u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED10u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x0033ED10u) [[unlikely]] return; }
L_0033ED10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26880u);
    set32(c.r[3], c.r[3].w[0] + 26968u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27028u);
    set32(c.r[3], 0u + 32u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 608u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 609u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[18].w[0] + 612u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033ED60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED94u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033ED94u) [[unlikely]] return; }
L_0033ED94:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033EDD8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDB4u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0033EDB4u) [[unlikely]] return; }
L_0033EDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 117u, depth + 1u); else { c.pc = 0x0031CE50u; return; } if (c.pc != 0x0033EDBCu) [[unlikely]] return; }
L_0033EDBC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[19].w[0] + 609u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
L_0033EDD8:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EDE8u) [[unlikely]] return; }
L_0033EDE8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033EE34; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033EE34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE08u);  if (depth < kMaxDepth) unit_0087(c, 101u, depth + 1u); else { c.pc = 0x0031CBF0u; return; } if (c.pc != 0x0033EE08u) [[unlikely]] return; }
L_0033EE08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 355u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0033EE30; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 19ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0033EE34; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0033EE30:
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0033EE34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[5], 0u + 29u);  if (t) { goto L_0033EE80; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 612u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE58u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033EE58u) [[unlikely]] return; }
L_0033EE58:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EE68; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033EE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE70u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033EE70u) [[unlikely]] return; }
L_0033EE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033EE78u) [[unlikely]] return; }
L_0033EE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0033EF28; } }
L_0033EE80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], 0u + 30u);  if (t) { goto L_0033EECC; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 612u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEA4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033EEA4u) [[unlikely]] return; }
L_0033EEA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EEB4; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033EEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEBCu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033EEBCu) [[unlikely]] return; }
L_0033EEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033EEC4u) [[unlikely]] return; }
L_0033EEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EF24; } }
L_0033EECC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0033EF1C; } }
    set32(c.r[5], 0u + 31u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 612u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEF4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033EEF4u) [[unlikely]] return; }
L_0033EEF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EF04; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033EF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF0Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033EF0Cu) [[unlikely]] return; }
L_0033EF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033EF14u) [[unlikely]] return; }
L_0033EF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EF24; } }
L_0033EF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF24u);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0033EF24u) [[unlikely]] return; }
L_0033EF24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0033EF28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033EF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0033EF54u) [[unlikely]] return; }
L_0033EF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 114u, depth + 1u); else { c.pc = 0x0031CDC0u; return; } if (c.pc != 0x0033EF5Cu) [[unlikely]] return; }
L_0033EF5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033EFAC; } }
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 612u), c.r[5].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF84u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033EF84u) [[unlikely]] return; }
L_0033EF84:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EF94; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033EF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF9Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033EF9Cu) [[unlikely]] return; }
L_0033EF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033EFA4u) [[unlikely]] return; }
L_0033EFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033EFB8; } }
L_0033EFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFB4u);  if (depth < kMaxDepth) unit_008F(c, 268u, depth + 1u); else { c.pc = 0x0033E970u; return; } if (c.pc != 0x0033EFB4u) [[unlikely]] return; }
L_0033EFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033EFB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033EFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F084; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F000u) [[unlikely]] return; }
L_0033F000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033F08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F010u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0033F010u) [[unlikely]] return; }
L_0033F010:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F01Cu); c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033F01Cu) [[unlikely]] return; }
L_0033F01C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033F02C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033F02C:
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 30u);  if (t) { goto L_0033F054; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F04Cu);  if (depth < kMaxDepth) unit_008F(c, 268u, depth + 1u); else { c.pc = 0x0033E970u; return; } if (c.pc != 0x0033F04Cu) [[unlikely]] return; }
L_0033F04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F06C; } }
L_0033F054:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033F06C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F06Cu);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0033F06Cu) [[unlikely]] return; }
L_0033F06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F074u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F074u) [[unlikely]] return; }
L_0033F074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F07Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033F07Cu) [[unlikely]] return; }
L_0033F07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033F090; } }
L_0033F084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F08Cu);  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x0033F08Cu) [[unlikely]] return; }
L_0033F08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F090:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 15u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 2224u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[8], 0u + 126u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 131u);
    set32(c.r[6], 0u + 5u);
    if (c.r[5].d[0] == 0) c.r[8].d[0] = c.r[2].d[0];
    set32(c.r[7], 0u + 469u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[9], 0u + 127u);
    set32(c.r[5], c.r[5].w[0] - 2272u);
    set32(c.r[10], 0u + 132u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0F0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x0033F0F0u) [[unlikely]] return; }
L_0033F0F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 26704u);
    set32(c.r[2], c.r[2].w[0] + 26792u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26852u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[9], 0u + 132u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2192u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 468u);
    set32(c.r[8], 0u + 131u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F170u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x0033F170u) [[unlikely]] return; }
L_0033F170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 26528u);
    set32(c.r[2], c.r[2].w[0] + 26616u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26676u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F1CCu) [[unlikely]] return; }
L_0033F1CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F21C; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1F4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033F1F4u) [[unlikely]] return; }
L_0033F1F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F204; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033F204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F20Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F20Cu) [[unlikely]] return; }
L_0033F20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F214u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033F214u) [[unlikely]] return; }
L_0033F214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033F228; } }
L_0033F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F224u);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0033F224u) [[unlikely]] return; }
L_0033F224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033F228:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F2C4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F270u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F270u) [[unlikely]] return; }
L_0033F270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F280u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0033F280u) [[unlikely]] return; }
L_0033F280:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F28Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033F28Cu) [[unlikely]] return; }
L_0033F28C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033F29C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033F29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F2A4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F2A4u) [[unlikely]] return; }
L_0033F2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F2ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033F2ACu) [[unlikely]] return; }
L_0033F2AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033F2CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F2BCu);  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0033F2BCu) [[unlikely]] return; }
L_0033F2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033F2D0; } }
L_0033F2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F2CCu);  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x0033F2CCu) [[unlikely]] return; }
L_0033F2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F2D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 21u);
    set32(c.r[9], 0u + 132u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2160u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 613u);
    set32(c.r[8], 0u + 131u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F320u); st64((c.r[29].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_008F(c, 222u, depth + 1u); else { c.pc = 0x0033E440u; return; } if (c.pc != 0x0033F320u) [[unlikely]] return; }
L_0033F320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 26352u);
    set32(c.r[2], c.r[2].w[0] + 26440u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26500u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033F374u) [[unlikely]] return; }
L_0033F374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F37Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x0033F37Cu) [[unlikely]] return; }
L_0033F37C:
    c.r[4].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F3A0; } }
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033F3A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033F3A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033F3EC; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3C4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033F3C4u) [[unlikely]] return; }
L_0033F3C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F3D4; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033F3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3DCu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F3DCu) [[unlikely]] return; }
L_0033F3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033F3E4u) [[unlikely]] return; }
L_0033F3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033F3F8; } }
L_0033F3EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 260u, depth + 1u); else { c.pc = 0x0033E8B0u; return; } if (c.pc != 0x0033F3F4u) [[unlikely]] return; }
L_0033F3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033F3F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033F478; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F440u) [[unlikely]] return; }
L_0033F440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F450u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033F450u) [[unlikely]] return; }
L_0033F450:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033F460; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033F460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F468u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F468u) [[unlikely]] return; }
L_0033F468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F470u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033F470u) [[unlikely]] return; }
L_0033F470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033F484; } }
L_0033F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 329u, depth + 1u); else { c.pc = 0x0012E6B0u; return; } if (c.pc != 0x0033F480u) [[unlikely]] return; }
L_0033F480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0033F484:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F490:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[8], 0u + 830u);
    set32(c.r[2], 0u + 147u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 148u);
    set32(c.r[5], 0u + 188u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 2128u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[7], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F514u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033F514u) [[unlikely]] return; }
L_0033F514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 26176u);
    set32(c.r[2], c.r[2].w[0] + 26264u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26324u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F550:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[8], 0u + 830u);
    set32(c.r[2], 0u + 147u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 152u);
    set32(c.r[5], 0u + 616u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 2064u);
    set32(c.r[2], 0u + 148u);
    set32(c.r[7], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[14] = c.r[2].w[0];
    c.f[15] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5D8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033F5D8u) [[unlikely]] return; }
L_0033F5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 26000u);
    set32(c.r[2], c.r[2].w[0] + 26088u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26148u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[8], 0u + 830u);
    set32(c.r[2], 0u + 147u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 152u);
    set32(c.r[5], 0u + 617u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 2032u);
    set32(c.r[2], 0u + 148u);
    set32(c.r[7], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[14] = c.r[2].w[0];
    c.f[15] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F698u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033F698u) [[unlikely]] return; }
L_0033F698:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 25824u);
    set32(c.r[2], c.r[2].w[0] + 25912u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25972u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F6D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[8], 0u + 830u);
    set32(c.r[2], 0u + 147u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 152u);
    set32(c.r[5], 0u + 618u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 2000u);
    set32(c.r[2], 0u + 148u);
    set32(c.r[7], 0u + 7u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[14] = c.r[2].w[0];
    c.f[15] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F758u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033F758u) [[unlikely]] return; }
L_0033F758:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 25648u);
    set32(c.r[2], c.r[2].w[0] + 25736u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25796u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 151u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 148u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], 0u + 152u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[5], 0u + 616u);
    set32(c.r[6], c.r[6].w[0] - 1936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[7], 0u + 2u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[8], 0u + 460u);
    c.f[13] = c.f[12];
    set32(c.r[9], 0u + 830u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F814u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033F814u) [[unlikely]] return; }
L_0033F814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25472u);
    set32(c.r[3], c.r[3].w[0] + 25560u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25620u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F884u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F884u) [[unlikely]] return; }
L_0033F884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033F8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F894u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033F894u) [[unlikely]] return; }
L_0033F894:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F8A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0033F8A4u) [[unlikely]] return; }
L_0033F8A4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033F8B4; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033F8B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033F8D0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F8D0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033F8D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033F924; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033F924; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F8FCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033F8FCu) [[unlikely]] return; }
L_0033F8FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F90C; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033F90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F914u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F914u) [[unlikely]] return; }
L_0033F914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F91Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033F91Cu) [[unlikely]] return; }
L_0033F91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033F930; } }
L_0033F924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F92Cu);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033F92Cu) [[unlikely]] return; }
L_0033F92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F930:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F9C4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F970u) [[unlikely]] return; }
L_0033F970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033F9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F980u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0033F980u) [[unlikely]] return; }
L_0033F980:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F98Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033F98Cu) [[unlikely]] return; }
L_0033F98C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033F99C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033F99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9A4u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033F9A4u) [[unlikely]] return; }
L_0033F9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033F9ACu) [[unlikely]] return; }
L_0033F9AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033F9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9BCu);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033F9BCu) [[unlikely]] return; }
L_0033F9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033F9D0; } }
L_0033F9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F9CCu);  if (depth < kMaxDepth) unit_009A(c, 428u, depth + 1u); else { c.pc = 0x0036BC20u; return; } if (c.pc != 0x0033F9CCu) [[unlikely]] return; }
L_0033F9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033F9D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033F9E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 151u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], 0u + 148u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], 0u + 152u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[6], c.r[6].w[0] - 1920u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[7], 0u + 7u);
    c.f[13] = c.f[12];
    set32(c.r[8], 0u + 626u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[9], 0u + 830u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[11], c.r[11].w[0] - 1856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA68u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033FA68u) [[unlikely]] return; }
L_0033FA68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25296u);
    set32(c.r[3], c.r[3].w[0] + 25384u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25444u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033FAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAD4u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FAD4u) [[unlikely]] return; }
L_0033FAD4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAE8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033FAE8u) [[unlikely]] return; }
L_0033FAE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FAF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0033FAF8u) [[unlikely]] return; }
L_0033FAF8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033FB08; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033FB08:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033FB24; } }
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB24; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033FB24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033FB78; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FB78; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB50u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033FB50u) [[unlikely]] return; }
L_0033FB50:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB60; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033FB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB68u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033FB68u) [[unlikely]] return; }
L_0033FB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033FB70u) [[unlikely]] return; }
L_0033FB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033FB84; } }
L_0033FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB80u);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033FB80u) [[unlikely]] return; }
L_0033FB80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033FB84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033FC24; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FBD0u) [[unlikely]] return; }
L_0033FBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033FC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBE0u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0033FBE0u) [[unlikely]] return; }
L_0033FBE0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBECu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033FBECu) [[unlikely]] return; }
L_0033FBEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033FBFC; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033FBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC04u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033FC04u) [[unlikely]] return; }
L_0033FC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033FC0Cu) [[unlikely]] return; }
L_0033FC0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033FC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC1Cu);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033FC1Cu) [[unlikely]] return; }
L_0033FC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033FC30; } }
L_0033FC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC2Cu);  if (depth < kMaxDepth) unit_009A(c, 428u, depth + 1u); else { c.pc = 0x0036BC20u; return; } if (c.pc != 0x0033FC2Cu) [[unlikely]] return; }
L_0033FC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033FC30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033FC40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], 0u + 151u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 148u);
    set32(c.r[5], 0u + 616u);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[6], c.r[6].w[0] - 1824u);
    set32(c.r[2], 0u + 152u);
    set32(c.r[7], 0u + 7u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[8], 0u + 627u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[9], 0u + 830u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[11], c.r[11].w[0] - 1760u);
    c.f[14] = c.r[2].w[0];
    st64((c.r[29].w[0] + 48u), 0ull);
    c.f[15] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FCCCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033FCCCu) [[unlikely]] return; }
L_0033FCCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 25120u);
    set32(c.r[3], c.r[3].w[0] + 25208u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25268u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FCF4u); st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033FCF4u) [[unlikely]] return; }
L_0033FCF4:
    set32(c.r[5], ld32((c.r[2].w[0] + 272u)));
    set32(c.r[4], 0u + 826u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    set32(c.r[2], 0u + 640u);
    if (c.r[5].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    st32((c.r[1].w[0] - 1820u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033FD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD54u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FD54u) [[unlikely]] return; }
L_0033FD54:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033FD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD68u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033FD68u) [[unlikely]] return; }
L_0033FD68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0033FD78u) [[unlikely]] return; }
L_0033FD78:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033FD88; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033FD88:
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0033FDA4; } }
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FDA4; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033FDA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033FDF8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FDF8; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 14u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDD0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x0033FDD0u) [[unlikely]] return; }
L_0033FDD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FDE0; } }
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 1;
L_0033FDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDE8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033FDE8u) [[unlikely]] return; }
L_0033FDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDF0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0037D530u; return; } if (c.pc != 0x0033FDF0u) [[unlikely]] return; }
L_0033FDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033FE04; } }
L_0033FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE00u);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033FE00u) [[unlikely]] return; }
L_0033FE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033FE04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033FE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033FEA4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FE50u) [[unlikely]] return; }
L_0033FE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033FEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE60u);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x0033FE60u) [[unlikely]] return; }
L_0033FE60:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE6Cu); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x0033FE6Cu) [[unlikely]] return; }
L_0033FE6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033FE7C; } }
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_0033FE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE84u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0033FE84u) [[unlikely]] return; }
L_0033FE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 157u, depth + 1u); else { c.pc = 0x0037D560u; return; } if (c.pc != 0x0033FE8Cu) [[unlikely]] return; }
L_0033FE8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0033FEAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FE9Cu);  if (depth < kMaxDepth) unit_009B(c, 77u, depth + 1u); else { c.pc = 0x0036CB10u; return; } if (c.pc != 0x0033FE9Cu) [[unlikely]] return; }
L_0033FE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033FEB0; } }
L_0033FEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FEACu);  if (depth < kMaxDepth) unit_009A(c, 428u, depth + 1u); else { c.pc = 0x0036BC20u; return; } if (c.pc != 0x0033FEACu) [[unlikely]] return; }
L_0033FEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033FEB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033FEC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 151u);
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 148u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], 0u + 152u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[5], 0u + 617u);
    set32(c.r[6], c.r[6].w[0] - 1728u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[7], 0u + 4u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[8], 0u + 460u);
    c.f[13] = c.f[12];
    set32(c.r[9], 0u + 830u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[15] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[16] = c.r[2].w[0];
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF44u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_009B(c, 61u, depth + 1u); else { c.pc = 0x0036C870u; return; } if (c.pc != 0x0033FF44u) [[unlikely]] return; }
L_0033FF44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 24944u);
    set32(c.r[3], c.r[3].w[0] + 25032u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25092u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FA0000u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033FF90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFB0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0033FFB0u) [[unlikely]] return; }
L_0033FFB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0033FFC4u) [[unlikely]] return; }
L_0033FFC4:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0033FFDCu) [[unlikely]] return; }
L_0033FFDC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FFF8u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033FFF8u) [[unlikely]] return; }
L_0033FFF8:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0090(c, 1u, depth);
}

}
