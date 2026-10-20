#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0081[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0,
    334, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0,
    0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373,
    0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0,
    393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0,
    458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0081(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00304000;
    case 2u: goto L_0030402C;
    case 3u: goto L_0030403C;
    case 4u: goto L_00304048;
    case 5u: goto L_00304054;
    case 6u: goto L_0030406C;
    case 7u: goto L_00304090;
    case 8u: goto L_003040BC;
    case 9u: goto L_003040E8;
    case 10u: goto L_003040F8;
    case 11u: goto L_00304108;
    case 12u: goto L_00304134;
    case 13u: goto L_00304144;
    case 14u: goto L_0030415C;
    case 15u: goto L_00304188;
    case 16u: goto L_00304198;
    case 17u: goto L_003041A8;
    case 18u: goto L_003041D4;
    case 19u: goto L_003041E4;
    case 20u: goto L_00304200;
    case 21u: goto L_00304220;
    case 22u: goto L_0030422C;
    case 23u: goto L_00304238;
    case 24u: goto L_00304244;
    case 25u: goto L_00304260;
    case 26u: goto L_003042D0;
    case 27u: goto L_003042E4;
    case 28u: goto L_0030433C;
    case 29u: goto L_00304350;
    case 30u: goto L_0030439C;
    case 31u: goto L_003043B0;
    case 32u: goto L_003043C0;
    case 33u: goto L_003043D0;
    case 34u: goto L_003043E0;
    case 35u: goto L_003043F0;
    case 36u: goto L_00304400;
    case 37u: goto L_00304410;
    case 38u: goto L_00304448;
    case 39u: goto L_0030445C;
    case 40u: goto L_00304470;
    case 41u: goto L_00304488;
    case 42u: goto L_0030449C;
    case 43u: goto L_003044B0;
    case 44u: goto L_003044C4;
    case 45u: goto L_003044D8;
    case 46u: goto L_003044EC;
    case 47u: goto L_00304500;
    case 48u: goto L_00304514;
    case 49u: goto L_00304528;
    case 50u: goto L_0030453C;
    case 51u: goto L_0030454C;
    case 52u: goto L_0030455C;
    case 53u: goto L_00304564;
    case 54u: goto L_0030456C;
    case 55u: goto L_0030457C;
    case 56u: goto L_003045F0;
    case 57u: goto L_00304638;
    case 58u: goto L_00304640;
    case 59u: goto L_0030466C;
    case 60u: goto L_00304694;
    case 61u: goto L_003046C0;
    case 62u: goto L_003046DC;
    case 63u: goto L_00304718;
    case 64u: goto L_00304730;
    case 65u: goto L_00304774;
    case 66u: goto L_003047B8;
    case 67u: goto L_00304808;
    case 68u: goto L_0030483C;
    case 69u: goto L_00304888;
    case 70u: goto L_00304A10;
    case 71u: goto L_00304A30;
    case 72u: goto L_00304AF0;
    case 73u: goto L_00304B20;
    case 74u: goto L_00304B50;
    case 75u: goto L_00304B80;
    case 76u: goto L_00304BA0;
    case 77u: goto L_00304BE0;
    case 78u: goto L_00304C28;
    case 79u: goto L_00304C54;
    case 80u: goto L_00304C84;
    case 81u: goto L_00304D08;
    case 82u: goto L_00304D7C;
    case 83u: goto L_00304D88;
    case 84u: goto L_00304D90;
    case 85u: goto L_00304E00;
    case 86u: goto L_00304E60;
    case 87u: goto L_00304ED8;
    case 88u: goto L_00304F1C;
    case 89u: goto L_00304F6C;
    case 90u: goto L_00304F7C;
    case 91u: goto L_00304FA8;
    case 92u: goto L_00304FE8;
    case 93u: goto L_00305064;
    case 94u: goto L_003050B0;
    case 95u: goto L_00305108;
    case 96u: goto L_00305154;
    case 97u: goto L_0030517C;
    case 98u: goto L_00305184;
    case 99u: goto L_003051B8;
    case 100u: goto L_00305218;
    case 101u: goto L_00305254;
    case 102u: goto L_0030527C;
    case 103u: goto L_00305284;
    case 104u: goto L_00305298;
    case 105u: goto L_00305340;
    case 106u: goto L_00305354;
    case 107u: goto L_00305370;
    case 108u: goto L_00305398;
    case 109u: goto L_00305400;
    case 110u: goto L_00305428;
    case 111u: goto L_0030542C;
    case 112u: goto L_00305468;
    case 113u: goto L_003054F8;
    case 114u: goto L_0030550C;
    case 115u: goto L_00305558;
    case 116u: goto L_003055CC;
    case 117u: goto L_003055E0;
    case 118u: goto L_0030560C;
    case 119u: goto L_00305678;
    case 120u: goto L_0030568C;
    case 121u: goto L_003056F0;
    case 122u: goto L_00305704;
    case 123u: goto L_00305720;
    case 124u: goto L_00305748;
    case 125u: goto L_003057A8;
    case 126u: goto L_003057D8;
    case 127u: goto L_003057F4;
    case 128u: goto L_00305824;
    case 129u: goto L_0030584C;
    case 130u: goto L_003058A8;
    case 131u: goto L_003058D8;
    case 132u: goto L_00305904;
    case 133u: goto L_00305920;
    case 134u: goto L_00305968;
    case 135u: goto L_00305998;
    case 136u: goto L_003059C0;
    case 137u: goto L_003059DC;
    case 138u: goto L_00305A28;
    case 139u: goto L_00305A58;
    case 140u: goto L_00305A6C;
    case 141u: goto L_00305AA4;
    case 142u: goto L_00305B34;
    case 143u: goto L_00305B48;
    case 144u: goto L_00305B94;
    case 145u: goto L_00305C08;
    case 146u: goto L_00305C1C;
    case 147u: goto L_00305C48;
    case 148u: goto L_00305CB4;
    case 149u: goto L_00305CC8;
    case 150u: goto L_00305CE4;
    case 151u: goto L_00305CFC;
    case 152u: goto L_00305D60;
    case 153u: goto L_00305D90;
    case 154u: goto L_00305D9C;
    case 155u: goto L_00305DCC;
    case 156u: goto L_00305DD8;
    case 157u: goto L_00305DE8;
    case 158u: goto L_00305DF0;
    case 159u: goto L_00305DFC;
    case 160u: goto L_00305E1C;
    case 161u: goto L_00305E7C;
    case 162u: goto L_00305EAC;
    case 163u: goto L_00305EC8;
    case 164u: goto L_00305EF8;
    case 165u: goto L_00305F20;
    case 166u: goto L_00305F80;
    case 167u: goto L_00305FB0;
    case 168u: goto L_00305FF0;
    case 169u: goto L_00306004;
    case 170u: goto L_0030602C;
    case 171u: goto L_00306034;
    case 172u: goto L_00306060;
    case 173u: goto L_00306074;
    case 174u: goto L_0030607C;
    case 175u: goto L_003060C0;
    case 176u: goto L_003060D4;
    case 177u: goto L_003060DC;
    case 178u: goto L_00306120;
    case 179u: goto L_00306138;
    case 180u: goto L_00306150;
    case 181u: goto L_00306170;
    case 182u: goto L_003061A0;
    case 183u: goto L_003061B4;
    case 184u: goto L_003061BC;
    case 185u: goto L_00306210;
    case 186u: goto L_00306230;
    case 187u: goto L_00306250;
    case 188u: goto L_00306270;
    case 189u: goto L_00306290;
    case 190u: goto L_003062B0;
    case 191u: goto L_003062CC;
    case 192u: goto L_003062E0;
    case 193u: goto L_00306310;
    case 194u: goto L_0030636C;
    case 195u: goto L_0030637C;
    case 196u: goto L_0030638C;
    case 197u: goto L_0030639C;
    case 198u: goto L_003063AC;
    case 199u: goto L_003063BC;
    case 200u: goto L_003063CC;
    case 201u: goto L_003063E0;
    case 202u: goto L_003063F0;
    case 203u: goto L_00306440;
    case 204u: goto L_00306450;
    case 205u: goto L_00306460;
    case 206u: goto L_00306470;
    case 207u: goto L_00306480;
    case 208u: goto L_00306490;
    case 209u: goto L_003064A0;
    case 210u: goto L_00306568;
    case 211u: goto L_00306578;
    case 212u: goto L_00306588;
    case 213u: goto L_00306598;
    case 214u: goto L_003065A8;
    case 215u: goto L_003065B8;
    case 216u: goto L_003065C8;
    case 217u: goto L_003065D8;
    case 218u: goto L_003065E8;
    case 219u: goto L_003065F8;
    case 220u: goto L_00306608;
    case 221u: goto L_00306618;
    case 222u: goto L_00306628;
    case 223u: goto L_00306638;
    case 224u: goto L_00306648;
    case 225u: goto L_00306658;
    case 226u: goto L_00306668;
    case 227u: goto L_00306678;
    case 228u: goto L_00306688;
    case 229u: goto L_003066A0;
    case 230u: goto L_003066FC;
    case 231u: goto L_0030670C;
    case 232u: goto L_0030671C;
    case 233u: goto L_0030672C;
    case 234u: goto L_0030673C;
    case 235u: goto L_0030674C;
    case 236u: goto L_0030675C;
    case 237u: goto L_00306770;
    case 238u: goto L_00306788;
    case 239u: goto L_00306798;
    case 240u: goto L_003067AC;
    case 241u: goto L_003067B4;
    case 242u: goto L_003067C4;
    case 243u: goto L_003067D0;
    case 244u: goto L_003067F0;
    case 245u: goto L_00306844;
    case 246u: goto L_00306854;
    case 247u: goto L_0030686C;
    case 248u: goto L_00306890;
    case 249u: goto L_003068A0;
    case 250u: goto L_003068C4;
    case 251u: goto L_003068DC;
    case 252u: goto L_003068E4;
    case 253u: goto L_003068F4;
    case 254u: goto L_00306918;
    case 255u: goto L_00306920;
    case 256u: goto L_00306930;
    case 257u: goto L_00306948;
    case 258u: goto L_003069D4;
    case 259u: goto L_003069E8;
    case 260u: goto L_00306A10;
    case 261u: goto L_00306A28;
    case 262u: goto L_00306A3C;
    case 263u: goto L_00306A74;
    case 264u: goto L_00306A90;
    case 265u: goto L_00306AD4;
    case 266u: goto L_00306AF8;
    case 267u: goto L_00306B14;
    case 268u: goto L_00306B24;
    case 269u: goto L_00306B48;
    case 270u: goto L_00306B70;
    case 271u: goto L_00306B98;
    case 272u: goto L_00306BC0;
    case 273u: goto L_00306BE8;
    case 274u: goto L_00306C10;
    case 275u: goto L_00306C28;
    case 276u: goto L_00306C50;
    case 277u: goto L_00306C78;
    case 278u: goto L_00306C90;
    case 279u: goto L_00306CA8;
    case 280u: goto L_00306CD0;
    case 281u: goto L_00306CF8;
    case 282u: goto L_00306D20;
    case 283u: goto L_00306D30;
    case 284u: goto L_00306D48;
    case 285u: goto L_00306D70;
    case 286u: goto L_00306D94;
    case 287u: goto L_00306DA8;
    case 288u: goto L_00306DC0;
    case 289u: goto L_00306DCC;
    case 290u: goto L_00306DD8;
    case 291u: goto L_00306DE8;
    case 292u: goto L_00306E00;
    case 293u: goto L_00306E0C;
    case 294u: goto L_00306E18;
    case 295u: goto L_00306E28;
    case 296u: goto L_00306E40;
    case 297u: goto L_00306E4C;
    case 298u: goto L_00306E58;
    case 299u: goto L_00306E68;
    case 300u: goto L_00306E80;
    case 301u: goto L_00306E8C;
    case 302u: goto L_00306E98;
    case 303u: goto L_00306EA8;
    case 304u: goto L_00306EC0;
    case 305u: goto L_00306ECC;
    case 306u: goto L_00306ED8;
    case 307u: goto L_00306EE8;
    case 308u: goto L_00306F0C;
    case 309u: goto L_00306F18;
    case 310u: goto L_00306F34;
    case 311u: goto L_00306F68;
    case 312u: goto L_00306F98;
    case 313u: goto L_00306FAC;
    case 314u: goto L_00306FBC;
    case 315u: goto L_00306FCC;
    case 316u: goto L_00306FDC;
    case 317u: goto L_00306FE4;
    case 318u: goto L_00306FF8;
    case 319u: goto L_00307008;
    case 320u: goto L_00307018;
    case 321u: goto L_00307028;
    case 322u: goto L_00307084;
    case 323u: goto L_00307098;
    case 324u: goto L_003070A8;
    case 325u: goto L_003070B8;
    case 326u: goto L_003070C8;
    case 327u: goto L_0030712C;
    case 328u: goto L_00307148;
    case 329u: goto L_0030717C;
    case 330u: goto L_003071A8;
    case 331u: goto L_003071C4;
    case 332u: goto L_003071D0;
    case 333u: goto L_003071EC;
    case 334u: goto L_00307200;
    case 335u: goto L_00307210;
    case 336u: goto L_00307214;
    case 337u: goto L_00307240;
    case 338u: goto L_00307244;
    case 339u: goto L_00307258;
    case 340u: goto L_0030726C;
    case 341u: goto L_00307290;
    case 342u: goto L_00307298;
    case 343u: goto L_003072A0;
    case 344u: goto L_003072A8;
    case 345u: goto L_003072B0;
    case 346u: goto L_003072B8;
    case 347u: goto L_003072C0;
    case 348u: goto L_003072EC;
    case 349u: goto L_003072F4;
    case 350u: goto L_0030730C;
    case 351u: goto L_00307314;
    case 352u: goto L_0030731C;
    case 353u: goto L_00307330;
    case 354u: goto L_00307344;
    case 355u: goto L_00307368;
    case 356u: goto L_00307380;
    case 357u: goto L_00307398;
    case 358u: goto L_003073AC;
    case 359u: goto L_003073B8;
    case 360u: goto L_003073C8;
    case 361u: goto L_003073DC;
    case 362u: goto L_003073F0;
    case 363u: goto L_00307400;
    case 364u: goto L_00307420;
    case 365u: goto L_00307440;
    case 366u: goto L_00307464;
    case 367u: goto L_00307470;
    case 368u: goto L_003074A0;
    case 369u: goto L_003074BC;
    case 370u: goto L_003074C4;
    case 371u: goto L_003074CC;
    case 372u: goto L_003074E0;
    case 373u: goto L_003074FC;
    case 374u: goto L_00307504;
    case 375u: goto L_0030750C;
    case 376u: goto L_00307520;
    case 377u: goto L_00307534;
    case 378u: goto L_0030754C;
    case 379u: goto L_00307558;
    case 380u: goto L_00307570;
    case 381u: goto L_00307594;
    case 382u: goto L_0030760C;
    case 383u: goto L_00307660;
    case 384u: goto L_00307680;
    case 385u: goto L_003076A0;
    case 386u: goto L_003076EC;
    case 387u: goto L_00307710;
    case 388u: goto L_00307734;
    case 389u: goto L_00307748;
    case 390u: goto L_00307754;
    case 391u: goto L_0030776C;
    case 392u: goto L_00307774;
    case 393u: goto L_00307780;
    case 394u: goto L_00307790;
    case 395u: goto L_003077B0;
    case 396u: goto L_003077C4;
    case 397u: goto L_003077D4;
    case 398u: goto L_003077E0;
    case 399u: goto L_003077EC;
    case 400u: goto L_0030780C;
    case 401u: goto L_00307834;
    case 402u: goto L_00307878;
    case 403u: goto L_00307898;
    case 404u: goto L_003078D0;
    case 405u: goto L_003078EC;
    case 406u: goto L_003078F4;
    case 407u: goto L_00307904;
    case 408u: goto L_0030790C;
    case 409u: goto L_00307930;
    case 410u: goto L_00307944;
    case 411u: goto L_0030795C;
    case 412u: goto L_00307970;
    case 413u: goto L_00307984;
    case 414u: goto L_0030799C;
    case 415u: goto L_003079B0;
    case 416u: goto L_003079D4;
    case 417u: goto L_003079F4;
    case 418u: goto L_00307A14;
    case 419u: goto L_00307A1C;
    case 420u: goto L_00307A3C;
    case 421u: goto L_00307A5C;
    case 422u: goto L_00307A64;
    case 423u: goto L_00307A6C;
    case 424u: goto L_00307A74;
    case 425u: goto L_00307A90;
    case 426u: goto L_00307AB4;
    case 427u: goto L_00307AD4;
    case 428u: goto L_00307AF4;
    case 429u: goto L_00307AFC;
    case 430u: goto L_00307B1C;
    case 431u: goto L_00307B3C;
    case 432u: goto L_00307B44;
    case 433u: goto L_00307B4C;
    case 434u: goto L_00307B60;
    case 435u: goto L_00307B7C;
    case 436u: goto L_00307B98;
    case 437u: goto L_00307BB8;
    case 438u: goto L_00307BD0;
    case 439u: goto L_00307BE8;
    case 440u: goto L_00307C30;
    case 441u: goto L_00307C40;
    case 442u: goto L_00307C58;
    case 443u: goto L_00307C60;
    case 444u: goto L_00307C70;
    case 445u: goto L_00307D90;
    case 446u: goto L_00307DC0;
    case 447u: goto L_00307DE0;
    case 448u: goto L_00307E08;
    case 449u: goto L_00307E1C;
    case 450u: goto L_00307E34;
    case 451u: goto L_00307E4C;
    case 452u: goto L_00307E60;
    case 453u: goto L_00307E9C;
    case 454u: goto L_00307ECC;
    case 455u: goto L_00307ED4;
    case 456u: goto L_00307EE8;
    case 457u: goto L_00307EF0;
    case 458u: goto L_00307F00;
    case 459u: goto L_00307F14;
    case 460u: goto L_00307F20;
    case 461u: goto L_00307F28;
    case 462u: goto L_00307F38;
    case 463u: goto L_00307F40;
    case 464u: goto L_00307F4C;
    case 465u: goto L_00307F60;
    case 466u: goto L_00307F8C;
    case 467u: goto L_00307FB4;
    case 468u: goto L_00307FE0;
    default: bad_entry(c, 0x00304000u); return;
    }
L_00304000:
    set32(c.r[2], c.r[2].w[0] + 17824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030402C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030402C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030402Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030402Cu) [[unlikely]] return; }
L_0030402C:
    set32(c.r[4], c.r[17].w[0] + 60u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030403Cu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x0030403Cu) [[unlikely]] return; }
L_0030403C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304048u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x00304048u) [[unlikely]] return; }
L_00304048:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00304054u) [[unlikely]] return; }
L_00304054:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00304070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030406Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0030406Cu) [[unlikely]] return; }
L_0030406C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00304070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00304090:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0030414C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 9472u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_003040BC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003040BCu | kUnwind; return; } goto L_003040BC; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040E8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003040E8u) [[unlikely]] return; }
L_003040E8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003040F8u); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003040F8u) [[unlikely]] return; }
L_003040F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] - 9424u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00304108:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304108u | kUnwind; return; } goto L_00304108; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304134u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00304134u) [[unlikely]] return; }
L_00304134:
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304144u); set32(c.r[6], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00304144u) [[unlikely]] return; }
L_00304144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003041E8; } }
L_0030414C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 9376u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_0030415C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030415Cu | kUnwind; return; } goto L_0030415C; } }
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304188u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00304188u) [[unlikely]] return; }
L_00304188:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304198u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x00304198u) [[unlikely]] return; }
L_00304198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 9328u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_003041A8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003041A8u | kUnwind; return; } goto L_003041A8; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041D4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003041D4u) [[unlikely]] return; }
L_003041D4:
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003041E4u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_0049(c, 298u, depth + 1u); else { c.pc = 0x002279C0u; return; } if (c.pc != 0x003041E4u) [[unlikely]] return; }
L_003041E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003041E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00304200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304220u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0049(c, 299u, depth + 1u); else { c.pc = 0x002279E0u; return; } if (c.pc != 0x00304220u) [[unlikely]] return; }
L_00304220:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030422Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 299u, depth + 1u); else { c.pc = 0x002279E0u; return; } if (c.pc != 0x0030422Cu) [[unlikely]] return; }
L_0030422C:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 299u, depth + 1u); else { c.pc = 0x002279E0u; return; } if (c.pc != 0x00304238u) [[unlikely]] return; }
L_00304238:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304244u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 299u, depth + 1u); else { c.pc = 0x002279E0u; return; } if (c.pc != 0x00304244u) [[unlikely]] return; }
L_00304244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00304260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 128u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00304358; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 21832u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003042D0u); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003042D0u) [[unlikely]] return; }
L_003042D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003042E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003042E4u) [[unlikely]] return; }
L_003042E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] - 21832u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030433Cu); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030433Cu) [[unlikely]] return; }
L_0030433C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304350u) [[unlikely]] return; }
L_00304350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003043B4; } }
L_00304358:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[0] = ld32((c.r[1].w[0] - 21840u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 256u);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21848u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030439Cu); set32(c.r[5], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030439Cu) [[unlikely]] return; }
L_0030439C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003043B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003043B0u) [[unlikely]] return; }
L_003043B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003043B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003043C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00302190u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 274u, depth); }
L_003043D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301F20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 260u, depth); }
L_003043E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301DF0u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 252u, depth); }
L_003043F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00302500u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 310u, depth); }
L_00304400:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00301DF0u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 252u, depth); }
L_00304410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304448u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304448u) [[unlikely]] return; }
L_00304448:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 356u));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030445Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030445Cu) [[unlikely]] return; }
L_0030445C:
    set32(c.r[2], ld32((c.r[2].w[0] + 360u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304470u); st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304470u) [[unlikely]] return; }
L_00304470:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003044E4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304488u) [[unlikely]] return; }
L_00304488:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030449Cu); st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030449Cu) [[unlikely]] return; }
L_0030449C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044B0u); st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003044B0u) [[unlikely]] return; }
L_003044B0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044C4u); st8((c.r[19].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003044C4u) [[unlikely]] return; }
L_003044C4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044D8u); st8((c.r[19].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003044D8u) [[unlikely]] return; }
L_003044D8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00304544; } }
L_003044E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003044ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x003044ECu) [[unlikely]] return; }
L_003044EC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304500u); st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304500u) [[unlikely]] return; }
L_00304500:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304514u); st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304514u) [[unlikely]] return; }
L_00304514:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304528u); st8((c.r[19].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x00304528u) [[unlikely]] return; }
L_00304528:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 11u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030453Cu); st8((c.r[19].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0012CEC0u; return; } if (c.pc != 0x0030453Cu) [[unlikely]] return; }
L_0030453C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 10u));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00304544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030454Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030454Cu) [[unlikely]] return; }
L_0030454C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0030455C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030455Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0030455Cu) [[unlikely]] return; }
L_0030455C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00304564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030456Cu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030456Cu) [[unlikely]] return; }
L_0030456C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_00304580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030457Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x0030457Cu) [[unlikely]] return; }
L_0030457C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00304580:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304564u | kUnwind; return; } goto L_00304564; } }
    st32((c.r[19].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 76u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 64u), 0u);
    st8((c.r[19].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 80u), 0u);
    st32((c.r[19].w[0] + 84u), 0u);
    st32((c.r[19].w[0] + 88u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003045F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00304694; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00304638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00304638; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304638u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304638u) [[unlikely]] return; }
L_00304638:
    st32((c.r[16].w[0]), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00304640:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 24u);  if (t) { goto L_0030466C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0030466C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030466Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030466Cu) [[unlikely]] return; }
L_0030466C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304640u | kUnwind; return; } goto L_00304640; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00304698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00304694u) [[unlikely]] return; }
L_00304694:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00304698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003046C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003046DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 163u, depth + 1u); else { c.pc = 0x00245520u; return; } if (c.pc != 0x003046DCu) [[unlikely]] return; }
L_003046DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_003046EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00304718; } }
L_003046EC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00304700; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00304704; } }
L_00304700:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00304704:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304718u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 153u, depth + 1u); else { c.pc = 0x00245390u; return; } if (c.pc != 0x00304718u) [[unlikely]] return; }
L_00304718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00304730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00304758; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_00304774; } }
L_00304758:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00304774; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304774u); set32(c.r[5], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0081(c, 76u, depth + 1u); else { c.pc = 0x00304BA0u; return; } if (c.pc != 0x00304774u) [[unlikely]] return; }
L_00304774:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003049F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00304810; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003047A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003047C0; } }
L_003047A0:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003047B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0081(c, 75u, depth + 1u); else { c.pc = 0x00304B80u; return; } if (c.pc != 0x003047B8u) [[unlikely]] return; }
L_003047B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_0030488C; } }
L_003047C0:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_003047E8; } }
    breakpoint(c, 0x003047E4u);
    c.budget -= 1;
L_003047E8:
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304808u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0081(c, 75u, depth + 1u); else { c.pc = 0x00304B80u; return; } if (c.pc != 0x00304808u) [[unlikely]] return; }
L_00304808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00304888; } }
L_00304810:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00304824; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00304844; } }
L_00304824:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030483Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0081(c, 75u, depth + 1u); else { c.pc = 0x00304B80u; return; } if (c.pc != 0x0030483Cu) [[unlikely]] return; }
L_0030483C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00304888; } }
L_00304844:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_0030486C; } }
    breakpoint(c, 0x00304868u);
    c.budget -= 1;
L_0030486C:
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304888u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0081(c, 75u, depth + 1u); else { c.pc = 0x00304B80u; return; } if (c.pc != 0x00304888u) [[unlikely]] return; }
L_00304888:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0030488C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00304938; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00304938; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00304908; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { goto L_003049F4; } }
L_00304908:
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { goto L_003049F4; } }
L_00304938:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003049F4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00304954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.f[20]);  if (t) { goto L_003049EC; } }
L_00304954:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003049AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003049A0; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003049EC; } }
L_003049A0:
    st32((c.r[16].w[0] + 84u), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003049EC; } }
L_003049AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_003049E4; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003049EC; } }
L_003049E4:
    st32((c.r[16].w[0] + 84u), c.f[20]);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003049EC:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 2;
L_003049F4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 92u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00304A10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 77u, depth + 1u); else { c.pc = 0x00304BE0u; return; } if (c.pc != 0x00304A10u) [[unlikely]] return; }
L_00304A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00304A30:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00304AE4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00304AE4; } }
    st32((c.r[4].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[3], 0u + 14u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00304A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.f[0]);  if (t) { goto L_00304AE4; } }
L_00304A7C:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00304AB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.f[0]);  if (t) { goto L_00304AE4; } }
L_00304AB8:
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1424u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.budget -= 11;
L_00304AE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00304AF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00304B0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00304B0C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00304B0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00304B20:
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 56u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_00304B3C; } }
    breakpoint(c, 0x00304B38u);
    c.budget -= 1;
L_00304B3C:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_00304B50:
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 56u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_00304B6C; } }
    breakpoint(c, 0x00304B68u);
    c.budget -= 1;
L_00304B6C:
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_00304B80:
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[13]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), c.f[0]);  c.pc = t; return; }
L_00304BA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00304BBC; } }
    st32((c.r[4].w[0] + 88u), 0u);
    c.budget -= 1;
L_00304BBC:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_00304BD0; } }
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 1;
L_00304BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00304BE0:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 9280u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[29].w[0] + 656u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 25u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
L_00304C28:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304C28u | kUnwind; return; } goto L_00304C28; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[5].w[0] - 8880u);
    set32(c.r[4], 0u + 17u);
    c.budget -= 4;
L_00304C54:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304C54u | kUnwind; return; } goto L_00304C54; } }
    c.r[5].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 1160u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[6].w[0]), c.r[5].d[0]);  if (t) { goto L_00304CA0; } }
L_00304C84:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304C84u | kUnwind; return; } goto L_00304C84; } }
L_00304CA0:
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[3], c.r[29].w[0] + 368u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[29].w[0] + 1160u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8592u);
    st32((c.r[29].w[0] + 1164u), c.r[3].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 12;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_00304CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 10u);  if (t) { goto L_00304CE8; } }
L_00304CD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_00304CE8; } }
    set32(c.r[30], 0u + 7u);
    c.budget -= 1;
L_00304CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 332u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[4].w[0] + 440u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 548u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00304F80; } }
L_00304D08:
    set32(c.r[4], c.r[22].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[17], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[3].w[0] + 1160u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00304D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00304D5C; } }
L_00304D3C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00304D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00304D5C; } }
L_00304D50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00304D5C; } }
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00304D5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00304F7C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00304DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304D7Cu); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00304D7Cu) [[unlikely]] return; }
L_00304D7C:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304D88u); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0009(c, 237u, depth + 1u); else { c.pc = 0x00127D00u; return; } if (c.pc != 0x00304D88u) [[unlikely]] return; }
L_00304D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00304DC8; } }
L_00304D90:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[4].w[0] + 1056u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;  if (t) { goto L_00304DC4; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 32u);  if (t) { goto L_00304DC4; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00304DC4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00304DC8:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304D90u | kUnwind; return; } goto L_00304D90; } }
L_00304DD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E00u); set32(c.r[4], ld32((c.r[2].w[0] + 24u)));  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00304E00u) [[unlikely]] return; }
L_00304E00:
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.r[5]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[18].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[18].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00304E58; } }
    set32(c.r[2], c.r[29].w[0] + 1056u);
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 356u), 0u);  if (t) { goto L_00304E68; } }
L_00304E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304E60u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00304E60u) [[unlikely]] return; }
L_00304E60:
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 356u), 0u);
    c.budget -= 2;
L_00304E68:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_00304F28; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_00304EE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { goto L_00304E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00304F24; } }
L_00304E9C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[12] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304ED8u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304ED8u) [[unlikely]] return; }
L_00304ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_00304F70; } }
L_00304EE0:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[12] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F1Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304F1Cu) [[unlikely]] return; }
L_00304F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00304F6C; } }
L_00304F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 1;
L_00304F28:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F6Cu); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304F6Cu) [[unlikely]] return; }
L_00304F6C:
    set32(c.r[25], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 1;
L_00304F70:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00304F7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00304F7Cu) [[unlikely]] return; }
L_00304F7C:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_00304F80:
    c.r[3].d[0] = c.r[23].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[23].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00304D08u | kUnwind; return; } goto L_00304D08; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00305A60; } }
    c.r[4].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FA8u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 24u, depth + 1u); else { c.pc = 0x003242C0u; return; } if (c.pc != 0x00304FA8u) [[unlikely]] return; }
L_00304FA8:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00305354; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003052A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00304FE8u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00304FE8u) [[unlikely]] return; }
L_00304FE8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[29].w[0] + 272u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[20].w[0] + 356u), 0u);  if (t) { goto L_003050B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030506C; } }
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = fp::add(c.f[0], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[20] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305064u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305064u) [[unlikely]] return; }
L_00305064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_00305158; } }
L_0030506C:
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = fp::add(c.f[0], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[20] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003050B0u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003050B0u) [[unlikely]] return; }
L_003050B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00305154; } }
L_003050B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00305110; } }
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E70000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = fp::add(c.f[0], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[20] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305108u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305108u) [[unlikely]] return; }
L_00305108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00305154; } }
L_00305110:
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E70000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = fp::add(c.f[0], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[20] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305154u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305154u) [[unlikely]] return; }
L_00305154:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_00305158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030517Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030517Cu) [[unlikely]] return; }
L_0030517C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305184u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x00305184u) [[unlikely]] return; }
L_00305184:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_0030529C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003051B8u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003051B8u) [[unlikely]] return; }
L_003051B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[20].w[0] + 356u), 0u);  if (t) { goto L_00305220; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305218u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305218u) [[unlikely]] return; }
L_00305218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_00305258; } }
L_00305220:
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E70000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[1] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305254u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305254u) [[unlikely]] return; }
L_00305254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_00305258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030527Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030527Cu) [[unlikely]] return; }
L_0030527C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305284u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x00305284u) [[unlikely]] return; }
L_00305284:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0030529C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305298u);  if (depth < kMaxDepth) unit_0018(c, 67u, depth + 1u); else { c.pc = 0x00162250u; return; } if (c.pc != 0x00305298u) [[unlikely]] return; }
L_00305298:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0030529C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003052A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00305354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EF0000u);
    c.f[1] = ld32((c.r[1].w[0] - 21752u));
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 21752u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 80u));
    c.budget -= 17;
    { const bool t = c.r[16].sd[0] >= 0; c.f[3] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_003052F4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003052F4:
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.f[2] = ld32((c.r[21].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305340u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305340u) [[unlikely]] return; }
L_00305340:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305354u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305354u) [[unlikely]] return; }
L_00305354:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0030542C; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305370u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305370u) [[unlikely]] return; }
L_00305370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21752u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21752u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305398u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305398u) [[unlikely]] return; }
L_00305398:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 465u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[6]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305400u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305400u) [[unlikely]] return; }
L_00305400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305428u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305428u) [[unlikely]] return; }
L_00305428:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0030542C:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[18], c.r[6].w[0] + 24u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[7].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305468u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305468u) [[unlikely]] return; }
L_00305468:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[16].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    set32(c.r[3], 0u + 461u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[1] = c.r[4].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003054F8u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003054F8u) [[unlikely]] return; }
L_003054F8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030550Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030550Cu) [[unlikely]] return; }
L_0030550C:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[17], c.r[2].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305558u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305558u) [[unlikely]] return; }
L_00305558:
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 461u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003055CCu); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003055CCu) [[unlikely]] return; }
L_003055CC:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003055E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003055E0u) [[unlikely]] return; }
L_003055E0:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030560Cu); st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030560Cu) [[unlikely]] return; }
L_0030560C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
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
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305678u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305678u) [[unlikely]] return; }
L_00305678:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030568Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x0030568Cu) [[unlikely]] return; }
L_0030568C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003057D8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0030570C; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003056B8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003056D0; } }
L_003056B8:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_003056D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003056F0u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C438u; return; } if (c.pc != 0x003056F0u) [[unlikely]] return; }
L_003056F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305704u); set32(c.r[5], c.r[5].w[0] - 21784u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305704u) [[unlikely]] return; }
L_00305704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00305720; } }
L_0030570C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[6], c.r[2].w[0] >> 1);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305720u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305720u) [[unlikely]] return; }
L_00305720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305748u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305748u) [[unlikely]] return; }
L_00305748:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43400000u);
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440B0000u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[6]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003057A8u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003057A8u) [[unlikely]] return; }
L_003057A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003057D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003057D8u) [[unlikely]] return; }
L_003057D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030542Cu | kUnwind; return; } goto L_0030542C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003058D8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003057F4:
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003057F4u | kUnwind; return; } goto L_003057F4; } }
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305824u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305824u) [[unlikely]] return; }
L_00305824:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21760u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21760u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030584Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0030584Cu) [[unlikely]] return; }
L_0030584C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E50000u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[6]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003058A8u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003058A8u) [[unlikely]] return; }
L_003058A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003058D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003058D8u) [[unlikely]] return; }
L_003058D8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00305FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305904u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305904u) [[unlikely]] return; }
L_00305904:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305920u); st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 61u, depth + 1u); else { c.pc = 0x003046C0u; return; } if (c.pc != 0x00305920u) [[unlikely]] return; }
L_00305920:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    st32((c.r[20].w[0] + 356u), 0u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[4] = ld32((c.r[21].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AD0000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[3], c.f[4]);
    c.f[14] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305968u); c.f[13] = fp::add(c.f[1], c.f[2]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305968u) [[unlikely]] return; }
L_00305968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305998u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305998u) [[unlikely]] return; }
L_00305998:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21744u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059C0u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003059C0u) [[unlikely]] return; }
L_003059C0:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003059DCu); st32((c.r[20].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 61u, depth + 1u); else { c.pc = 0x003046C0u; return; } if (c.pc != 0x003059DCu) [[unlikely]] return; }
L_003059DC:
    st32((c.r[20].w[0] + 352u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EA0000u);
    st32((c.r[20].w[0] + 356u), 0u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[2], 0u + 365u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[13] = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A28u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305A28u) [[unlikely]] return; }
L_00305A28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305A58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305A58u) [[unlikely]] return; }
L_00305A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00305FB4; } }
L_00305A60:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00305FB0; } }
    set32(c.r[22], c.r[16].w[0] << 2);
    c.budget -= 1;
L_00305A6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x429C0000u);
    set32(c.r[6], c.r[21].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[18], c.r[6].w[0] + 24u);
    set32(c.r[4], 0u + 7u);
    st32((c.r[7].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305AA4u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305AA4u) [[unlikely]] return; }
L_00305AA4:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[16].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    set32(c.r[3], 0u + 483u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[1] = c.r[4].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 36;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B34u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305B34u) [[unlikely]] return; }
L_00305B34:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305B48u) [[unlikely]] return; }
L_00305B48:
    set32(c.r[2], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[17], c.r[2].w[0] + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 160u), c.f[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305B94u); st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305B94u) [[unlikely]] return; }
L_00305B94:
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 483u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[6].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C08u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305C08u) [[unlikely]] return; }
L_00305C08:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305C1Cu) [[unlikely]] return; }
L_00305C1C:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305C48u); st32((c.r[2].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305C48u) [[unlikely]] return; }
L_00305C48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F10000u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
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
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CB4u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305CB4u) [[unlikely]] return; }
L_00305CB4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], 0u + 80u);
    set32(c.r[6], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CC8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0062(c, 298u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x00305CC8u) [[unlikely]] return; }
L_00305CC8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00305D90; } }
    c.r[6].d[0] = ld8((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CE4u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305CE4u) [[unlikely]] return; }
L_00305CE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305CFCu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305CFCu) [[unlikely]] return; }
L_00305CFC:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 567u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[6]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D60u); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305D60u) [[unlikely]] return; }
L_00305D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305D90u) [[unlikely]] return; }
L_00305D90:
    set32(c.r[18], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305D9Cu); c.r[4].d[0] = ld8((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D600u; return; } if (c.pc != 0x00305D9Cu) [[unlikely]] return; }
L_00305D9C:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00305EAC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00305EAC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00305EAC; } }
    set32(c.r[2], c.r[22].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DCCu); set32(c.r[4], ld32((c.r[2].w[0] + 336u)));  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00305DCCu) [[unlikely]] return; }
L_00305DCC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DD8u); set32(c.r[4], c.r[29].w[0] + 1056u);  if (depth < kMaxDepth) unit_0009(c, 233u, depth + 1u); else { c.pc = 0x00127BE8u; return; } if (c.pc != 0x00305DD8u) [[unlikely]] return; }
L_00305DD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DE8u); set32(c.r[5], c.r[5].w[0] - 21776u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00305DE8u) [[unlikely]] return; }
L_00305DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DF0u); set32(c.r[4], 0u + 391u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00305DF0u) [[unlikely]] return; }
L_00305DF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305DFCu); set32(c.r[4], c.r[29].w[0] + 1056u);  if (depth < kMaxDepth) unit_0009(c, 220u, depth + 1u); else { c.pc = 0x001277E0u; return; } if (c.pc != 0x00305DFCu) [[unlikely]] return; }
L_00305DFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21768u));
    set32(c.r[4], 0u + 12u);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E1Cu); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305E1Cu) [[unlikely]] return; }
L_00305E1C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42EC0000u);
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EE0000u);
    st128((c.r[19].w[0] + 48u) & ~15u, c.r[6]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 352u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 356u), 0u);
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    c.f[3] = ld32((c.r[21].w[0] + 80u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305E7Cu); c.f[13] = fp::add(c.f[0], c.f[20]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305E7Cu) [[unlikely]] return; }
L_00305E7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 312u), 0u);
    st32((c.r[19].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305EACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305EACu) [[unlikely]] return; }
L_00305EAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00305A6Cu | kUnwind; return; } goto L_00305A6C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00305FB0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00305EC8:
    set32(c.r[2], c.r[21].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00305EC8u | kUnwind; return; } goto L_00305EC8; } }
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305EF8u); set32(c.r[5], c.r[5].w[0] - 21792u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00305EF8u) [[unlikely]] return; }
L_00305EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[1].w[0] - 21760u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 21760u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F20u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00305F20u) [[unlikely]] return; }
L_00305F20:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A40000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 465u);
    st128((c.r[20].w[0] + 48u) & ~15u, c.r[6]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 352u), c.r[5].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 356u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    c.f[2] = ld32((c.r[21].w[0] + 80u));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.f[0] = ld32((c.r[21].w[0] + 84u));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305F80u); c.f[13] = fp::add(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305F80u) [[unlikely]] return; }
L_00305F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 312u), 0u);
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00305FB0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00305FB0u) [[unlikely]] return; }
L_00305FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00305FB4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_00305FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 5;
L_00306004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 17328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00306034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030602Cu);  if (depth < kMaxDepth) unit_0081(c, 178u, depth + 1u); else { c.pc = 0x00306120u; return; } if (c.pc != 0x0030602Cu) [[unlikely]] return; }
L_0030602C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 182u, depth + 1u); else { c.pc = 0x003061A0u; return; } if (c.pc != 0x00306034u) [[unlikely]] return; }
L_00306034:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00306004u | kUnwind; return; } goto L_00306004; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00306060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306074u) [[unlikely]] return; }
L_00306074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030607Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0030607Cu) [[unlikely]] return; }
L_0030607C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[16].d[0] & 7ull;
    c.r[1].d[0] = c.r[1].d[0] | 20323ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003060C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003060D4u) [[unlikely]] return; }
L_003060D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003060DCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003060DCu) [[unlikely]] return; }
L_003060DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[4].d[0] = c.r[16].d[0] & 7ull;
    c.r[1].d[0] = c.r[1].d[0] | 20316ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00306120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306138u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306138u) [[unlikely]] return; }
L_00306138:
    c.r[3].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306150u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306150u) [[unlikely]] return; }
L_00306150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 20323ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[16].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306170u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306170u) [[unlikely]] return; }
L_00306170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[1].d[0] = c.r[1].d[0] | 20316ull;
    set32(c.r[3], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[16].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003061A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003061B4u) [[unlikely]] return; }
L_003061B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003061BCu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003061BCu) [[unlikely]] return; }
L_003061BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[5].d[0] = c.r[16].d[0] & 7ull;
    c.r[1].d[0] = c.r[1].d[0] | 20316ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[6], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00306210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00306230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00306250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8144u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00306270:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17324u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00306290:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17328u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_003062B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] - 16704u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003062F0; } }
L_003062CC:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003062E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003062E0u); set32(c.r[4], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003062E0u) [[unlikely]] return; }
L_003062E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003062FC; } }
L_003062E8:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003062F0:
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(71ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003062CCu | kUnwind; return; } goto L_003062CC; } }
L_003062FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00306310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 222u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003063C4; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 58u);  if (t) { goto L_003063B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003063A4; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 75u);  if (t) { goto L_00306394; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306384; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 70u);  if (t) { goto L_00306374; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003063E4; } }
L_00306364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030636Cu); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030636Cu) [[unlikely]] return; }
L_0030636C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_00306374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030637Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030637Cu) [[unlikely]] return; }
L_0030637C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_00306384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030638Cu); set32(c.r[4], 0u + 50u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030638Cu) [[unlikely]] return; }
L_0030638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_00306394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030639Cu); set32(c.r[4], 0u + 51u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030639Cu) [[unlikely]] return; }
L_0030639C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_003063A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063ACu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003063ACu) [[unlikely]] return; }
L_003063AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_003063B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063BCu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003063BCu) [[unlikely]] return; }
L_003063BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003063E4; } }
L_003063C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063CCu); set32(c.r[4], 0u + 51u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003063CCu) [[unlikely]] return; }
L_003063CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 50u);  if (t) { goto L_003063E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003063E0u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003063E0u) [[unlikely]] return; }
L_003063E0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003063E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003063F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00306488; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00306478; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306468; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00306458; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_00306448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306440u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306440u) [[unlikely]] return; }
L_00306440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306450u); set32(c.r[4], 0u + 38u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306450u) [[unlikely]] return; }
L_00306450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306460u); set32(c.r[4], 0u + 39u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306460u) [[unlikely]] return; }
L_00306460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306470u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306470u) [[unlikely]] return; }
L_00306470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306480u); set32(c.r[4], 0u + 41u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306480u) [[unlikely]] return; }
L_00306480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306494; } }
L_00306488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306490u); set32(c.r[4], 0u + 42u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306490u) [[unlikely]] return; }
L_00306490:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00306494:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003064A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00306680; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_00306670; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 30u);  if (t) { goto L_00306660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 22u);  if (t) { goto L_00306650; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; set32(c.r[6], 0u + 21u);  if (t) { goto L_00306640; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_00306630; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00306620; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306610; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 26u);  if (t) { goto L_00306600; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_003065F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003065E0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003065D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003065C0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003065B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003065A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00306590; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306570; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306568u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306568u) [[unlikely]] return; }
L_00306568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306578u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306578u) [[unlikely]] return; }
L_00306578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306588u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306588u) [[unlikely]] return; }
L_00306588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306598u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306598u) [[unlikely]] return; }
L_00306598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065A8u); set32(c.r[4], 0u + 23u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065A8u) [[unlikely]] return; }
L_003065A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065B8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065B8u) [[unlikely]] return; }
L_003065B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065C8u); set32(c.r[4], 0u + 25u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065C8u) [[unlikely]] return; }
L_003065C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065D8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065D8u) [[unlikely]] return; }
L_003065D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065E8u); set32(c.r[4], 0u + 27u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065E8u) [[unlikely]] return; }
L_003065E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_003065F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003065F8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003065F8u) [[unlikely]] return; }
L_003065F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306608u); set32(c.r[4], 0u + 29u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306608u) [[unlikely]] return; }
L_00306608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306618u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306618u) [[unlikely]] return; }
L_00306618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306628u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306628u) [[unlikely]] return; }
L_00306628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306638u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306638u) [[unlikely]] return; }
L_00306638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306648u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306648u) [[unlikely]] return; }
L_00306648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306658u) [[unlikely]] return; }
L_00306658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306668u); set32(c.r[4], 0u + 35u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306668u) [[unlikely]] return; }
L_00306668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306678u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306678u) [[unlikely]] return; }
L_00306678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0030668C; } }
L_00306680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306688u); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00306688u) [[unlikely]] return; }
L_00306688:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0030668C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003066A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 84u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00306754; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 14u);  if (t) { goto L_00306744; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306734; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 31u);  if (t) { goto L_00306724; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00306714; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_00306704; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003066F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00306760; } }
L_003066F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003066FCu); set32(c.r[4], 0u + 43u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x003066FCu) [[unlikely]] return; }
L_003066FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030670Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030670Cu) [[unlikely]] return; }
L_0030670C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030671Cu); set32(c.r[4], 0u + 45u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030671Cu) [[unlikely]] return; }
L_0030671C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030672Cu); set32(c.r[4], 0u + 46u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030672Cu) [[unlikely]] return; }
L_0030672C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030673Cu); set32(c.r[4], 0u + 47u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030673Cu) [[unlikely]] return; }
L_0030673C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030674Cu); set32(c.r[4], 0u + 49u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030674Cu) [[unlikely]] return; }
L_0030674C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00306760; } }
L_00306754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030675Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x0030675Cu) [[unlikely]] return; }
L_0030675C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00306760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00306770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 29u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306788u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00306788u) [[unlikely]] return; }
L_00306788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306798u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x00306798u) [[unlikely]] return; }
L_00306798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067ACu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003067ACu) [[unlikely]] return; }
L_003067AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067B4u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003067B4u) [[unlikely]] return; }
L_003067B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003067C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067C4u);  if (depth < kMaxDepth) unit_0081(c, 256u, depth + 1u); else { c.pc = 0x00306930u; return; } if (c.pc != 0x003067C4u) [[unlikely]] return; }
L_003067C4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003067D0u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003067D0u) [[unlikely]] return; }
L_003067D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003067F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0030686C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18208u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306848; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306844; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306844; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306844u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306844u) [[unlikely]] return; }
L_00306844:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_00306848:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00306854u) [[unlikely]] return; }
L_00306854:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00306870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030686Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0030686Cu) [[unlikely]] return; }
L_0030686C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00306870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00306890:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003068A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003068C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003068C4u) [[unlikely]] return; }
L_003068C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00306920; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068DCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003068DCu) [[unlikely]] return; }
L_003068DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068E4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003068E4u) [[unlikely]] return; }
L_003068E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003068F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003068F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x003068F4u) [[unlikely]] return; }
L_003068F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00306918; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00306918; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306918u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306918u) [[unlikely]] return; }
L_00306918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306920u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00306920u) [[unlikely]] return; }
L_00306920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00306930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306948u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00306948u) [[unlikely]] return; }
L_00306948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 16112u);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] - 16096u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    ld128((c.r[4].w[0]) & ~15u, c.r[4]);
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[4]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 96u) & ~15u, c.r[3]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st8((c.r[16].w[0] + 136u), static_cast<std::uint8_t>(0u));
    ld128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 112u) & ~15u, c.r[2]);
    st32((c.r[16].w[0] + 560u), 0u);
    st32((c.r[16].w[0] + 564u), 0u);
    st32((c.r[16].w[0] + 568u), 0u);
    st32((c.r[16].w[0] + 572u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069D4u); st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x003069D4u) [[unlikely]] return; }
L_003069D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003069E8u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003069E8u) [[unlikely]] return; }
L_003069E8:
    set32(c.r[2], 0u + 11263u);
    set32(c.r[3], 0u + 10752u);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 16072u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A10u); c.r[6].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031C5D0u; return; } if (c.pc != 0x00306A10u) [[unlikely]] return; }
L_00306A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 301u);  if (t) { goto L_00306A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A28u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00306A28u) [[unlikely]] return; }
L_00306A28:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 576u), c.r[2].w[0]);  if (t) { goto L_00306A4C; } }
L_00306A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A3Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306A3Cu) [[unlikely]] return; }
L_00306A3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 25556u)));
    st32((c.r[16].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 4;
L_00306A4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 576u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[1].d[0] = c.r[1].d[0] | 38528ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00980000u);  if (t) { goto L_00306A6C; } }
    c.r[2].d[0] = c.r[2].d[0] | 38527ull;
    st32((c.r[16].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 2;
L_00306A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306A74u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00306A74u) [[unlikely]] return; }
L_00306A74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00306A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00306D48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 18112u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 632u)));
    st32((c.r[3].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306AD4u); set32(c.r[18], ld32((c.r[2].w[0] + 624u)));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306AD4u) [[unlikely]] return; }
L_00306AD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] - 25556u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00306B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306AF8u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x00306AF8u) [[unlikely]] return; }
L_00306AF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[18], ld32((c.r[1].w[0] - 25556u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B14u); set32(c.r[5], 0u + 301u);  if (depth < kMaxDepth) unit_0058(c, 46u, depth + 1u); else { c.pc = 0x00260440u; return; } if (c.pc != 0x00306B14u) [[unlikely]] return; }
L_00306B14:
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00306B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B24u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 60u, depth + 1u); else { c.pc = 0x0031C670u; return; } if (c.pc != 0x00306B24u) [[unlikely]] return; }
L_00306B24:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B48; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306B48u) [[unlikely]] return; }
L_00306B48:
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B70; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B70u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306B70u) [[unlikely]] return; }
L_00306B70:
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306B98; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306B98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306B98u) [[unlikely]] return; }
L_00306B98:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306BC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306BC0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306BC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306BC0u) [[unlikely]] return; }
L_00306BC0:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306BE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306BE8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306BE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306BE8u) [[unlikely]] return; }
L_00306BE8:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C10; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306C10u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306C10u) [[unlikely]] return; }
L_00306C10:
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00306C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306C28u);  if (depth < kMaxDepth) unit_0082(c, 48u, depth + 1u); else { c.pc = 0x003086B0u; return; } if (c.pc != 0x00306C28u) [[unlikely]] return; }
L_00306C28:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C50; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306C50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306C50u) [[unlikely]] return; }
L_00306C50:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306C78; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306C78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306C78u) [[unlikely]] return; }
L_00306C78:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00306C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306C90u);  if (depth < kMaxDepth) unit_0082(c, 115u, depth + 1u); else { c.pc = 0x003091C0u; return; } if (c.pc != 0x00306C90u) [[unlikely]] return; }
L_00306C90:
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00306CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306CA8u);  if (depth < kMaxDepth) unit_0082(c, 143u, depth + 1u); else { c.pc = 0x003096B0u; return; } if (c.pc != 0x00306CA8u) [[unlikely]] return; }
L_00306CA8:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306CD0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306CD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306CD0u) [[unlikely]] return; }
L_00306CD0:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306CF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306CF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306CF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306CF8u) [[unlikely]] return; }
L_00306CF8:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306D20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00306D20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306D20u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306D20u) [[unlikely]] return; }
L_00306D20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306D30u); st32((c.r[17].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x00306D30u) [[unlikely]] return; }
L_00306D30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00306D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306D48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00306D48u) [[unlikely]] return; }
L_00306D48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00306D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00306D70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306D94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0081(c, 440u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x00306D94u) [[unlikely]] return; }
L_00306D94:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00307400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306DA8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306DA8u) [[unlikely]] return; }
L_00306DA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00306DE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306DC0u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00306DC0u) [[unlikely]] return; }
L_00306DC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306DCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00306DCCu) [[unlikely]] return; }
L_00306DCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306DD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00306DD8u) [[unlikely]] return; }
L_00306DD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00306DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306DE8u); st32((c.r[17].w[0] + 20u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306DE8u) [[unlikely]] return; }
L_00306DE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00306E20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E00u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00306E00u) [[unlikely]] return; }
L_00306E00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00306E0Cu) [[unlikely]] return; }
L_00306E0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E18u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00306E18u) [[unlikely]] return; }
L_00306E18:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00306E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E28u); st32((c.r[17].w[0] + 24u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306E28u) [[unlikely]] return; }
L_00306E28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00306E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E40u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00306E40u) [[unlikely]] return; }
L_00306E40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00306E4Cu) [[unlikely]] return; }
L_00306E4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00306E58u) [[unlikely]] return; }
L_00306E58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00306E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E68u); st32((c.r[17].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306E68u) [[unlikely]] return; }
L_00306E68:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 272u);  if (t) { goto L_00306EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E80u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00306E80u) [[unlikely]] return; }
L_00306E80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E8Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00306E8Cu) [[unlikely]] return; }
L_00306E8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306E98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00306E98u) [[unlikely]] return; }
L_00306E98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.budget -= 2;
L_00306EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306EA8u); st32((c.r[17].w[0] + 32u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306EA8u) [[unlikely]] return; }
L_00306EA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_00306EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306EC0u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00306EC0u) [[unlikely]] return; }
L_00306EC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306ECCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0087(c, 68u, depth + 1u); else { c.pc = 0x0031C750u; return; } if (c.pc != 0x00306ECCu) [[unlikely]] return; }
L_00306ECC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306ED8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00306ED8u) [[unlikely]] return; }
L_00306ED8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.budget -= 2;
L_00306EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306EE8u); st32((c.r[17].w[0] + 36u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306EE8u) [[unlikely]] return; }
L_00306EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00306F0C; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[9], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306F0Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0082(c, 41u, depth + 1u); else { c.pc = 0x00308550u; return; } if (c.pc != 0x00306F0Cu) [[unlikely]] return; }
L_00306F0C:
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306F18u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306F18u) [[unlikely]] return; }
L_00306F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00306F34; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306F34u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x00306F34u) [[unlikely]] return; }
L_00306F34:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00306F68u); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00306F68u) [[unlikely]] return; }
L_00306F68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[1] = ld32((c.r[1].w[0] - 16132u));
    set32(c.r[4], 0u + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 16136u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306F98u); set32(c.r[18], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306F98u) [[unlikely]] return; }
L_00306F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00306FAC; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00306FACu) [[unlikely]] return; }
L_00306FAC:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FBCu); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00306FBCu) [[unlikely]] return; }
L_00306FBC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00306FCCu) [[unlikely]] return; }
L_00306FCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FDCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00306FDCu) [[unlikely]] return; }
L_00306FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FE4u); set32(c.r[4], 0u + 160u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00306FE4u) [[unlikely]] return; }
L_00306FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00306FF8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00306FF8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00306FF8u) [[unlikely]] return; }
L_00306FF8:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307008u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00307008u) [[unlikely]] return; }
L_00307008:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307018u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00307018u) [[unlikely]] return; }
L_00307018:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307028u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00307028u) [[unlikely]] return; }
L_00307028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 160u);
    st32((c.r[7].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    st32((c.r[7].w[0] + 108u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 16076u));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 16080u));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.f[1]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307084u); st32((c.r[3].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00307084u) [[unlikely]] return; }
L_00307084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00307098; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307098u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 304u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x00307098u) [[unlikely]] return; }
L_00307098:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003070A8u); set32(c.r[5], 0u + 10011u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x003070A8u) [[unlikely]] return; }
L_003070A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003070B8u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003070B8u) [[unlikely]] return; }
L_003070B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003070C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x003070C8u) [[unlikely]] return; }
L_003070C8:
    set32(c.r[3], 0u + 285u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 160u);
    st32((c.r[6].w[0] + 96u), c.r[5].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    st32((c.r[6].w[0] + 108u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[1].w[0] - 16076u));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 16080u));
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.f[1]);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030712Cu); st32((c.r[3].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0030712Cu) [[unlikely]] return; }
L_0030712C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00307148; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307148u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_006F(c, 5u, depth + 1u); else { c.pc = 0x002BC070u; return; } if (c.pc != 0x00307148u) [[unlikely]] return; }
L_00307148:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F80000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030717Cu); c.f[14] = fp::cvt_s_w(c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030717Cu) [[unlikely]] return; }
L_0030717C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], 0u + 464u);
    st32((c.r[2].w[0] + 128u), 0u);
    c.f[1] = ld32((c.r[1].w[0] - 16124u));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 16128u));
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071A8u); st32((c.r[2].w[0] + 56u), c.f[1]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003071A8u) [[unlikely]] return; }
L_003071A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003071C4; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071C4u); set32(c.r[8], 0u + 295u);  if (depth < kMaxDepth) unit_0082(c, 106u, depth + 1u); else { c.pc = 0x00309010u; return; } if (c.pc != 0x003071C4u) [[unlikely]] return; }
L_003071C4:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071D0u); set32(c.r[4], 0u + 992u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003071D0u) [[unlikely]] return; }
L_003071D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003071EC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 410u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003071ECu); set32(c.r[8], 0u + 295u);  if (depth < kMaxDepth) unit_0082(c, 132u, depth + 1u); else { c.pc = 0x003094E0u; return; } if (c.pc != 0x003071ECu) [[unlikely]] return; }
L_003071EC:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307200u); set32(c.r[6], 0u + 124u);  if (depth < kMaxDepth) unit_0082(c, 58u, depth + 1u); else { c.pc = 0x00308800u; return; } if (c.pc != 0x00307200u) [[unlikely]] return; }
L_00307200:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], 0u + 13u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307210u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0082(c, 62u, depth + 1u); else { c.pc = 0x003088E0u; return; } if (c.pc != 0x00307210u) [[unlikely]] return; }
L_00307210:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00307214:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307214u | kUnwind; return; } goto L_00307214; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307240u); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_0081(c, 364u, depth + 1u); else { c.pc = 0x00307420u; return; } if (c.pc != 0x00307240u) [[unlikely]] return; }
L_00307240:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00307244:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 144u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307258u); set32(c.r[18], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x00307258u) [[unlikely]] return; }
L_00307258:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003072C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030726Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0081(c, 189u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x0030726Cu) [[unlikely]] return; }
L_0030726C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_003072CC; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 16048u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00304000u < 16384u) { entry = entries_0081[(t - 0x00304000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00307290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003072CC; } }
L_00307298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003072CC; } }
L_003072A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_003072CC; } }
L_003072A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_003072CC; } }
L_003072B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_003072CC; } }
L_003072B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 5u);  if (t) { goto L_003072CC; } }
L_003072C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 6u);  if (t) { goto L_003072CC; } }
L_003072C8:
    set32(c.r[16], 0u + 7u);
    c.budget -= 1;
L_003072CC:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 352u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307244u | kUnwind; return; } goto L_00307244; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], c.r[17].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003072ECu); set32(c.r[6], 0u + 52u);  if (depth < kMaxDepth) unit_0082(c, 73u, depth + 1u); else { c.pc = 0x00308A40u; return; } if (c.pc != 0x003072ECu) [[unlikely]] return; }
L_003072EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003072F4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003072F4u) [[unlikely]] return; }
L_003072F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0030730C; } }
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030730Cu); set32(c.r[7], 0u + 52u);  if (depth < kMaxDepth) unit_0081(c, 465u, depth + 1u); else { c.pc = 0x00307F60u; return; } if (c.pc != 0x0030730Cu) [[unlikely]] return; }
L_0030730C:
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00307314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030731Cu); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_0082(c, 14u, depth + 1u); else { c.pc = 0x003081D0u; return; } if (c.pc != 0x0030731Cu) [[unlikely]] return; }
L_0030731C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00307338; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307330u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 89u, depth + 1u); else { c.pc = 0x00308D60u; return; } if (c.pc != 0x00307330u) [[unlikely]] return; }
L_00307330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00307348; } }
L_00307338:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307344u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 86u, depth + 1u); else { c.pc = 0x00308CD0u; return; } if (c.pc != 0x00307344u) [[unlikely]] return; }
L_00307344:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00307348:
    c.r[2].d[0] = c.r[16].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00307314u | kUnwind; return; } goto L_00307314; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307368u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 185u, depth + 1u); else { c.pc = 0x00306210u; return; } if (c.pc != 0x00307368u) [[unlikely]] return; }
L_00307368:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307380u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 186u, depth + 1u); else { c.pc = 0x00306230u; return; } if (c.pc != 0x00307380u) [[unlikely]] return; }
L_00307380:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307398u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 119u, depth + 1u); else { c.pc = 0x00309260u; return; } if (c.pc != 0x00307398u) [[unlikely]] return; }
L_00307398:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073ACu); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 189u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x003073ACu) [[unlikely]] return; }
L_003073AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073B8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0082(c, 93u, depth + 1u); else { c.pc = 0x00308E60u; return; } if (c.pc != 0x003073B8u) [[unlikely]] return; }
L_003073B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 131u, depth + 1u); else { c.pc = 0x003094C0u; return; } if (c.pc != 0x003073C8u) [[unlikely]] return; }
L_003073C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073DCu); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 188u, depth + 1u); else { c.pc = 0x00306270u; return; } if (c.pc != 0x003073DCu) [[unlikely]] return; }
L_003073DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003073F0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 147u, depth + 1u); else { c.pc = 0x00309750u; return; } if (c.pc != 0x003073F0u) [[unlikely]] return; }
L_003073F0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307400u) [[unlikely]] return; }
L_00307400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00307420:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 29760u);
    c.budget -= 6;
    { set32(c.r[6], 0u + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126150u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 126u, depth); }
L_00307440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307464u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 189u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x00307464u) [[unlikely]] return; }
L_00307464:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307470u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 189u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x00307470u) [[unlikely]] return; }
L_00307470:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00307488; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_00307488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003074A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x003074BCu) [[unlikely]] return; }
L_003074BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x003074C4u) [[unlikely]] return; }
L_003074C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 415u, depth + 1u); else { c.pc = 0x003079B0u; return; } if (c.pc != 0x003074CCu) [[unlikely]] return; }
L_003074CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003074E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003074FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x003074FCu) [[unlikely]] return; }
L_003074FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00307504u) [[unlikely]] return; }
L_00307504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030750Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 425u, depth + 1u); else { c.pc = 0x00307A90u; return; } if (c.pc != 0x0030750Cu) [[unlikely]] return; }
L_0030750C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 434u, depth + 1u); else { c.pc = 0x00307B60u; return; } if (c.pc != 0x00307534u) [[unlikely]] return; }
L_00307534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00307558; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030754Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030754Cu) [[unlikely]] return; }
L_0030754C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307558u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x00307558u) [[unlikely]] return; }
L_00307558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307570:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307594u); set32(c.r[4], ld32((c.r[4].w[0] + 56u)));  if (depth < kMaxDepth) unit_0082(c, 14u, depth + 1u); else { c.pc = 0x003081D0u; return; } if (c.pc != 0x00307594u) [[unlikely]] return; }
L_00307594:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 136u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003075D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[3], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 80u);  if (t) { goto L_00307604; } }
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00307600; } }
L_003075D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00307600; } }
    st32((c.r[18].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 136u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00307600:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 1;
L_00307604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030760Cu);  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x0030760Cu) [[unlikely]] return; }
L_0030760C:
    set32(c.r[2], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_003077F0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 3u);  if (t) { goto L_003076A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] - 1u);  if (t) { goto L_00307660; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 568u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307660u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307660u) [[unlikely]] return; }
L_00307660:
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00307680; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307680u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307680u) [[unlikely]] return; }
L_00307680:
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_00307738; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003076A0u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003076A0u) [[unlikely]] return; }
L_003076A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307734; } }
L_003076A8:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00307734; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_003076EC; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 564u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 568u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003076ECu); set32(c.r[5], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003076ECu) [[unlikely]] return; }
L_003076EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00307710; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307710u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307710u) [[unlikely]] return; }
L_00307710:
    set32(c.r[3], ld32((c.r[18].w[0] + 564u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00307734; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307734u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307734u) [[unlikely]] return; }
L_00307734:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00307738:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307748u); set32(c.r[16], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_0081(c, 185u, depth + 1u); else { c.pc = 0x00306210u; return; } if (c.pc != 0x00307748u) [[unlikely]] return; }
L_00307748:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307754u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 186u, depth + 1u); else { c.pc = 0x00306230u; return; } if (c.pc != 0x00307754u) [[unlikely]] return; }
L_00307754:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030776Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 119u, depth + 1u); else { c.pc = 0x00309260u; return; } if (c.pc != 0x0030776Cu) [[unlikely]] return; }
L_0030776C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307774u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0081(c, 189u, depth + 1u); else { c.pc = 0x00306290u; return; } if (c.pc != 0x00307774u) [[unlikely]] return; }
L_00307774:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307780u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0082(c, 93u, depth + 1u); else { c.pc = 0x00308E60u; return; } if (c.pc != 0x00307780u) [[unlikely]] return; }
L_00307780:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 131u, depth + 1u); else { c.pc = 0x003094C0u; return; } if (c.pc != 0x00307790u) [[unlikely]] return; }
L_00307790:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 632u)));
    st32((c.r[3].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    st32((c.r[18].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077B0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0081(c, 188u, depth + 1u); else { c.pc = 0x00306270u; return; } if (c.pc != 0x003077B0u) [[unlikely]] return; }
L_003077B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077C4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 147u, depth + 1u); else { c.pc = 0x00309750u; return; } if (c.pc != 0x003077C4u) [[unlikely]] return; }
L_003077C4:
    st32((c.r[18].w[0] + 140u), 0u);
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077D4u); st8((c.r[18].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002A(c, 280u, depth + 1u); else { c.pc = 0x001AB050u; return; } if (c.pc != 0x003077D4u) [[unlikely]] return; }
L_003077D4:
    set32(c.r[5], ld32((c.r[18].w[0] + 560u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077E0u); set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  if (depth < kMaxDepth) unit_0082(c, 86u, depth + 1u); else { c.pc = 0x00308CD0u; return; } if (c.pc != 0x003077E0u) [[unlikely]] return; }
L_003077E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003077ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 89u, depth + 1u); else { c.pc = 0x00308D60u; return; } if (c.pc != 0x003077ECu) [[unlikely]] return; }
L_003077EC:
    st32((c.r[18].w[0] + 560u), c.r[17].w[0]);
    c.budget -= 1;
L_003077F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00307814; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030780Cu); st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 444u, depth + 1u); else { c.pc = 0x00307C70u; return; } if (c.pc != 0x0030780Cu) [[unlikely]] return; }
L_0030780C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[18].w[0] + 112u) & ~15u, c.r[2]);  if (t) { goto L_0030787C; } }
L_00307814:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307834u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0082(c, 92u, depth + 1u); else { c.pc = 0x00308E00u; return; } if (c.pc != 0x00307834u) [[unlikely]] return; }
L_00307834:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00307878; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[2].d[0] = c.r[2].d[0] | 22647ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[14] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307878u); c.f[13] = fp::add(c.f[3], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307878u) [[unlikely]] return; }
L_00307878:
    ld128((c.r[18].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0030787C:
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307898u); st128((c.r[2].w[0] + 112u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0081(c, 434u, depth + 1u); else { c.pc = 0x00307B60u; return; } if (c.pc != 0x00307898u) [[unlikely]] return; }
L_00307898:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003078F4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003078DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 400u);  if (t) { goto L_003078C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_003078F8; } }
L_003078C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003078D0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003078D0u) [[unlikely]] return; }
L_003078D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003078F4; } }
L_003078DC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003078ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003078ECu) [[unlikely]] return; }
L_003078EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003078F4u); set32(c.r[4], 0u + 401u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x003078F4u) [[unlikely]] return; }
L_003078F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 1;
L_003078F8:
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307904u); set32(c.r[4], ld32((c.r[18].w[0] + 52u)));  if (depth < kMaxDepth) unit_0082(c, 175u, depth + 1u); else { c.pc = 0x00309BC0u; return; } if (c.pc != 0x00307904u) [[unlikely]] return; }
L_00307904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0030790Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 447u, depth + 1u); else { c.pc = 0x00307DE0u; return; } if (c.pc != 0x0030790Cu) [[unlikely]] return; }
L_0030790C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00307930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307944u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 434u, depth + 1u); else { c.pc = 0x00307B60u; return; } if (c.pc != 0x00307944u) [[unlikely]] return; }
L_00307944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030795C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030795Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030795Cu) [[unlikely]] return; }
L_0030795C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307984u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 434u, depth + 1u); else { c.pc = 0x00307B60u; return; } if (c.pc != 0x00307984u) [[unlikely]] return; }
L_00307984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0030799C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0030799Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0030799Cu) [[unlikely]] return; }
L_0030799C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003079B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003079D4u); set32(c.r[5], 0u + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003079D4u) [[unlikely]] return; }
L_003079D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003079F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003079F4u); set32(c.r[5], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003079F4u) [[unlikely]] return; }
L_003079F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00307A14; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A14u); set32(c.r[5], 0u + 7u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307A14u) [[unlikely]] return; }
L_00307A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0082(c, 94u, depth + 1u); else { c.pc = 0x00308E80u; return; } if (c.pc != 0x00307A1Cu) [[unlikely]] return; }
L_00307A1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A3Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307A3Cu) [[unlikely]] return; }
L_00307A3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A5Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307A5Cu) [[unlikely]] return; }
L_00307A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A64u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0082(c, 122u, depth + 1u); else { c.pc = 0x003093A0u; return; } if (c.pc != 0x00307A64u) [[unlikely]] return; }
L_00307A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A6Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0082(c, 178u, depth + 1u); else { c.pc = 0x00309C60u; return; } if (c.pc != 0x00307A6Cu) [[unlikely]] return; }
L_00307A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307A74u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00307A74u) [[unlikely]] return; }
L_00307A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AB4u); set32(c.r[5], 0u + 77u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307AB4u) [[unlikely]] return; }
L_00307AB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00307AD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AD4u); set32(c.r[5], 0u + 10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307AD4u) [[unlikely]] return; }
L_00307AD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00307AF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AF4u); set32(c.r[5], 0u + 11u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307AF4u) [[unlikely]] return; }
L_00307AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307AFCu); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0082(c, 98u, depth + 1u); else { c.pc = 0x00308F00u; return; } if (c.pc != 0x00307AFCu) [[unlikely]] return; }
L_00307AFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B1Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307B1Cu) [[unlikely]] return; }
L_00307B1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B3Cu); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307B3Cu) [[unlikely]] return; }
L_00307B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B44u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0082(c, 125u, depth + 1u); else { c.pc = 0x00309400u; return; } if (c.pc != 0x00307B44u) [[unlikely]] return; }
L_00307B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0082(c, 181u, depth + 1u); else { c.pc = 0x00309CC0u; return; } if (c.pc != 0x00307B4Cu) [[unlikely]] return; }
L_00307B4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B7Cu); set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  if (depth < kMaxDepth) unit_0082(c, 102u, depth + 1u); else { c.pc = 0x00308F80u; return; } if (c.pc != 0x00307B7Cu) [[unlikely]] return; }
L_00307B7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307B98u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307B98u) [[unlikely]] return; }
L_00307B98:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BB8u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00307BB8u) [[unlikely]] return; }
L_00307BB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BD0u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0082(c, 128u, depth + 1u); else { c.pc = 0x00309460u; return; } if (c.pc != 0x00307BD0u) [[unlikely]] return; }
L_00307BD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307BE8u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0082(c, 184u, depth + 1u); else { c.pc = 0x00309D20u; return; } if (c.pc != 0x00307BE8u) [[unlikely]] return; }
L_00307BE8:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 568u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00307C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C40u);  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00307C40u) [[unlikely]] return; }
L_00307C40:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00307C64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C58u); c.r[4].d[0] = c.r[2].d[0] | 18512ull;  if (depth < kMaxDepth) unit_0087(c, 63u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x00307C58u) [[unlikely]] return; }
L_00307C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307C60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 65u, depth + 1u); else { c.pc = 0x0031C700u; return; } if (c.pc != 0x00307C60u) [[unlikely]] return; }
L_00307C60:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00307C64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00307C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 568u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00307DC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 572u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00307DA0; } }
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[1], c.f[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00307D34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00307CDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_00307D88; } }
L_00307CDC:
    set32(c.r[4], ld32((c.r[16].w[0] + 564u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 124u);
    c.f[1] = fp::sub(c.f[0], c.f[3]);
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00307D84; } }
L_00307D34:
    set32(c.r[4], ld32((c.r[16].w[0] + 564u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u + 124u);
    c.f[1] = fp::sub(c.f[0], c.f[3]);
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[5], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 20;
L_00307D84:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_00307D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307D90u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0082(c, 58u, depth + 1u); else { c.pc = 0x00308800u; return; } if (c.pc != 0x00307D90u) [[unlikely]] return; }
L_00307D90:
    set32(c.r[3], ld32((c.r[16].w[0] + 572u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 572u), c.r[3].w[0]);  if (t) { goto L_00307DC8; } }
L_00307DA0:
    set32(c.r[6], ld32((c.r[16].w[0] + 564u)));
    set32(c.r[2], 0u + 124u);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 38u);
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307DC0u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 58u, depth + 1u); else { c.pc = 0x00308800u; return; } if (c.pc != 0x00307DC0u) [[unlikely]] return; }
L_00307DC0:
    st32((c.r[16].w[0] + 572u), 0u);
    st32((c.r[16].w[0] + 568u), 0u);
    c.budget -= 2;
L_00307DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00307DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00307EA4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x00307E08u) [[unlikely]] return; }
L_00307E08:
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E1Cu); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 188u, depth + 1u); else { c.pc = 0x00306270u; return; } if (c.pc != 0x00307E1Cu) [[unlikely]] return; }
L_00307E1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E34u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 187u, depth + 1u); else { c.pc = 0x00306250u; return; } if (c.pc != 0x00307E34u) [[unlikely]] return; }
L_00307E34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 592u);
    set32(c.r[5], c.r[5].w[0] - 16016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E4Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00307E4Cu) [[unlikely]] return; }
L_00307E4C:
    set32(c.r[2], c.r[16].w[0] + 592u);
    st32((c.r[16].w[0] + 588u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E60u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x00308DE0u; return; } if (c.pc != 0x00307E60u) [[unlikely]] return; }
L_00307E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00307E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_00307E88; } }
L_00307E70:
    set32(c.r[2], ld32((c.r[16].w[0] + 576u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_00307E84; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_00307E84:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_00307E88:
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 12u);
    set32(c.r[8], c.r[16].w[0] + 584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307E9Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 267u, depth + 1u); else { c.pc = 0x0016A910u; return; } if (c.pc != 0x00307E9Cu) [[unlikely]] return; }
L_00307E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 580u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00307F4C; } }
L_00307EA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 25376u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00307F4C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00307F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307ECCu);  if (depth < kMaxDepth) unit_001A(c, 231u, depth + 1u); else { c.pc = 0x0016A360u; return; } if (c.pc != 0x00307ECCu) [[unlikely]] return; }
L_00307ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307ED4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00307ED4u) [[unlikely]] return; }
L_00307ED4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_00307F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307EE8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_0082(c, 174u, depth + 1u); else { c.pc = 0x00309B90u; return; } if (c.pc != 0x00307EE8u) [[unlikely]] return; }
L_00307EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307EF0u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0082(c, 14u, depth + 1u); else { c.pc = 0x003081D0u; return; } if (c.pc != 0x00307EF0u) [[unlikely]] return; }
L_00307EF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 80u, depth + 1u); else { c.pc = 0x00308BE0u; return; } if (c.pc != 0x00307F00u) [[unlikely]] return; }
L_00307F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 560u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F14u); set32(c.r[4], ld32((c.r[2].w[0] + 144u)));  if (depth < kMaxDepth) unit_0081(c, 178u, depth + 1u); else { c.pc = 0x00306120u; return; } if (c.pc != 0x00307F14u) [[unlikely]] return; }
L_00307F14:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x00307F20u) [[unlikely]] return; }
L_00307F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F28u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00307F28u) [[unlikely]] return; }
L_00307F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00307F44; } }
L_00307F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F38u); set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (depth < kMaxDepth) unit_0082(c, 11u, depth + 1u); else { c.pc = 0x00308180u; return; } if (c.pc != 0x00307F38u) [[unlikely]] return; }
L_00307F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F40u);  if (depth < kMaxDepth) unit_001A(c, 271u, depth + 1u); else { c.pc = 0x0016A9E0u; return; } if (c.pc != 0x00307F40u) [[unlikely]] return; }
L_00307F40:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00307F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F4Cu);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x00307F4Cu) [[unlikely]] return; }
L_00307F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00307F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307F8Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 335u, depth + 1u); else { c.pc = 0x0012E720u; return; } if (c.pc != 0x00307F8Cu) [[unlikely]] return; }
L_00307F8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18064u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00307FB4u); st32((c.r[19].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0082(c, 8u, depth + 1u); else { c.pc = 0x003080D0u; return; } if (c.pc != 0x00307FB4u) [[unlikely]] return; }
L_00307FB4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00307FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0082(c, 1u, depth);
}

}
