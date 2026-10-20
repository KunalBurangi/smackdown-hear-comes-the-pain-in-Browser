#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0069[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54,
    0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0,
    164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198,
    0, 199, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306,
    0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0,
};

void unit_0069(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A4004;
    case 3u: goto L_002A400C;
    case 4u: goto L_002A4028;
    case 5u: goto L_002A4058;
    case 6u: goto L_002A4060;
    case 7u: goto L_002A4064;
    case 8u: goto L_002A4090;
    case 9u: goto L_002A40A4;
    case 10u: goto L_002A40D0;
    case 11u: goto L_002A40F4;
    case 12u: goto L_002A4100;
    case 13u: goto L_002A4110;
    case 14u: goto L_002A4120;
    case 15u: goto L_002A413C;
    case 16u: goto L_002A4174;
    case 17u: goto L_002A418C;
    case 18u: goto L_002A41CC;
    case 19u: goto L_002A4204;
    case 20u: goto L_002A423C;
    case 21u: goto L_002A424C;
    case 22u: goto L_002A42B0;
    case 23u: goto L_002A42D0;
    case 24u: goto L_002A42D8;
    case 25u: goto L_002A4334;
    case 26u: goto L_002A433C;
    case 27u: goto L_002A4348;
    case 28u: goto L_002A4350;
    case 29u: goto L_002A435C;
    case 30u: goto L_002A43D0;
    case 31u: goto L_002A43E4;
    case 32u: goto L_002A4410;
    case 33u: goto L_002A4474;
    case 34u: goto L_002A4484;
    case 35u: goto L_002A44A0;
    case 36u: goto L_002A44CC;
    case 37u: goto L_002A44D4;
    case 38u: goto L_002A4508;
    case 39u: goto L_002A4524;
    case 40u: goto L_002A4540;
    case 41u: goto L_002A4550;
    case 42u: goto L_002A4574;
    case 43u: goto L_002A457C;
    case 44u: goto L_002A458C;
    case 45u: goto L_002A45A0;
    case 46u: goto L_002A4614;
    case 47u: goto L_002A4638;
    case 48u: goto L_002A4644;
    case 49u: goto L_002A4658;
    case 50u: goto L_002A4664;
    case 51u: goto L_002A46AC;
    case 52u: goto L_002A471C;
    case 53u: goto L_002A4770;
    case 54u: goto L_002A477C;
    case 55u: goto L_002A4788;
    case 56u: goto L_002A47A0;
    case 57u: goto L_002A4830;
    case 58u: goto L_002A4850;
    case 59u: goto L_002A486C;
    case 60u: goto L_002A4890;
    case 61u: goto L_002A48C4;
    case 62u: goto L_002A48E0;
    case 63u: goto L_002A4910;
    case 64u: goto L_002A492C;
    case 65u: goto L_002A4A10;
    case 66u: goto L_002A51A0;
    case 67u: goto L_002A51AC;
    case 68u: goto L_002A51D0;
    case 69u: goto L_002A5210;
    case 70u: goto L_002A521C;
    case 71u: goto L_002A5234;
    case 72u: goto L_002A5250;
    case 73u: goto L_002A528C;
    case 74u: goto L_002A52A4;
    case 75u: goto L_002A52C0;
    case 76u: goto L_002A52D0;
    case 77u: goto L_002A52E0;
    case 78u: goto L_002A52F0;
    case 79u: goto L_002A5300;
    case 80u: goto L_002A5310;
    case 81u: goto L_002A5320;
    case 82u: goto L_002A5360;
    case 83u: goto L_002A53A0;
    case 84u: goto L_002A53D0;
    case 85u: goto L_002A53EC;
    case 86u: goto L_002A540C;
    case 87u: goto L_002A5440;
    case 88u: goto L_002A548C;
    case 89u: goto L_002A54B4;
    case 90u: goto L_002A54DC;
    case 91u: goto L_002A54EC;
    case 92u: goto L_002A5504;
    case 93u: goto L_002A5520;
    case 94u: goto L_002A5554;
    case 95u: goto L_002A557C;
    case 96u: goto L_002A5590;
    case 97u: goto L_002A55AC;
    case 98u: goto L_002A55D0;
    case 99u: goto L_002A55E0;
    case 100u: goto L_002A5628;
    case 101u: goto L_002A5634;
    case 102u: goto L_002A568C;
    case 103u: goto L_002A56A8;
    case 104u: goto L_002A56B4;
    case 105u: goto L_002A56E0;
    case 106u: goto L_002A56FC;
    case 107u: goto L_002A570C;
    case 108u: goto L_002A5724;
    case 109u: goto L_002A5740;
    case 110u: goto L_002A5758;
    case 111u: goto L_002A57AC;
    case 112u: goto L_002A57C0;
    case 113u: goto L_002A57DC;
    case 114u: goto L_002A57E8;
    case 115u: goto L_002A5814;
    case 116u: goto L_002A582C;
    case 117u: goto L_002A583C;
    case 118u: goto L_002A5854;
    case 119u: goto L_002A5968;
    case 120u: goto L_002A598C;
    case 121u: goto L_002A599C;
    case 122u: goto L_002A59D4;
    case 123u: goto L_002A5A18;
    case 124u: goto L_002A5A20;
    case 125u: goto L_002A5A40;
    case 126u: goto L_002A5A50;
    case 127u: goto L_002A5A94;
    case 128u: goto L_002A5B24;
    case 129u: goto L_002A5B40;
    case 130u: goto L_002A5B5C;
    case 131u: goto L_002A5B7C;
    case 132u: goto L_002A5BB0;
    case 133u: goto L_002A5BFC;
    case 134u: goto L_002A5C24;
    case 135u: goto L_002A5C34;
    case 136u: goto L_002A5C4C;
    case 137u: goto L_002A5C70;
    case 138u: goto L_002A5CA0;
    case 139u: goto L_002A5CB0;
    case 140u: goto L_002A5CC0;
    case 141u: goto L_002A5CDC;
    case 142u: goto L_002A5D00;
    case 143u: goto L_002A5D3C;
    case 144u: goto L_002A5D40;
    case 145u: goto L_002A5D64;
    case 146u: goto L_002A5D80;
    case 147u: goto L_002A5D90;
    case 148u: goto L_002A5DC0;
    case 149u: goto L_002A5DE0;
    case 150u: goto L_002A5E20;
    case 151u: goto L_002A5E38;
    case 152u: goto L_002A5E48;
    case 153u: goto L_002A5E58;
    case 154u: goto L_002A5E70;
    case 155u: goto L_002A5E90;
    case 156u: goto L_002A5ED4;
    case 157u: goto L_002A5EF8;
    case 158u: goto L_002A5F04;
    case 159u: goto L_002A5F1C;
    case 160u: goto L_002A5F2C;
    case 161u: goto L_002A5F3C;
    case 162u: goto L_002A5F5C;
    case 163u: goto L_002A5F70;
    case 164u: goto L_002A5F80;
    case 165u: goto L_002A5F94;
    case 166u: goto L_002A5FA0;
    case 167u: goto L_002A5FB0;
    case 168u: goto L_002A5FCC;
    case 169u: goto L_002A5FE0;
    case 170u: goto L_002A5FFC;
    case 171u: goto L_002A6010;
    case 172u: goto L_002A602C;
    case 173u: goto L_002A604C;
    case 174u: goto L_002A608C;
    case 175u: goto L_002A60A8;
    case 176u: goto L_002A60C0;
    case 177u: goto L_002A610C;
    case 178u: goto L_002A6134;
    case 179u: goto L_002A6144;
    case 180u: goto L_002A615C;
    case 181u: goto L_002A6180;
    case 182u: goto L_002A619C;
    case 183u: goto L_002A61B8;
    case 184u: goto L_002A61D4;
    case 185u: goto L_002A61F0;
    case 186u: goto L_002A6204;
    case 187u: goto L_002A6220;
    case 188u: goto L_002A6244;
    case 189u: goto L_002A6260;
    case 190u: goto L_002A6268;
    case 191u: goto L_002A6278;
    case 192u: goto L_002A6288;
    case 193u: goto L_002A6298;
    case 194u: goto L_002A62B4;
    case 195u: goto L_002A62C0;
    case 196u: goto L_002A62DC;
    case 197u: goto L_002A62F4;
    case 198u: goto L_002A62FC;
    case 199u: goto L_002A6304;
    case 200u: goto L_002A6308;
    case 201u: goto L_002A6318;
    case 202u: goto L_002A633C;
    case 203u: goto L_002A6354;
    case 204u: goto L_002A635C;
    case 205u: goto L_002A6384;
    case 206u: goto L_002A6394;
    case 207u: goto L_002A63B0;
    case 208u: goto L_002A63D8;
    case 209u: goto L_002A63E8;
    case 210u: goto L_002A6400;
    case 211u: goto L_002A6428;
    case 212u: goto L_002A6440;
    case 213u: goto L_002A6468;
    case 214u: goto L_002A6470;
    case 215u: goto L_002A6488;
    case 216u: goto L_002A64A0;
    case 217u: goto L_002A64C8;
    case 218u: goto L_002A64D0;
    case 219u: goto L_002A64F8;
    case 220u: goto L_002A6510;
    case 221u: goto L_002A652C;
    case 222u: goto L_002A655C;
    case 223u: goto L_002A65B0;
    case 224u: goto L_002A65FC;
    case 225u: goto L_002A6624;
    case 226u: goto L_002A664C;
    case 227u: goto L_002A6664;
    case 228u: goto L_002A667C;
    case 229u: goto L_002A66A0;
    case 230u: goto L_002A66BC;
    case 231u: goto L_002A66D8;
    case 232u: goto L_002A6704;
    case 233u: goto L_002A6728;
    case 234u: goto L_002A6738;
    case 235u: goto L_002A6744;
    case 236u: goto L_002A6760;
    case 237u: goto L_002A6780;
    case 238u: goto L_002A679C;
    case 239u: goto L_002A67C4;
    case 240u: goto L_002A67D4;
    case 241u: goto L_002A680C;
    case 242u: goto L_002A681C;
    case 243u: goto L_002A6828;
    case 244u: goto L_002A6844;
    case 245u: goto L_002A6858;
    case 246u: goto L_002A689C;
    case 247u: goto L_002A68AC;
    case 248u: goto L_002A68C0;
    case 249u: goto L_002A68D8;
    case 250u: goto L_002A68E8;
    case 251u: goto L_002A6900;
    case 252u: goto L_002A69C8;
    case 253u: goto L_002A6A50;
    case 254u: goto L_002A6A7C;
    case 255u: goto L_002A6A94;
    case 256u: goto L_002A6AB0;
    case 257u: goto L_002A6ADC;
    case 258u: goto L_002A6B1C;
    case 259u: goto L_002A6B34;
    case 260u: goto L_002A6B48;
    case 261u: goto L_002A6B60;
    case 262u: goto L_002A6B80;
    case 263u: goto L_002A6B94;
    case 264u: goto L_002A6BC0;
    case 265u: goto L_002A6D40;
    case 266u: goto L_002A6D78;
    case 267u: goto L_002A6E30;
    case 268u: goto L_002A6E40;
    case 269u: goto L_002A6E64;
    case 270u: goto L_002A6E78;
    case 271u: goto L_002A6E8C;
    case 272u: goto L_002A6EA8;
    case 273u: goto L_002A6EBC;
    case 274u: goto L_002A6F18;
    case 275u: goto L_002A6F30;
    case 276u: goto L_002A6F40;
    case 277u: goto L_002A6F54;
    case 278u: goto L_002A6F5C;
    case 279u: goto L_002A6F70;
    case 280u: goto L_002A6F80;
    case 281u: goto L_002A6F90;
    case 282u: goto L_002A6FAC;
    case 283u: goto L_002A6FE0;
    case 284u: goto L_002A7020;
    case 285u: goto L_002A7060;
    case 286u: goto L_002A7098;
    case 287u: goto L_002A70B0;
    case 288u: goto L_002A70FC;
    case 289u: goto L_002A7124;
    case 290u: goto L_002A714C;
    case 291u: goto L_002A7174;
    case 292u: goto L_002A7184;
    case 293u: goto L_002A719C;
    case 294u: goto L_002A71C0;
    case 295u: goto L_002A71F4;
    case 296u: goto L_002A7200;
    case 297u: goto L_002A7210;
    case 298u: goto L_002A722C;
    case 299u: goto L_002A7234;
    case 300u: goto L_002A726C;
    case 301u: goto L_002A7274;
    case 302u: goto L_002A727C;
    case 303u: goto L_002A72AC;
    case 304u: goto L_002A72E0;
    case 305u: goto L_002A72F0;
    case 306u: goto L_002A72FC;
    case 307u: goto L_002A730C;
    case 308u: goto L_002A7328;
    case 309u: goto L_002A73A0;
    case 310u: goto L_002A73A8;
    case 311u: goto L_002A73C0;
    case 312u: goto L_002A73D0;
    case 313u: goto L_002A73E0;
    case 314u: goto L_002A73F0;
    case 315u: goto L_002A73FC;
    case 316u: goto L_002A7414;
    case 317u: goto L_002A744C;
    case 318u: goto L_002A7454;
    case 319u: goto L_002A746C;
    case 320u: goto L_002A7490;
    case 321u: goto L_002A74C0;
    case 322u: goto L_002A74D8;
    case 323u: goto L_002A74E0;
    case 324u: goto L_002A74E8;
    case 325u: goto L_002A7500;
    case 326u: goto L_002A751C;
    case 327u: goto L_002A7538;
    case 328u: goto L_002A755C;
    case 329u: goto L_002A756C;
    case 330u: goto L_002A7574;
    case 331u: goto L_002A7584;
    case 332u: goto L_002A75A0;
    case 333u: goto L_002A75BC;
    case 334u: goto L_002A75C4;
    case 335u: goto L_002A75D4;
    case 336u: goto L_002A75F0;
    case 337u: goto L_002A760C;
    case 338u: goto L_002A7614;
    case 339u: goto L_002A7624;
    case 340u: goto L_002A7648;
    case 341u: goto L_002A766C;
    case 342u: goto L_002A7690;
    case 343u: goto L_002A76B8;
    case 344u: goto L_002A76C8;
    case 345u: goto L_002A76E0;
    case 346u: goto L_002A76F4;
    case 347u: goto L_002A7710;
    case 348u: goto L_002A7718;
    case 349u: goto L_002A7724;
    case 350u: goto L_002A7730;
    case 351u: goto L_002A7738;
    case 352u: goto L_002A7744;
    case 353u: goto L_002A7760;
    case 354u: goto L_002A777C;
    case 355u: goto L_002A77A0;
    case 356u: goto L_002A77B8;
    case 357u: goto L_002A77CC;
    case 358u: goto L_002A7830;
    case 359u: goto L_002A784C;
    case 360u: goto L_002A7870;
    case 361u: goto L_002A7898;
    case 362u: goto L_002A78A4;
    case 363u: goto L_002A78F0;
    case 364u: goto L_002A792C;
    case 365u: goto L_002A7A10;
    case 366u: goto L_002A7A20;
    case 367u: goto L_002A7A54;
    case 368u: goto L_002A7A68;
    case 369u: goto L_002A7A88;
    case 370u: goto L_002A7AA4;
    case 371u: goto L_002A7B1C;
    case 372u: goto L_002A7B34;
    case 373u: goto L_002A7B3C;
    case 374u: goto L_002A7B50;
    case 375u: goto L_002A7B70;
    case 376u: goto L_002A7B8C;
    case 377u: goto L_002A7BB4;
    case 378u: goto L_002A7BE4;
    case 379u: goto L_002A7BF0;
    case 380u: goto L_002A7C0C;
    case 381u: goto L_002A7C28;
    case 382u: goto L_002A7C34;
    case 383u: goto L_002A7C48;
    case 384u: goto L_002A7C50;
    case 385u: goto L_002A7C80;
    case 386u: goto L_002A7CB8;
    case 387u: goto L_002A7CD0;
    case 388u: goto L_002A7CF0;
    case 389u: goto L_002A7D04;
    case 390u: goto L_002A7D18;
    case 391u: goto L_002A7D34;
    case 392u: goto L_002A7D5C;
    case 393u: goto L_002A7D74;
    case 394u: goto L_002A7D90;
    case 395u: goto L_002A7D98;
    case 396u: goto L_002A7DA8;
    case 397u: goto L_002A7DC0;
    case 398u: goto L_002A7DD0;
    case 399u: goto L_002A7E80;
    case 400u: goto L_002A7EA8;
    case 401u: goto L_002A7EB0;
    case 402u: goto L_002A7ECC;
    case 403u: goto L_002A7EE0;
    case 404u: goto L_002A7EE8;
    case 405u: goto L_002A7EF0;
    case 406u: goto L_002A7F34;
    case 407u: goto L_002A7FA4;
    case 408u: goto L_002A7FBC;
    case 409u: goto L_002A7FD0;
    case 410u: goto L_002A7FE4;
    case 411u: goto L_002A7FF4;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A4004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A400Cu);  if (depth < kMaxDepth) unit_0081(c, 175u, depth + 1u); else { c.pc = 0x003060C0u; return; } if (c.pc != 0x002A400Cu) [[unlikely]] return; }
L_002A400C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A4060; } }
    set32(c.r[6], c.r[17].w[0] + 4096u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 24656u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002A403C; } }
L_002A4028:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A4038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 24512u), c.r[5].w[0]);  if (t) { goto L_002A4050; } }
L_002A4038:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A403C:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4028u | kUnwind; return; } goto L_002A4028; } }
L_002A4050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 182u, depth + 1u); else { c.pc = 0x003061A0u; return; } if (c.pc != 0x002A4058u) [[unlikely]] return; }
L_002A4058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002A4074; } }
L_002A4060:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A4064:
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 13u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3FF4u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 298u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002A4074:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A4090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002A3910u; return; } if (c.pc != 0x002A40A4u) [[unlikely]] return; }
L_002A40A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7152u);
    set32(c.r[3], c.r[3].w[0] + 7184u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A40D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A4210; } }
L_002A40F4:
    set32(c.r[16], c.r[18].w[0] + 4096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 172u, depth + 1u); else { c.pc = 0x00306060u; return; } if (c.pc != 0x002A4100u) [[unlikely]] return; }
L_002A4100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A420C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4110u);  if (depth < kMaxDepth) unit_0081(c, 175u, depth + 1u); else { c.pc = 0x003060C0u; return; } if (c.pc != 0x002A4110u) [[unlikely]] return; }
L_002A4110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A420C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4120u);  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A37C0u; return; } if (c.pc != 0x002A4120u) [[unlikely]] return; }
L_002A4120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A420C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 24656u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002A4150; } }
L_002A413C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_002A414C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A4164; } }
L_002A414C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002A4150:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A413Cu | kUnwind; return; } goto L_002A413C; } }
L_002A4164:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A417C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4174u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 182u, depth + 1u); else { c.pc = 0x003061A0u; return; } if (c.pc != 0x002A4174u) [[unlikely]] return; }
L_002A4174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_002A4210; } }
L_002A417C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 24656u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_002A4190; } }
L_002A418C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002A4190:
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A418Cu | kUnwind; return; } goto L_002A418C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 24652u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] - 24512u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24656u);  if (t) { goto L_002A41DC; } }
L_002A41CC:
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], ld32((c.r[4].w[0] - 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002A41DC:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A41CCu | kUnwind; return; } goto L_002A41CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24656u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4204u); st32((c.r[2].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0081(c, 182u, depth + 1u); else { c.pc = 0x003061A0u; return; } if (c.pc != 0x002A4204u) [[unlikely]] return; }
L_002A4204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A421C; } }
L_002A420C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002A4210:
    c.r[2].d[0] = c.r[18].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 13u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A40F4u | kUnwind; return; } goto L_002A40F4; } }
L_002A421C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24512u)));
    set32(c.r[2], c.r[2].w[0] - 24656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A423Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 240u, depth + 1u); else { c.pc = 0x002A3780u; return; } if (c.pc != 0x002A423Cu) [[unlikely]] return; }
L_002A423C:
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A424Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002A424Cu) [[unlikely]] return; }
L_002A424C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24512u)));
    set32(c.r[4], c.r[4].w[0] - 24656u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24512u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 24512u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A428C; } }
    st32((c.r[1].w[0] - 24512u), 0u);
    c.budget -= 1;
L_002A428C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A42B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + 32767u);
    c.budget -= 8;
L_002A42D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42D8u); set32(c.r[4], c.r[2].w[0] + 8193u);  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A37C0u; return; } if (c.pc != 0x002A42D8u) [[unlikely]] return; }
L_002A42D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4300; } }
    set32(c.r[2], c.r[16].w[0] + 32767u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + 8193u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 24496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
L_002A4300:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A42D0u | kUnwind; return; } goto L_002A42D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 24496u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 9;
L_002A4334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A433Cu);  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002A433Cu) [[unlikely]] return; }
L_002A433C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4348u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002A4348u) [[unlikely]] return; }
L_002A4348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4350u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 15u, depth + 1u); else { c.pc = 0x00140210u; return; } if (c.pc != 0x002A4350u) [[unlikely]] return; }
L_002A4350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A435Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0011B928u; return; } if (c.pc != 0x002A435Cu) [[unlikely]] return; }
L_002A435C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[18].d[0] << 32;  if (t) { goto L_002A4398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] - 24496u);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 13;
L_002A4398:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4334u | kUnwind; return; } goto L_002A4334; } }
    st32((c.r[1].w[0] - 24456u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A43D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 253u, depth + 1u); else { c.pc = 0x002A3910u; return; } if (c.pc != 0x002A43E4u) [[unlikely]] return; }
L_002A43E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7088u);
    set32(c.r[3], c.r[3].w[0] + 7120u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 24496u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24456u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[1].w[0] - 24456u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24456u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A446C; } }
    st32((c.r[1].w[0] - 24456u), 0u);
    c.budget -= 1;
L_002A446C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4474u);  if (depth < kMaxDepth) unit_0068(c, 240u, depth + 1u); else { c.pc = 0x002A3780u; return; } if (c.pc != 0x002A4474u) [[unlikely]] return; }
L_002A4474:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4484u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002A4484u) [[unlikely]] return; }
L_002A4484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A44A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[8], 0u + 10u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44CCu); set32(c.r[6], 0u + 448u);  if (depth < kMaxDepth) unit_0068(c, 203u, depth + 1u); else { c.pc = 0x002A3150u; return; } if (c.pc != 0x002A44CCu) [[unlikely]] return; }
L_002A44CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44D4u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x002A44D4u) [[unlikely]] return; }
L_002A44D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7024u);
    set32(c.r[2], c.r[2].w[0] + 7056u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[17].w[0] + 56u), c.r[16].w[0]);  if (t) { goto L_002A4510; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] - 29104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002A4508u) [[unlikely]] return; }
L_002A4508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A4528; } }
L_002A4510:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] - 29088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4524u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 45u, depth + 1u); else { c.pc = 0x001487B0u; return; } if (c.pc != 0x002A4524u) [[unlikely]] return; }
L_002A4524:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A4528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4550:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4574u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x002A4574u) [[unlikely]] return; }
L_002A4574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A457Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0012(c, 130u, depth + 1u); else { c.pc = 0x00149000u; return; } if (c.pc != 0x002A457Cu) [[unlikely]] return; }
L_002A457C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A458Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 138u, depth + 1u); else { c.pc = 0x00149120u; return; } if (c.pc != 0x002A458Cu) [[unlikely]] return; }
L_002A458C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 15280u);
    set32(c.r[6], 0u + 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 153u, depth + 1u); else { c.pc = 0x001492C0u; return; } if (c.pc != 0x002A45A0u) [[unlikely]] return; }
L_002A45A0:
    set32(c.r[9], c.r[29].w[0] + 68u);
    c.r[2].d[0] = 0ull & 3ull;
    c.r[8].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 448u);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 1420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1416u)));
    set32(c.r[18], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4614u); st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A4614u) [[unlikely]] return; }
L_002A4614:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A4638; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A4638; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4638u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4638u) [[unlikely]] return; }
L_002A4638:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4644u); st32((c.r[17].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A4644u) [[unlikely]] return; }
L_002A4644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4658; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 188u, depth + 1u); else { c.pc = 0x0015ED60u; return; } if (c.pc != 0x002A4658u) [[unlikely]] return; }
L_002A4658:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4664u); set32(c.r[4], ld32((c.r[29].w[0] + 156u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A4664u) [[unlikely]] return; }
L_002A4664:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A46E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[18].w[0] - 50u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.f[14] = 0u;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 2));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46ACu); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A46ACu) [[unlikely]] return; }
L_002A46AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 9));  if (t) { goto L_002A46C0; } }
    set32(c.r[2], c.r[16].w[0] + 511u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    c.budget -= 2;
L_002A46C0:
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 29072u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_002A475C; } }
L_002A46E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[18].w[0] - 50u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    c.f[14] = 0u;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 2));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 40u);
    set32(c.r[25], ld32((c.r[4].w[0] + 176u)));
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A471Cu); c.f[12] = fp::cvt_s_w(c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A471Cu) [[unlikely]] return; }
L_002A471C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 9));  if (t) { goto L_002A4730; } }
    set32(c.r[2], c.r[16].w[0] + 511u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 9));
    c.budget -= 2;
L_002A4730:
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 29072u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 11;
L_002A475C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], 0u + 12289u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4770u); st64((c.r[2].w[0] + 248u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0068(c, 225u, depth + 1u); else { c.pc = 0x002A34E0u; return; } if (c.pc != 0x002A4770u) [[unlikely]] return; }
L_002A4770:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A477Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 131u, depth + 1u); else { c.pc = 0x00149030u; return; } if (c.pc != 0x002A477Cu) [[unlikely]] return; }
L_002A477C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4788u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x002A4788u) [[unlikely]] return; }
L_002A4788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002A47A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 24448u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A483C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 452u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002A483C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1384u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 448u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 28u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4830u); set32(c.r[4], ld32((c.r[1].w[0] - 24448u)));  if (depth < kMaxDepth) unit_0069(c, 66u, depth + 1u); else { c.pc = 0x002A51A0u; return; } if (c.pc != 0x002A4830u) [[unlikely]] return; }
L_002A4830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24448u)));
    st8((c.r[3].w[0] + 452u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002A483C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A4850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 448u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A486Cu); st8((c.r[4].w[0] + 452u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0069(c, 65u, depth + 1u); else { c.pc = 0x002A4A10u; return; } if (c.pc != 0x002A486Cu) [[unlikely]] return; }
L_002A486C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[1].w[0] - 24448u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A48C8; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[1].w[0] - 24448u), 0u);  if (t) { goto L_002A48C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48C4u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A48C4u) [[unlikely]] return; }
L_002A48C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A48C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A48E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 448u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 96ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A4908; } }
    st32((c.r[16].w[0] + 448u), 0u);
    c.budget -= 1;
L_002A4908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4910u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002A4910u) [[unlikely]] return; }
L_002A4910:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 128u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A492Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 302u, depth + 1u); else { c.pc = 0x00227A50u; return; } if (c.pc != 0x002A492Cu) [[unlikely]] return; }
L_002A492C:
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 128u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A495C; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 112u) & ~15u, c.r[3]);  if (t) { goto L_002A4964; } }
L_002A495C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 112u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002A4964:
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4980; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_002A4988; } }
L_002A4980:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 176u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002A4988:
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A49A4; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 240u) & ~15u, c.r[3]);  if (t) { goto L_002A49AC; } }
L_002A49A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 240u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002A49AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A49C8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 320u) & ~15u, c.r[3]);  if (t) { goto L_002A49D0; } }
L_002A49C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 320u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002A49D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 448u)));
    c.r[3].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A49EC; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[16].w[0] + 384u) & ~15u, c.r[3]);  if (t) { goto L_002A49F4; } }
L_002A49EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 384u) & ~15u, c.r[3]);
    c.budget -= 2;
L_002A49F4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 452u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A4A10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1568ull;
    set32(c.r[7], c.r[6].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[5], ld32((c.r[1].w[0] + 1416u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_002A4A48; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_002A4A4C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002A4A48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_002A4A4C:
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    c.r[8].d[0] = c.r[5].d[0] | 27ull;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[8].d[0] = c.r[5].d[0] | 26ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x13000000u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[9].w[0]);
    set32(c.r[5], 0u + 3u);
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], 0u + 14u);
    st64((c.r[4].w[0]), c.r[6].d[0]);
    set32(c.r[8], 0u + 68u);
    st64((c.r[4].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[6], 0u + 12289u);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    set32(c.r[5], 0u + 71u);
    st64((c.r[4].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], 0u + 8u);
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[6], 0u + 66u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC0010000u);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[6].d[0]);
    c.r[5].d[0] = c.r[5].d[0] | 49152ull;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    mmi::pcpyld(c.r[6], c.r[0], c.r[6]);
    set32(c.r[5], 0u + 21841u);
    st64((c.r[4].w[0]), c.r[6].d[0]);
    c.r[9].d[0] = c.r[5].d[0] << 32;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x55510000u);
    c.r[8].d[0] = c.r[6].d[0] | 21841ull;
    set32(c.r[5], 0u + 391u);
    set32(c.r[6], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st64((c.r[4].w[0] + 8u), c.r[8].d[0]);
    c.f[0] = c.r[5].w[0];
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[0]);
    c.f[1] = c.r[6].w[0];
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], c.r[5].w[0] + 3584u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 61;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4B50; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[8].w[0]);  if (t) { goto L_002A4B6C; } }
L_002A4B50:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 7;
L_002A4B6C:
    set32(c.r[5], 0u + 380u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[9], c.r[9].w[0] + 3872u);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    c.f[0] = c.r[8].w[0];
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4BC0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[9].w[0]);  if (t) { goto L_002A4BDC; } }
L_002A4BC0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    c.budget -= 7;
L_002A4BDC:
    set32(c.r[8], 0u + 369u);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[3], c.r[8].w[0] << (c.r[3].w[0] & 31u));
    st32((c.r[4].w[0] + 28u), 0u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[9], c.r[9].w[0] + 3584u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.f[0] = c.r[8].w[0];
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4C34; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[9].w[0]);  if (t) { goto L_002A4C50; } }
L_002A4C34:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 7;
L_002A4C50:
    c.f[0] = c.r[6].w[0];
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 3984u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4CA4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4CBC; } }
L_002A4CA4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4CBC:
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4272u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4D0C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4D24; } }
L_002A4D0C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4D24:
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 3984u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4D78; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[9].w[0]);  if (t) { goto L_002A4D94; } }
L_002A4D78:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 7;
L_002A4D94:
    c.f[0] = c.r[6].w[0];
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4384u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4DE8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4E00; } }
L_002A4DE8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4E00:
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4672u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4E50; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4E68; } }
L_002A4E50:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4E68:
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4384u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4EBC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x80010000u);  if (t) { goto L_002A4ED8; } }
L_002A4EBC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80010000u);
    c.budget -= 7;
L_002A4ED8:
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    c.r[8].d[0] = c.r[8].d[0] | 49152ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[10].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = 0ull | 32769ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x55510000u);
    st32((c.r[4].w[0] + 12u), 0u);
    mmi::pcpyld(c.r[9], c.r[0], c.r[9]);
    c.f[0] = c.r[6].w[0];
    c.r[8].d[0] = c.r[8].d[0] | 21841ull;
    st64((c.r[4].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4784u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4F54; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4F6C; } }
L_002A4F54:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4F6C:
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 5072u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4FC0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4FD8; } }
L_002A4FC0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_002A4FD8:
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[9], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[8].w[0];
    set32(c.r[8], c.r[9].w[0] + 4784u);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5028; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[9].w[0]);  if (t) { goto L_002A5044; } }
L_002A5028:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    c.budget -= 7;
L_002A5044:
    c.f[0] = c.r[6].w[0];
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[6].w[0];
    set32(c.r[6], c.r[8].w[0] + 5184u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5098; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A50B0; } }
L_002A5098:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.budget -= 6;
L_002A50B0:
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[5], c.r[6].w[0] + 5472u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5104; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A511C; } }
L_002A5104:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.budget -= 6;
L_002A511C:
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] + 5184u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A516C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  if (t) { goto L_002A5188; } }
L_002A516C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 7;
L_002A5188:
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_002A51A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], 0u + 28u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 3;
L_002A51AC:
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A51ACu | kUnwind; return; } goto L_002A51AC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A51D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5234; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7024u);
    set32(c.r[2], c.r[2].w[0] + 7056u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 24u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5210u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 42u, depth + 1u); else { c.pc = 0x00148750u; return; } if (c.pc != 0x002A5210u) [[unlikely]] return; }
L_002A5210:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A521Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 210u, depth + 1u); else { c.pc = 0x002A3250u; return; } if (c.pc != 0x002A521Cu) [[unlikely]] return; }
L_002A521C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A5238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5234u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A5234u) [[unlikely]] return; }
L_002A5234:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A5238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A52A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7152u);
    set32(c.r[2], c.r[2].w[0] + 7184u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A528Cu); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0068(c, 256u, depth + 1u); else { c.pc = 0x002A3970u; return; } if (c.pc != 0x002A528Cu) [[unlikely]] return; }
L_002A528C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A52A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A52A4u) [[unlikely]] return; }
L_002A52A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A52A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A52C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3970u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 256u, depth); }
L_002A52D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5250u | kUnwind; return; } goto L_002A5250; }
L_002A52E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3C10u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 270u, depth); }
L_002A52F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025C850u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 79u, depth); }
L_002A5300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4550u | kUnwind; return; } goto L_002A4550; }
L_002A5310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A51D0u | kUnwind; return; } goto L_002A51D0; }
L_002A5320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st32((c.r[1].w[0] - 24424u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 45040ull;
    set32(c.r[4], 0u + 20496u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24440u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24432u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 19024u), c.r[3].w[0]);  c.pc = t; return; }
L_002A5360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 19024u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 24432u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] - 24424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[1].w[0] - 19024u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24432u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 24424u), c.r[3].w[0]);  c.pc = t; return; }
L_002A53A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st32((c.r[1].w[0] - 24424u), 0u);
    set32(c.r[4], 0u + 20496u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = c.r[3].d[0] | 45040ull;
    st32((c.r[1].w[0] - 24440u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24432u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 19024u), c.r[3].w[0]);  c.pc = t; return; }
L_002A53D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 21327ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002A53ECu) [[unlikely]] return; }
L_002A53EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7568u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A540Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A540Cu) [[unlikely]] return; }
L_002A540C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7568u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A548C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A548C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A548Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A548Cu) [[unlikely]] return; }
L_002A548C:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A54B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A54B4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A54B4u) [[unlikely]] return; }
L_002A54B4:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A54DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A54DC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54DCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A54DCu) [[unlikely]] return; }
L_002A54DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54ECu); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002A54ECu) [[unlikely]] return; }
L_002A54EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A5508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A5504u) [[unlikely]] return; }
L_002A5504:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A5508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5520:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5554u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002A5554u) [[unlikely]] return; }
L_002A5554:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A557Cu); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002A557Cu) [[unlikely]] return; }
L_002A557C:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5590u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5590u) [[unlikely]] return; }
L_002A5590:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A55ACu) [[unlikely]] return; }
L_002A55AC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55D0u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A55D0u) [[unlikely]] return; }
L_002A55D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A55E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 117u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5670; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], 0u + 300u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 421ll ? 1ull : 0ull;  if (t) { goto L_002A5654; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[5], 0u + 12043u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5628u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A5628u) [[unlikely]] return; }
L_002A5628:
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5634u); set32(c.r[5], 0u + 12043u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A5634u) [[unlikely]] return; }
L_002A5634:
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], 0u - 65u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 394u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A5660; } }
L_002A5654:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A5660; } }
    st8((c.r[18].w[0] + 117u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A5660:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_002A59FC; } }
L_002A5670:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 116u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5894; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A568Cu); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_0049(c, 107u, depth + 1u); else { c.pc = 0x00225750u; return; } if (c.pc != 0x002A568Cu) [[unlikely]] return; }
L_002A568C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A59FC; } }
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56A8u); c.r[16].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A56A8u) [[unlikely]] return; }
L_002A56A8:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 18u, depth + 1u); else { c.pc = 0x0026C340u; return; } if (c.pc != 0x002A56B4u) [[unlikely]] return; }
L_002A56B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A57CC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A56E0u) [[unlikely]] return; }
L_002A56E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x002A56FCu) [[unlikely]] return; }
L_002A56FC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A570Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A570Cu) [[unlikely]] return; }
L_002A570C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5724u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5724u) [[unlikely]] return; }
L_002A5724:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5740u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5740u) [[unlikely]] return; }
L_002A5740:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5758u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5758u) [[unlikely]] return; }
L_002A5758:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[2].w[0] + 212u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 394u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[18].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57ACu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A57ACu) [[unlikely]] return; }
L_002A57AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] - 29032u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57C0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002A57C0u) [[unlikely]] return; }
L_002A57C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_002A587C; } }
L_002A57CC:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A57DCu) [[unlikely]] return; }
L_002A57DC:
    c.f[12] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 13u, depth + 1u); else { c.pc = 0x0026C270u; return; } if (c.pc != 0x002A57E8u) [[unlikely]] return; }
L_002A57E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A587C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5814u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A5814u) [[unlikely]] return; }
L_002A5814:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A582Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A582Cu) [[unlikely]] return; }
L_002A582C:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A583Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A583Cu) [[unlikely]] return; }
L_002A583C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5854u) [[unlikely]] return; }
L_002A5854:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 108u), c.r[17].w[0]);
    c.budget -= 10;
L_002A587C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A59FC; } }
    st32((c.r[18].w[0] + 112u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A59FC; } }
L_002A5894:
    set32(c.r[7], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002A5934; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 164u)));
    set32(c.r[2], 0u + 12043u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A591C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 210ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A58DC; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A5934; } }
L_002A58DC:
    c.r[6].d[0] = ld8((c.r[7].w[0] + 392u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 394u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 108u), 0u);  if (t) { goto L_002A5934; } }
L_002A591C:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 392u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[7].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002A5934:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], 0u + 420u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 901ll ? 1ull : 0ull;  if (t) { goto L_002A59E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[7], 0u + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5968u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A5968u) [[unlikely]] return; }
L_002A5968:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A598Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A598Cu) [[unlikely]] return; }
L_002A598C:
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A599Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A599Cu) [[unlikely]] return; }
L_002A599C:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[2], 0u - 65u);
    st128((c.r[5].w[0] + 224u) & ~15u, c.r[6]);
    set32(c.r[6], ld32((c.r[18].w[0] + 108u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 394u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A59D4u) [[unlikely]] return; }
L_002A59D4:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[18].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_002A59F0; } }
L_002A59E4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A59F0; } }
    st8((c.r[18].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A59F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 3;
L_002A59FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A18u); set32(c.r[5], ld32((c.r[18].w[0] + 104u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002A5A18u) [[unlikely]] return; }
L_002A5A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A20u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A5A20u) [[unlikely]] return; }
L_002A5A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5A40:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EF90u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 353u, depth); }
L_002A5A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 116u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5B0C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 117u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5B0C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 12041u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A5A94u) [[unlikely]] return; }
L_002A5A94:
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 112u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2A00000u);
    st8((c.r[17].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u - 9u);
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[16].w[0] + 228u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 232u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[16].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[3], 0u - 65u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 395u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A5B24; } }
L_002A5B0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 676u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A5B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B24u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A5B24u) [[unlikely]] return; }
L_002A5B24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002A5B5Cu) [[unlikely]] return; }
L_002A5B5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7504u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B7Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A5B7Cu) [[unlikely]] return; }
L_002A5B7C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A5C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7504u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A5BFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A5BFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BFCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5BFCu) [[unlikely]] return; }
L_002A5BFC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A5C24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A5C24; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5C24u) [[unlikely]] return; }
L_002A5C24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C34u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002A5C34u) [[unlikely]] return; }
L_002A5C34:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A5C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A5C4Cu) [[unlikely]] return; }
L_002A5C4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A5C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CA0u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002A5CA0u) [[unlikely]] return; }
L_002A5CA0:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x002A5CB0u) [[unlikely]] return; }
L_002A5CB0:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5CC0u) [[unlikely]] return; }
L_002A5CC0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A5CDCu) [[unlikely]] return; }
L_002A5CDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 208u) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5E68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D3Cu); set32(c.r[5], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002A5D3Cu) [[unlikely]] return; }
L_002A5D3C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A5E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D64u);  if (depth < kMaxDepth) unit_0049(c, 322u, depth + 1u); else { c.pc = 0x00227CB0u; return; } if (c.pc != 0x002A5D64u) [[unlikely]] return; }
L_002A5D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5E58; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002A5E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D80u);  if (depth < kMaxDepth) unit_0034(c, 237u, depth + 1u); else { c.pc = 0x001D3670u; return; } if (c.pc != 0x002A5D80u) [[unlikely]] return; }
L_002A5D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 85u, depth + 1u); else { c.pc = 0x001D0B30u; return; } if (c.pc != 0x002A5D90u) [[unlikely]] return; }
L_002A5D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5E58; } }
L_002A5D98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[18].w[0] + 228u));
    c.f[0] = ld32((c.r[1].w[0] - 29040u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5E58; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[5], c.r[18].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DC0u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 144u, depth + 1u); else { c.pc = 0x00141C30u; return; } if (c.pc != 0x002A5DC0u) [[unlikely]] return; }
L_002A5DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5E58; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);  if (t) { goto L_002A5DD8; } }
    set32(c.r[4], c.r[4].w[0] + 416u);
    c.budget -= 1;
L_002A5DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DE0u); c.r[5].d[0] = c.r[2].d[0] | 19795ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x002A5DE0u) [[unlikely]] return; }
L_002A5DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002A5DF4; } }
L_002A5DF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A5DF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5E58; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A5E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E20u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A5E20u) [[unlikely]] return; }
L_002A5E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A5E3C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E38u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_005B(c, 364u, depth + 1u); else { c.pc = 0x0026F360u; return; } if (c.pc != 0x002A5E38u) [[unlikely]] return; }
L_002A5E38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A5E3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E48u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002A5E48u) [[unlikely]] return; }
L_002A5E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002A5E5C; } }
L_002A5E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E58u);  if (depth < kMaxDepth) unit_0069(c, 155u, depth + 1u); else { c.pc = 0x002A5E90u; return; } if (c.pc != 0x002A5E58u) [[unlikely]] return; }
L_002A5E58:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A5E5C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5D40u | kUnwind; return; } goto L_002A5D40; } }
L_002A5E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E70u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A5E70u) [[unlikely]] return; }
L_002A5E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A5E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A5FA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 128u);  if (t) { goto L_002A5EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5ED4u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A5ED4u) [[unlikely]] return; }
L_002A5ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A5EF8; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EF8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 153u, depth + 1u); else { c.pc = 0x002261B0u; return; } if (c.pc != 0x002A5EF8u) [[unlikely]] return; }
L_002A5EF8:
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_002A5EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F04u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A5F04u) [[unlikely]] return; }
L_002A5F04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A5F20; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F1Cu); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_005B(c, 372u, depth + 1u); else { c.pc = 0x0026F510u; return; } if (c.pc != 0x002A5F1Cu) [[unlikely]] return; }
L_002A5F1C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A5F20:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F2Cu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x002A5F2Cu) [[unlikely]] return; }
L_002A5F2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F3Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A5F3Cu) [[unlikely]] return; }
L_002A5F3C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 212u);
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A5F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F5Cu);  if (depth < kMaxDepth) unit_0049(c, 348u, depth + 1u); else { c.pc = 0x00227FC0u; return; } if (c.pc != 0x002A5F5Cu) [[unlikely]] return; }
L_002A5F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 213u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A5F70u) [[unlikely]] return; }
L_002A5F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A5F98; } }
L_002A5F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F80u);  if (depth < kMaxDepth) unit_0049(c, 349u, depth + 1u); else { c.pc = 0x00227FE0u; return; } if (c.pc != 0x002A5F80u) [[unlikely]] return; }
L_002A5F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 212u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A5F94u) [[unlikely]] return; }
L_002A5F94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A5F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FA0u);  if (depth < kMaxDepth) unit_0069(c, 155u, depth + 1u); else { c.pc = 0x002A5E90u; return; } if (c.pc != 0x002A5FA0u) [[unlikely]] return; }
L_002A5FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5FCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FCCu); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A5FCCu) [[unlikely]] return; }
L_002A5FCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A5FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FFCu); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A5FFCu) [[unlikely]] return; }
L_002A5FFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A6010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 21320ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A602Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002A602Cu) [[unlikely]] return; }
L_002A602C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7440u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A604Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A604Cu) [[unlikely]] return; }
L_002A604C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A608Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A608Cu) [[unlikely]] return; }
L_002A608C:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60A8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A60A8u) [[unlikely]] return; }
L_002A60A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A60C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A615C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7440u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A610C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A610C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A610Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A610Cu) [[unlikely]] return; }
L_002A610C:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6134; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6134; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6134u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6134u) [[unlikely]] return; }
L_002A6134:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6144u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002A6144u) [[unlikely]] return; }
L_002A6144:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A6160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A615Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A615Cu) [[unlikely]] return; }
L_002A615C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A6160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A619Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A619Cu) [[unlikely]] return; }
L_002A619C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A61B8u) [[unlikely]] return; }
L_002A61B8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A61D4u) [[unlikely]] return; }
L_002A61D4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A61F0u) [[unlikely]] return; }
L_002A61F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6204u); st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_0069(c, 216u, depth + 1u); else { c.pc = 0x002A64A0u; return; } if (c.pc != 0x002A6204u) [[unlikely]] return; }
L_002A6204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A6270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6244u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002A6244u) [[unlikely]] return; }
L_002A6244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6260; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6260u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6260u) [[unlikely]] return; }
L_002A6260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6268u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A6268u) [[unlikely]] return; }
L_002A6268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A6398; } }
L_002A6270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6278u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002A6278u) [[unlikely]] return; }
L_002A6278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A638C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6288u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 361u, depth + 1u); else { c.pc = 0x0026F2F0u; return; } if (c.pc != 0x002A6288u) [[unlikely]] return; }
L_002A6288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 24u);  if (t) { goto L_002A633C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6298u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A6298u) [[unlikely]] return; }
L_002A6298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A62B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 153u, depth + 1u); else { c.pc = 0x002261B0u; return; } if (c.pc != 0x002A62B4u) [[unlikely]] return; }
L_002A62B4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A62B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A62C8; } }
L_002A62C0:
    st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002A62C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 217u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A62DCu) [[unlikely]] return; }
L_002A62DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A62C0u | kUnwind; return; } goto L_002A62C0; } }
    set32(c.r[5], 0u + 220u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A62F4u) [[unlikely]] return; }
L_002A62F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 325u, depth + 1u); else { c.pc = 0x002A7500u; return; } if (c.pc != 0x002A62FCu) [[unlikely]] return; }
L_002A62FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 216u, depth + 1u); else { c.pc = 0x002A64A0u; return; } if (c.pc != 0x002A6304u) [[unlikely]] return; }
L_002A6304:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6308:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[2].w[0] + 176u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6318u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A6318u) [[unlikely]] return; }
L_002A6318:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6308u | kUnwind; return; } goto L_002A6308; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A633Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A633Cu) [[unlikely]] return; }
L_002A633C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6354u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A6354u) [[unlikely]] return; }
L_002A6354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A635Cu); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A635Cu) [[unlikely]] return; }
L_002A635C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6384u); set32(c.r[5], c.r[6].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A6384u) [[unlikely]] return; }
L_002A6384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6394; } }
L_002A638C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6394u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A6394u) [[unlikely]] return; }
L_002A6394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A6398:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A63B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A63E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A63E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63D8u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A63D8u) [[unlikely]] return; }
L_002A63D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A63EC; } }
L_002A63E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63E8u); set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A63E8u) [[unlikely]] return; }
L_002A63E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002A63EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A6400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6428; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6428u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A6428u) [[unlikely]] return; }
L_002A6428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A6440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6468u); set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A6468u) [[unlikely]] return; }
L_002A6468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6470u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A6470u) [[unlikely]] return; }
L_002A6470:
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6488u) [[unlikely]] return; }
L_002A6488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A64A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64C8u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A64C8u) [[unlikely]] return; }
L_002A64C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64D0u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A64D0u) [[unlikely]] return; }
L_002A64D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64F8u); set32(c.r[5], c.r[6].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A64F8u) [[unlikely]] return; }
L_002A64F8:
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 16970ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A652Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002A652Cu) [[unlikely]] return; }
L_002A652C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 7376u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A655Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A655Cu) [[unlikely]] return; }
L_002A655C:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st8((c.r[16].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 121u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[1].w[0] - 24416u)));
    st32((c.r[16].w[0] + 240u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 24416u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[1].w[0] - 24416u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A65B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A667C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7376u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A65FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A65FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A65FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A65FCu) [[unlikely]] return; }
L_002A65FC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6624; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6624; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6624u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6624u) [[unlikely]] return; }
L_002A6624:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A664C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A664C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A664Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A664Cu) [[unlikely]] return; }
L_002A664C:
    st32((c.r[17].w[0] + 104u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6664u); st32((c.r[1].w[0] - 24416u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002A6664u) [[unlikely]] return; }
L_002A6664:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A6680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A667Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A667Cu) [[unlikely]] return; }
L_002A667C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A6680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A66A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A66BCu) [[unlikely]] return; }
L_002A66BC:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A66D8u) [[unlikely]] return; }
L_002A66D8:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6704u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002A6704u) [[unlikely]] return; }
L_002A6704:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6728u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002A6728u) [[unlikely]] return; }
L_002A6728:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6738u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x002A6738u) [[unlikely]] return; }
L_002A6738:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6744u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 92u, depth + 1u); else { c.pc = 0x00225420u; return; } if (c.pc != 0x002A6744u) [[unlikely]] return; }
L_002A6744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6780u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0069(c, 256u, depth + 1u); else { c.pc = 0x002A6AB0u; return; } if (c.pc != 0x002A6780u) [[unlikely]] return; }
L_002A6780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A679Cu); set32(c.r[5], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002A679Cu) [[unlikely]] return; }
L_002A679C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 121u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6A8C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6998; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67C4u); set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  if (depth < kMaxDepth) unit_0049(c, 107u, depth + 1u); else { c.pc = 0x00225750u; return; } if (c.pc != 0x002A67C4u) [[unlikely]] return; }
L_002A67C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A6A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67D4u); set32(c.r[4], ld32((c.r[16].w[0] + 912u)));  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x002A67D4u) [[unlikely]] return; }
L_002A67D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6A8C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6A8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A6A8C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A680Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A680Cu) [[unlikely]] return; }
L_002A680C:
    c.f[20] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 944u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A681Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 29u, depth + 1u); else { c.pc = 0x001F0370u; return; } if (c.pc != 0x002A681Cu) [[unlikely]] return; }
L_002A681C:
    c.f[12] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6828u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002A6828u) [[unlikely]] return; }
L_002A6828:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::sub(c.f[20], c.f[21]);  if (t) { goto L_002A6850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6844u); c.f[12] = fp::sub(c.f[20], c.f[21]);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002A6844u) [[unlikely]] return; }
L_002A6844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[0] ^ fp::kSign;  if (t) { goto L_002A6858; } }
    c.f[12] = fp::sub(c.f[20], c.f[21]);
    c.budget -= 1;
L_002A6850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6858u);  if (depth < kMaxDepth) unit_0010(c, 265u, depth + 1u); else { c.pc = 0x00143C10u; return; } if (c.pc != 0x002A6858u) [[unlikely]] return; }
L_002A6858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 29048u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A688C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.f[1] = ld32((c.r[1].w[0] - 29056u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A688C; } }
L_002A6888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A688C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A689Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x002A689Cu) [[unlikely]] return; }
L_002A689C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A68B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x002A68ACu) [[unlikely]] return; }
L_002A68AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6A8C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002A68B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68C0u); set32(c.r[5], 0u + 12045u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A68C0u) [[unlikely]] return; }
L_002A68C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 12045u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A68D8u) [[unlikely]] return; }
L_002A68D8:
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A68E8u) [[unlikely]] return; }
L_002A68E8:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6900u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6900u) [[unlikely]] return; }
L_002A6900:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    set32(c.r[2], c.r[17].w[0] + 176u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[5], 0u - 5u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[2], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], 0u - 65u);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 394u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 108u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[16].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 128u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st128((c.r[17].w[0] + 144u) & ~15u, c.r[2]);  if (t) { goto L_002A6A8C; } }
L_002A6998:
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 474u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A69DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A69C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 265u, depth + 1u); else { c.pc = 0x002A6D40u; return; } if (c.pc != 0x002A69C8u) [[unlikely]] return; }
L_002A69C8:
    st32((c.r[17].w[0] + 116u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_002A6A8C; } }
L_002A69DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[1].d[0] = c.r[2].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A6A80; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[2], 0u + 12045u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A6A70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + 176u);
    ld128((c.r[17].w[0] + 144u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 224u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[17].w[0] + 108u)));
    ld128((c.r[17].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 208u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A50u); set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  if (depth < kMaxDepth) unit_0039(c, 30u, depth + 1u); else { c.pc = 0x001E4570u; return; } if (c.pc != 0x002A6A50u) [[unlikely]] return; }
L_002A6A50:
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_002A6A70:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A7Cu); set32(c.r[5], 0u + 12060u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A6A7Cu) [[unlikely]] return; }
L_002A6A7C:
    st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A6A80:
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 3;
L_002A6A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A94u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A6A94u) [[unlikely]] return; }
L_002A6A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A6AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002A6AD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A6BA4; } }
L_002A6AD8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6ADC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6B48; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 12045u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12046u);  if (t) { goto L_002A6B10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A6B24; } }
L_002A6B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004A(c, 3u, depth + 1u); else { c.pc = 0x00228060u; return; } if (c.pc != 0x002A6B1Cu) [[unlikely]] return; }
L_002A6B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_002A6B4C; } }
L_002A6B24:
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B34u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0069(c, 264u, depth + 1u); else { c.pc = 0x002A6BC0u; return; } if (c.pc != 0x002A6B34u) [[unlikely]] return; }
L_002A6B34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A6B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B48u);  if (depth < kMaxDepth) unit_004A(c, 3u, depth + 1u); else { c.pc = 0x00228060u; return; } if (c.pc != 0x002A6B48u) [[unlikely]] return; }
L_002A6B48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A6B4C:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6ADCu | kUnwind; return; } goto L_002A6ADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A6B98; } }
L_002A6B60:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 224u);  if (t) { goto L_002A6BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 264u, depth + 1u); else { c.pc = 0x002A6BC0u; return; } if (c.pc != 0x002A6B80u) [[unlikely]] return; }
L_002A6B80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A6B94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B94u);  if (depth < kMaxDepth) unit_004A(c, 5u, depth + 1u); else { c.pc = 0x002280A0u; return; } if (c.pc != 0x002A6B94u) [[unlikely]] return; }
L_002A6B94:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002A6B98:
    c.r[3].d[0] = c.r[16].sd[0] < 72ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B60u | kUnwind; return; } goto L_002A6B60; } }
L_002A6BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6BC0:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6BE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6BE4:
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6BFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6BFC:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6C20:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6CC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6C7C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002A6CC0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A6D34; } }
L_002A6C68:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6C7C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002A6CC0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6CAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A6D34; } }
L_002A6CAC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6CC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A6D34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_002A6CD8; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_002A6CD8:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002A6D30; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6D28; } }
L_002A6D24:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A6D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6D34; } }
L_002A6D30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A6D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 121u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A6F5C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], 0u + 12046u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D78u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x002A6D78u) [[unlikely]] return; }
L_002A6D78:
    set32(c.r[2], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6E18; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[4], c.r[2].w[0] + 164u);
    set32(c.r[2], 0u + 12045u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A6E18; } }
    set32(c.r[3], 0u + 12046u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[8], c.r[2].w[0] << 2);
    set32(c.r[10], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[9], 0u - 5u);
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[2], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = ld8((c.r[10].w[0] + 392u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 392u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 108u)));
    st32((c.r[7].w[0] + 176u), 0u);
    set32(c.r[8], ld32((c.r[17].w[0] + 108u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 394u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 395u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 395u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 32;
L_002A6E18:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 50u);
    st8((c.r[17].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E30u); set32(c.r[6], 0u + 150u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A6E30u) [[unlikely]] return; }
L_002A6E30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E40u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x002A6E40u) [[unlikely]] return; }
L_002A6E40:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6E64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A6E64; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6E64u) [[unlikely]] return; }
L_002A6E64:
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E78u); set32(c.r[5], 0u + 120u);  if (depth < kMaxDepth) unit_0024(c, 249u, depth + 1u); else { c.pc = 0x00191DE0u; return; } if (c.pc != 0x002A6E78u) [[unlikely]] return; }
L_002A6E78:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6E8Cu) [[unlikely]] return; }
L_002A6E8C:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A6EA8u) [[unlikely]] return; }
L_002A6EA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EBCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 89u, depth + 1u); else { c.pc = 0x002253B0u; return; } if (c.pc != 0x002A6EBCu) [[unlikely]] return; }
L_002A6EBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A6F54; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002A6F04; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A6F20; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002A6EFC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_002A6F10; } }
L_002A6EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002A6F20; } }
L_002A6F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_002A6F20; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_002A6F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F18u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A6F18u) [[unlikely]] return; }
L_002A6F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A6F60; } }
L_002A6F20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F30u); set32(c.r[5], 0u + 203u);  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A6F30u) [[unlikely]] return; }
L_002A6F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A6F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F40u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A6F40u) [[unlikely]] return; }
L_002A6F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6F5C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A6F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 265u, depth + 1u); else { c.pc = 0x002A6D40u; return; } if (c.pc != 0x002A6F54u) [[unlikely]] return; }
L_002A6F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F5Cu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A6F5Cu) [[unlikely]] return; }
L_002A6F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A6F60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A6F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A6F80:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EF90u | kUnwind; return; } [[clang::musttail]] return unit_005B(c, 353u, depth); }
L_002A6F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] | 17239ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 200u, depth + 1u); else { c.pc = 0x001B1A30u; return; } if (c.pc != 0x002A6FACu) [[unlikely]] return; }
L_002A6FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 7312u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 180u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A6FE0u) [[unlikely]] return; }
L_002A6FE0:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7020u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A7020u) [[unlikely]] return; }
L_002A7020:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26176u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2072u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7060u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 303u, depth + 1u); else { c.pc = 0x0026E9C0u; return; } if (c.pc != 0x002A7060u) [[unlikely]] return; }
L_002A7060:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[2].w[0] + 446u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7098u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7098u) [[unlikely]] return; }
L_002A7098:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A70B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A719C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 7312u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A70FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A70FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A70FCu) [[unlikely]] return; }
L_002A70FC:
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7124; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7124; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7124u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7124u) [[unlikely]] return; }
L_002A7124:
    st32((c.r[17].w[0] + 100u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A714C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A714C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A714Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A714Cu) [[unlikely]] return; }
L_002A714C:
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7174; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7174; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7174u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7174u) [[unlikely]] return; }
L_002A7174:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7184u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002C(c, 203u, depth + 1u); else { c.pc = 0x001B1AC0u; return; } if (c.pc != 0x002A7184u) [[unlikely]] return; }
L_002A7184:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A71A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A719Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A719Cu) [[unlikely]] return; }
L_002A719C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A71A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A71C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[1].w[0] + 26176u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71F4u); set32(c.r[5], c.r[2].w[0] - 2000u);  if (depth < kMaxDepth) unit_0024(c, 252u, depth + 1u); else { c.pc = 0x00191E60u; return; } if (c.pc != 0x002A71F4u) [[unlikely]] return; }
L_002A71F4:
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 325u, depth + 1u); else { c.pc = 0x002A7500u; return; } if (c.pc != 0x002A7200u) [[unlikely]] return; }
L_002A7200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A722Cu); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 111u, depth + 1u); else { c.pc = 0x00225820u; return; } if (c.pc != 0x002A722Cu) [[unlikely]] return; }
L_002A722C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7234u); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 117u, depth + 1u); else { c.pc = 0x00225980u; return; } if (c.pc != 0x002A7234u) [[unlikely]] return; }
L_002A7234:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A726Cu); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A726Cu) [[unlikely]] return; }
L_002A726C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7274u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A7274u) [[unlikely]] return; }
L_002A7274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A727Cu); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A727Cu) [[unlikely]] return; }
L_002A727C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002A7294; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002A72C4; } }
L_002A7294:
    set32(c.r[2], ld32((c.r[1].w[0] + 31072u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 4492u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72ACu); set32(c.r[5], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0047(c, 171u, depth + 1u); else { c.pc = 0x0021E250u; return; } if (c.pc != 0x002A72ACu) [[unlikely]] return; }
L_002A72AC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A72C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    c.budget -= 3;
L_002A72C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7420; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A72E0u) [[unlikely]] return; }
L_002A72E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72F0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0042(c, 78u, depth + 1u); else { c.pc = 0x00209290u; return; } if (c.pc != 0x002A72F0u) [[unlikely]] return; }
L_002A72F0:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72FCu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 118u, depth + 1u); else { c.pc = 0x00225990u; return; } if (c.pc != 0x002A72FCu) [[unlikely]] return; }
L_002A72FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A731C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A730Cu); set32(c.r[4], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_0049(c, 104u, depth + 1u); else { c.pc = 0x00225680u; return; } if (c.pc != 0x002A730Cu) [[unlikely]] return; }
L_002A730C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A7334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A7334; } }
L_002A731C:
    set32(c.r[4], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7328u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0026(c, 139u, depth + 1u); else { c.pc = 0x001991D0u; return; } if (c.pc != 0x002A7328u) [[unlikely]] return; }
L_002A7328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A7334; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A7334:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A7420; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A7388; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 393u));
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A7374; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 393u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 61;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A7388; } }
L_002A7374:
    st32((c.r[5].w[0] + 640u), 0u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 868u), c.r[3].w[0]);  if (t) { goto L_002A73A0; } }
L_002A7388:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 12519u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 340u);  if (t) { goto L_002A73A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73A0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A73A0u) [[unlikely]] return; }
L_002A73A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73A8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A73A8u) [[unlikely]] return; }
L_002A73A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002A73C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 219u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73C0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 153u, depth + 1u); else { c.pc = 0x002261B0u; return; } if (c.pc != 0x002A73C0u) [[unlikely]] return; }
L_002A73C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73D0u); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A73D0u) [[unlikely]] return; }
L_002A73D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73E0u); set32(c.r[6], 0u + 160u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A73E0u) [[unlikely]] return; }
L_002A73E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73F0u); set32(c.r[6], 0u + 130u);  if (depth < kMaxDepth) unit_005B(c, 358u, depth + 1u); else { c.pc = 0x0026F230u; return; } if (c.pc != 0x002A73F0u) [[unlikely]] return; }
L_002A73F0:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 116u, depth + 1u); else { c.pc = 0x00225970u; return; } if (c.pc != 0x002A73FCu) [[unlikely]] return; }
L_002A73FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7414u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A7414u) [[unlikely]] return; }
L_002A7414:
    set32(c.r[3], 0u + 100u);
    st32((c.r[16].w[0] + 200u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_002A7420:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A74A0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 193u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A74A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002A7498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7458; } }
L_002A744C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7454u);  if (depth < kMaxDepth) unit_0069(c, 212u, depth + 1u); else { c.pc = 0x002A6440u; return; } if (c.pc != 0x002A7454u) [[unlikely]] return; }
L_002A7454:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002A7458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 201u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A746Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A746Cu) [[unlikely]] return; }
L_002A746C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A744Cu | kUnwind; return; } goto L_002A744C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7490u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7490u) [[unlikely]] return; }
L_002A7490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A74A4; } }
L_002A7498:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    c.budget -= 2;
L_002A74A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A74A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A74C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74D8u); set32(c.r[4], ld32((c.r[4].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A74D8u) [[unlikely]] return; }
L_002A74D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74E0u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A74E0u) [[unlikely]] return; }
L_002A74E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74E8u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026EF90u; return; } if (c.pc != 0x002A74E8u) [[unlikely]] return; }
L_002A74E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A751Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A751Cu) [[unlikely]] return; }
L_002A751C:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7538u) [[unlikely]] return; }
L_002A7538:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A755Cu); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x002A755Cu) [[unlikely]] return; }
L_002A755C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A756Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 357u, depth + 1u); else { c.pc = 0x0026F210u; return; } if (c.pc != 0x002A756Cu) [[unlikely]] return; }
L_002A756C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7574u); set32(c.r[4], ld32((c.r[16].w[0] + 96u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A7574u) [[unlikely]] return; }
L_002A7574:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7584u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7584u) [[unlikely]] return; }
L_002A7584:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A75A0u) [[unlikely]] return; }
L_002A75A0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 357u, depth + 1u); else { c.pc = 0x0026F210u; return; } if (c.pc != 0x002A75BCu) [[unlikely]] return; }
L_002A75BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75C4u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A75C4u) [[unlikely]] return; }
L_002A75C4:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A75D4u) [[unlikely]] return; }
L_002A75D4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A75F0u) [[unlikely]] return; }
L_002A75F0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A760Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 357u, depth + 1u); else { c.pc = 0x0026F210u; return; } if (c.pc != 0x002A760Cu) [[unlikely]] return; }
L_002A760C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7614u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_005B(c, 349u, depth + 1u); else { c.pc = 0x0026EE80u; return; } if (c.pc != 0x002A7614u) [[unlikely]] return; }
L_002A7614:
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7624u) [[unlikely]] return; }
L_002A7624:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7648u) [[unlikely]] return; }
L_002A7648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = ld32((c.r[1].w[0] - 29064u));
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.f[13] = c.r[3].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A766Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0049(c, 110u, depth + 1u); else { c.pc = 0x002257F0u; return; } if (c.pc != 0x002A766Cu) [[unlikely]] return; }
L_002A766C:
    set32(c.r[4], 0u + 240u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 196u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 193u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76B8u); set32(c.r[4], c.r[16].w[0] + 2u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002A76B8u) [[unlikely]] return; }
L_002A76B8:
    set32(c.r[4], c.r[16].w[0] + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76C8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x002A76C8u) [[unlikely]] return; }
L_002A76C8:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A76E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x002A76F4u) [[unlikely]] return; }
L_002A76F4:
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A7708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A774C; } }
L_002A7708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7710u);  if (depth < kMaxDepth) unit_0069(c, 342u, depth + 1u); else { c.pc = 0x002A7690u; return; } if (c.pc != 0x002A7710u) [[unlikely]] return; }
L_002A7710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7718u); set32(c.r[4], 0u + 212u);  if (depth < kMaxDepth) unit_0069(c, 353u, depth + 1u); else { c.pc = 0x002A7760u; return; } if (c.pc != 0x002A7718u) [[unlikely]] return; }
L_002A7718:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7724u); set32(c.r[4], 0u + 213u);  if (depth < kMaxDepth) unit_0069(c, 353u, depth + 1u); else { c.pc = 0x002A7760u; return; } if (c.pc != 0x002A7724u) [[unlikely]] return; }
L_002A7724:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 355u, depth + 1u); else { c.pc = 0x002A77A0u; return; } if (c.pc != 0x002A7730u) [[unlikely]] return; }
L_002A7730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7738u); set32(c.r[4], 0u + 215u);  if (depth < kMaxDepth) unit_0069(c, 358u, depth + 1u); else { c.pc = 0x002A7830u; return; } if (c.pc != 0x002A7738u) [[unlikely]] return; }
L_002A7738:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7744u); set32(c.r[4], 0u + 210u);  if (depth < kMaxDepth) unit_0069(c, 358u, depth + 1u); else { c.pc = 0x002A7830u; return; } if (c.pc != 0x002A7744u) [[unlikely]] return; }
L_002A7744:
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002A774C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A777Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A777Cu) [[unlikely]] return; }
L_002A777C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A778C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 112u));  if (t) { goto L_002A7790; } }
L_002A778C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7790:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A77A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002A77B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], 0u + 203u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A77CCu) [[unlikely]] return; }
L_002A77CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_002A780C; } }
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[3].w[0] + 2u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[3].w[0] + 6u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 121u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A77FC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A780C; } }
L_002A77FC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002A780C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002A780C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A77B8u | kUnwind; return; } goto L_002A77B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 26328u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A784Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 414u, depth + 1u); else { c.pc = 0x00197E00u; return; } if (c.pc != 0x002A784Cu) [[unlikely]] return; }
L_002A784C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A785C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));  if (t) { goto L_002A7860; } }
L_002A785C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A7860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A7870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A78D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7898u); set32(c.r[4], ld32((c.r[4].w[0] + 912u)));  if (depth < kMaxDepth) unit_004A(c, 4u, depth + 1u); else { c.pc = 0x00228080u; return; } if (c.pc != 0x002A7898u) [[unlikely]] return; }
L_002A7898:
    set32(c.r[4], ld32((c.r[16].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 4u, depth + 1u); else { c.pc = 0x00228080u; return; } if (c.pc != 0x002A78A4u) [[unlikely]] return; }
L_002A78A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002A78B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A78D8; } }
L_002A78B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A78C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A78D8; } }
L_002A78C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002A78D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A78D8; } }
L_002A78D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A78D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A78F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], 0u + 30u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A79FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[4] = 0u;
    set32(c.r[3], 0u + 263u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_002A79EC; } }
L_002A792C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002A79E8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002A79E8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A79E8; } }
    c.f[2] = ld32((c.r[6].w[0] + 224u));
    c.f[1] = ld32((c.r[4].w[0] + 224u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A7970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7974; } }
L_002A7970:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002A7974:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A79E8; } }
    c.f[2] = ld32((c.r[6].w[0] + 232u));
    c.f[1] = ld32((c.r[4].w[0] + 232u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A79A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A79A4; } }
L_002A79A0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002A79A4:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A79E8; } }
    c.f[2] = ld32((c.r[6].w[0] + 228u));
    c.f[1] = ld32((c.r[4].w[0] + 228u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A79D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A79D4; } }
L_002A79D0:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_002A79D4:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A79E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A79FC; } }
L_002A79E8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002A79EC:
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A792Cu | kUnwind; return; } goto L_002A792C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A79FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x474D0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 21327ull;  c.pc = t; return; }
L_002A7A20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A54u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x002A7A54u) [[unlikely]] return; }
L_002A7A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A68u); st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 148u, depth + 1u); else { c.pc = 0x0013D450u; return; } if (c.pc != 0x002A7A68u) [[unlikely]] return; }
L_002A7A68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7AA8; } }
    set32(c.r[20], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_002A7AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A88u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x002A7A88u) [[unlikely]] return; }
L_002A7A88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 17268u), c.r[20].w[0]);
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AA4u); st32((c.r[1].w[0] + 31520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 288u, depth + 1u); else { c.pc = 0x001FEED0u; return; } if (c.pc != 0x002A7AA4u) [[unlikely]] return; }
L_002A7AA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A7AA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7AE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    set32(c.r[3], c.r[2].w[0] + 86u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 86u));
    c.r[1].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A7ADC; } }
    set32(c.r[2], c.r[2].w[0] + 4000u);
    set32(c.r[18], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002A7B00; } }
L_002A7ADC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A7AE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_002A7B00; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 27648u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 86u));
    c.r[2].d[0] = c.r[2].sd[0] < 4000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7B00; } }
    set32(c.r[18], 0u + 4u);
    c.budget -= 1;
L_002A7B00:
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[19].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B1Cu); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7B1Cu) [[unlikely]] return; }
L_002A7B1C:
    set32(c.r[6], 0u + 256u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B34u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013CEC0u; return; } if (c.pc != 0x002A7B34u) [[unlikely]] return; }
L_002A7B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B3Cu);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A7B3Cu) [[unlikely]] return; }
L_002A7B3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B50u); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7B50u) [[unlikely]] return; }
L_002A7B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 31520u), c.r[3].w[0]);  if (t) { goto L_002A7C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B70u); set32(c.r[4], 0u + 2416u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A7B70u) [[unlikely]] return; }
L_002A7B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7B8C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 19u, depth + 1u); else { c.pc = 0x002AC6F0u; return; } if (c.pc != 0x002A7B8Cu) [[unlikely]] return; }
L_002A7B8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] - 24392u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_002A7BAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A7BBC; } }
L_002A7BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 36u, depth + 1u); else { c.pc = 0x002AC920u; return; } if (c.pc != 0x002A7BB4u) [[unlikely]] return; }
L_002A7BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7C28; } }
L_002A7BBC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A7C14; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A7BDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A7BF8; } }
L_002A7BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 169u, depth + 1u); else { c.pc = 0x002AE4E0u; return; } if (c.pc != 0x002A7BE4u) [[unlikely]] return; }
L_002A7BE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BF0u); set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));  if (depth < kMaxDepth) unit_006B(c, 64u, depth + 1u); else { c.pc = 0x002ACE70u; return; } if (c.pc != 0x002A7BF0u) [[unlikely]] return; }
L_002A7BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7C28; } }
L_002A7BF8:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A7C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 75u, depth + 1u); else { c.pc = 0x002AD130u; return; } if (c.pc != 0x002A7C0Cu) [[unlikely]] return; }
L_002A7C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A7C28; } }
L_002A7C14:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A7C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 77u, depth + 1u); else { c.pc = 0x002AD170u; return; } if (c.pc != 0x002A7C28u) [[unlikely]] return; }
L_002A7C28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C34u); set32(c.r[4], ld32((c.r[1].w[0] - 24392u)));  if (depth < kMaxDepth) unit_006B(c, 83u, depth + 1u); else { c.pc = 0x002AD2D0u; return; } if (c.pc != 0x002A7C34u) [[unlikely]] return; }
L_002A7C34:
    st32((c.r[19].w[0] + 16u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C48u); st32((c.r[1].w[0] - 24408u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7C48u) [[unlikely]] return; }
L_002A7C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C50u); set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7C50u) [[unlikely]] return; }
L_002A7C50:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002A7C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A7CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CB8u); st32((c.r[1].w[0] - 24408u), 0u);  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x002A7CB8u) [[unlikely]] return; }
L_002A7CB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A7CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x002A7CD0u) [[unlikely]] return; }
L_002A7CD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002A7CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A7D04u) [[unlikely]] return; }
L_002A7D04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D18u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7D18u) [[unlikely]] return; }
L_002A7D18:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7D4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D34u); set32(c.r[4], ld32((c.r[2].w[0] + 96u)));  if (depth < kMaxDepth) unit_0019(c, 216u, depth + 1u); else { c.pc = 0x001666D0u; return; } if (c.pc != 0x002A7D34u) [[unlikely]] return; }
L_002A7D34:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A7DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002A7DA0; } }
L_002A7D4C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 160u);  if (t) { goto L_002A7DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A7D5Cu) [[unlikely]] return; }
L_002A7D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7D74; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 399u, depth + 1u); else { c.pc = 0x002A7E80u; return; } if (c.pc != 0x002A7D74u) [[unlikely]] return; }
L_002A7D74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A7D90; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7D90u) [[unlikely]] return; }
L_002A7D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D98u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7D98u) [[unlikely]] return; }
L_002A7D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A7DAC; } }
L_002A7DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7DA8u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7DA8u) [[unlikely]] return; }
L_002A7DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A7DAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7DD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A7DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7DE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A7DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7DF0:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 23u);  if (t) { goto L_002A7E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A7E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E14:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_002A7E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E28:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A7E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E38:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 42u);  if (t) { goto L_002A7E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A7E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
L_002A7E5C:
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7E6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A7E6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EA8u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x002A7EA8u) [[unlikely]] return; }
L_002A7EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EB0u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x001486F0u; return; } if (c.pc != 0x002A7EB0u) [[unlikely]] return; }
L_002A7EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 7632u);
    set32(c.r[2], c.r[2].w[0] + 7672u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7ECCu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x002A7ECCu) [[unlikely]] return; }
L_002A7ECC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EE0u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7EE0u) [[unlikely]] return; }
L_002A7EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EE8u);  if (depth < kMaxDepth) unit_003F(c, 268u, depth + 1u); else { c.pc = 0x001FE620u; return; } if (c.pc != 0x002A7EE8u) [[unlikely]] return; }
L_002A7EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7EF0u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x002A7EF0u) [[unlikely]] return; }
L_002A7EF0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A7F04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[1].w[0] + 25658u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A7F04:
    st32((c.r[18].w[0] + 100u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24392u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 132u), 0u);
    st32((c.r[18].w[0] + 80u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 8384u);
    c.budget -= 12;
L_002A7F34:
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 266u));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7F34u | kUnwind; return; } goto L_002A7F34; } }
    c.r[3].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] - 24400u), c.r[18].w[0]);
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st8((c.r[18].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 140u), 0u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A7FAC; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FA4u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x002A7FA4u) [[unlikely]] return; }
L_002A7FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_006A(c, 8u, depth); } }
L_002A7FAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_002A7FEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FBCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x002A7FBCu) [[unlikely]] return; }
L_002A7FBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002A7FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FD0u);  if (depth < kMaxDepth) unit_0069(c, 8u, depth + 1u); else { c.pc = 0x002A4090u; return; } if (c.pc != 0x002A7FD0u) [[unlikely]] return; }
L_002A7FD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002A7FD4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7FE4u) [[unlikely]] return; }
L_002A7FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 140u), c.r[16].w[0]);  if (t) { [[clang::musttail]] return unit_006A(c, 5u, depth); } }
L_002A7FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7FF4u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x002A7FF4u) [[unlikely]] return; }
L_002A7FF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25569u));
    c.budget -= 3;
    [[clang::musttail]] return unit_006A(c, 1u, depth);
}

}
