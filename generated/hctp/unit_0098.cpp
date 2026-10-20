#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0098[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0,
    13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0,
    0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 293,
    0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0098(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00360000;
    case 2u: goto L_0036000C;
    case 3u: goto L_00360024;
    case 4u: goto L_00360034;
    case 5u: goto L_00360058;
    case 6u: goto L_00360074;
    case 7u: goto L_00360090;
    case 8u: goto L_003600AC;
    case 9u: goto L_003600C8;
    case 10u: goto L_003600D8;
    case 11u: goto L_003600E8;
    case 12u: goto L_003600F8;
    case 13u: goto L_00360100;
    case 14u: goto L_0036010C;
    case 15u: goto L_003601B8;
    case 16u: goto L_003601C8;
    case 17u: goto L_003601E4;
    case 18u: goto L_0036022C;
    case 19u: goto L_00360248;
    case 20u: goto L_00360264;
    case 21u: goto L_00360294;
    case 22u: goto L_003602B8;
    case 23u: goto L_003602D0;
    case 24u: goto L_003602F4;
    case 25u: goto L_00360304;
    case 26u: goto L_0036031C;
    case 27u: goto L_0036032C;
    case 28u: goto L_0036033C;
    case 29u: goto L_0036034C;
    case 30u: goto L_00360370;
    case 31u: goto L_0036038C;
    case 32u: goto L_00360390;
    case 33u: goto L_003603B0;
    case 34u: goto L_00360404;
    case 35u: goto L_00360420;
    case 36u: goto L_0036045C;
    case 37u: goto L_0036049C;
    case 38u: goto L_003604BC;
    case 39u: goto L_0036050C;
    case 40u: goto L_00360518;
    case 41u: goto L_00360528;
    case 42u: goto L_00360584;
    case 43u: goto L_0036058C;
    case 44u: goto L_0036059C;
    case 45u: goto L_003605AC;
    case 46u: goto L_003605C8;
    case 47u: goto L_003605D8;
    case 48u: goto L_0036060C;
    case 49u: goto L_00360680;
    case 50u: goto L_003606FC;
    case 51u: goto L_0036070C;
    case 52u: goto L_0036071C;
    case 53u: goto L_00360748;
    case 54u: goto L_00360764;
    case 55u: goto L_00360778;
    case 56u: goto L_00360788;
    case 57u: goto L_003607B0;
    case 58u: goto L_003607F8;
    case 59u: goto L_0036081C;
    case 60u: goto L_00360838;
    case 61u: goto L_00360840;
    case 62u: goto L_00360868;
    case 63u: goto L_00360870;
    case 64u: goto L_003608A0;
    case 65u: goto L_003608A8;
    case 66u: goto L_003608D8;
    case 67u: goto L_003608E0;
    case 68u: goto L_00360910;
    case 69u: goto L_00360918;
    case 70u: goto L_00360944;
    case 71u: goto L_0036094C;
    case 72u: goto L_00360974;
    case 73u: goto L_0036097C;
    case 74u: goto L_003609A4;
    case 75u: goto L_003609AC;
    case 76u: goto L_003609D4;
    case 77u: goto L_003609DC;
    case 78u: goto L_00360A04;
    case 79u: goto L_00360A0C;
    case 80u: goto L_00360A34;
    case 81u: goto L_00360A3C;
    case 82u: goto L_00360A68;
    case 83u: goto L_00360A70;
    case 84u: goto L_00360AA0;
    case 85u: goto L_00360AA8;
    case 86u: goto L_00360AD8;
    case 87u: goto L_00360AE0;
    case 88u: goto L_00360B10;
    case 89u: goto L_00360B18;
    case 90u: goto L_00360B44;
    case 91u: goto L_00360B4C;
    case 92u: goto L_00360B74;
    case 93u: goto L_00360B7C;
    case 94u: goto L_00360BAC;
    case 95u: goto L_00360BB4;
    case 96u: goto L_00360BE4;
    case 97u: goto L_00360BEC;
    case 98u: goto L_00360C1C;
    case 99u: goto L_00360C24;
    case 100u: goto L_00360C4C;
    case 101u: goto L_00360C54;
    case 102u: goto L_00360C7C;
    case 103u: goto L_00360C84;
    case 104u: goto L_00360CAC;
    case 105u: goto L_00360CB4;
    case 106u: goto L_00360CD8;
    case 107u: goto L_00360D20;
    case 108u: goto L_003610E0;
    case 109u: goto L_0036149C;
    case 110u: goto L_0036161C;
    case 111u: goto L_00361630;
    case 112u: goto L_00361654;
    case 113u: goto L_00361660;
    case 114u: goto L_00361680;
    case 115u: goto L_003616A8;
    case 116u: goto L_003616B4;
    case 117u: goto L_003616C0;
    case 118u: goto L_003616CC;
    case 119u: goto L_003616E4;
    case 120u: goto L_003616F0;
    case 121u: goto L_00361708;
    case 122u: goto L_00361714;
    case 123u: goto L_0036172C;
    case 124u: goto L_00361738;
    case 125u: goto L_00361750;
    case 126u: goto L_00361758;
    case 127u: goto L_00361780;
    case 128u: goto L_003617A0;
    case 129u: goto L_003617E0;
    case 130u: goto L_0036180C;
    case 131u: goto L_00361840;
    case 132u: goto L_00361850;
    case 133u: goto L_0036185C;
    case 134u: goto L_00361868;
    case 135u: goto L_00361880;
    case 136u: goto L_003618A0;
    case 137u: goto L_003618E0;
    case 138u: goto L_003618F8;
    case 139u: goto L_00361918;
    case 140u: goto L_00361928;
    case 141u: goto L_00361940;
    case 142u: goto L_00361990;
    case 143u: goto L_003619B0;
    case 144u: goto L_003619C0;
    case 145u: goto L_00361A14;
    case 146u: goto L_00361A60;
    case 147u: goto L_00361A6C;
    case 148u: goto L_00361A78;
    case 149u: goto L_00361AB0;
    case 150u: goto L_00361B04;
    case 151u: goto L_00361B54;
    case 152u: goto L_00361B60;
    case 153u: goto L_00361B6C;
    case 154u: goto L_00361BA0;
    case 155u: goto L_00361BD0;
    case 156u: goto L_00361BD8;
    case 157u: goto L_00361C28;
    case 158u: goto L_00361C34;
    case 159u: goto L_00361C40;
    case 160u: goto L_00361C70;
    case 161u: goto L_00361C90;
    case 162u: goto L_00361CB0;
    case 163u: goto L_00361CC0;
    case 164u: goto L_00361CD8;
    case 165u: goto L_00361CEC;
    case 166u: goto L_00361D08;
    case 167u: goto L_00361D18;
    case 168u: goto L_00361D24;
    case 169u: goto L_00361D40;
    case 170u: goto L_00361D68;
    case 171u: goto L_00361D78;
    case 172u: goto L_00361DB0;
    case 173u: goto L_00361DC4;
    case 174u: goto L_00361DF8;
    case 175u: goto L_00361E08;
    case 176u: goto L_00361E10;
    case 177u: goto L_00361E50;
    case 178u: goto L_00361E60;
    case 179u: goto L_00361E68;
    case 180u: goto L_00361EA8;
    case 181u: goto L_00361EB8;
    case 182u: goto L_00361EC4;
    case 183u: goto L_00361F0C;
    case 184u: goto L_00361F54;
    case 185u: goto L_00361F64;
    case 186u: goto L_00361F7C;
    case 187u: goto L_00361FC4;
    case 188u: goto L_00361FD4;
    case 189u: goto L_00361FF8;
    case 190u: goto L_00362040;
    case 191u: goto L_00362050;
    case 192u: goto L_00362074;
    case 193u: goto L_00362078;
    case 194u: goto L_003620C0;
    case 195u: goto L_003620D0;
    case 196u: goto L_003620F0;
    case 197u: goto L_0036212C;
    case 198u: goto L_00362190;
    case 199u: goto L_00362198;
    case 200u: goto L_003621A8;
    case 201u: goto L_003621BC;
    case 202u: goto L_003621D0;
    case 203u: goto L_00362234;
    case 204u: goto L_0036223C;
    case 205u: goto L_0036224C;
    case 206u: goto L_00362260;
    case 207u: goto L_0036226C;
    case 208u: goto L_003622B4;
    case 209u: goto L_003622EC;
    case 210u: goto L_003622FC;
    case 211u: goto L_00362314;
    case 212u: goto L_0036234C;
    case 213u: goto L_0036235C;
    case 214u: goto L_00362380;
    case 215u: goto L_003623B8;
    case 216u: goto L_003623C8;
    case 217u: goto L_003623F0;
    case 218u: goto L_00362428;
    case 219u: goto L_00362438;
    case 220u: goto L_00362450;
    case 221u: goto L_0036248C;
    case 222u: goto L_003624F0;
    case 223u: goto L_003624F8;
    case 224u: goto L_00362508;
    case 225u: goto L_0036251C;
    case 226u: goto L_00362530;
    case 227u: goto L_00362594;
    case 228u: goto L_0036259C;
    case 229u: goto L_003625AC;
    case 230u: goto L_003625C0;
    case 231u: goto L_003625CC;
    case 232u: goto L_00362614;
    case 233u: goto L_0036264C;
    case 234u: goto L_0036265C;
    case 235u: goto L_00362674;
    case 236u: goto L_003626B8;
    case 237u: goto L_003626C8;
    case 238u: goto L_003626EC;
    case 239u: goto L_00362730;
    case 240u: goto L_00362740;
    case 241u: goto L_00362768;
    case 242u: goto L_003627AC;
    case 243u: goto L_003627BC;
    case 244u: goto L_003627D0;
    case 245u: goto L_0036281C;
    case 246u: goto L_00362824;
    case 247u: goto L_00362840;
    case 248u: goto L_00362884;
    case 249u: goto L_0036288C;
    case 250u: goto L_003628A8;
    case 251u: goto L_003628F4;
    case 252u: goto L_00362934;
    case 253u: goto L_00362964;
    case 254u: goto L_003629D0;
    case 255u: goto L_003629D8;
    case 256u: goto L_00362A14;
    case 257u: goto L_00362A40;
    case 258u: goto L_00362B90;
    case 259u: goto L_00362CF0;
    case 260u: goto L_00362D24;
    case 261u: goto L_00362D44;
    case 262u: goto L_00362D60;
    case 263u: goto L_00362D94;
    case 264u: goto L_00362DB4;
    case 265u: goto L_00362DD0;
    case 266u: goto L_00362E04;
    case 267u: goto L_00362E24;
    case 268u: goto L_00362E40;
    case 269u: goto L_00362E60;
    case 270u: goto L_00362E90;
    case 271u: goto L_00362EB8;
    case 272u: goto L_00362ED0;
    case 273u: goto L_00362EE0;
    case 274u: goto L_00362EF0;
    case 275u: goto L_00362F20;
    case 276u: goto L_00362F38;
    case 277u: goto L_00362F54;
    case 278u: goto L_00362F80;
    case 279u: goto L_00362FCC;
    case 280u: goto L_00362FDC;
    case 281u: goto L_00362FF4;
    case 282u: goto L_00363010;
    case 283u: goto L_00363020;
    case 284u: goto L_00363030;
    case 285u: goto L_00363050;
    case 286u: goto L_00363058;
    case 287u: goto L_00363080;
    case 288u: goto L_003630B4;
    case 289u: goto L_003630C8;
    case 290u: goto L_003630DC;
    case 291u: goto L_003630E4;
    case 292u: goto L_003630F4;
    case 293u: goto L_003630FC;
    case 294u: goto L_00363110;
    case 295u: goto L_00363118;
    case 296u: goto L_00363128;
    case 297u: goto L_00363130;
    case 298u: goto L_00363150;
    case 299u: goto L_00363180;
    case 300u: goto L_0036318C;
    case 301u: goto L_003631AC;
    case 302u: goto L_003631B8;
    case 303u: goto L_0036321C;
    case 304u: goto L_0036324C;
    case 305u: goto L_00363258;
    case 306u: goto L_00363298;
    case 307u: goto L_003632F8;
    case 308u: goto L_00363328;
    case 309u: goto L_00363334;
    case 310u: goto L_00363390;
    case 311u: goto L_0036339C;
    case 312u: goto L_003633E0;
    case 313u: goto L_0036340C;
    case 314u: goto L_00363420;
    case 315u: goto L_00363468;
    case 316u: goto L_003634AC;
    case 317u: goto L_003634C4;
    case 318u: goto L_003634D4;
    case 319u: goto L_003634E4;
    case 320u: goto L_00363510;
    case 321u: goto L_00363550;
    case 322u: goto L_00363564;
    case 323u: goto L_0036357C;
    case 324u: goto L_003635A4;
    case 325u: goto L_003635CC;
    case 326u: goto L_003635F4;
    case 327u: goto L_0036361C;
    case 328u: goto L_00363644;
    case 329u: goto L_0036366C;
    case 330u: goto L_00363674;
    case 331u: goto L_00363690;
    case 332u: goto L_003636AC;
    case 333u: goto L_003636B8;
    case 334u: goto L_003636D0;
    case 335u: goto L_003636F0;
    case 336u: goto L_00363700;
    case 337u: goto L_00363718;
    case 338u: goto L_00363738;
    case 339u: goto L_00363748;
    case 340u: goto L_00363758;
    case 341u: goto L_00363764;
    case 342u: goto L_00363780;
    case 343u: goto L_00363798;
    case 344u: goto L_003637AC;
    case 345u: goto L_003637C8;
    case 346u: goto L_003637DC;
    case 347u: goto L_00363800;
    case 348u: goto L_00363814;
    case 349u: goto L_00363830;
    case 350u: goto L_00363844;
    case 351u: goto L_00363864;
    case 352u: goto L_00363880;
    case 353u: goto L_00363898;
    case 354u: goto L_003638AC;
    case 355u: goto L_003638C4;
    case 356u: goto L_003638D0;
    case 357u: goto L_003638E0;
    case 358u: goto L_003638EC;
    case 359u: goto L_003638FC;
    case 360u: goto L_00363924;
    case 361u: goto L_00363938;
    case 362u: goto L_00363948;
    case 363u: goto L_00363958;
    case 364u: goto L_00363968;
    case 365u: goto L_00363998;
    case 366u: goto L_003639D0;
    case 367u: goto L_00363AA0;
    case 368u: goto L_00363AB0;
    case 369u: goto L_00363AC0;
    case 370u: goto L_00363AE4;
    case 371u: goto L_00363B60;
    case 372u: goto L_00363B9C;
    case 373u: goto L_00363BB8;
    case 374u: goto L_00363BC4;
    case 375u: goto L_00363BD4;
    case 376u: goto L_00363BE8;
    case 377u: goto L_00363C20;
    case 378u: goto L_00363C28;
    case 379u: goto L_00363C38;
    case 380u: goto L_00363C4C;
    case 381u: goto L_00363C74;
    case 382u: goto L_00363C84;
    case 383u: goto L_00363CEC;
    case 384u: goto L_00363CF8;
    case 385u: goto L_00363D5C;
    case 386u: goto L_00363D68;
    case 387u: goto L_00363D80;
    case 388u: goto L_00363D94;
    case 389u: goto L_00363DA8;
    case 390u: goto L_00363DD0;
    case 391u: goto L_00363E90;
    case 392u: goto L_00363EA0;
    case 393u: goto L_00363EB4;
    case 394u: goto L_00363EC8;
    case 395u: goto L_00363EF0;
    case 396u: goto L_00363FB0;
    case 397u: goto L_00363FC0;
    case 398u: goto L_00363FD0;
    default: bad_entry(c, 0x00360000u); return;
    }
L_00360000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036000Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x0036000Cu) [[unlikely]] return; }
L_0036000C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360024u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x00360024u) [[unlikely]] return; }
L_00360024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360034u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00360034u) [[unlikely]] return; }
L_00360034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00360048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00360048; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360058u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00360058u) [[unlikely]] return; }
L_00360058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0036006C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0036006C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036006C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360074u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x00360074u) [[unlikely]] return; }
L_00360074:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360090u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360090u) [[unlikely]] return; }
L_00360090:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x003600ACu) [[unlikely]] return; }
L_003600AC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600C8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x003600C8u) [[unlikely]] return; }
L_003600C8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600D8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x003600D8u) [[unlikely]] return; }
L_003600D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600E8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x003600E8u) [[unlikely]] return; }
L_003600E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600F8u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x003600F8u) [[unlikely]] return; }
L_003600F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036038C; } }
L_00360100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036010Cu); set32(c.r[5], 0u + 150u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x0036010Cu) [[unlikely]] return; }
L_0036010C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[2], 0u - 129u);
    c.f[12] = 0u;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[14], 0u - 33u);
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[12], 0u - 9u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[11], 0u + 1000u);
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[8], 0u + 160u);
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 18u);
    c.r[24].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[14].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[17].w[0] + 396u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[2].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 396u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[17].w[0] + 397u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[17].w[0] + 397u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[17].w[0] + 640u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[2].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601B8u); st32((c.r[17].w[0] + 176u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x003601B8u) [[unlikely]] return; }
L_003601B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601C8u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0097(c, 198u, depth + 1u); else { c.pc = 0x0035E260u; return; } if (c.pc != 0x003601C8u) [[unlikely]] return; }
L_003601C8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 17u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x003601E4u) [[unlikely]] return; }
L_003601E4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[17].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    c.f[13] = c.f[12];
    set32(c.r[6], 0u + 19u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 369u));
    st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 368u));
    st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 369u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036022Cu); st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0036022Cu) [[unlikely]] return; }
L_0036022C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 17u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360248u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360248u) [[unlikely]] return; }
L_00360248:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 18u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360264u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360264u) [[unlikely]] return; }
L_00360264:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (t) { goto L_00360288; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_00360288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360294u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00360294u) [[unlikely]] return; }
L_00360294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003602A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003602A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003602A8:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602B8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x003602B8u) [[unlikely]] return; }
L_003602B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003602C4; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_003602C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602D0u); c.r[5].d[0] = c.r[2].d[0] | 21057ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x003602D0u) [[unlikely]] return; }
L_003602D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003602E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003602E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003602E4:
    set32(c.r[2], 0u + 10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602F4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C3DA0u; return; } if (c.pc != 0x003602F4u) [[unlikely]] return; }
L_003602F4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360304u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x00360304u) [[unlikely]] return; }
L_00360304:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036031Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0036031Cu) [[unlikely]] return; }
L_0036031C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036032Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036032Cu) [[unlikely]] return; }
L_0036032C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036033Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036033Cu) [[unlikely]] return; }
L_0036033C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036034Cu); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x0036034Cu) [[unlikely]] return; }
L_0036034C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00360360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00360360; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360370u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x00360370u) [[unlikely]] return; }
L_00360370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00360384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_00360384; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036038Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 96u, depth + 1u); else { c.pc = 0x001CD3E0u; return; } if (c.pc != 0x0036038Cu) [[unlikely]] return; }
L_0036038C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00360390:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003603B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[13] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[18], ld32((c.r[1].w[0] + 28320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[17], ld32((c.r[1].w[0] + 28324u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 28352u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360404u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360404u) [[unlikely]] return; }
L_00360404:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360420u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360420u) [[unlikely]] return; }
L_00360420:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00360460; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360460; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036045C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036045C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036045Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036045Cu) [[unlikely]] return; }
L_0036045C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360460:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00360510; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u - 1u);
    c.f[15] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[13] = c.r[2].w[0];
    c.f[16] = c.f[15];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036049Cu); c.f[17] = c.f[15];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x0036049Cu) [[unlikely]] return; }
L_0036049C:
    st32((c.r[2].w[0] + 224u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[2].w[0] + 232u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[12] = ld32((c.r[1].w[0] - 5664u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604BCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x003604BCu) [[unlikely]] return; }
L_003604BC:
    set32(c.r[3], c.r[16].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15000u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036050Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x0036050Cu) [[unlikely]] return; }
L_0036050C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00360510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00360530; } }
L_00360518:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360528u) [[unlikely]] return; }
L_00360528:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 2;
L_00360530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00360518u | kUnwind; return; } goto L_00360518; } }
    ld128((c.r[18].w[0] + 208u) & ~15u, c.r[3]);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st128((c.r[16].w[0] + 208u) & ~15u, c.r[3]);
    c.f[12] = c.r[2].w[0];
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[16].w[0] + 224u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 224u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 370u));
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360584u); st32((c.r[16].w[0] + 228u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 18u, depth + 1u); else { c.pc = 0x001E42E0u; return; } if (c.pc != 0x00360584u) [[unlikely]] return; }
L_00360584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 644u), c.r[2].w[0]);  if (t) { goto L_003605B0; } }
L_0036058C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036059Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036059Cu) [[unlikely]] return; }
L_0036059C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 18u, depth + 1u); else { c.pc = 0x001E42E0u; return; } if (c.pc != 0x003605ACu) [[unlikely]] return; }
L_003605AC:
    st32((c.r[18].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 1;
L_003605B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036058Cu | kUnwind; return; } goto L_0036058C; } }
    set32(c.r[5], c.r[16].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605C8u); st32((c.r[18].w[0] + 644u), 0u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x003605C8u) [[unlikely]] return; }
L_003605C8:
    st32((c.r[18].w[0] + 652u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605D8u); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0011(c, 14u, depth + 1u); else { c.pc = 0x001443A0u; return; } if (c.pc != 0x003605D8u) [[unlikely]] return; }
L_003605D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036066C; } }
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.f[12] = ld32((c.r[18].w[0] + 652u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036060Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x0036060Cu) [[unlikely]] return; }
L_0036060C:
    set32(c.r[3], c.r[16].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 160u);
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
    c.f[0] = ld32((c.r[18].w[0] + 228u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st128((c.r[18].w[0] + 656u) & ~15u, c.r[2]);  if (t) { goto L_00360674; } }
L_0036066C:
    ld128((c.r[18].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 656u) & ~15u, c.r[2]);
    c.budget -= 2;
L_00360674:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360680u); set32(c.r[5], 0u + 225u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x00360680u) [[unlikely]] return; }
L_00360680:
    c.f[2] = ld32((c.r[18].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_003606B0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_003606F0; } }
L_003606B0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003606D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_003606F0; } }
L_003606D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003606F4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 2;
L_003606F0:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003606F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00360724; } }
L_003606FC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036070Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036070Cu) [[unlikely]] return; }
L_0036070C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036071Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036071Cu) [[unlikely]] return; }
L_0036071C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 2;
L_00360724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003606FCu | kUnwind; return; } goto L_003606FC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360748u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360748u) [[unlikely]] return; }
L_00360748:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360764u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 57u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x00360764u) [[unlikely]] return; }
L_00360764:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360778u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x00360778u) [[unlikely]] return; }
L_00360778:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00360788u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00360788u) [[unlikely]] return; }
L_00360788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003607B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.f[21] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607F8u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0090(c, 560u, depth + 1u); else { c.pc = 0x00343F70u; return; } if (c.pc != 0x003607F8u) [[unlikely]] return; }
L_003607F8:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00360CD8; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 5824u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036081C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[15] = 0u;
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360838u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360838u) [[unlikely]] return; }
L_00360838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360868u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360868u) [[unlikely]] return; }
L_00360868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5688u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608A0u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x003608A0u) [[unlikely]] return; }
L_003608A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_003608A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5688u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608D8u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x003608D8u) [[unlikely]] return; }
L_003608D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_003608E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5688u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360910u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360910u) [[unlikely]] return; }
L_00360910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[3].w[0];
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[15] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360944u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360944u) [[unlikely]] return; }
L_00360944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_0036094C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5696u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360974u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360974u) [[unlikely]] return; }
L_00360974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_0036097C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[15] = ld32((c.r[1].w[0] - 5664u));
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609A4u); c.f[14] = fp::add(c.f[13], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x003609A4u) [[unlikely]] return; }
L_003609A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_003609AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5664u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609D4u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x003609D4u) [[unlikely]] return; }
L_003609D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_003609DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5664u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A04u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360A04u) [[unlikely]] return; }
L_00360A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360A0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B80000u);
    c.f[0] = ld32((c.r[1].w[0] - 5704u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5696u));
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A34u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360A34u) [[unlikely]] return; }
L_00360A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360A3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1CC0000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[13] = 0u;
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A68u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360A68u) [[unlikely]] return; }
L_00360A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360A70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AA0u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360AA0u) [[unlikely]] return; }
L_00360AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5688u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AD8u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360AD8u) [[unlikely]] return; }
L_00360AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1C00000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B10u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360B10u) [[unlikely]] return; }
L_00360B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360B18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[0] = ld32((c.r[1].w[0] - 5680u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[13], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B44u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360B44u) [[unlikely]] return; }
L_00360B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360B4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B74u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360B74u) [[unlikely]] return; }
L_00360B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360B7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1600000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5720u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BACu); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360BACu) [[unlikely]] return; }
L_00360BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BE4u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360BE4u) [[unlikely]] return; }
L_00360BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C1Cu); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360C1Cu) [[unlikely]] return; }
L_00360C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[1].w[0] - 5688u));
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2340000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C4Cu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360C4Cu) [[unlikely]] return; }
L_00360C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360C54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[1].w[0] - 5672u));
    c.f[12] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2340000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C7Cu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360C7Cu) [[unlikely]] return; }
L_00360C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[15] = ld32((c.r[1].w[0] - 5728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CACu); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360CACu) [[unlikely]] return; }
L_00360CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360CD8; } }
L_00360CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.f[15] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CD8u); c.f[14] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0097(c, 155u, depth + 1u); else { c.pc = 0x0035DC40u; return; } if (c.pc != 0x00360CD8u) [[unlikely]] return; }
L_00360CD8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], 0u + 22u);  if (t) { goto L_00360D00; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00360CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), 0u);  if (t) { goto L_00360D00; } }
L_00360CF0:
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    c.f[0] = ld32((c.r[1].w[0] - 5672u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_00360D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00360D20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < 799ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 999ll ? 1ull : 0ull;  if (t) { goto L_00360D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360D38:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00360D48:
    c.r[1].d[0] = c.r[2].sd[0] < 1050ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 1100ll ? 1ull : 0ull;  if (t) { goto L_00360D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360D5C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360D6C:
    c.r[1].d[0] = c.r[2].sd[0] < 1150ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 1200ll ? 1ull : 0ull;  if (t) { goto L_00360D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360D80:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360D90:
    c.r[1].d[0] = c.r[2].sd[0] < 1250ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 1690ll ? 1ull : 0ull;  if (t) { goto L_00360DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00360DA4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_003610D0; } }
L_00360DB4:
    c.r[1].d[0] = c.r[2].sd[0] < 1700ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 1800ll ? 1ull : 0ull;  if (t) { goto L_00360DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00360DC8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360DD8:
    c.r[1].d[0] = c.r[2].sd[0] < 1900ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 1950ll ? 1ull : 0ull;  if (t) { goto L_00360DEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360DEC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360DFC:
    c.r[1].d[0] = c.r[2].sd[0] < 2300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 2400ll ? 1ull : 0ull;  if (t) { goto L_00360E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360E10:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00360E20:
    c.r[1].d[0] = c.r[2].sd[0] < 2600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 2700ll ? 1ull : 0ull;  if (t) { goto L_00360E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_003610D0; } }
L_00360E34:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_003610D0; } }
L_00360E44:
    c.r[1].d[0] = c.r[2].sd[0] < 3200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3300ll ? 1ull : 0ull;  if (t) { goto L_00360E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003610D0; } }
L_00360E58:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003610D0; } }
L_00360E68:
    c.r[1].d[0] = c.r[2].sd[0] < 3500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3550ll ? 1ull : 0ull;  if (t) { goto L_00360E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003610D0; } }
L_00360E7C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 77u);  if (t) { goto L_00360E90; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360E90:
    c.r[1].d[0] = c.r[2].sd[0] < 3600ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3650ll ? 1ull : 0ull;  if (t) { goto L_00360EAC; } }
    set32(c.r[3], 0u + 75u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360EAC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 75u);  if (t) { goto L_00360EC0; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360EC0:
    c.r[1].d[0] = c.r[2].sd[0] < 3750ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3800ll ? 1ull : 0ull;  if (t) { goto L_00360ED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_003610D0; } }
L_00360ED4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_003610D0; } }
L_00360EE4:
    c.r[1].d[0] = c.r[2].sd[0] < 3850ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 3950ll ? 1ull : 0ull;  if (t) { goto L_00360EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_003610D0; } }
L_00360EF8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003610D0; } }
L_00360F08:
    c.r[1].d[0] = c.r[2].sd[0] < 4699ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5300ll ? 1ull : 0ull;  if (t) { goto L_00360F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00360F1C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00360F2C:
    c.r[1].d[0] = c.r[2].sd[0] < 5500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5550ll ? 1ull : 0ull;  if (t) { goto L_00360F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003610D0; } }
L_00360F40:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003610D0; } }
L_00360F50:
    c.r[1].d[0] = c.r[2].sd[0] < 5630ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5750ll ? 1ull : 0ull;  if (t) { goto L_00360F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003610D0; } }
L_00360F64:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_00360F78; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360F78:
    c.r[1].d[0] = c.r[2].sd[0] < 5800ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5820ll ? 1ull : 0ull;  if (t) { goto L_00360F94; } }
    set32(c.r[3], 0u + 65u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360F94:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 70u);  if (t) { goto L_00360FA8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360FA8:
    c.r[1].d[0] = c.r[2].sd[0] < 5850ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 5950ll ? 1ull : 0ull;  if (t) { goto L_00360FC4; } }
    set32(c.r[3], 0u + 73u);
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_003610D0; } }
L_00360FC4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360FD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_003610D0; } }
L_00360FD4:
    c.r[1].d[0] = c.r[2].sd[0] < 6050ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 6100ll ? 1ull : 0ull;  if (t) { goto L_00360FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360FE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00360FF8:
    c.r[1].d[0] = c.r[2].sd[0] < 6200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 6250ll ? 1ull : 0ull;  if (t) { goto L_0036100C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_0036100C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036101C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_0036101C:
    c.r[1].d[0] = c.r[2].sd[0] < 6270ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 7000ll ? 1ull : 0ull;  if (t) { goto L_00361030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003610D0; } }
L_00361030:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00361040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_00361040:
    c.r[1].d[0] = c.r[2].sd[0] < 7020ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 7040ll ? 1ull : 0ull;  if (t) { goto L_00361054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00361054:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00361064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00361064:
    c.r[1].d[0] = c.r[2].sd[0] < 7200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 7220ll ? 1ull : 0ull;  if (t) { goto L_00361078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00361078:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00361088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_00361088:
    c.r[1].d[0] = c.r[2].sd[0] < 7240ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 9000ll ? 1ull : 0ull;  if (t) { goto L_0036109C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_0036109C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003610AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003610D0; } }
L_003610AC:
    c.r[1].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 16000ll ? 1ull : 0ull;  if (t) { goto L_003610C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
L_003610C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003610D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_003610D0; } }
L_003610D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003610E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[2].sd[0] < 115ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 125ll ? 1ull : 0ull;  if (t) { goto L_00361108; } }
    c.r[3].d[0] = c.r[2].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361614; } }
    c.r[3].d[0] = c.r[2].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361108:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;  if (t) { goto L_00361120; } }
    c.r[3].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036160C; } }
    c.r[3].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361120:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 118ll ? 1ull : 0ull;  if (t) { goto L_00361138; } }
    c.r[3].d[0] = c.r[2].sd[0] < 125ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361604; } }
    c.r[3].d[0] = c.r[2].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361138:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 114u);  if (t) { goto L_00361150; } }
    c.r[3].d[0] = c.r[2].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003615FC; } }
    set32(c.r[3], 0u + 114u);
    c.budget -= 1;
L_00361150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 113u);  if (t) { goto L_003615F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003615EC; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_003615E4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003615DC; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 109u);  if (t) { goto L_003615D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003615CC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 98ll ? 1ull : 0ull;  if (t) { goto L_003611A4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 108ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003615C4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 1;
L_003611A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 95ll ? 1ull : 0ull;  if (t) { goto L_003611BC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003615BC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 1;
L_003611BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 94u);  if (t) { goto L_003611D4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 98ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003615B4; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 1;
L_003611D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 93u);  if (t) { goto L_003615AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003615A4; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;  if (t) { goto L_0036159C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361204; } }
    c.r[3].d[0] = c.r[2].sd[0] < 92ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361594; } }
L_00361204:
    c.r[3].d[0] = c.r[2].sd[0] < 88ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;  if (t) { goto L_00361220; } }
    c.r[3].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036158C; } }
    c.r[3].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361220:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 84ll ? 1ull : 0ull;  if (t) { goto L_00361238; } }
    c.r[3].d[0] = c.r[2].sd[0] < 88ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361584; } }
    c.r[3].d[0] = c.r[2].sd[0] < 84ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361238:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 83u);  if (t) { goto L_00361250; } }
    c.r[3].d[0] = c.r[2].sd[0] < 86ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036157C; } }
    set32(c.r[3], 0u + 83u);
    c.budget -= 1;
L_00361250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 82u);  if (t) { goto L_00361574; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036156C; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 80u);  if (t) { goto L_00361564; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036155C; } }
    c.r[3].d[0] = c.r[2].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 74u);  if (t) { goto L_00361290; } }
    c.r[3].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361554; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 1;
L_00361290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[2].sd[0] < 72ll ? 1ull : 0ull;  if (t) { goto L_0036154C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003612AC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 74ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361544; } }
L_003612AC:
    c.r[3].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_003612C8; } }
    c.r[3].d[0] = c.r[2].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036153C; } }
    c.r[3].d[0] = c.r[2].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 1;
L_003612C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;  if (t) { goto L_003612E0; } }
    c.r[3].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361534; } }
    c.r[3].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 1;
L_003612E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 59u);  if (t) { goto L_003612F8; } }
    c.r[3].d[0] = c.r[2].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036152C; } }
    set32(c.r[3], 0u + 59u);
    c.budget -= 1;
L_003612F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[2].sd[0] < 56ll ? 1ull : 0ull;  if (t) { goto L_00361524; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361314; } }
    c.r[3].d[0] = c.r[2].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036151C; } }
L_00361314:
    c.r[3].d[0] = c.r[2].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 52ll ? 1ull : 0ull;  if (t) { goto L_00361330; } }
    c.r[3].d[0] = c.r[2].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361514; } }
    c.r[3].d[0] = c.r[2].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361330:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 51u);  if (t) { goto L_00361348; } }
    c.r[3].d[0] = c.r[2].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036150C; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 1;
L_00361348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00361504; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361364; } }
    c.r[3].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614FC; } }
L_00361364:
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_003614F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003614EC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 43ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 41u);  if (t) { goto L_00361394; } }
    c.r[3].d[0] = c.r[2].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614E4; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
L_00361394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_003614DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003614D4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_003613C0; } }
    c.r[3].d[0] = c.r[2].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614CC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 1;
L_003613C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;  if (t) { goto L_003613D8; } }
    c.r[3].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614C4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 1;
L_003613D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_003613F0; } }
    c.r[3].d[0] = c.r[2].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614BC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 1;
L_003613F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_00361408; } }
    c.r[3].d[0] = c.r[2].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614B4; } }
    c.r[3].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361408:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_00361420; } }
    c.r[3].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614AC; } }
    c.r[3].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_00361420:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_00361438; } }
    c.r[3].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003614A4; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_00361438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00361494; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361494; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0036148C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036148C; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_0036146C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361484; } }
L_0036146C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036147C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_0036147C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_00361484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_0036148C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0036161C; } }
L_00361494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036149Cu);  if (depth < kMaxDepth) unit_0098(c, 107u, depth + 1u); else { c.pc = 0x00360D20u; return; } if (c.pc != 0x0036149Cu) [[unlikely]] return; }
L_0036149C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00361620; } }
L_003614A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_003614AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_003614B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_003614BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036161C; } }
L_003614C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036161C; } }
L_003614CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036161C; } }
L_003614D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_003614DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_003614E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_003614EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_003614F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_003614FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0036161C; } }
L_00361504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_0036150C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036161C; } }
L_00361514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0036161C; } }
L_0036151C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036161C; } }
L_00361524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_0036161C; } }
L_0036152C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036161C; } }
L_00361534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036161C; } }
L_0036153C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036161C; } }
L_00361544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036161C; } }
L_0036154C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0036161C; } }
L_00361554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0036161C; } }
L_0036155C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0036161C; } }
L_00361564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0036161C; } }
L_0036156C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036161C; } }
L_00361574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0036161C; } }
L_0036157C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_00361584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_0036158C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0036161C; } }
L_00361594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036161C; } }
L_0036159C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_003615A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036161C; } }
L_003615AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0036161C; } }
L_003615B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0036161C; } }
L_003615BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036161C; } }
L_003615C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0036161C; } }
L_003615CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_003615D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036161C; } }
L_003615DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0036161C; } }
L_003615E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0036161C; } }
L_003615EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036161C; } }
L_003615F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036161C; } }
L_003615FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_00361604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_0036160C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0036161C; } }
L_00361614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036161Cu);  if (depth < kMaxDepth) unit_0098(c, 107u, depth + 1u); else { c.pc = 0x00360D20u; return; } if (c.pc != 0x0036161Cu) [[unlikely]] return; }
L_0036161C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00361620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361654u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x00361654u) [[unlikely]] return; }
L_00361654:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x00361660u) [[unlikely]] return; }
L_00361660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29264u);
    set32(c.r[2], c.r[2].w[0] + 29280u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 20u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], 0u + 7u);
    c.budget -= 8;
L_00361680:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361680u | kUnwind; return; } goto L_00361680; } }
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 271u, depth + 1u); else { c.pc = 0x002275A0u; return; } if (c.pc != 0x003616A8u) [[unlikely]] return; }
L_003616A8:
    st32((c.r[18].w[0] + 100u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616B4u); st32((c.r[18].w[0] + 144u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_009F(c, 118u, depth + 1u); else { c.pc = 0x0037D1C0u; return; } if (c.pc != 0x003616B4u) [[unlikely]] return; }
L_003616B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x003616C0u) [[unlikely]] return; }
L_003616C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616CCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003616CCu) [[unlikely]] return; }
L_003616CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003616E4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x003616E4u) [[unlikely]] return; }
L_003616E4:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616F0u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003616F0u) [[unlikely]] return; }
L_003616F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361708; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361708u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00361708u) [[unlikely]] return; }
L_00361708:
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361714u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00361714u) [[unlikely]] return; }
L_00361714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036172C; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 80u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036172Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x0036172Cu) [[unlikely]] return; }
L_0036172C:
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361738u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00361738u) [[unlikely]] return; }
L_00361738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361750; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361750u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x00361750u) [[unlikely]] return; }
L_00361750:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00361758:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361758u | kUnwind; return; } goto L_00361758; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361780u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 136u, depth + 1u); else { c.pc = 0x003618A0u; return; } if (c.pc != 0x00361780u) [[unlikely]] return; }
L_00361780:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003617A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00361880; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29264u);
    set32(c.r[2], c.r[2].w[0] + 29280u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
L_003617E0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 84u);  if (t) { goto L_0036180C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036180C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036180Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036180Cu) [[unlikely]] return; }
L_0036180C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003617E0u | kUnwind; return; } goto L_003617E0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00361840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00361840; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361840u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361840u) [[unlikely]] return; }
L_00361840:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361850u); st32((c.r[18].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x002275F0u; return; } if (c.pc != 0x00361850u) [[unlikely]] return; }
L_00361850:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036185Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x0036185Cu) [[unlikely]] return; }
L_0036185C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x00361868u) [[unlikely]] return; }
L_00361868:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00361884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361880u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00361880u) [[unlikely]] return; }
L_00361880:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00361884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003618A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003618E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003618E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003618E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003618E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003618E0u) [[unlikely]] return; }
L_003618E0:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_003618E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00361900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 154u, depth + 1u); else { c.pc = 0x00361BA0u; return; } if (c.pc != 0x003618F8u) [[unlikely]] return; }
L_003618F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0036192C; } }
L_00361900:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00361920; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361918u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 144u, depth + 1u); else { c.pc = 0x003619C0u; return; } if (c.pc != 0x00361918u) [[unlikely]] return; }
L_00361918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361928; } }
L_00361920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361928u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 149u, depth + 1u); else { c.pc = 0x00361AB0u; return; } if (c.pc != 0x00361928u) [[unlikely]] return; }
L_00361928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0036192C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00361940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361990u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 136u, depth + 1u); else { c.pc = 0x003618A0u; return; } if (c.pc != 0x00361990u) [[unlikely]] return; }
L_00361990:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003619B0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003619B0u) [[unlikely]] return; }
L_003619B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003619C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.f[20] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[21] = c.r[4].w[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00361A0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361A0C; } }
    c.f[21] = c.f[20];
    c.f[20] = c.r[4].w[0];
    c.budget -= 2;
L_00361A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A14u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00361A14u) [[unlikely]] return; }
L_00361A14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43400000u);  if (t) { goto L_00361A60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = c.r[3].w[0];
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.f[0] = ld32((c.r[1].w[0] - 5584u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.f[15] = fp::mul(c.f[21], c.f[0]);
    c.f[16] = c.r[3].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A60u); c.f[13] = fp::sub(c.f[2], c.f[1]);  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x00361A60u) [[unlikely]] return; }
L_00361A60:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00361A6Cu) [[unlikely]] return; }
L_00361A6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A78u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00361A78u) [[unlikely]] return; }
L_00361A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.f[0] = ld32((c.r[1].w[0] + 1440u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00361AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.f[20] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[21] = c.r[4].w[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00361AFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361AFC; } }
    c.f[21] = c.f[20];
    c.f[20] = c.r[4].w[0];
    c.budget -= 2;
L_00361AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B04u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00361B04u) [[unlikely]] return; }
L_00361B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43430000u);  if (t) { goto L_00361B54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[14] = c.r[3].w[0];
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.f[0] = ld32((c.r[1].w[0] - 5584u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[15] = fp::mul(c.f[21], c.f[0]);
    c.f[13] = fp::sub(c.f[2], c.f[1]);
    c.f[16] = c.r[3].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B54u); c.f[12] = fp::sub(c.f[3], c.f[14]);  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x00361B54u) [[unlikely]] return; }
L_00361B54:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00361B60u) [[unlikely]] return; }
L_00361B60:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B6Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00361B6Cu) [[unlikely]] return; }
L_00361B6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.f[0] = ld32((c.r[1].w[0] + 1448u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00361BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5592u));
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BD0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00361BD0u) [[unlikely]] return; }
L_00361BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BD8u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00361BD8u) [[unlikely]] return; }
L_00361BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42780000u);  if (t) { goto L_00361C28; } }
    set32(c.r[6], c.r[16].w[0] - 1u);
    c.f[14] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F40000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[15] = c.r[3].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[16] = c.r[3].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C28u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_006F(c, 46u, depth + 1u); else { c.pc = 0x002BC900u; return; } if (c.pc != 0x00361C28u) [[unlikely]] return; }
L_00361C28:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C34u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00361C34u) [[unlikely]] return; }
L_00361C34:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C40u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 79u, depth + 1u); else { c.pc = 0x002BCF70u; return; } if (c.pc != 0x00361C40u) [[unlikely]] return; }
L_00361C40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.f[0] = ld32((c.r[1].w[0] + 1456u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00361C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 20u), c.f[12]);
    st32((c.r[4].w[0] + 24u), c.f[13]);
    set32(c.r[5], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 136u, depth + 1u); else { c.pc = 0x003618A0u; return; } if (c.pc != 0x00361C90u) [[unlikely]] return; }
L_00361C90:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CB0u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361CB0u) [[unlikely]] return; }
L_00361CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CD8u); set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  if (depth < kMaxDepth) unit_006E(c, 443u, depth + 1u); else { c.pc = 0x002BB190u; return; } if (c.pc != 0x00361CD8u) [[unlikely]] return; }
L_00361CD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00361CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CECu);  if (depth < kMaxDepth) unit_0098(c, 169u, depth + 1u); else { c.pc = 0x00361D40u; return; } if (c.pc != 0x00361CECu) [[unlikely]] return; }
L_00361CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00361D1C; } }
L_00361CF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00361D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 196u, depth + 1u); else { c.pc = 0x003620F0u; return; } if (c.pc != 0x00361D08u) [[unlikely]] return; }
L_00361D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361D18; } }
L_00361D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D18u);  if (depth < kMaxDepth) unit_0098(c, 220u, depth + 1u); else { c.pc = 0x00362450u; return; } if (c.pc != 0x00361D18u) [[unlikely]] return; }
L_00361D18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00361D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D24u);  if (depth < kMaxDepth) unit_0098(c, 244u, depth + 1u); else { c.pc = 0x003627D0u; return; } if (c.pc != 0x00361D24u) [[unlikely]] return; }
L_00361D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361D40:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00361D68u) [[unlikely]] return; }
L_00361D68:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D78u); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x00361D78u) [[unlikely]] return; }
L_00361D78:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5600u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5600u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 782u);  if (t) { goto L_00361DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DB0u); set32(c.r[4], 0u + 779u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00361DB0u) [[unlikely]] return; }
L_00361DB0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_00361DCC; } }
L_00361DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DC4u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00361DC4u) [[unlikely]] return; }
L_00361DC4:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_00361DCC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DF8u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361DF8u) [[unlikely]] return; }
L_00361DF8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361E08u) [[unlikely]] return; }
L_00361E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E10u); set32(c.r[4], 0u + 780u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00361E10u) [[unlikely]] return; }
L_00361E10:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E50u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361E50u) [[unlikely]] return; }
L_00361E50:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361E60u) [[unlikely]] return; }
L_00361E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E68u); set32(c.r[4], 0u + 781u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00361E68u) [[unlikely]] return; }
L_00361E68:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EA8u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361EA8u) [[unlikely]] return; }
L_00361EA8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361EB8u) [[unlikely]] return; }
L_00361EB8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_00361EE0; } }
L_00361EC4:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361EC4u | kUnwind; return; } goto L_00361EC4; } }
L_00361EE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00361FDC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00361FDC; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F0Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00361F0Cu) [[unlikely]] return; }
L_00361F0C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F54u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361F54u) [[unlikely]] return; }
L_00361F54:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361F64u) [[unlikely]] return; }
L_00361F64:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F7Cu); set32(c.r[5], c.r[5].w[0] - 5648u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00361F7Cu) [[unlikely]] return; }
L_00361F7C:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FC4u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361FC4u) [[unlikely]] return; }
L_00361FC4:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00361FD4u) [[unlikely]] return; }
L_00361FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003620D4; } }
L_00361FDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362058; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FF8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00361FF8u) [[unlikely]] return; }
L_00361FF8:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362040u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362040u) [[unlikely]] return; }
L_00362040:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362050u) [[unlikely]] return; }
L_00362050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003620D0; } }
L_00362058:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003620D0; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362078u); set32(c.r[5], c.r[5].w[0] - 5640u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362078u) [[unlikely]] return; }
    goto L_00362078;
L_00362074:
    set32(c.r[5], c.r[5].w[0] - 5640u);
    c.budget -= 1;
L_00362078:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003620C0u); c.f[13] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003620C0u) [[unlikely]] return; }
L_003620C0:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003620D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003620D0u) [[unlikely]] return; }
L_003620D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003620D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003620F0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 548u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003621C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 789u);  if (t) { goto L_003621C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036212Cu); set32(c.r[4], 0u + 789u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036212Cu) [[unlikely]] return; }
L_0036212C:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362190u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362190u) [[unlikely]] return; }
L_00362190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362198u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x00362198u) [[unlikely]] return; }
L_00362198:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621A8u); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x003621A8u) [[unlikely]] return; }
L_003621A8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003621BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003621BCu) [[unlikely]] return; }
L_003621BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0036243C; } }
L_003621C4:
    set32(c.r[4], 0u + 789u);
    c.budget -= 1;
L_003621C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621D0u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x003621D0u) [[unlikely]] return; }
L_003621D0:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362234u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362234u) [[unlikely]] return; }
L_00362234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036223Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036223Cu) [[unlikely]] return; }
L_0036223C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036224Cu); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x0036224Cu) [[unlikely]] return; }
L_0036224C:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362260u) [[unlikely]] return; }
L_00362260:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_00362288; } }
L_0036226C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036226Cu | kUnwind; return; } goto L_0036226C; } }
L_00362288:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362364; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362364; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622B4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003622B4u) [[unlikely]] return; }
L_003622B4:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003622ECu); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003622ECu) [[unlikely]] return; }
L_003622EC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003622FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003622FCu) [[unlikely]] return; }
L_003622FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362314u); set32(c.r[5], c.r[5].w[0] - 5648u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362314u) [[unlikely]] return; }
L_00362314:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036234Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036234Cu) [[unlikely]] return; }
L_0036234C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036235Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036235Cu) [[unlikely]] return; }
L_0036235C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362438; } }
L_00362364:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003623D0; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362380u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362380u) [[unlikely]] return; }
L_00362380:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003623B8u); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003623B8u) [[unlikely]] return; }
L_003623B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003623C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003623C8u) [[unlikely]] return; }
L_003623C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362438; } }
L_003623D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362438; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623F0u); set32(c.r[5], c.r[5].w[0] - 5648u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003623F0u) [[unlikely]] return; }
L_003623F0:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362428u); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362428u) [[unlikely]] return; }
L_00362428:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362438u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362438u) [[unlikely]] return; }
L_00362438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0036243C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00362450:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 26392u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 548u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00362524; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 790u);  if (t) { goto L_00362528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036248Cu); set32(c.r[4], 0u + 790u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x0036248Cu) [[unlikely]] return; }
L_0036248C:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003624F0u) [[unlikely]] return; }
L_003624F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003624F8u) [[unlikely]] return; }
L_003624F8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362508u); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x00362508u) [[unlikely]] return; }
L_00362508:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036251Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036251Cu) [[unlikely]] return; }
L_0036251C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003627C0; } }
L_00362524:
    set32(c.r[4], 0u + 790u);
    c.budget -= 1;
L_00362528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362530u);  if (depth < kMaxDepth) unit_000B(c, 461u, depth + 1u); else { c.pc = 0x0012FD60u; return; } if (c.pc != 0x00362530u) [[unlikely]] return; }
L_00362530:
    st32((c.r[16].w[0] + 352u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 5600u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362594u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362594u) [[unlikely]] return; }
L_00362594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036259Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x0036259Cu) [[unlikely]] return; }
L_0036259C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625ACu); st128((c.r[16].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x003625ACu) [[unlikely]] return; }
L_003625AC:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003625C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003625C0u) [[unlikely]] return; }
L_003625C0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 256u);  if (t) { goto L_003625E8; } }
L_003625CC:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003625CCu | kUnwind; return; } goto L_003625CC; } }
L_003625E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003626D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003626D0; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362614u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362614u) [[unlikely]] return; }
L_00362614:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036264Cu); c.f[12] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036264Cu) [[unlikely]] return; }
L_0036264C:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036265Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036265Cu) [[unlikely]] return; }
L_0036265C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362674u); set32(c.r[5], c.r[5].w[0] - 5640u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362674u) [[unlikely]] return; }
L_00362674:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003626B8u); c.f[12] = fp::add(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003626B8u) [[unlikely]] return; }
L_003626B8:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003626C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003626C8u) [[unlikely]] return; }
L_003626C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003627BC; } }
L_003626D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362748; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[5].w[0] - 5656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626ECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x003626ECu) [[unlikely]] return; }
L_003626EC:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362730u); c.f[12] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362730u) [[unlikely]] return; }
L_00362730:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362740u) [[unlikely]] return; }
L_00362740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003627BC; } }
L_00362748:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003627BC; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362768u); set32(c.r[5], c.r[5].w[0] - 5640u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00127458u; return; } if (c.pc != 0x00362768u) [[unlikely]] return; }
L_00362768:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st32((c.r[16].w[0] + 352u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 356u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42DC0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[13] = ld32((c.r[17].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003627ACu); c.f[12] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003627ACu) [[unlikely]] return; }
L_003627AC:
    set32(c.r[25], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003627BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003627BCu) [[unlikely]] return; }
L_003627BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003627C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003627D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[13] = ld32((c.r[18].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036281Cu); c.f[12] = ld32((c.r[18].w[0] + 20u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036281Cu) [[unlikely]] return; }
L_0036281C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362824u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x00362824u) [[unlikely]] return; }
L_00362824:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362840u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362840u) [[unlikely]] return; }
L_00362840:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 108u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362884u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362884u) [[unlikely]] return; }
L_00362884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036288Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x0036288Cu) [[unlikely]] return; }
L_0036288C:
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003628A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003628A8u) [[unlikely]] return; }
L_003628A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[2], c.r[2].w[0] + 1472u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[2].w[0]) & ~15u, c.r[9]);
    set32(c.r[10], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[7].w[0] + 1488u);
    set32(c.r[8], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[6].w[0] + 1520u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], 0u + 4u);
    st128((c.r[10].w[0]) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    ld128((c.r[7].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], c.r[2].w[0] + 1504u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
L_003628F4:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003628F4u | kUnwind; return; } goto L_003628F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] + 1648u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st64((c.r[3].w[0]), c.r[2].d[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00362934:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    c.f[12] = 0u;
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 192u));
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362964u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0012(c, 261u, depth + 1u); else { c.pc = 0x0014ACC0u; return; } if (c.pc != 0x00362964u) [[unlikely]] return; }
L_00362964:
    set32(c.r[2], c.r[17].w[0] << 5);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[3].w[0] + 64u);
    c.f[2] = ld32((c.r[2].w[0] + 224u));
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.f[0] = ld32((c.r[2].w[0] + 208u));
    c.f[3] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[14] = ld32((c.r[1].w[0] - 5608u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[3] = fp::add(c.f[3], c.f[2]);
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003629D0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003629D0u) [[unlikely]] return; }
L_003629D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 268u, depth + 1u); else { c.pc = 0x00362E40u; return; } if (c.pc != 0x003629D8u) [[unlikely]] return; }
L_003629D8:
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 240u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362A14; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362A14u) [[unlikely]] return; }
L_00362A14:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362934u | kUnwind; return; } goto L_00362934; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00362A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[1].w[0] - 1536u)));
    c.f[23] = ld32((c.r[4].w[0] + 48u));
    c.f[21] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = ld32((c.r[4].w[0] + 52u));  if (t) { goto L_00362AA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5616u));
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00362AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[1];  if (t) { goto L_00362AB8; } }
L_00362AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5624u));
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362AB8; } }
    c.f[23] = c.f[1];
    c.budget -= 1;
L_00362AB8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00362AE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5616u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00362AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[1];  if (t) { goto L_00362AFC; } }
L_00362AE8:
    c.f[0] = ld32((c.r[1].w[0] - 5624u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362AFC; } }
    c.f[22] = c.f[1];
    c.budget -= 1;
L_00362AFC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00362B2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5616u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00362B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[1];  if (t) { goto L_00362B40; } }
L_00362B2C:
    c.f[0] = ld32((c.r[1].w[0] - 5624u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362B40; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_00362B40:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_00362B70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = ld32((c.r[1].w[0] - 5616u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 3u);  if (t) { goto L_00362B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_00362B84; } }
L_00362B70:
    c.f[0] = ld32((c.r[1].w[0] - 5624u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362B84; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_00362B84:
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_00362B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B90u);  if (depth < kMaxDepth) unit_000F(c, 337u, depth + 1u); else { c.pc = 0x0013F5C0u; return; } if (c.pc != 0x00362B90u) [[unlikely]] return; }
L_00362B90:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00362BBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_00362BD4; } }
L_00362BBC:
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 6;
L_00362BD4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362C14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00362C08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362C08; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00362C08:
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), 0u);  if (t) { goto L_00362C50; } }
L_00362C14:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00362C48; } }
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00362C40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362C40; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00362C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_00362C50; } }
L_00362C48:
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    c.budget -= 2;
L_00362C50:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00362C90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00362C84; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362C84; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00362C84:
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_00362CCC; } }
L_00362C90:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00362CC4; } }
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00362CBC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00362CBC; } }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_00362CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_00362CCC; } }
L_00362CC4:
    st32((c.r[16].w[0] + 136u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 2;
L_00362CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00362CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1664u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D24u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00362D24u) [[unlikely]] return; }
L_00362D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 10u);
    c.f[13] = c.f[12];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D44u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362D44u) [[unlikely]] return; }
L_00362D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00362D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1696u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D94u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00362D94u) [[unlikely]] return; }
L_00362D94:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DB4u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362DB4u) [[unlikely]] return; }
L_00362DB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00362DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E04u); st64((c.r[5].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x002276C0u; return; } if (c.pc != 0x00362E04u) [[unlikely]] return; }
L_00362E04:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E24u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362E24u) [[unlikely]] return; }
L_00362E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00362E40:
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00362E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00362E98; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E90u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362E90u) [[unlikely]] return; }
L_00362E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00362EBC; } }
L_00362E98:
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EB8u); c.f[13] = c.f[12];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362EB8u) [[unlikely]] return; }
L_00362EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00362EBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362ED0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00362A40u | kUnwind; return; } goto L_00362A40; }
L_00362EE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003617A0u | kUnwind; return; } goto L_003617A0; }
L_00362EF0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F20u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x00362F20u) [[unlikely]] return; }
L_00362F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[4], 0u + 240u);
    set32(c.r[2], c.r[2].w[0] + 29456u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F38u); st32((c.r[19].w[0] + 16u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00362F38u) [[unlikely]] return; }
L_00362F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00362F54; } }
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 298u, depth + 1u); else { c.pc = 0x00363150u; return; } if (c.pc != 0x00362F54u) [[unlikely]] return; }
L_00362F54:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00362F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00362FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 29456u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362FCC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362FCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FCCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362FCCu) [[unlikely]] return; }
L_00362FCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FDCu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x00362FDCu) [[unlikely]] return; }
L_00362FDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00362FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00362FF4u) [[unlikely]] return; }
L_00362FF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00362FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00363030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 8;
L_00363050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363058u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363058u) [[unlikely]] return; }
L_00363058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363130; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 220u)));  if (t) { goto L_00363080; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363080u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363080u) [[unlikely]] return; }
L_00363080:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_00363104; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003630A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00363134; } }
L_003630A0:
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_003630D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630B4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003630B4u) [[unlikely]] return; }
L_003630B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00363130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630C8u);  if (depth < kMaxDepth) unit_0096(c, 68u, depth + 1u); else { c.pc = 0x00358BA0u; return; } if (c.pc != 0x003630C8u) [[unlikely]] return; }
L_003630C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363130; } }
L_003630D0:
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630DCu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003630DCu) [[unlikely]] return; }
L_003630DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630E4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003630E4u) [[unlikely]] return; }
L_003630E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003630F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630F4u);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x003630F4u) [[unlikely]] return; }
L_003630F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630FCu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x003630FCu) [[unlikely]] return; }
L_003630FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363130; } }
L_00363104:
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363110u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00363110u) [[unlikely]] return; }
L_00363110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363118u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00363118u) [[unlikely]] return; }
L_00363118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00363128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363128u);  if (depth < kMaxDepth) unit_0057(c, 96u, depth + 1u); else { c.pc = 0x0025CA50u; return; } if (c.pc != 0x00363128u) [[unlikely]] return; }
L_00363128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363130u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x00363130u) [[unlikely]] return; }
L_00363130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00363134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00363150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363180u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 298u, depth + 1u); else { c.pc = 0x0012E440u; return; } if (c.pc != 0x00363180u) [[unlikely]] return; }
L_00363180:
    set32(c.r[4], c.r[20].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036318Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x0036318Cu) [[unlikely]] return; }
L_0036318C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29344u);
    set32(c.r[2], c.r[2].w[0] + 29432u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631ACu); st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003631ACu) [[unlikely]] return; }
L_003631AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631B8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x003631B8u) [[unlikely]] return; }
L_003631B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], 0u + 30u);
    st128((c.r[20].w[0] + 80u) & ~15u, c.r[4]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[16].w[0]) & ~15u, c.r[4]);
    st128((c.r[20].w[0] + 96u) & ~15u, c.r[4]);
    st32((c.r[20].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 128u), 0u);
    st32((c.r[20].w[0] + 140u), 0u);
    st8((c.r[20].w[0] + 136u), static_cast<std::uint8_t>(0u));
    ld128((c.r[20].w[0] + 80u) & ~15u, c.r[3]);
    st128((c.r[20].w[0] + 112u) & ~15u, c.r[3]);
    st32((c.r[20].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 44u), 0u);
    st32((c.r[20].w[0] + 40u), 0u);
    st32((c.r[20].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003633D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00363288; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 118u);  if (t) { goto L_00363230; } }
L_0036321C:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036323C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00363230:
    c.r[2].d[0] = c.r[4].sd[0] < 118ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036321Cu | kUnwind; return; } goto L_0036321C; } }
L_0036323C:
    st32((c.r[20].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036324Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x0036324Cu) [[unlikely]] return; }
L_0036324C:
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00363270; } }
L_00363258:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00363270:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363258u | kUnwind; return; } goto L_00363258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003632E4; } }
L_00363288:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363298u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00363298u) [[unlikely]] return; }
L_00363298:
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[8], 0u + 27u);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[7], 0u + 31u);
    set32(c.r[6], 0u + 38u);
    set32(c.r[5], 0u + 42u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[3], 0u + 84u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 19;
L_003632E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);  if (t) { goto L_00363364; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 55u);  if (t) { goto L_0036330C; } }
L_003632F8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00363318; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036330C:
    c.r[2].d[0] = c.r[4].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003632F8u | kUnwind; return; } goto L_003632F8; } }
L_00363318:
    st32((c.r[20].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363328u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00363328u) [[unlikely]] return; }
L_00363328:
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0036334C; } }
L_00363334:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_0036334C:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363334u | kUnwind; return; } goto L_00363334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003633D8; } }
L_00363364:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 1760u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363390u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x00363390u) [[unlikely]] return; }
L_00363390:
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003633C8; } }
L_0036339C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { goto L_003633AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 31u);  if (t) { goto L_003633B4; } }
L_003633AC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 2;
L_003633B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_003633C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036339Cu | kUnwind; return; } goto L_0036339C; } }
L_003633D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633E0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x003633E0u) [[unlikely]] return; }
L_003633E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25571u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003633FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 164u), 0u);  if (t) { goto L_00363404; } }
L_003633FC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_00363404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036340Cu);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x0036340Cu) [[unlikely]] return; }
L_0036340C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 25567u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363428; } }
L_00363420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 168u), 0u);  if (t) { goto L_00363430; } }
L_00363428:
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 2;
L_00363430:
    st32((c.r[20].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[20].w[0] + 52u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 56u), 0u);
    st32((c.r[20].w[0] + 60u), 0u);
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 68u), 0u);
    st32((c.r[20].w[0] + 72u), 0u);
    st32((c.r[20].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 152u), 0u);
    st32((c.r[20].w[0] + 156u), 0u);
    st8((c.r[20].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_00363468:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 172u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363468u | kUnwind; return; } goto L_00363468; } }
    st32((c.r[20].w[0] + 212u), 0u);
    set32(c.r[2], 0u + 55u);
    st32((c.r[20].w[0] + 216u), 0u);
    st32((c.r[20].w[0] + 220u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 224u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003634B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 14u, depth + 1u); else { c.pc = 0x00364210u; return; } if (c.pc != 0x003634ACu) [[unlikely]] return; }
L_003634AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_003634D8; } }
L_003634B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003634CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x003645F0u; return; } if (c.pc != 0x003634C4u) [[unlikely]] return; }
L_003634C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003634D4; } }
L_003634CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634D4u);  if (depth < kMaxDepth) unit_0099(c, 14u, depth + 1u); else { c.pc = 0x00364210u; return; } if (c.pc != 0x003634D4u) [[unlikely]] return; }
L_003634D4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_003634D8:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003634E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003634E4u) [[unlikely]] return; }
L_003634E4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00363510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003636D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29344u);
    set32(c.r[2], c.r[2].w[0] + 29432u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363550u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024C780u; return; } if (c.pc != 0x00363550u) [[unlikely]] return; }
L_00363550:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363564; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363564u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x00363564u) [[unlikely]] return; }
L_00363564:
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036357Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x0036357Cu) [[unlikely]] return; }
L_0036357C:
    st32((c.r[17].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003635A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003635A4u) [[unlikely]] return; }
L_003635A4:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003635CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003635CCu) [[unlikely]] return; }
L_003635CC:
    st32((c.r[17].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003635F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003635F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003635F4u) [[unlikely]] return; }
L_003635F4:
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036361C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036361C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036361Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036361Cu) [[unlikely]] return; }
L_0036361C:
    st32((c.r[17].w[0] + 64u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363644; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363644; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363644u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363644u) [[unlikely]] return; }
L_00363644:
    st32((c.r[17].w[0] + 68u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036366C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036366C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036366Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036366Cu) [[unlikely]] return; }
L_0036366C:
    st32((c.r[17].w[0] + 72u), 0u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00363674:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 172u);  if (t) { goto L_00363690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363690u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x00363690u) [[unlikely]] return; }
L_00363690:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363674u | kUnwind; return; } goto L_00363674; } }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x003636ACu) [[unlikely]] return; }
L_003636AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E490u; return; } if (c.pc != 0x003636B8u) [[unlikely]] return; }
L_003636B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003636D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x003636D0u) [[unlikely]] return; }
L_003636D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003636D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003636F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E5D0u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 317u, depth); }
L_00363700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363718u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 135u, depth + 1u); else { c.pc = 0x001A9560u; return; } if (c.pc != 0x00363718u) [[unlikely]] return; }
L_00363718:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363864; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 224u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 8u);  if (t) { goto L_00363740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363738u);  if (depth < kMaxDepth) unit_0053(c, 59u, depth + 1u); else { c.pc = 0x0024C560u; return; } if (c.pc != 0x00363738u) [[unlikely]] return; }
L_00363738:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00363740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363748u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00363748u) [[unlikely]] return; }
L_00363748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003637B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363758u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00363758u) [[unlikely]] return; }
L_00363758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0053(c, 82u, depth + 1u); else { c.pc = 0x0024C840u; return; } if (c.pc != 0x00363764u) [[unlikely]] return; }
L_00363764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003637B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363780u);  if (depth < kMaxDepth) unit_0053(c, 78u, depth + 1u); else { c.pc = 0x0024C7C0u; return; } if (c.pc != 0x00363780u) [[unlikely]] return; }
L_00363780:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_00363784:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_003637B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363798u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00363798u) [[unlikely]] return; }
L_00363798:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003637B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637ACu);  if (depth < kMaxDepth) unit_0099(c, 170u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003637ACu) [[unlikely]] return; }
L_003637AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003637B0:
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    c.budget -= 1;
L_003637B4:
    set32(c.r[17], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_0036381C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637C8u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x003637C8u) [[unlikely]] return; }
L_003637C8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_003637E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637DCu);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x003637DCu) [[unlikely]] return; }
L_003637DC:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003637E0:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036381C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 48u);  if (t) { goto L_0036381C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363800u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00363800u) [[unlikely]] return; }
L_00363800:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363814u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365B90u; return; } if (c.pc != 0x00363814u) [[unlikely]] return; }
L_00363814:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00363818:
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 1;
L_0036381C:
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_00363864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363830u);  if (depth < kMaxDepth) unit_0011(c, 177u, depth + 1u); else { c.pc = 0x00146C10u; return; } if (c.pc != 0x00363830u) [[unlikely]] return; }
L_00363830:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 8u);  if (t) { goto L_00363848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363844u);  if (depth < kMaxDepth) unit_0011(c, 182u, depth + 1u); else { c.pc = 0x00146C90u; return; } if (c.pc != 0x00363844u) [[unlikely]] return; }
L_00363844:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00363848:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363864; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363864u) [[unlikely]] return; }
L_00363864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363898u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 318u, depth + 1u); else { c.pc = 0x0012E5E0u; return; } if (c.pc != 0x00363898u) [[unlikely]] return; }
L_00363898:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003638B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638ACu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003638ACu) [[unlikely]] return; }
L_003638AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_003638C8; } }
L_003638B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_003638C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638C4u);  if (depth < kMaxDepth) unit_0076(c, 191u, depth + 1u); else { c.pc = 0x002D9970u; return; } if (c.pc != 0x003638C4u) [[unlikely]] return; }
L_003638C4:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_003638C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003638D0u) [[unlikely]] return; }
L_003638D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003638E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638E0u);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003638E0u) [[unlikely]] return; }
L_003638E0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638ECu); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x003638ECu) [[unlikely]] return; }
L_003638EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003638FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638FCu);  if (depth < kMaxDepth) unit_0017(c, 177u, depth + 1u); else { c.pc = 0x0015E070u; return; } if (c.pc != 0x003638FCu) [[unlikely]] return; }
L_003638FC:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], 0u + 160u);
    st32((c.r[3].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 26392u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363924u); set32(c.r[17], c.r[2].w[0] + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x00363924u) [[unlikely]] return; }
L_00363924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00363938; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363938u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 287u, depth + 1u); else { c.pc = 0x001AB200u; return; } if (c.pc != 0x00363938u) [[unlikely]] return; }
L_00363938:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363948u); set32(c.r[5], 0u + 10000u);  if (depth < kMaxDepth) unit_002A(c, 5u, depth + 1u); else { c.pc = 0x001A80A0u; return; } if (c.pc != 0x00363948u) [[unlikely]] return; }
L_00363948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363958u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 3u, depth + 1u); else { c.pc = 0x001A8060u; return; } if (c.pc != 0x00363958u) [[unlikely]] return; }
L_00363958:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363968u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 322u, depth + 1u); else { c.pc = 0x00196E30u; return; } if (c.pc != 0x00363968u) [[unlikely]] return; }
L_00363968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00260000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] | 22647ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363998u); set32(c.r[5], 0u + 149u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363998u) [[unlikely]] return; }
L_00363998:
    st32((c.r[16].w[0] + 144u), 0u);
    set32(c.r[3], 0u + 15u);
    st32((c.r[16].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[4], 0u + 20u);
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 156u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003639D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363A18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00363A18; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] + 51u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00363A18; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 2;
L_00363A18:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363A58; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_00363A58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + 51u);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00363A58; } }
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 2;
L_00363A58:
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363AA0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00363AA4; } }
L_00363A78:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363AA0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363AA0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363AA0u) [[unlikely]] return; }
L_00363AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00363AA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363AB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E600u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 319u, depth); }
L_00363AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[1].w[0] - 1536u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 314u, depth + 1u); else { c.pc = 0x0013F0C0u; return; } if (c.pc != 0x00363AE4u) [[unlikely]] return; }
L_00363AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00363C44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00363BF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[3], 0u + 118u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00363B28; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 403u);  if (t) { goto L_00363BE0; } }
L_00363B28:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 118u);
    st32((c.r[16].w[0] + 220u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00363B68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B60u); set32(c.r[5], 0u + 934u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00363B60u) [[unlikely]] return; }
L_00363B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 400u);  if (t) { goto L_00363BBC; } }
L_00363B68:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00363D68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00363BA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u + 934u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B9Cu); set32(c.r[6], 0u + 199u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00363B9Cu) [[unlikely]] return; }
L_00363B9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363BB8; } }
L_00363BA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[3].w[0] + 100u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BB8u); set32(c.r[5], 0u + 934u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00363BB8u) [[unlikely]] return; }
L_00363BB8:
    set32(c.r[4], 0u + 400u);
    c.budget -= 1;
L_00363BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BC4u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363BC4u) [[unlikely]] return; }
L_00363BC4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363BD4u) [[unlikely]] return; }
L_00363BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00363D6C; } }
    set32(c.r[4], 0u + 403u);
    c.budget -= 1;
L_00363BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BE8u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363BE8u) [[unlikely]] return; }
L_00363BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363D68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00363BF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00363D68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C20u); set32(c.r[5], 0u + 503u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x00363C20u) [[unlikely]] return; }
L_00363C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C28u); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363C28u) [[unlikely]] return; }
L_00363C28:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363C38u) [[unlikely]] return; }
L_00363C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363D68; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00363C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C4Cu);  if (depth < kMaxDepth) unit_000F(c, 315u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00363C4Cu) [[unlikely]] return; }
L_00363C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363C8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363D68; } }
    set32(c.r[2], 0u + 55u);
    set32(c.r[4], 0u + 401u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C74u); st32((c.r[16].w[0] + 220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363C74u) [[unlikely]] return; }
L_00363C74:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363C84u) [[unlikely]] return; }
L_00363C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363D68; } }
L_00363C8C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363CAC; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 168u));
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 16384ull;  if (t) { goto L_00363D04; } }
L_00363CAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 216u), c.r[2].w[0]);  if (t) { goto L_00363CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 3;
L_00363CC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363CEC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363CEC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363CECu) [[unlikely]] return; }
L_00363CEC:
    set32(c.r[4], 0u + 402u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CF8u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363CF8u) [[unlikely]] return; }
L_00363CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363D68; } }
    c.r[3].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 1;
L_00363D04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363D18; } }
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363D68; } }
L_00363D18:
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363D38; } }
    st32((c.r[16].w[0] + 216u), 0u);
    c.budget -= 1;
L_00363D38:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363D5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363D5C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363D5Cu) [[unlikely]] return; }
L_00363D5C:
    set32(c.r[4], 0u + 402u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D68u); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_002C(c, 36u, depth + 1u); else { c.pc = 0x001B0690u; return; } if (c.pc != 0x00363D68u) [[unlikely]] return; }
L_00363D68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00363D6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 320u, depth + 1u); else { c.pc = 0x0012E610u; return; } if (c.pc != 0x00363D94u) [[unlikely]] return; }
L_00363D94:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DA8u); set32(c.r[5], 0u + 150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363DA8u) [[unlikely]] return; }
L_00363DA8:
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363E10; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00363E10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] - 51u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363E10; } }
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 1;
L_00363E10:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363E48; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_00363E48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] - 85u);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363E48; } }
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 1;
L_00363E48:
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363E90; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00363E94; } }
L_00363E68:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363E90; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363E90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363E90u) [[unlikely]] return; }
L_00363E90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00363E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 321u, depth + 1u); else { c.pc = 0x0012E630u; return; } if (c.pc != 0x00363EB4u) [[unlikely]] return; }
L_00363EB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EC8u); set32(c.r[5], 0u + 150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363EC8u) [[unlikely]] return; }
L_00363EC8:
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 152u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 156u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363F30; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 152u), c.r[3].w[0]);  if (t) { goto L_00363F30; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] - 51u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363F30; } }
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 1;
L_00363F30:
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363F68; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_00363F68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] - 85u);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363F68; } }
    st32((c.r[4].w[0] + 148u), 0u);
    c.budget -= 1;
L_00363F68:
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00363FB0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00363FB4; } }
L_00363F88:
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363FB0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 137u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00363FB0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00363FB0u) [[unlikely]] return; }
L_00363FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00363FB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363FC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E640u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 322u, depth); }
L_00363FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 1792u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[5].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0099(c, 8u, depth); } }
    [[clang::musttail]] return unit_0099(c, 1u, depth);
}

}
