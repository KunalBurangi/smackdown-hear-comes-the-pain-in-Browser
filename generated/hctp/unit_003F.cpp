#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 272, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001FC000;
    case 2u: goto L_001FC03C;
    case 3u: goto L_001FC040;
    case 4u: goto L_001FC04C;
    case 5u: goto L_001FC078;
    case 6u: goto L_001FC098;
    case 7u: goto L_001FC0A0;
    case 8u: goto L_001FC0F0;
    case 9u: goto L_001FC110;
    case 10u: goto L_001FC158;
    case 11u: goto L_001FC1B8;
    case 12u: goto L_001FC1E8;
    case 13u: goto L_001FC200;
    case 14u: goto L_001FC220;
    case 15u: goto L_001FC228;
    case 16u: goto L_001FC2D0;
    case 17u: goto L_001FC2E8;
    case 18u: goto L_001FC454;
    case 19u: goto L_001FC47C;
    case 20u: goto L_001FC4CC;
    case 21u: goto L_001FC4FC;
    case 22u: goto L_001FC530;
    case 23u: goto L_001FC560;
    case 24u: goto L_001FC588;
    case 25u: goto L_001FC5F0;
    case 26u: goto L_001FC650;
    case 27u: goto L_001FC738;
    case 28u: goto L_001FC760;
    case 29u: goto L_001FC788;
    case 30u: goto L_001FC880;
    case 31u: goto L_001FC89C;
    case 32u: goto L_001FC8C4;
    case 33u: goto L_001FC93C;
    case 34u: goto L_001FC9A8;
    case 35u: goto L_001FCA20;
    case 36u: goto L_001FCAE0;
    case 37u: goto L_001FCAF4;
    case 38u: goto L_001FCB2C;
    case 39u: goto L_001FCB50;
    case 40u: goto L_001FCB68;
    case 41u: goto L_001FCB8C;
    case 42u: goto L_001FCB9C;
    case 43u: goto L_001FCBB4;
    case 44u: goto L_001FCBD0;
    case 45u: goto L_001FCC1C;
    case 46u: goto L_001FCC2C;
    case 47u: goto L_001FCC44;
    case 48u: goto L_001FCC60;
    case 49u: goto L_001FCC8C;
    case 50u: goto L_001FCCA4;
    case 51u: goto L_001FCCCC;
    case 52u: goto L_001FCCD4;
    case 53u: goto L_001FCCD8;
    case 54u: goto L_001FCD10;
    case 55u: goto L_001FCD28;
    case 56u: goto L_001FCD58;
    case 57u: goto L_001FCD60;
    case 58u: goto L_001FCD68;
    case 59u: goto L_001FCD70;
    case 60u: goto L_001FCD78;
    case 61u: goto L_001FCD80;
    case 62u: goto L_001FCD88;
    case 63u: goto L_001FCD90;
    case 64u: goto L_001FCDA0;
    case 65u: goto L_001FCDAC;
    case 66u: goto L_001FCDBC;
    case 67u: goto L_001FCDC8;
    case 68u: goto L_001FCDD8;
    case 69u: goto L_001FCDF8;
    case 70u: goto L_001FCE00;
    case 71u: goto L_001FCE10;
    case 72u: goto L_001FCE18;
    case 73u: goto L_001FCE20;
    case 74u: goto L_001FCE28;
    case 75u: goto L_001FCE34;
    case 76u: goto L_001FCE3C;
    case 77u: goto L_001FCE44;
    case 78u: goto L_001FCE4C;
    case 79u: goto L_001FCE54;
    case 80u: goto L_001FCE6C;
    case 81u: goto L_001FCE7C;
    case 82u: goto L_001FCEA0;
    case 83u: goto L_001FCEB0;
    case 84u: goto L_001FCEC0;
    case 85u: goto L_001FCED0;
    case 86u: goto L_001FCEE0;
    case 87u: goto L_001FCEFC;
    case 88u: goto L_001FCF04;
    case 89u: goto L_001FCF28;
    case 90u: goto L_001FCF40;
    case 91u: goto L_001FCF50;
    case 92u: goto L_001FCF58;
    case 93u: goto L_001FCF74;
    case 94u: goto L_001FCF7C;
    case 95u: goto L_001FCFA4;
    case 96u: goto L_001FCFB4;
    case 97u: goto L_001FCFD0;
    case 98u: goto L_001FCFF0;
    case 99u: goto L_001FD000;
    case 100u: goto L_001FD008;
    case 101u: goto L_001FD010;
    case 102u: goto L_001FD020;
    case 103u: goto L_001FD028;
    case 104u: goto L_001FD040;
    case 105u: goto L_001FD0A0;
    case 106u: goto L_001FD104;
    case 107u: goto L_001FD120;
    case 108u: goto L_001FD150;
    case 109u: goto L_001FD158;
    case 110u: goto L_001FD170;
    case 111u: goto L_001FD184;
    case 112u: goto L_001FD18C;
    case 113u: goto L_001FD1B0;
    case 114u: goto L_001FD1C4;
    case 115u: goto L_001FD1D4;
    case 116u: goto L_001FD1EC;
    case 117u: goto L_001FD200;
    case 118u: goto L_001FD220;
    case 119u: goto L_001FD228;
    case 120u: goto L_001FD240;
    case 121u: goto L_001FD254;
    case 122u: goto L_001FD26C;
    case 123u: goto L_001FD284;
    case 124u: goto L_001FD298;
    case 125u: goto L_001FD2BC;
    case 126u: goto L_001FD2D0;
    case 127u: goto L_001FD2F4;
    case 128u: goto L_001FD308;
    case 129u: goto L_001FD32C;
    case 130u: goto L_001FD340;
    case 131u: goto L_001FD360;
    case 132u: goto L_001FD378;
    case 133u: goto L_001FD38C;
    case 134u: goto L_001FD3A4;
    case 135u: goto L_001FD3B8;
    case 136u: goto L_001FD3D0;
    case 137u: goto L_001FD3E4;
    case 138u: goto L_001FD3FC;
    case 139u: goto L_001FD420;
    case 140u: goto L_001FD440;
    case 141u: goto L_001FD470;
    case 142u: goto L_001FD488;
    case 143u: goto L_001FD4A0;
    case 144u: goto L_001FD4B0;
    case 145u: goto L_001FD4C0;
    case 146u: goto L_001FD4D0;
    case 147u: goto L_001FD4EC;
    case 148u: goto L_001FD4FC;
    case 149u: goto L_001FD510;
    case 150u: goto L_001FD530;
    case 151u: goto L_001FD54C;
    case 152u: goto L_001FD558;
    case 153u: goto L_001FD570;
    case 154u: goto L_001FD598;
    case 155u: goto L_001FD5B0;
    case 156u: goto L_001FD5E0;
    case 157u: goto L_001FD5F8;
    case 158u: goto L_001FD610;
    case 159u: goto L_001FD620;
    case 160u: goto L_001FD630;
    case 161u: goto L_001FD638;
    case 162u: goto L_001FD64C;
    case 163u: goto L_001FD660;
    case 164u: goto L_001FD678;
    case 165u: goto L_001FD68C;
    case 166u: goto L_001FD69C;
    case 167u: goto L_001FD6B0;
    case 168u: goto L_001FD6C4;
    case 169u: goto L_001FD6D4;
    case 170u: goto L_001FD6E8;
    case 171u: goto L_001FD6FC;
    case 172u: goto L_001FD710;
    case 173u: goto L_001FD73C;
    case 174u: goto L_001FD768;
    case 175u: goto L_001FD77C;
    case 176u: goto L_001FD7A0;
    case 177u: goto L_001FD7BC;
    case 178u: goto L_001FD7E8;
    case 179u: goto L_001FD800;
    case 180u: goto L_001FD824;
    case 181u: goto L_001FD82C;
    case 182u: goto L_001FD840;
    case 183u: goto L_001FD870;
    case 184u: goto L_001FD888;
    case 185u: goto L_001FD8A0;
    case 186u: goto L_001FD8B0;
    case 187u: goto L_001FD8CC;
    case 188u: goto L_001FD8E0;
    case 189u: goto L_001FD908;
    case 190u: goto L_001FD920;
    case 191u: goto L_001FD940;
    case 192u: goto L_001FD96C;
    case 193u: goto L_001FD9A0;
    case 194u: goto L_001FD9B4;
    case 195u: goto L_001FD9E0;
    case 196u: goto L_001FDA18;
    case 197u: goto L_001FDA50;
    case 198u: goto L_001FDA7C;
    case 199u: goto L_001FDA90;
    case 200u: goto L_001FDAC0;
    case 201u: goto L_001FDAD8;
    case 202u: goto L_001FDAF0;
    case 203u: goto L_001FDB10;
    case 204u: goto L_001FDB3C;
    case 205u: goto L_001FDB48;
    case 206u: goto L_001FDB8C;
    case 207u: goto L_001FDBA0;
    case 208u: goto L_001FDBA8;
    case 209u: goto L_001FDBB8;
    case 210u: goto L_001FDBC8;
    case 211u: goto L_001FDC10;
    case 212u: goto L_001FDC40;
    case 213u: goto L_001FDCD4;
    case 214u: goto L_001FDCE8;
    case 215u: goto L_001FDCF4;
    case 216u: goto L_001FDD0C;
    case 217u: goto L_001FDD30;
    case 218u: goto L_001FDD40;
    case 219u: goto L_001FDD60;
    case 220u: goto L_001FDD98;
    case 221u: goto L_001FDDD0;
    case 222u: goto L_001FDDF4;
    case 223u: goto L_001FDE10;
    case 224u: goto L_001FDE20;
    case 225u: goto L_001FDE3C;
    case 226u: goto L_001FDEEC;
    case 227u: goto L_001FDF04;
    case 228u: goto L_001FDF30;
    case 229u: goto L_001FDF48;
    case 230u: goto L_001FDF80;
    case 231u: goto L_001FE000;
    case 232u: goto L_001FE038;
    case 233u: goto L_001FE054;
    case 234u: goto L_001FE064;
    case 235u: goto L_001FE07C;
    case 236u: goto L_001FE0A0;
    case 237u: goto L_001FE0B0;
    case 238u: goto L_001FE0C0;
    case 239u: goto L_001FE0EC;
    case 240u: goto L_001FE0F0;
    case 241u: goto L_001FE12C;
    case 242u: goto L_001FE160;
    case 243u: goto L_001FE164;
    case 244u: goto L_001FE1D4;
    case 245u: goto L_001FE1E8;
    case 246u: goto L_001FE1FC;
    case 247u: goto L_001FE210;
    case 248u: goto L_001FE22C;
    case 249u: goto L_001FE258;
    case 250u: goto L_001FE360;
    case 251u: goto L_001FE370;
    case 252u: goto L_001FE384;
    case 253u: goto L_001FE394;
    case 254u: goto L_001FE39C;
    case 255u: goto L_001FE3A4;
    case 256u: goto L_001FE3B4;
    case 257u: goto L_001FE3BC;
    case 258u: goto L_001FE3D0;
    case 259u: goto L_001FE3F0;
    case 260u: goto L_001FE410;
    case 261u: goto L_001FE420;
    case 262u: goto L_001FE430;
    case 263u: goto L_001FE450;
    case 264u: goto L_001FE520;
    case 265u: goto L_001FE540;
    case 266u: goto L_001FE550;
    case 267u: goto L_001FE610;
    case 268u: goto L_001FE620;
    case 269u: goto L_001FE65C;
    case 270u: goto L_001FE668;
    case 271u: goto L_001FE674;
    case 272u: goto L_001FE678;
    case 273u: goto L_001FE690;
    case 274u: goto L_001FEA60;
    case 275u: goto L_001FEBB8;
    case 276u: goto L_001FEBD0;
    case 277u: goto L_001FED1C;
    case 278u: goto L_001FED34;
    case 279u: goto L_001FEE24;
    case 280u: goto L_001FEE38;
    case 281u: goto L_001FEE44;
    case 282u: goto L_001FEE60;
    case 283u: goto L_001FEE70;
    case 284u: goto L_001FEE80;
    case 285u: goto L_001FEE88;
    case 286u: goto L_001FEEA4;
    case 287u: goto L_001FEEB0;
    case 288u: goto L_001FEED0;
    case 289u: goto L_001FEEEC;
    case 290u: goto L_001FEF08;
    case 291u: goto L_001FEF40;
    case 292u: goto L_001FEFB4;
    case 293u: goto L_001FEFE8;
    case 294u: goto L_001FF044;
    case 295u: goto L_001FF058;
    case 296u: goto L_001FF094;
    case 297u: goto L_001FF0AC;
    case 298u: goto L_001FF0B4;
    case 299u: goto L_001FF0D0;
    case 300u: goto L_001FF0E0;
    case 301u: goto L_001FF0E8;
    case 302u: goto L_001FF100;
    case 303u: goto L_001FF110;
    case 304u: goto L_001FF120;
    case 305u: goto L_001FF130;
    case 306u: goto L_001FF150;
    case 307u: goto L_001FF160;
    case 308u: goto L_001FF170;
    case 309u: goto L_001FF17C;
    case 310u: goto L_001FF1A0;
    case 311u: goto L_001FF1D0;
    case 312u: goto L_001FF210;
    case 313u: goto L_001FF240;
    case 314u: goto L_001FF258;
    case 315u: goto L_001FF264;
    case 316u: goto L_001FF290;
    case 317u: goto L_001FF2F0;
    case 318u: goto L_001FF320;
    case 319u: goto L_001FF348;
    case 320u: goto L_001FF358;
    case 321u: goto L_001FF380;
    case 322u: goto L_001FF39C;
    case 323u: goto L_001FF3B0;
    case 324u: goto L_001FF3D0;
    case 325u: goto L_001FF3F0;
    case 326u: goto L_001FF410;
    case 327u: goto L_001FF474;
    case 328u: goto L_001FF48C;
    case 329u: goto L_001FF49C;
    case 330u: goto L_001FF4B0;
    case 331u: goto L_001FF4E0;
    case 332u: goto L_001FF4F8;
    case 333u: goto L_001FF510;
    case 334u: goto L_001FF524;
    case 335u: goto L_001FF530;
    case 336u: goto L_001FF53C;
    case 337u: goto L_001FF570;
    case 338u: goto L_001FF578;
    case 339u: goto L_001FF5C0;
    case 340u: goto L_001FF60C;
    case 341u: goto L_001FF618;
    case 342u: goto L_001FF624;
    case 343u: goto L_001FF63C;
    case 344u: goto L_001FF660;
    case 345u: goto L_001FF680;
    case 346u: goto L_001FF6A8;
    case 347u: goto L_001FF6DC;
    case 348u: goto L_001FF740;
    case 349u: goto L_001FF780;
    case 350u: goto L_001FF790;
    case 351u: goto L_001FF7A8;
    case 352u: goto L_001FF7C0;
    case 353u: goto L_001FF7E0;
    case 354u: goto L_001FF7EC;
    case 355u: goto L_001FF810;
    case 356u: goto L_001FF8C0;
    case 357u: goto L_001FF950;
    case 358u: goto L_001FF98C;
    case 359u: goto L_001FF9C0;
    case 360u: goto L_001FF9FC;
    case 361u: goto L_001FFA38;
    case 362u: goto L_001FFA98;
    case 363u: goto L_001FFAA4;
    case 364u: goto L_001FFAB0;
    case 365u: goto L_001FFABC;
    case 366u: goto L_001FFAC8;
    case 367u: goto L_001FFAE4;
    case 368u: goto L_001FFAF8;
    case 369u: goto L_001FFBF4;
    case 370u: goto L_001FFCD4;
    case 371u: goto L_001FFDBC;
    case 372u: goto L_001FFDCC;
    case 373u: goto L_001FFE44;
    case 374u: goto L_001FFE54;
    case 375u: goto L_001FFE98;
    default: bad_entry(c, 0x001FC000u); return;
    }
L_001FC000:
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[7].w[0] + 468u)));
    st32((c.r[7].w[0] + 468u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 468u), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] + 31416u)));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 256u));
    st8((c.r[7].w[0] + 256u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC04C; } }
L_001FC03C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FC040:
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBF98u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 431u, depth); } }
L_001FC04C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31416u)));
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 468u), c.r[2].w[0]);  if (t) { goto L_001FC098; } }
L_001FC078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC098u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FC098u) [[unlikely]] return; }
L_001FC098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC0A0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001FC0A0u) [[unlikely]] return; }
L_001FC0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FC0F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[5], c.r[5].w[0] + 28320u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 688u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 684u), c.r[4].w[0]);
    c.budget -= 15;
L_001FC0F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FC110:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], 0u + 6u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[4], 0u + 5u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] + 28320u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001FC1A4; } }
L_001FC158:
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001FC1A0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_001FC1A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001FC1A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001FC1A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FC1A0; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 624u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FC1A0; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FC1A0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001FC1A4:
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC158u | kUnwind; return; } goto L_001FC158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1B8u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FC1B8u) [[unlikely]] return; }
L_001FC1B8:
    c.r[3].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_001FC1DC; } }
    set32(c.r[3], c.r[2].w[0] - 30u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 26352u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FC1E0; } }
L_001FC1DC:
    set32(c.r[19], c.r[19].w[0] - 26368u);
    c.budget -= 1;
L_001FC1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC1E8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FC1E8u) [[unlikely]] return; }
L_001FC1E8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC1F8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC200u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FC200u) [[unlikely]] return; }
L_001FC200:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 152u);  if (t) { goto L_001FC214; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001FC214:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC220u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FC220u) [[unlikely]] return; }
L_001FC220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FCAA8; } }
L_001FC228:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FCAA4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001FC330; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FC284; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001FC2A0; } }
L_001FC284:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_001FC2A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = ld32((c.r[1].w[0] + 22152u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 22144u));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC2D0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0006(c, 197u, depth + 1u); else { c.pc = 0x0011A1D8u; return; } if (c.pc != 0x001FC2D0u) [[unlikely]] return; }
L_001FC2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC2E8u); st32((c.r[17].w[0] + 224u), c.f[0]);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0011A490u; return; } if (c.pc != 0x001FC2E8u) [[unlikely]] return; }
L_001FC2E8:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[17].w[0] + 232u), c.f[0]);
    st32((c.r[17].w[0] + 228u), 0u);
    c.f[0] = ld32((c.r[1].w[0] + 22136u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001FC8D8; } }
L_001FC330:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FC3F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC35C; } }
L_001FC35C:
    set32(c.r[3], ld32((c.r[17].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_001FC380; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 224u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 22128u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001FC390; } }
L_001FC380:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 224u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 22136u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001FC390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[4], c.r[4].w[0] - 25200u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 22120u));
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] - 128u);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 232u), c.f[0]);
    st32((c.r[17].w[0] + 228u), 0u);
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001FC8D8; } }
L_001FC3F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC4BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_001FC420; } }
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 1;
L_001FC420:
    set32(c.r[2], ld32((c.r[17].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FC444; } }
    c.f[0] = ld32((c.r[17].w[0] + 224u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.budget -= 6;
L_001FC444:
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC454u); st32((c.r[17].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FC454u) [[unlikely]] return; }
L_001FC454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC46C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 228u), c.f[0]);  if (t) { goto L_001FC474; } }
L_001FC46C:
    c.f[0] = 0u;
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.budget -= 2;
L_001FC474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC47Cu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FC47Cu) [[unlikely]] return; }
L_001FC47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FC488; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC488:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 768u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC8D8; } }
L_001FC4BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001FC558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4CCu);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FC4CCu) [[unlikely]] return; }
L_001FC4CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FC4F4; } }
    st32((c.r[17].w[0] + 224u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    st32((c.r[17].w[0] + 228u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[17].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC540; } }
L_001FC4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC4FCu);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001FC4FCu) [[unlikely]] return; }
L_001FC4FC:
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 224u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[17].w[0] + 228u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC530u); st32((c.r[17].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FC530u) [[unlikely]] return; }
L_001FC530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FC53C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FC53C:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FC540:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[3]);  if (t) { goto L_001FC8D8; } }
L_001FC558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC560u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FC560u) [[unlikely]] return; }
L_001FC560:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC618; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FC618; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC588u); set32(c.r[5], 0u + 4454u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001FC588u) [[unlikely]] return; }
L_001FC588:
    set32(c.r[2], c.r[17].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[17].w[0] + 208u);
    c.f[1] = ld32((c.r[1].w[0] + 22112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[18].w[0] - 2u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[18].w[0] - 2u);
    st32((c.r[17].w[0] + 224u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[1].w[0] + 22112u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22104u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC5F0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0038(c, 91u, depth + 1u); else { c.pc = 0x001E1610u; return; } if (c.pc != 0x001FC5F0u) [[unlikely]] return; }
L_001FC5F0:
    set32(c.r[6], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[3], 0u - 5u);
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[5]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FC8D8; } }
L_001FC618:
    set32(c.r[16], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[4], c.r[20].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] - 27904u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[6], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001FC690; } }
L_001FC650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 152u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] << 1);
    c.f[0] = ld32((c.r[1].w[0] + 22096u));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.budget -= 16;
L_001FC690:
    c.r[3].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC650u | kUnwind; return; } goto L_001FC650; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 27898u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.f[4] = ld32((c.r[1].w[0] + 22152u));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[5] = c.r[2].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    fpu_div(c, 2u, c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 140u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC738u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FC738u) [[unlikely]] return; }
L_001FC738:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_001FC758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25392u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001FC758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC760u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FC760u) [[unlikely]] return; }
L_001FC760:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_001FC780; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25296u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001FC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC788u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FC788u) [[unlikely]] return; }
L_001FC788:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { goto L_001FC7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 25344u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001FC7A8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001FC810; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[3] = ld32((c.r[1].w[0] + 22096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    c.f[1] = ld32((c.r[1].w[0] + 22152u));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.budget -= 24;
L_001FC810:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 232u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 22144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FC858; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22152u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001FC878; } }
L_001FC858:
    c.f[0] = ld32((c.r[1].w[0] + 22088u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FC878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22152u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001FC878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC880u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FC880u) [[unlikely]] return; }
L_001FC880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FC890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FC894; } }
L_001FC890:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FC894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC89Cu); st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FC89Cu) [[unlikely]] return; }
L_001FC89C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FC8BC; } }
    set32(c.r[2], c.r[17].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 4;
L_001FC8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC8C4u);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001FC8C4u) [[unlikely]] return; }
L_001FC8C4:
    st32((c.r[17].w[0] + 228u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001FC8D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8660u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FC934; } }
    set32(c.r[3], c.r[3].w[0] + 8662u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FC934; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8664u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FC934; } }
    set32(c.r[3], c.r[3].w[0] + 8666u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FCAA4; } }
L_001FC934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC93Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FC93Cu) [[unlikely]] return; }
L_001FC93C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FC984; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FC984; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 394u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 402u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 402u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_001FC984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8668u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FC9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FC9A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001FC9A8u) [[unlikely]] return; }
L_001FC9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8660u);
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8662u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8664u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 224u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[5].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[17].w[0] + 228u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCA20u); st32((c.r[17].w[0] + 232u), c.f[0]);  if (depth < kMaxDepth) unit_0038(c, 66u, depth + 1u); else { c.pc = 0x001E0DC0u; return; } if (c.pc != 0x001FCA20u) [[unlikely]] return; }
L_001FCA20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8666u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[17].w[0] + 228u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = ld32((c.r[1].w[0] + 22080u));
    set32(c.r[3], c.r[3].w[0] << 20);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 22144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FCA84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22152u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.f[0]);  if (t) { goto L_001FCAA4; } }
L_001FCA84:
    c.f[0] = ld32((c.r[1].w[0] + 22088u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FCAA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22152u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001FCAA4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001FCAA8:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FC228u | kUnwind; return; } goto L_001FC228; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001FCAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCAF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FCAF4u) [[unlikely]] return; }
L_001FCAF4:
    c.r[3].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FCB1C; } }
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 21504u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0]) & ~15u, c.r[2]);  if (t) { goto L_001FCB24; } }
L_001FCB1C:
    ld128((c.r[1].w[0] + 21968u) & ~15u, c.r[2]);
    st128((c.r[16].w[0]) & ~15u, c.r[2]);
    c.budget -= 2;
L_001FCB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB2Cu);  if (depth < kMaxDepth) unit_0048(c, 336u, depth + 1u); else { c.pc = 0x002239D0u; return; } if (c.pc != 0x001FCB2Cu) [[unlikely]] return; }
L_001FCB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001FCB38; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_001FCB38:
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FCB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 21u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB68u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x001FCB68u) [[unlikely]] return; }
L_001FCB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB8Cu); st8((c.r[1].w[0] - 1488u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FCB8Cu) [[unlikely]] return; }
L_001FCB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FCB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCB9Cu);  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002A3910u; return; } if (c.pc != 0x001FCB9Cu) [[unlikely]] return; }
L_001FCB9C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCBB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FCBB4u) [[unlikely]] return; }
L_001FCBB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FCBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FCC44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FCC1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FCC1C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC1Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FCC1Cu) [[unlikely]] return; }
L_001FCC1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC2Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x001FCC2Cu) [[unlikely]] return; }
L_001FCC2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FCC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FCC44u) [[unlikely]] return; }
L_001FCC44:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FCC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FCC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCC8Cu); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FCC8Cu) [[unlikely]] return; }
L_001FCC8C:
    set32(c.r[6], 0u + 256u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[7], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCA4u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013CEC0u; return; } if (c.pc != 0x001FCCA4u) [[unlikely]] return; }
L_001FCCA4:
    set32(c.r[2], 0u + 10240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27968u), c.r[2].w[0]);
    set32(c.r[3], 0u + 13312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 12544u);
    st32((c.r[1].w[0] + 27984u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCCCu); st32((c.r[1].w[0] + 27976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FCCCCu) [[unlikely]] return; }
L_001FCCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCCD4u);  if (depth < kMaxDepth) unit_0040(c, 213u, depth + 1u); else { c.pc = 0x00202800u; return; } if (c.pc != 0x001FCCD4u) [[unlikely]] return; }
L_001FCCD4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FCCD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 266u));
    set32(c.r[2], 0u + 25500u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001FCD14; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[4].w[0] + 256u);  if (t) { goto L_001FCD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD10u);  if (depth < kMaxDepth) unit_003D(c, 85u, depth + 1u); else { c.pc = 0x001F5410u; return; } if (c.pc != 0x001FCD10u) [[unlikely]] return; }
L_001FCD10:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001FCD14:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCCD8u | kUnwind; return; } goto L_001FCCD8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FCD28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 180u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FCD28u | kUnwind; return; } goto L_001FCD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD58u);  if (depth < kMaxDepth) unit_0040(c, 104u, depth + 1u); else { c.pc = 0x00201C00u; return; } if (c.pc != 0x001FCD58u) [[unlikely]] return; }
L_001FCD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD60u);  if (depth < kMaxDepth) unit_0040(c, 116u, depth + 1u); else { c.pc = 0x00201CE0u; return; } if (c.pc != 0x001FCD60u) [[unlikely]] return; }
L_001FCD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD68u);  if (depth < kMaxDepth) unit_0040(c, 100u, depth + 1u); else { c.pc = 0x00201BC0u; return; } if (c.pc != 0x001FCD68u) [[unlikely]] return; }
L_001FCD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD70u);  if (depth < kMaxDepth) unit_0040(c, 96u, depth + 1u); else { c.pc = 0x00201B70u; return; } if (c.pc != 0x001FCD70u) [[unlikely]] return; }
L_001FCD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD78u);  if (depth < kMaxDepth) unit_0040(c, 92u, depth + 1u); else { c.pc = 0x00201B20u; return; } if (c.pc != 0x001FCD78u) [[unlikely]] return; }
L_001FCD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD80u);  if (depth < kMaxDepth) unit_0040(c, 120u, depth + 1u); else { c.pc = 0x00201D20u; return; } if (c.pc != 0x001FCD80u) [[unlikely]] return; }
L_001FCD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD88u);  if (depth < kMaxDepth) unit_0040(c, 124u, depth + 1u); else { c.pc = 0x00201D60u; return; } if (c.pc != 0x001FCD88u) [[unlikely]] return; }
L_001FCD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCD90u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FCD90u) [[unlikely]] return; }
L_001FCD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FCDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 91u, depth + 1u); else { c.pc = 0x001F5640u; return; } if (c.pc != 0x001FCDA0u) [[unlikely]] return; }
L_001FCDA0:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_001FCDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FCDACu) [[unlikely]] return; }
L_001FCDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FCDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 100u, depth + 1u); else { c.pc = 0x001F5840u; return; } if (c.pc != 0x001FCDBCu) [[unlikely]] return; }
L_001FCDBC:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_001FCDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FCDC8u) [[unlikely]] return; }
L_001FCDC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FCDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 113u, depth + 1u); else { c.pc = 0x001F5B70u; return; } if (c.pc != 0x001FCDD8u) [[unlikely]] return; }
L_001FCDD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 32767u);
    st32((c.r[1].w[0] + 26840u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26844u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCDF8u); st32((c.r[1].w[0] + 26848u), 0u);  if (depth < kMaxDepth) unit_003F(c, 202u, depth + 1u); else { c.pc = 0x001FDAF0u; return; } if (c.pc != 0x001FCDF8u) [[unlikely]] return; }
L_001FCDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE00u);  if (depth < kMaxDepth) unit_009D(c, 348u, depth + 1u); else { c.pc = 0x00377730u; return; } if (c.pc != 0x001FCE00u) [[unlikely]] return; }
L_001FCE00:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE10u); st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 210u, depth + 1u); else { c.pc = 0x001FA700u; return; } if (c.pc != 0x001FCE10u) [[unlikely]] return; }
L_001FCE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE18u);  if (depth < kMaxDepth) unit_003F(c, 143u, depth + 1u); else { c.pc = 0x001FD4A0u; return; } if (c.pc != 0x001FCE18u) [[unlikely]] return; }
L_001FCE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE20u);  if (depth < kMaxDepth) unit_003F(c, 158u, depth + 1u); else { c.pc = 0x001FD610u; return; } if (c.pc != 0x001FCE20u) [[unlikely]] return; }
L_001FCE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE28u);  if (depth < kMaxDepth) unit_003F(c, 185u, depth + 1u); else { c.pc = 0x001FD8A0u; return; } if (c.pc != 0x001FCE28u) [[unlikely]] return; }
L_001FCE28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE34u); set32(c.r[4], ld32((c.r[1].w[0] + 26472u)));  if (depth < kMaxDepth) unit_002B(c, 285u, depth + 1u); else { c.pc = 0x001AE3A0u; return; } if (c.pc != 0x001FCE34u) [[unlikely]] return; }
L_001FCE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE3Cu);  if (depth < kMaxDepth) unit_004C(c, 140u, depth + 1u); else { c.pc = 0x00231400u; return; } if (c.pc != 0x001FCE3Cu) [[unlikely]] return; }
L_001FCE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE44u);  if (depth < kMaxDepth) unit_0028(c, 372u, depth + 1u); else { c.pc = 0x001A3AC0u; return; } if (c.pc != 0x001FCE44u) [[unlikely]] return; }
L_001FCE44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE4Cu);  if (depth < kMaxDepth) unit_003F(c, 224u, depth + 1u); else { c.pc = 0x001FDE20u; return; } if (c.pc != 0x001FCE4Cu) [[unlikely]] return; }
L_001FCE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE54u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FCE54u) [[unlikely]] return; }
L_001FCE54:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001FCE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE6Cu);  if (depth < kMaxDepth) unit_004C(c, 20u, depth + 1u); else { c.pc = 0x002304B0u; return; } if (c.pc != 0x001FCE6Cu) [[unlikely]] return; }
L_001FCE6C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCE7Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FCE7Cu) [[unlikely]] return; }
L_001FCE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FCEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FCEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FCEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001FCED0:
    c.r[2].d[0] = c.r[5].d[0] ^ 7ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001FCEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCEFCu); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_0068(c, 213u, depth + 1u); else { c.pc = 0x002A32D0u; return; } if (c.pc != 0x001FCEFCu) [[unlikely]] return; }
L_001FCEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF04u);  if (depth < kMaxDepth) unit_0078(c, 276u, depth + 1u); else { c.pc = 0x002E2760u; return; } if (c.pc != 0x001FCF04u) [[unlikely]] return; }
L_001FCF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FCFB8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], 0u + 2u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_001FCF30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 48u, depth + 1u); else { c.pc = 0x001FCC60u; return; } if (c.pc != 0x001FCF28u) [[unlikely]] return; }
L_001FCF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001FCFBC; } }
L_001FCF30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FCF84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF40u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001FCF40u) [[unlikely]] return; }
L_001FCF40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF50u); st32((c.r[1].w[0] + 17268u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_003F(c, 268u, depth + 1u); else { c.pc = 0x001FE620u; return; } if (c.pc != 0x001FCF50u) [[unlikely]] return; }
L_001FCF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF58u);  if (depth < kMaxDepth) unit_003E(c, 234u, depth + 1u); else { c.pc = 0x001FA9F0u; return; } if (c.pc != 0x001FCF58u) [[unlikely]] return; }
L_001FCF58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FCF74; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FCF74u) [[unlikely]] return; }
L_001FCF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCF7Cu);  if (depth < kMaxDepth) unit_0078(c, 127u, depth + 1u); else { c.pc = 0x002E1690u; return; } if (c.pc != 0x001FCF7Cu) [[unlikely]] return; }
L_001FCF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FCFB8; } }
L_001FCF84:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FCFB8; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 26840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FCFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFA4u);  if (depth < kMaxDepth) unit_0012(c, 2u, depth + 1u); else { c.pc = 0x00148010u; return; } if (c.pc != 0x001FCFA4u) [[unlikely]] return; }
L_001FCFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FCFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFB4u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_0068(c, 226u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x001FCFB4u) [[unlikely]] return; }
L_001FCFB4:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001FCFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FCFBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FCFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FCFF0u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001FCFF0u) [[unlikely]] return; }
L_001FCFF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD000u); st32((c.r[1].w[0] + 17268u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_003F(c, 288u, depth + 1u); else { c.pc = 0x001FEED0u; return; } if (c.pc != 0x001FD000u) [[unlikely]] return; }
L_001FD000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD008u);  if (depth < kMaxDepth) unit_003F(c, 302u, depth + 1u); else { c.pc = 0x001FF100u; return; } if (c.pc != 0x001FD008u) [[unlikely]] return; }
L_001FD008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD010u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD010u) [[unlikely]] return; }
L_001FD010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD020u);  if (depth < kMaxDepth) unit_003F(c, 39u, depth + 1u); else { c.pc = 0x001FCB50u; return; } if (c.pc != 0x001FD020u) [[unlikely]] return; }
L_001FD020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD028u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FD028u) [[unlikely]] return; }
L_001FD028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FD040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 7824u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] - 12000u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26844u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26840u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FD08C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26840u), c.r[2].w[0]);
    c.budget -= 3;
L_001FD08C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001FD0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 7824u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26848u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26840u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FD0EC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26840u), c.r[2].w[0]);
    c.budget -= 3;
L_001FD0EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD104u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FD104u) [[unlikely]] return; }
L_001FD104:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FD108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FD120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD150u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FD150u) [[unlikely]] return; }
L_001FD150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD158u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD158u) [[unlikely]] return; }
L_001FD158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD170; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD170u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001FD170u) [[unlikely]] return; }
L_001FD170:
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD184u) [[unlikely]] return; }
L_001FD184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD18Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FD18Cu) [[unlikely]] return; }
L_001FD18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FD1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x001FD040u; return; } if (c.pc != 0x001FD1C4u) [[unlikely]] return; }
L_001FD1C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1D4u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FD1D4u) [[unlikely]] return; }
L_001FD1D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[5].w[0] + 22160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD1ECu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 293u, depth + 1u); else { c.pc = 0x00147C00u; return; } if (c.pc != 0x001FD1ECu) [[unlikely]] return; }
L_001FD1EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD220u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FD220u) [[unlikely]] return; }
L_001FD220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD228u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD228u) [[unlikely]] return; }
L_001FD228:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FD270; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD240u) [[unlikely]] return; }
L_001FD240:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD254u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD254u) [[unlikely]] return; }
L_001FD254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD264; } }
L_001FD25C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001FD264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD26Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x001FD26Cu) [[unlikely]] return; }
L_001FD26C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FD270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD284u); st32((c.r[1].w[0] + 28288u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD284u) [[unlikely]] return; }
L_001FD284:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD298u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD298u) [[unlikely]] return; }
L_001FD298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD2A4; } }
L_001FD2A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FD2A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2BCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD2BCu) [[unlikely]] return; }
L_001FD2BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD2D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD2D0u) [[unlikely]] return; }
L_001FD2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD2DC; } }
L_001FD2D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FD2DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD2F4u); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD2F4u) [[unlikely]] return; }
L_001FD2F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD308u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD308u) [[unlikely]] return; }
L_001FD308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD314; } }
L_001FD310:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FD314:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD32Cu); st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD32Cu) [[unlikely]] return; }
L_001FD32C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD340u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD340u) [[unlikely]] return; }
L_001FD340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD34C; } }
L_001FD348:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FD34C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 32u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD360u); st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD360u) [[unlikely]] return; }
L_001FD360:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FD3A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD378u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD378u) [[unlikely]] return; }
L_001FD378:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD38Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD38Cu) [[unlikely]] return; }
L_001FD38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD39C; } }
L_001FD394:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001FD39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x001FD3A4u) [[unlikely]] return; }
L_001FD3A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FD3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3B8u); st32((c.r[1].w[0] + 28296u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD3B8u) [[unlikely]] return; }
L_001FD3B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FD400; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3D0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD3D0u) [[unlikely]] return; }
L_001FD3D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FD3EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD3E4u) [[unlikely]] return; }
L_001FD3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD3F4; } }
L_001FD3EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001FD3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD3FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 38u, depth + 1u); else { c.pc = 0x001688D0u; return; } if (c.pc != 0x001FD3FCu) [[unlikely]] return; }
L_001FD3FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FD400:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[1].w[0] + 28304u), c.r[18].w[0]);  if (t) { goto L_001FD420; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD420u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD420u) [[unlikely]] return; }
L_001FD420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD488; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD470u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 105u, depth + 1u); else { c.pc = 0x001FD0A0u; return; } if (c.pc != 0x001FD470u) [[unlikely]] return; }
L_001FD470:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FD48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD488u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FD488u) [[unlikely]] return; }
L_001FD488:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD48C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4B0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FD4B0u) [[unlikely]] return; }
L_001FD4B0:
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4C0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_002B(c, 380u, depth + 1u); else { c.pc = 0x001AEE30u; return; } if (c.pc != 0x001FD4C0u) [[unlikely]] return; }
L_001FD4C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FD4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x001FD040u; return; } if (c.pc != 0x001FD4ECu) [[unlikely]] return; }
L_001FD4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD4FCu); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FD4FCu) [[unlikely]] return; }
L_001FD4FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD510u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 293u, depth + 1u); else { c.pc = 0x00147C00u; return; } if (c.pc != 0x001FD510u) [[unlikely]] return; }
L_001FD510:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD54Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FD54Cu) [[unlikely]] return; }
L_001FD54C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FD558u) [[unlikely]] return; }
L_001FD558:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001FD574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FD570u) [[unlikely]] return; }
L_001FD570:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FD574:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_001FD598; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD598u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD598u) [[unlikely]] return; }
L_001FD598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5E0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 105u, depth + 1u); else { c.pc = 0x001FD0A0u; return; } if (c.pc != 0x001FD5E0u) [[unlikely]] return; }
L_001FD5E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FD5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD5F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FD5F8u) [[unlikely]] return; }
L_001FD5F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD620u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD620u) [[unlikely]] return; }
L_001FD620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FD630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD630u);  if (depth < kMaxDepth) unit_003F(c, 113u, depth + 1u); else { c.pc = 0x001FD1B0u; return; } if (c.pc != 0x001FD630u) [[unlikely]] return; }
L_001FD630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD638u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FD638u) [[unlikely]] return; }
L_001FD638:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_001FD670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD64Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FD64Cu) [[unlikely]] return; }
L_001FD64C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FD66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD660u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FD660u) [[unlikely]] return; }
L_001FD660:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD694; } }
L_001FD66C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_001FD670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD678u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD678u) [[unlikely]] return; }
L_001FD678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FD6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD68Cu); set32(c.r[5], c.r[5].w[0] + 22176u);  if (depth < kMaxDepth) unit_003F(c, 146u, depth + 1u); else { c.pc = 0x001FD4D0u; return; } if (c.pc != 0x001FD68Cu) [[unlikely]] return; }
L_001FD68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001FD700; } }
L_001FD694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD69Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FD69Cu) [[unlikely]] return; }
L_001FD69C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 39u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_001FD6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6B0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD6B0u) [[unlikely]] return; }
L_001FD6B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FD6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6C4u); set32(c.r[5], c.r[5].w[0] + 22192u);  if (depth < kMaxDepth) unit_003F(c, 146u, depth + 1u); else { c.pc = 0x001FD4D0u; return; } if (c.pc != 0x001FD6C4u) [[unlikely]] return; }
L_001FD6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FD6FC; } }
L_001FD6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6D4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FD6D4u) [[unlikely]] return; }
L_001FD6D4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_001FD6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD6E8u) [[unlikely]] return; }
L_001FD6E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FD6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD6FCu); set32(c.r[5], c.r[5].w[0] + 22208u);  if (depth < kMaxDepth) unit_003F(c, 146u, depth + 1u); else { c.pc = 0x001FD4D0u; return; } if (c.pc != 0x001FD6FCu) [[unlikely]] return; }
L_001FD6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001FD700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FD710:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD73Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x001FD040u; return; } if (c.pc != 0x001FD73Cu) [[unlikely]] return; }
L_001FD73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 7872u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD768u); set32(c.r[5], c.r[5].w[0] + 22224u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x001FD768u) [[unlikely]] return; }
L_001FD768:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD77Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 293u, depth + 1u); else { c.pc = 0x00147C00u; return; } if (c.pc != 0x001FD77Cu) [[unlikely]] return; }
L_001FD77C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001FD7A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x001FD7BCu) [[unlikely]] return; }
L_001FD7BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FD7D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 26856u), c.r[16].w[0]);  if (t) { goto L_001FD808; } }
L_001FD7D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = c.r[2].d[0] | 4576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD7E8u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD7E8u) [[unlikely]] return; }
L_001FD7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FD800; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 185u, depth + 1u); else { c.pc = 0x0021E3F0u; return; } if (c.pc != 0x001FD800u) [[unlikely]] return; }
L_001FD800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31072u), c.r[2].w[0]);
    c.budget -= 2;
L_001FD808:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FD824; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD824u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FD824u) [[unlikely]] return; }
L_001FD824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD82Cu);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FD82Cu) [[unlikely]] return; }
L_001FD82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FD888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD870u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 105u, depth + 1u); else { c.pc = 0x001FD0A0u; return; } if (c.pc != 0x001FD870u) [[unlikely]] return; }
L_001FD870:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FD88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FD888u) [[unlikely]] return; }
L_001FD888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FD88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FD8A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8B0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD8B0u) [[unlikely]] return; }
L_001FD8B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FD8CC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD8CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 172u, depth + 1u); else { c.pc = 0x001FD710u; return; } if (c.pc != 0x001FD8CCu) [[unlikely]] return; }
L_001FD8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FD8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD908u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FD908u) [[unlikely]] return; }
L_001FD908:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001FD920; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD920u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 172u, depth + 1u); else { c.pc = 0x001FD710u; return; } if (c.pc != 0x001FD920u) [[unlikely]] return; }
L_001FD920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FD940:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD96Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x001FD040u; return; } if (c.pc != 0x001FD96Cu) [[unlikely]] return; }
L_001FD96C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 7888u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8650u);
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD9A0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00201AE0u; return; } if (c.pc != 0x001FD9A0u) [[unlikely]] return; }
L_001FD9A0:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FD9B4u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 293u, depth + 1u); else { c.pc = 0x00147C00u; return; } if (c.pc != 0x001FD9B4u) [[unlikely]] return; }
L_001FD9B4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001FD9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA18u); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_003E(c, 290u, depth + 1u); else { c.pc = 0x001FB150u; return; } if (c.pc != 0x001FDA18u) [[unlikely]] return; }
L_001FDA18:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDA50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA50u); set32(c.r[4], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDA50u) [[unlikely]] return; }
L_001FDA50:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 26864u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FDA7C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDA7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDA7Cu) [[unlikely]] return; }
L_001FDA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FDA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FDAD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAC0u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 105u, depth + 1u); else { c.pc = 0x001FD0A0u; return; } if (c.pc != 0x001FDAC0u) [[unlikely]] return; }
L_001FDAC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FDADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDAD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FDAD8u) [[unlikely]] return; }
L_001FDAD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FDADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDAF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 32767u);
    st32((c.r[1].w[0] + 26872u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26880u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 26876u), c.r[3].w[0]);  c.pc = t; return; }
L_001FDB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB3Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x001FD040u; return; } if (c.pc != 0x001FDB3Cu) [[unlikely]] return; }
L_001FDB3C:
    set32(c.r[4], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB48u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001FDB48u) [[unlikely]] return; }
L_001FDB48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7936u);
    set32(c.r[3], c.r[3].w[0] - 7920u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26872u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FDBC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDB8Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FDB8Cu) [[unlikely]] return; }
L_001FDB8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBA0u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FDBA0u) [[unlikely]] return; }
L_001FDBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBA8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FDBA8u) [[unlikely]] return; }
L_001FDBA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FDBB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBB8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0029(c, 74u, depth + 1u); else { c.pc = 0x001A4DD0u; return; } if (c.pc != 0x001FDBB8u) [[unlikely]] return; }
L_001FDBB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDBC8u); st32((c.r[1].w[0] + 26888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FDBC8u) [[unlikely]] return; }
L_001FDBC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26876u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26872u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FDBF0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26872u), c.r[2].w[0]);
    c.budget -= 3;
L_001FDBF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 266u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDC10u); set32(c.r[4], ld32((c.r[1].w[0] + 26888u)));  if (depth < kMaxDepth) unit_0029(c, 88u, depth + 1u); else { c.pc = 0x001A4F50u; return; } if (c.pc != 0x001FDC10u) [[unlikely]] return; }
L_001FDC10:
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FDC40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FDD0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 7936u);
    set32(c.r[2], c.r[2].w[0] - 7920u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26880u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26872u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FDC9C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26872u), c.r[2].w[0]);
    c.budget -= 3;
L_001FDC9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26872u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { goto L_001FDCE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26888u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDCD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FDCD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDCD4u) [[unlikely]] return; }
L_001FDCD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26888u), 0u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
L_001FDCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001FDCE8u) [[unlikely]] return; }
L_001FDCE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDCF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 105u, depth + 1u); else { c.pc = 0x001FD0A0u; return; } if (c.pc != 0x001FDCF4u) [[unlikely]] return; }
L_001FDCF4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FDD10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FDD0Cu) [[unlikely]] return; }
L_001FDD0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FDD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FDD30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FDD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD60u); set32(c.r[4], ld32((c.r[1].w[0] + 26888u)));  if (depth < kMaxDepth) unit_0029(c, 89u, depth + 1u); else { c.pc = 0x001A4F70u; return; } if (c.pc != 0x001FDD60u) [[unlikely]] return; }
L_001FDD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FDE10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[1].w[0] + 26888u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 8384u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[8], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDD98u); set32(c.r[4], c.r[3].w[0] + 256u);  if (depth < kMaxDepth) unit_003E(c, 290u, depth + 1u); else { c.pc = 0x001FB150u; return; } if (c.pc != 0x001FDD98u) [[unlikely]] return; }
L_001FDD98:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDDD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDD0u); set32(c.r[4], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDDD0u) [[unlikely]] return; }
L_001FDDD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 26864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDDF4u); set32(c.r[4], ld32((c.r[1].w[0] + 26888u)));  if (depth < kMaxDepth) unit_0029(c, 90u, depth + 1u); else { c.pc = 0x001A4FB0u; return; } if (c.pc != 0x001FDDF4u) [[unlikely]] return; }
L_001FDDF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FDE10; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDE10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FDE10u) [[unlikely]] return; }
L_001FDE10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FDE20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_001FDE3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld16((c.r[6].w[0] + 266u));
    set32(c.r[3], 0u + 25500u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 260u);  if (t) { goto L_001FDF48; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], ld32((c.r[6].w[0] + 260u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FDE7C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001FDE7C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FDE7C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001FDF48; } }
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FDF48; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FDEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 10u);  if (t) { goto L_001FDEBC; } }
L_001FDEAC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001FDEBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001FDEBC; } }
L_001FDEBC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] ^ 25500ull;  if (t) { goto L_001FDF0C; } }
    c.r[3].d[0] = c.r[5].d[0] ^ 25500ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDEDC; } }
    c.r[3].d[0] = c.r[5].sd[0] < 10000ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_001FDEDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FDF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDEECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FDEECu) [[unlikely]] return; }
L_001FDEEC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FDF48; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 191u, depth + 1u); else { c.pc = 0x001FD940u; return; } if (c.pc != 0x001FDF04u) [[unlikely]] return; }
L_001FDF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_001FDF4C; } }
L_001FDF0C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FDF20; } }
    c.r[3].d[0] = c.r[5].sd[0] < 10000ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_001FDF20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_001FDF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FDF30u) [[unlikely]] return; }
L_001FDF30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FDF48; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FDF48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 203u, depth + 1u); else { c.pc = 0x001FDB10u; return; } if (c.pc != 0x001FDF48u) [[unlikely]] return; }
L_001FDF48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FDF4C:
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDE3Cu | kUnwind; return; } goto L_001FDE3C; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDE3Cu | kUnwind; return; } goto L_001FDE3C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FDF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 25500u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] << 5);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 8650u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FE084; } }
    set32(c.r[3], c.r[3].w[0] + 26864u);
    set32(c.r[16], c.r[3].w[0] + c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FE084; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FDFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 10u);  if (t) { goto L_001FE010; } }
L_001FDFEC:
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8644u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001FE00C; } }
    goto L_001FE004;
L_001FE000:
    c.budget -= 1;
L_001FE004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE010; } }
L_001FE00C:
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_001FE010:
    c.r[2].d[0] = c.r[4].d[0] ^ 25500ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FE028; } }
    c.r[2].d[0] = c.r[4].sd[0] < 10000ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_001FE028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FE05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE038u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FE038u) [[unlikely]] return; }
L_001FE038:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FE080; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE054u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 203u, depth + 1u); else { c.pc = 0x001FDB10u; return; } if (c.pc != 0x001FE054u) [[unlikely]] return; }
L_001FE054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FE07C; } }
L_001FE05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE064u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FE064u) [[unlikely]] return; }
L_001FE064:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FE07C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE07Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 191u, depth + 1u); else { c.pc = 0x001FD940u; return; } if (c.pc != 0x001FE07Cu) [[unlikely]] return; }
L_001FE07C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001FE080:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FE084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FE0A0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDF80u | kUnwind; return; } goto L_001FDF80; }
L_001FE0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE0C0u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x001FE0C0u) [[unlikely]] return; }
L_001FE0C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25254u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 25200u);
    set32(c.r[3], c.r[3].w[0] + 22232u);
    c.budget -= 11;
L_001FE0EC:
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_001FE0F0:
    set32(c.r[2], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; c.r[4].d[0] = c.r[8].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE0F0u | kUnwind; return; } goto L_001FE0F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE0ECu | kUnwind; return; } goto L_001FE0EC; } }
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE12Cu); st16((c.r[1].w[0] + 26904u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x001FE12Cu) [[unlikely]] return; }
L_001FE12C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 26904u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 25254u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] - 25200u);
    set32(c.r[3], c.r[3].w[0] + 22232u);
    c.budget -= 13;
L_001FE160:
    c.r[4].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 1;
L_001FE164:
    set32(c.r[2], c.r[9].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[8].d[0]; c.r[4].d[0] = c.r[9].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE164u | kUnwind; return; } goto L_001FE164; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE160u | kUnwind; return; } goto L_001FE160; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE160u | kUnwind; return; } goto L_001FE160; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st16((c.r[1].w[0] + 26906u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 26904u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] - 25256u);
    set32(c.r[4], c.r[4].w[0] + 26912u);
    set32(c.r[5], c.r[5].w[0] - 18086u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1D4u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001FE1D4u) [[unlikely]] return; }
L_001FE1D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1E8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FE1E8u) [[unlikely]] return; }
L_001FE1E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE1FCu); set32(c.r[6], 0u + 88u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FE1FCu) [[unlikely]] return; }
L_001FE1FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE210u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FE210u) [[unlikely]] return; }
L_001FE210:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 31120u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 25500u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 7;
L_001FE22C:
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 266u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE22Cu | kUnwind; return; } goto L_001FE22C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    c.budget -= 4;
L_001FE258:
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE258u | kUnwind; return; } goto L_001FE258; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] - 18073u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8640u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 18075u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8672u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8649u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8681u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8644u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8676u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8648u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8680u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8653u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8685u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8388u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8410u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st8((c.r[1].w[0] - 18074u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 26904u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 26906u)));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26896u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[1].w[0] + 8650u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8682u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 59;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FE360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE370u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 237u, depth + 1u); else { c.pc = 0x001FE0B0u; return; } if (c.pc != 0x001FE370u) [[unlikely]] return; }
L_001FE370:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE384u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001FE384u) [[unlikely]] return; }
L_001FE384:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE394u); st32((c.r[1].w[0] + 17268u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_003F(c, 288u, depth + 1u); else { c.pc = 0x001FEED0u; return; } if (c.pc != 0x001FE394u) [[unlikely]] return; }
L_001FE394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE39Cu);  if (depth < kMaxDepth) unit_003F(c, 302u, depth + 1u); else { c.pc = 0x001FF100u; return; } if (c.pc != 0x001FE39Cu) [[unlikely]] return; }
L_001FE39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FE3A4u) [[unlikely]] return; }
L_001FE3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FE3B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3B4u);  if (depth < kMaxDepth) unit_003F(c, 39u, depth + 1u); else { c.pc = 0x001FCB50u; return; } if (c.pc != 0x001FE3B4u) [[unlikely]] return; }
L_001FE3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3BCu);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FE3BCu) [[unlikely]] return; }
L_001FE3BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FE3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 18086u);
    set32(c.r[5], c.r[5].w[0] + 26912u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE3F0u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001FE3F0u) [[unlikely]] return; }
L_001FE3F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31480u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31120u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FE410:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDD40u | kUnwind; return; } goto L_001FDD40; }
L_001FE420:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FDC40u | kUnwind; return; } goto L_001FDC40; }
L_001FE430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] - 18065u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_001FE450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001FE510; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 1380u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[5].d[0] | 2ull;
    c.r[9].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].d[0] = 0ull | 32769ull;
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[4].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[3], 0u + 64u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 40;
L_001FE510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FE520:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_001FE540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE550u);  if (depth < kMaxDepth) unit_003F(c, 264u, depth + 1u); else { c.pc = 0x001FE520u; return; } if (c.pc != 0x001FE550u) [[unlikely]] return; }
L_001FE550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001FE604; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 1380u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = c.r[3].d[0] | 3ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = 0ull | 32769ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    set32(c.r[4], 0u + 14u);
    set32(c.r[3], 0u + 78u);
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
    st64((c.r[9].w[0] + 48u), c.r[2].d[0]);
    st64((c.r[9].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);
    c.budget -= 37;
L_001FE604:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FE610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 256u);  c.pc = t; return; }
L_001FE620:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 512u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[9], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[8], 0u + 49u);
    set32(c.r[10], 0u + 2u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE65Cu); c.r[11].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014CB60u; return; } if (c.pc != 0x001FE65Cu) [[unlikely]] return; }
L_001FE65C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE668u); set32(c.r[16], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_003F(c, 267u, depth + 1u); else { c.pc = 0x001FE610u; return; } if (c.pc != 0x001FE668u) [[unlikely]] return; }
L_001FE668:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE674u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 65u, depth + 1u); else { c.pc = 0x0014CC30u; return; } if (c.pc != 0x001FE674u) [[unlikely]] return; }
L_001FE674:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FE678:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[18], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FE690u); set32(c.r[16], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_003F(c, 267u, depth + 1u); else { c.pc = 0x001FE610u; return; } if (c.pc != 0x001FE690u) [[unlikely]] return; }
L_001FE690:
    set32(c.r[15], c.r[18].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[15].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = 0ull & 31ull;
    c.r[7].d[0] = ld16((c.r[1].w[0] + 48u));
    set32(c.r[5], 0u - 512u);
    set32(c.r[13], c.r[6].w[0] << 15);
    c.r[8].d[0] = c.r[2].d[0] & 511ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[14], 0u - 127u);
    c.r[12].d[0] = c.r[6].d[0] | 32767ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[10], 0u - 2048u);
    c.r[11].d[0] = 0ull & 2047ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[1], c.r[15].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 48u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].d[0] = c.r[6].d[0] | 2047ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[15], ld32((c.r[1].w[0] + 20144u)));
    c.r[6].d[0] = c.r[6].d[0] | 59903ull;
    c.r[7].d[0] = c.r[6].d[0] << 32;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x02030000u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[6].d[0] = c.r[6].d[0] | 33404ull;
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[24], c.r[15].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    c.r[15].d[0] = ld8((c.r[1].w[0] + 49u));
    c.r[14].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[14].d[0] | c.r[3].d[0];
    set32(c.r[1], c.r[24].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[14], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[14].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    set32(c.r[1], c.r[14].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 48u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[12], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[10], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 52u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 82;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[1].w[0] + 56u), c.r[7].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FE678u | kUnwind; return; } goto L_001FE678; } }
    c.r[3].d[0] = 0ull << 32;
    c.r[10].d[0] = ld8((c.r[29].w[0] + 90u));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[13].d[0] = ld16((c.r[29].w[0] + 88u));
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = ld8((c.r[29].w[0] + 91u));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[11], 0u - 64u);
    c.r[6].d[0] = c.r[3].d[0] << 16;
    c.r[8].d[0] = 0ull & 63ull;
    c.r[3].d[0] = ld16((c.r[29].w[0] + 80u));
    c.r[14].d[0] = 0ull & 511ull;
    c.r[10].d[0] = c.r[10].d[0] & c.r[11].d[0];
    set32(c.r[7], 0u - 1u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    c.r[13].d[0] = c.r[13].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[29].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    mmi::pcpyld(c.r[11], c.r[7], c.r[6]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[29].w[0] + 90u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st16((c.r[29].w[0] + 88u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 28679u);
    c.r[13].d[0] = ld64((c.r[29].w[0] + 88u));
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    set32(c.r[8], 0u - 16u);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 83u));
    c.r[6].d[0] = 0ull & 1ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 84u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 496ull;
    c.r[4].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[29].w[0] + 83u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    st64((c.r[4].w[0]), c.r[11].d[0]);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[11].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 128ull;
    c.r[12].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[10], 0u + 28672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = 0ull | 36864ull;
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[8], 0u + 10240u);
    set32(c.r[7], 0u + 13312u);
    set32(c.r[6], 0u + 12544u);
    st64((c.r[1].w[0] + 512u), c.r[12].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[12].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 528u), c.r[12].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[1].w[0] + 544u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st64((c.r[5].w[0]), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[5].w[0] + 8u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[5].w[0] + 16u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[5].w[0] + 24u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 32u));
    st64((c.r[5].w[0] + 32u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 40u));
    st64((c.r[5].w[0] + 40u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 48u));
    st64((c.r[5].w[0] + 48u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 56u));
    st64((c.r[5].w[0] + 56u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 64u));
    st64((c.r[5].w[0] + 64u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 72u));
    st64((c.r[5].w[0] + 72u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 80u));
    st64((c.r[5].w[0] + 80u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 88u));
    st64((c.r[5].w[0] + 88u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 96u));
    st64((c.r[5].w[0] + 96u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 104u));
    st64((c.r[5].w[0] + 104u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 112u));
    st64((c.r[5].w[0] + 112u), c.r[11].d[0]);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 120u));
    st64((c.r[5].w[0] + 120u), c.r[4].d[0]);
    st16((c.r[1].w[0] + 434u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 450u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 384ull;
    set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 752ull;
    set32(c.r[5], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    st64((c.r[5].w[0] + 8u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 16u));
    st64((c.r[5].w[0] + 16u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[5].w[0] + 24u), c.r[3].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[5].w[0] + 32u), c.f[1]);
    st32((c.r[5].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    st64((c.r[5].w[0] + 40u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 48u));
    st64((c.r[5].w[0] + 48u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 56u));
    st64((c.r[5].w[0] + 56u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 64u));
    st64((c.r[5].w[0] + 64u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 72u));
    st64((c.r[5].w[0] + 72u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 80u));
    st64((c.r[5].w[0] + 80u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 88u));
    st64((c.r[5].w[0] + 88u), c.r[3].d[0]);
    st32((c.r[1].w[0] + 27968u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27984u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27976u), c.r[6].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 161;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FEA60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull | 32769ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));
    c.r[12].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 30727u);
    set32(c.r[17], c.r[17].w[0] + 26944u);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    set32(c.r[11], 0u + 3822u);
    set32(c.r[3], 0u + 30720u);
    set32(c.r[10], 0u + 77u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[8], 0u + 25u);
    set32(c.r[13], ld32((c.r[4].w[0] + 12u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 28679u);
    st64((c.r[17].w[0] + 32u), c.r[12].d[0]);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[17].w[0] + 40u), c.r[11].d[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = c.r[13].d[0] | c.r[9].d[0];
    set32(c.r[3], 0u + 28672u);
    st64((c.r[17].w[0] + 56u), c.r[10].d[0]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 48u), c.r[9].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    st64((c.r[17].w[0] + 72u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[17].w[0] + 64u), c.r[7].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[5], 0u + 65u);
    st64((c.r[17].w[0] + 64u), c.r[6].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0] + 88u), c.r[5].d[0]);
    st64((c.r[17].w[0] + 80u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 47;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FEC80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA18B0000u);
    set32(c.r[3], 0u + 83u);
    c.r[5].d[0] = c.r[4].d[0] | 16384ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x53EE0000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] | 61166ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[5]);
    st64((c.r[17].w[0] + 96u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull | 32896ull;
    st64((c.r[17].w[0] + 104u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st64((c.r[17].w[0] + 120u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[4], 0u + 72u);
    st64((c.r[17].w[0] + 112u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st64((c.r[17].w[0] + 136u), c.r[4].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    st64((c.r[17].w[0] + 128u), c.r[2].d[0]);
    set32(c.r[4], 0u + 79u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    st64((c.r[17].w[0] + 128u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 152u), c.r[4].d[0]);
    st64((c.r[17].w[0] + 144u), c.r[2].d[0]);
    set32(c.r[3], 0u + 67u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[17].w[0] + 168u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u + 36u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 7u);
    st64((c.r[17].w[0] + 160u), c.r[3].d[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBB8u); st64((c.r[17].w[0] + 184u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x001FEBB8u) [[unlikely]] return; }
L_001FEBB8:
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], 0u + 10u);  if (t) { goto L_001FEBC8; } }
    set32(c.r[18], 0u + 9u);
    c.budget -= 1;
L_001FEBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEBD0u);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x001FEBD0u) [[unlikely]] return; }
L_001FEBD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));  if (t) { goto L_001FEBE0; } }
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_001FEBE0:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 26;
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], 0u + 21u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 272u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 96u);
    st64((c.r[17].w[0] + 176u), c.r[2].d[0]);
    set32(c.r[5], 0u + 8184u);
    st64((c.r[17].w[0] + 200u), c.r[4].d[0]);
    set32(c.r[2], 0u + 8u);
    st64((c.r[17].w[0] + 192u), c.r[3].d[0]);
    set32(c.r[4], 0u + 28672u);
    st32((c.r[17].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[3], 0u + 30720u);
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[17].w[0] + 224u), c.r[4].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[17].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[4], 0u + 8192u);
    st32((c.r[17].w[0] + 232u), c.r[6].w[0]);
    c.r[3].d[0] = 0ull | 36856ull;
    st32((c.r[17].w[0] + 236u), 0u);
    c.r[2].d[0] = 0ull | 34816ull;
    st32((c.r[17].w[0] + 240u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 244u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 264u), c.r[6].w[0]);
    c.budget -= 40;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 268u), 0u);  if (t) { goto L_001FEDE4; } }
L_001FEC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xA18B0000u);
    set32(c.r[3], 0u + 83u);
    c.r[5].d[0] = c.r[4].d[0] | 16384ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x53EE0000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] | 61166ull;
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[5]);
    st64((c.r[17].w[0] + 96u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull | 32896ull;
    st64((c.r[17].w[0] + 104u), c.r[4].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st64((c.r[17].w[0] + 120u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[4], 0u + 72u);
    st64((c.r[17].w[0] + 112u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st64((c.r[17].w[0] + 136u), c.r[4].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    st64((c.r[17].w[0] + 128u), c.r[2].d[0]);
    set32(c.r[4], 0u + 79u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31000000u);
    st64((c.r[17].w[0] + 128u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[17].w[0] + 152u), c.r[4].d[0]);
    st64((c.r[17].w[0] + 144u), c.r[2].d[0]);
    set32(c.r[3], 0u + 67u);
    set32(c.r[2], 0u + 128u);
    st64((c.r[17].w[0] + 168u), c.r[3].d[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], 0u + 100u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 7u);
    st64((c.r[17].w[0] + 160u), c.r[3].d[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED1Cu); st64((c.r[17].w[0] + 184u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x001FED1Cu) [[unlikely]] return; }
L_001FED1C:
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], 0u + 10u);  if (t) { goto L_001FED2C; } }
    set32(c.r[18], 0u + 9u);
    c.budget -= 1;
L_001FED2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FED34u);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x001FED34u) [[unlikely]] return; }
L_001FED34:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));  if (t) { goto L_001FED44; } }
    set32(c.r[2], c.r[2].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_001FED44:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] << 26;
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[16], c.r[16].w[0] + 272u);
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 21u);
    st64((c.r[17].w[0] + 176u), c.r[3].d[0]);
    set32(c.r[4], 0u + 96u);
    st64((c.r[17].w[0] + 200u), c.r[2].d[0]);
    set32(c.r[3], 0u + 8u);
    st64((c.r[17].w[0] + 192u), c.r[4].d[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[17].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[4], 0u + 28672u);
    st32((c.r[17].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[3], 0u + 30720u);
    st32((c.r[17].w[0] + 224u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[17].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 232u), c.r[5].w[0]);
    set32(c.r[2], 0u + 8184u);
    st32((c.r[17].w[0] + 236u), 0u);
    set32(c.r[4], 0u + 8208u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull | 36856ull;
    st32((c.r[17].w[0] + 244u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull | 34816ull;
    st32((c.r[17].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 264u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 268u), 0u);
    c.budget -= 40;
L_001FEDE4:
    set32(c.r[3], c.r[16].w[0] - c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[16], c.r[3].w[0] >> 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[16].w[0] - 2u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[17].w[0] + 16u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE24u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001FEE24u) [[unlikely]] return; }
L_001FEE24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 20104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 297u, depth + 1u); else { c.pc = 0x00103188u; return; } if (c.pc != 0x001FEE38u) [[unlikely]] return; }
L_001FEE38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001FEE44u) [[unlikely]] return; }
L_001FEE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FEE60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEA60u | kUnwind; return; } goto L_001FEA60; }
L_001FEE70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE80u);  if (depth < kMaxDepth) unit_003F(c, 263u, depth + 1u); else { c.pc = 0x001FE450u; return; } if (c.pc != 0x001FEE80u) [[unlikely]] return; }
L_001FEE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEE88u);  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021D9D0u; return; } if (c.pc != 0x001FEE88u) [[unlikely]] return; }
L_001FEE88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28272u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEA4u); set32(c.r[8], 0u + 511u);  if (depth < kMaxDepth) unit_0015(c, 136u, depth + 1u); else { c.pc = 0x00157850u; return; } if (c.pc != 0x001FEEA4u) [[unlikely]] return; }
L_001FEEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FEEB0:
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 27992u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 28000u), c.r[3].w[0]);  c.pc = t; return; }
L_001FEED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEEECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 287u, depth + 1u); else { c.pc = 0x001FEEB0u; return; } if (c.pc != 0x001FEEECu) [[unlikely]] return; }
L_001FEEEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3076u);  if (t) { goto L_001FEF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEF08u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FEF08u) [[unlikely]] return; }
L_001FEF08:
    c.r[2].d[0] = c.r[2].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FEF24; } }
    set32(c.r[2], 0u + 2820u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 25244u), c.r[2].w[0]);  if (t) { goto L_001FEF3C; } }
L_001FEF24:
    set32(c.r[2], 0u + 2740u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 25244u), c.r[2].w[0]);  if (t) { goto L_001FEF3C; } }
L_001FEF34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 25244u), c.r[2].w[0]);
    c.budget -= 2;
L_001FEF3C:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FEF40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[2], 0u + 25500u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].d[0] = ld16((c.r[3].w[0] + 266u));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 1u);  if (t) { goto L_001FEFF8; } }
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], 0u + 656u);  if (t) { goto L_001FEF80; } }
    set32(c.r[18], 0u + 480u);
    c.budget -= 1;
L_001FEF80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001FEFAC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[18], 0u + 656u);  if (t) { goto L_001FEFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 848u);  if (t) { goto L_001FF01C; } }
L_001FEFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF01C; } }
L_001FEFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFB4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001FEFB4u) [[unlikely]] return; }
L_001FEFB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17268u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FEFD0; } }
    set32(c.r[18], 0u + 656u);
    c.budget -= 1;
L_001FEFD0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FEFE0; } }
    set32(c.r[18], 0u + 848u);
    c.budget -= 1;
L_001FEFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FEFE8u);  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001FEFE8u) [[unlikely]] return; }
L_001FEFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 164u);  if (t) { goto L_001FF01C; } }
L_001FEFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF01C; } }
    c.r[1].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FF01C; } }
    set32(c.r[18], 0u + 480u);
    c.budget -= 1;
L_001FF01C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FF068; } }
    c.r[1].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FF068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF044u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FF044u) [[unlikely]] return; }
L_001FF044:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FF064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF058u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FF058u) [[unlikely]] return; }
L_001FF058:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF068; } }
L_001FF064:
    set32(c.r[18], 0u + 480u);
    c.budget -= 1;
L_001FF068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 25248u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FEF40u | kUnwind; return; } goto L_001FEF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF094u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146E30u; return; } if (c.pc != 0x001FF094u) [[unlikely]] return; }
L_001FF094:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] - 25248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0ACu); st32((c.r[1].w[0] - 3400u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x00140C90u; return; } if (c.pc != 0x001FF0ACu) [[unlikely]] return; }
L_001FF0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0B4u);  if (depth < kMaxDepth) unit_0011(c, 189u, depth + 1u); else { c.pc = 0x00146D80u; return; } if (c.pc != 0x001FF0B4u) [[unlikely]] return; }
L_001FF0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FF0D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0E0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FF0E0u) [[unlikely]] return; }
L_001FF0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF0E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FF0E8u) [[unlikely]] return; }
L_001FF0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FF100:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140BE0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 58u, depth); }
L_001FF110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[1].w[0] + 27992u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140BE0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 58u, depth); }
L_001FF120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28000u)));
    c.budget -= 4;
    { set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140BE0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 58u, depth); }
L_001FF130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 28000u)));
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140C20u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 61u, depth); }
L_001FF150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 27992u)));
    c.budget -= 4;
    { set32(c.r[5], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00140C20u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 61u, depth); }
L_001FF160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001FF170:
    set32(c.r[4], c.r[16].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF17Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 61u, depth + 1u); else { c.pc = 0x00140C20u; return; } if (c.pc != 0x001FF17Cu) [[unlikely]] return; }
L_001FF17C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF170u | kUnwind; return; } goto L_001FF170; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF1A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & 1ull;  c.pc = t; return; }
L_001FF1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FF210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & 3ull;  c.pc = t; return; }
L_001FF240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF258u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001FF258u) [[unlikely]] return; }
L_001FF258:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001FF264u) [[unlikely]] return; }
L_001FF264:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7360u);
    set32(c.r[3], c.r[3].w[0] - 7344u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF290:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 23592u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FF2DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FF2DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23600u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 23592u), c.r[3].w[0]);
    c.budget -= 4;
L_001FF2DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FF2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31728u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FF39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF320u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001FF320u) [[unlikely]] return; }
L_001FF320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF334; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 8ull;  if (t) { goto L_001FF338; } }
L_001FF334:
    set32(c.r[4], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_001FF338:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001FF39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF348u);  if (depth < kMaxDepth) unit_003F(c, 262u, depth + 1u); else { c.pc = 0x001FE430u; return; } if (c.pc != 0x001FF348u) [[unlikely]] return; }
L_001FF348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FF39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF358u);  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001FF358u) [[unlikely]] return; }
L_001FF358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FF39C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FF39C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43560000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF380u); c.r[5].d[0] = c.r[2].d[0] | 18754ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001FF380u) [[unlikely]] return; }
L_001FF380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001FF38C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001FF38C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FF39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF39Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 325u, depth + 1u); else { c.pc = 0x001FF3F0u; return; } if (c.pc != 0x001FF39Cu) [[unlikely]] return; }
L_001FF39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF3B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 18754ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF3D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001FF3D0u) [[unlikely]] return; }
L_001FF3D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7376u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001FF410u) [[unlikely]] return; }
L_001FF410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FF424; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] | 8ull;  if (t) { goto L_001FF428; } }
L_001FF424:
    set32(c.r[4], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 1;
L_001FF428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 1456u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001FF45C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FF44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001FF458; } }
L_001FF44C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FF458; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_001FF458:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001FF45C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001FF49C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FF47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF474u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_000F(c, 90u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001FF474u) [[unlikely]] return; }
L_001FF474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001FF4A0; } }
L_001FF47C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FF494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF48Cu); set32(c.r[5], 0u + 34u);  if (depth < kMaxDepth) unit_000F(c, 90u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001FF48Cu) [[unlikely]] return; }
L_001FF48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FF49C; } }
L_001FF494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF49Cu);  if (depth < kMaxDepth) unit_000F(c, 90u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001FF49Cu) [[unlikely]] return; }
L_001FF49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001FF4A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FF4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 7376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4E0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001FF4E0u) [[unlikely]] return; }
L_001FF4E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FF4FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF4F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FF4F8u) [[unlikely]] return; }
L_001FF4F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FF4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF524u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001FF524u) [[unlikely]] return; }
L_001FF524:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF530u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001FF530u) [[unlikely]] return; }
L_001FF530:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF53Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001FF53Cu) [[unlikely]] return; }
L_001FF53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7440u);
    set32(c.r[3], c.r[3].w[0] - 7424u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 7408u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 13;
L_001FF570:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_001FF578:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF578u | kUnwind; return; } goto L_001FF578; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF570u | kUnwind; return; } goto L_001FF570; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001FF63C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 7440u);
    set32(c.r[3], c.r[3].w[0] - 7424u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 7408u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF60Cu); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001FF60Cu) [[unlikely]] return; }
L_001FF60C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF618u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001FF618u) [[unlikely]] return; }
L_001FF618:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001FF624u) [[unlikely]] return; }
L_001FF624:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FF640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF63Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001FF63Cu) [[unlikely]] return; }
L_001FF63C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001FF640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FF660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_001FF680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[18], c.r[19].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001FF6F8; } }
L_001FF6A8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 2);  if (t) { goto L_001FF6EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[20], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FF6E8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF6DCu); set32(c.r[4], ld32((c.r[4].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x001FF6DCu) [[unlikely]] return; }
L_001FF6DC:
    set32(c.r[3], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001FF6F4; } }
L_001FF6E8:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_001FF6EC:
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_001FF6F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001FF6F8:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF6A8u | kUnwind; return; } goto L_001FF6A8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF680u | kUnwind; return; } goto L_001FF680; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FF740:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001FF758; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_001FF758:
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 28016u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0]));  c.pc = t; return; }
L_001FF780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001FF790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7A8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 349u, depth + 1u); else { c.pc = 0x001FF780u; return; } if (c.pc != 0x001FF7A8u) [[unlikely]] return; }
L_001FF7A8:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] | 20300ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7E0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001FF7E0u) [[unlikely]] return; }
L_001FF7E0:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF7ECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001FF7ECu) [[unlikely]] return; }
L_001FF7EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 7488u);
    set32(c.r[2], c.r[2].w[0] - 7472u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001FF898; } }
L_001FF810:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 4);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 2208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FF890; } }
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1312u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2080u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 14;
L_001FF890:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.budget -= 2;
L_001FF898:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF810u | kUnwind; return; } goto L_001FF810; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FF8C0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[9].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0] + 40u), 0u);
    set32(c.r[6], c.r[8].w[0] + 2224u);
    st32((c.r[9].w[0] + 44u), 0u);
    st32((c.r[9].w[0] + 48u), 0u);
    st16((c.r[9].w[0] + 52u), static_cast<std::uint16_t>(c.r[7].w[0]));
    ld128((c.r[8].w[0] + 2240u) & ~15u, c.r[3]);
    st128((c.r[8].w[0] + 2208u) & ~15u, c.r[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 6);  if (t) { goto L_001FF93C; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1312u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32(c.vu0, 15u, 1u, 0u);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mr32(c.vu0, 15u, 2u, 1u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32(c.vu0, 15u, 3u, 2u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2080u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 13;
L_001FF93C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FF950:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 2208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { [[clang::musttail]] return unit_0040(c, 7u, depth); } }
L_001FF98C:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_001FF9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0040(c, 6u, depth); } }
L_001FF9C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[1].w[0] + 28296u)));  if (t) { goto L_001FF9DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    c.budget -= 2;
L_001FF9DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[9], c.r[29].w[0] + 412u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[10], c.r[29].w[0] + 408u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FF9FCu); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 45u, depth + 1u); else { c.pc = 0x00168AA0u; return; } if (c.pc != 0x001FF9FCu) [[unlikely]] return; }
L_001FF9FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[18].w[0] + 12u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0040(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 6u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[3].d[0] & 127ull;  if (t) { [[clang::musttail]] return unit_0040(c, 3u, depth); } }
    set32(c.r[16], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_001FFA38:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[23].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001FFA74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001FFA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FFA90; } }
L_001FFA64:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF9C0u | kUnwind; return; } goto L_001FF9C0; } }
L_001FFA74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FF9C0u | kUnwind; return; } goto L_001FF9C0; } }
L_001FFA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFA98u); set32(c.r[4], c.r[4].w[0] + 22240u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFA98u) [[unlikely]] return; }
L_001FFA98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAA4u); set32(c.r[4], c.r[4].w[0] + 22288u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFAA4u) [[unlikely]] return; }
L_001FFAA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAB0u); set32(c.r[4], c.r[4].w[0] + 22240u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFAB0u) [[unlikely]] return; }
L_001FFAB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFABCu); set32(c.r[4], c.r[4].w[0] + 22336u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFABCu) [[unlikely]] return; }
L_001FFABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAC8u); set32(c.r[4], c.r[4].w[0] + 22384u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFAC8u) [[unlikely]] return; }
L_001FFAC8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFAE4u); set32(c.r[4], c.r[4].w[0] + 22448u);  if (depth < kMaxDepth) unit_0009(c, 124u, depth + 1u); else { c.pc = 0x001260E0u; return; } if (c.pc != 0x001FFAE4u) [[unlikely]] return; }
L_001FFAE4:
    set32(c.r[22], c.r[22].w[0] - c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] > 0; set32(c.r[16], c.r[16].w[0] + c.r[23].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FFA38u | kUnwind; return; } goto L_001FFA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 412u)));  if (t) { [[clang::musttail]] return unit_0040(c, 4u, depth); } }
L_001FFAF8:
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[4].w[0] + 5248u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[4].w[0] + 5400u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FFB34; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 5400u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FFB34; } }
    st32((c.r[4].w[0] + 5400u), c.r[2].w[0]);
    c.budget -= 1;
L_001FFB34:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[19].w[0] << 4);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[19].w[0] << 6);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 1824u);
    set32(c.r[4], c.r[2].w[0] + 1312u);
    c.f[0] = ld32((c.r[1].w[0] + 22552u));
    set32(c.r[2], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 1824u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 22552u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 1828u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 6u));
    c.f[0] = ld32((c.r[1].w[0] + 22552u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFBF4u); st32((c.r[6].w[0] + 1832u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 53u, depth + 1u); else { c.pc = 0x00145110u; return; } if (c.pc != 0x001FFBF4u) [[unlikely]] return; }
L_001FFBF4:
    set32(c.r[2], c.r[29].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.f[0] = 0u;
    c.f[2] = 0u;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 260u), c.f[2]);
    set32(c.r[2], c.r[19].w[0] << 6);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    set32(c.r[3], c.r[2].w[0] + 800u);
    c.f[2] = 0u;
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[1] = 0u;
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[1]);
    st32((c.r[29].w[0] + 252u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] + 800u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1312u);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFCD4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x001FFCD4u) [[unlikely]] return; }
L_001FFCD4:
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    c.f[0] = ld32((c.r[1].w[0] + 22544u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FFDAC; } }
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FFDAC; } }
    c.f[0] = ld32((c.r[1].w[0] + 22536u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FFDAC; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FFDAC; } }
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[29].w[0] + 224u), 0u);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 228u), 0u);  if (t) { goto L_001FFE88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 228u), c.f[0]);  if (t) { goto L_001FFE88; } }
L_001FFDAC:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[12] = ld32((c.r[29].w[0] + 244u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDBCu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001FFDBCu) [[unlikely]] return; }
L_001FFDBC:
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFDCCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001FFDCCu) [[unlikely]] return; }
L_001FFDCC:
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[13] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE44u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001FFE44u) [[unlikely]] return; }
L_001FFE44:
    st32((c.r[29].w[0] + 228u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE54u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001FFE54u) [[unlikely]] return; }
L_001FFE54:
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 13;
L_001FFE88:
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[12] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FFE98u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001FFE98u) [[unlikely]] return; }
L_001FFE98:
    st32((c.r[29].w[0] + 232u), c.f[0]);
    set32(c.r[2], c.r[19].w[0] << 4);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[2].w[0] + 1824u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[2].w[0] + 1828u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 1832u), c.f[0]);
    c.f[1] = c.f[0];
    c.f[0] = ld32((c.r[1].w[0] + 22528u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001FFEF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22520u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 1832u), c.f[0]);  if (t) { goto L_001FFF10; } }
L_001FFEF0:
    c.f[0] = ld32((c.r[1].w[0] + 22512u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FFF10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 22520u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 1832u), c.f[0]);
    c.budget -= 4;
L_001FFF10:
    ld128((c.r[20].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[20].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001FFF40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001FFF58; } }
L_001FFF40:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001FFF58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001FFF94; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001FFFAC; } }
L_001FFF94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001FFFAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001FFFE8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { [[clang::musttail]] return unit_0040(c, 1u, depth); } }
L_001FFFE8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
    [[clang::musttail]] return unit_0040(c, 1u, depth);
}

}
