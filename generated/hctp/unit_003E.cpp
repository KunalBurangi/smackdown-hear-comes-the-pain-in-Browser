#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0,
    0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0,
    0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 0,
    319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0,
    0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0,
    0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0,
    0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0,
    0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F8000;
    case 2u: goto L_001F8010;
    case 3u: goto L_001F806C;
    case 4u: goto L_001F8130;
    case 5u: goto L_001F8170;
    case 6u: goto L_001F8184;
    case 7u: goto L_001F81A4;
    case 8u: goto L_001F81D0;
    case 9u: goto L_001F81F0;
    case 10u: goto L_001F8274;
    case 11u: goto L_001F8288;
    case 12u: goto L_001F8360;
    case 13u: goto L_001F837C;
    case 14u: goto L_001F8390;
    case 15u: goto L_001F83A8;
    case 16u: goto L_001F83E0;
    case 17u: goto L_001F83F8;
    case 18u: goto L_001F8428;
    case 19u: goto L_001F8438;
    case 20u: goto L_001F8448;
    case 21u: goto L_001F8458;
    case 22u: goto L_001F84C0;
    case 23u: goto L_001F84E0;
    case 24u: goto L_001F851C;
    case 25u: goto L_001F8554;
    case 26u: goto L_001F8568;
    case 27u: goto L_001F85B4;
    case 28u: goto L_001F85C8;
    case 29u: goto L_001F85F0;
    case 30u: goto L_001F8628;
    case 31u: goto L_001F8630;
    case 32u: goto L_001F8638;
    case 33u: goto L_001F8640;
    case 34u: goto L_001F8648;
    case 35u: goto L_001F8650;
    case 36u: goto L_001F8658;
    case 37u: goto L_001F8660;
    case 38u: goto L_001F8668;
    case 39u: goto L_001F8670;
    case 40u: goto L_001F8678;
    case 41u: goto L_001F8680;
    case 42u: goto L_001F8698;
    case 43u: goto L_001F86F0;
    case 44u: goto L_001F870C;
    case 45u: goto L_001F873C;
    case 46u: goto L_001F8754;
    case 47u: goto L_001F8790;
    case 48u: goto L_001F87A0;
    case 49u: goto L_001F87F0;
    case 50u: goto L_001F8818;
    case 51u: goto L_001F8864;
    case 52u: goto L_001F8888;
    case 53u: goto L_001F88C0;
    case 54u: goto L_001F88D4;
    case 55u: goto L_001F8934;
    case 56u: goto L_001F8954;
    case 57u: goto L_001F898C;
    case 58u: goto L_001F89AC;
    case 59u: goto L_001F89C0;
    case 60u: goto L_001F89E0;
    case 61u: goto L_001F8A54;
    case 62u: goto L_001F8AAC;
    case 63u: goto L_001F8AD0;
    case 64u: goto L_001F8AF0;
    case 65u: goto L_001F8B20;
    case 66u: goto L_001F8B34;
    case 67u: goto L_001F8B50;
    case 68u: goto L_001F8B64;
    case 69u: goto L_001F8BBC;
    case 70u: goto L_001F8BF0;
    case 71u: goto L_001F8BFC;
    case 72u: goto L_001F8C04;
    case 73u: goto L_001F8C60;
    case 74u: goto L_001F8C80;
    case 75u: goto L_001F8CB8;
    case 76u: goto L_001F8CE8;
    case 77u: goto L_001F8D1C;
    case 78u: goto L_001F8D28;
    case 79u: goto L_001F8D30;
    case 80u: goto L_001F8D3C;
    case 81u: goto L_001F8D58;
    case 82u: goto L_001F8D60;
    case 83u: goto L_001F8D74;
    case 84u: goto L_001F8D88;
    case 85u: goto L_001F8D9C;
    case 86u: goto L_001F8DB0;
    case 87u: goto L_001F8E38;
    case 88u: goto L_001F8E78;
    case 89u: goto L_001F8EB4;
    case 90u: goto L_001F8EC4;
    case 91u: goto L_001F8EF8;
    case 92u: goto L_001F8F0C;
    case 93u: goto L_001F8F1C;
    case 94u: goto L_001F8F38;
    case 95u: goto L_001F8F50;
    case 96u: goto L_001F8F6C;
    case 97u: goto L_001F8F7C;
    case 98u: goto L_001F8FC0;
    case 99u: goto L_001F900C;
    case 100u: goto L_001F9028;
    case 101u: goto L_001F903C;
    case 102u: goto L_001F9048;
    case 103u: goto L_001F90C0;
    case 104u: goto L_001F90F8;
    case 105u: goto L_001F91A4;
    case 106u: goto L_001F91AC;
    case 107u: goto L_001F9210;
    case 108u: goto L_001F9264;
    case 109u: goto L_001F92B8;
    case 110u: goto L_001F92C4;
    case 111u: goto L_001F92D8;
    case 112u: goto L_001F92F0;
    case 113u: goto L_001F9330;
    case 114u: goto L_001F9340;
    case 115u: goto L_001F935C;
    case 116u: goto L_001F9440;
    case 117u: goto L_001F9474;
    case 118u: goto L_001F94A4;
    case 119u: goto L_001F94C4;
    case 120u: goto L_001F9530;
    case 121u: goto L_001F9540;
    case 122u: goto L_001F9564;
    case 123u: goto L_001F9574;
    case 124u: goto L_001F9584;
    case 125u: goto L_001F9598;
    case 126u: goto L_001F95F0;
    case 127u: goto L_001F9608;
    case 128u: goto L_001F961C;
    case 129u: goto L_001F96A0;
    case 130u: goto L_001F96E8;
    case 131u: goto L_001F9724;
    case 132u: goto L_001F973C;
    case 133u: goto L_001F9780;
    case 134u: goto L_001F97C0;
    case 135u: goto L_001F97E0;
    case 136u: goto L_001F97F8;
    case 137u: goto L_001F9838;
    case 138u: goto L_001F9848;
    case 139u: goto L_001F9870;
    case 140u: goto L_001F989C;
    case 141u: goto L_001F98F8;
    case 142u: goto L_001F9908;
    case 143u: goto L_001F9940;
    case 144u: goto L_001F9950;
    case 145u: goto L_001F9990;
    case 146u: goto L_001F9A20;
    case 147u: goto L_001F9A30;
    case 148u: goto L_001F9A50;
    case 149u: goto L_001F9A60;
    case 150u: goto L_001F9A70;
    case 151u: goto L_001F9A80;
    case 152u: goto L_001F9A90;
    case 153u: goto L_001F9AA0;
    case 154u: goto L_001F9AB0;
    case 155u: goto L_001F9AC0;
    case 156u: goto L_001F9AD8;
    case 157u: goto L_001F9AE0;
    case 158u: goto L_001F9B50;
    case 159u: goto L_001F9B60;
    case 160u: goto L_001F9BB0;
    case 161u: goto L_001F9BF4;
    case 162u: goto L_001F9C44;
    case 163u: goto L_001F9C58;
    case 164u: goto L_001F9CE0;
    case 165u: goto L_001F9D70;
    case 166u: goto L_001F9DFC;
    case 167u: goto L_001F9E7C;
    case 168u: goto L_001F9E98;
    case 169u: goto L_001F9EB0;
    case 170u: goto L_001F9EC8;
    case 171u: goto L_001F9ED8;
    case 172u: goto L_001F9F48;
    case 173u: goto L_001F9F64;
    case 174u: goto L_001F9FB0;
    case 175u: goto L_001F9FD8;
    case 176u: goto L_001F9FE4;
    case 177u: goto L_001F9FEC;
    case 178u: goto L_001F9FF4;
    case 179u: goto L_001FA00C;
    case 180u: goto L_001FA07C;
    case 181u: goto L_001FA094;
    case 182u: goto L_001FA0B0;
    case 183u: goto L_001FA104;
    case 184u: goto L_001FA1EC;
    case 185u: goto L_001FA20C;
    case 186u: goto L_001FA22C;
    case 187u: goto L_001FA24C;
    case 188u: goto L_001FA26C;
    case 189u: goto L_001FA2A4;
    case 190u: goto L_001FA38C;
    case 191u: goto L_001FA3A8;
    case 192u: goto L_001FA3AC;
    case 193u: goto L_001FA3C4;
    case 194u: goto L_001FA428;
    case 195u: goto L_001FA440;
    case 196u: goto L_001FA488;
    case 197u: goto L_001FA4B8;
    case 198u: goto L_001FA4C0;
    case 199u: goto L_001FA4E4;
    case 200u: goto L_001FA500;
    case 201u: goto L_001FA508;
    case 202u: goto L_001FA530;
    case 203u: goto L_001FA594;
    case 204u: goto L_001FA5B4;
    case 205u: goto L_001FA640;
    case 206u: goto L_001FA65C;
    case 207u: goto L_001FA660;
    case 208u: goto L_001FA680;
    case 209u: goto L_001FA688;
    case 210u: goto L_001FA700;
    case 211u: goto L_001FA718;
    case 212u: goto L_001FA720;
    case 213u: goto L_001FA728;
    case 214u: goto L_001FA73C;
    case 215u: goto L_001FA760;
    case 216u: goto L_001FA774;
    case 217u: goto L_001FA77C;
    case 218u: goto L_001FA7A0;
    case 219u: goto L_001FA80C;
    case 220u: goto L_001FA814;
    case 221u: goto L_001FA828;
    case 222u: goto L_001FA844;
    case 223u: goto L_001FA85C;
    case 224u: goto L_001FA87C;
    case 225u: goto L_001FA8C8;
    case 226u: goto L_001FA8DC;
    case 227u: goto L_001FA92C;
    case 228u: goto L_001FA940;
    case 229u: goto L_001FA954;
    case 230u: goto L_001FA968;
    case 231u: goto L_001FA97C;
    case 232u: goto L_001FA9A8;
    case 233u: goto L_001FA9C8;
    case 234u: goto L_001FA9F0;
    case 235u: goto L_001FAA08;
    case 236u: goto L_001FAA18;
    case 237u: goto L_001FAA20;
    case 238u: goto L_001FAA40;
    case 239u: goto L_001FAA48;
    case 240u: goto L_001FAA50;
    case 241u: goto L_001FAA60;
    case 242u: goto L_001FAA6C;
    case 243u: goto L_001FAA74;
    case 244u: goto L_001FAAA0;
    case 245u: goto L_001FAB28;
    case 246u: goto L_001FAB44;
    case 247u: goto L_001FAB54;
    case 248u: goto L_001FAB6C;
    case 249u: goto L_001FAB9C;
    case 250u: goto L_001FABB4;
    case 251u: goto L_001FAC04;
    case 252u: goto L_001FAC3C;
    case 253u: goto L_001FAC60;
    case 254u: goto L_001FACB0;
    case 255u: goto L_001FACD4;
    case 256u: goto L_001FACE4;
    case 257u: goto L_001FACF8;
    case 258u: goto L_001FAD38;
    case 259u: goto L_001FAD68;
    case 260u: goto L_001FAD74;
    case 261u: goto L_001FAD84;
    case 262u: goto L_001FAD8C;
    case 263u: goto L_001FADA0;
    case 264u: goto L_001FADA8;
    case 265u: goto L_001FADBC;
    case 266u: goto L_001FADC4;
    case 267u: goto L_001FADD8;
    case 268u: goto L_001FADE8;
    case 269u: goto L_001FADF8;
    case 270u: goto L_001FAE0C;
    case 271u: goto L_001FAE1C;
    case 272u: goto L_001FAE2C;
    case 273u: goto L_001FAE40;
    case 274u: goto L_001FAE50;
    case 275u: goto L_001FAE58;
    case 276u: goto L_001FAE80;
    case 277u: goto L_001FAE90;
    case 278u: goto L_001FAEB4;
    case 279u: goto L_001FAEC4;
    case 280u: goto L_001FAED4;
    case 281u: goto L_001FAEE0;
    case 282u: goto L_001FAF04;
    case 283u: goto L_001FAF5C;
    case 284u: goto L_001FAFE8;
    case 285u: goto L_001FB000;
    case 286u: goto L_001FB05C;
    case 287u: goto L_001FB084;
    case 288u: goto L_001FB100;
    case 289u: goto L_001FB13C;
    case 290u: goto L_001FB150;
    case 291u: goto L_001FB204;
    case 292u: goto L_001FB254;
    case 293u: goto L_001FB298;
    case 294u: goto L_001FB2AC;
    case 295u: goto L_001FB2BC;
    case 296u: goto L_001FB2CC;
    case 297u: goto L_001FB2D4;
    case 298u: goto L_001FB2EC;
    case 299u: goto L_001FB304;
    case 300u: goto L_001FB334;
    case 301u: goto L_001FB348;
    case 302u: goto L_001FB364;
    case 303u: goto L_001FB378;
    case 304u: goto L_001FB394;
    case 305u: goto L_001FB3C8;
    case 306u: goto L_001FB3E0;
    case 307u: goto L_001FB420;
    case 308u: goto L_001FB438;
    case 309u: goto L_001FB444;
    case 310u: goto L_001FB460;
    case 311u: goto L_001FB488;
    case 312u: goto L_001FB494;
    case 313u: goto L_001FB4AC;
    case 314u: goto L_001FB4BC;
    case 315u: goto L_001FB4C8;
    case 316u: goto L_001FB4D8;
    case 317u: goto L_001FB4E4;
    case 318u: goto L_001FB4EC;
    case 319u: goto L_001FB500;
    case 320u: goto L_001FB50C;
    case 321u: goto L_001FB51C;
    case 322u: goto L_001FB530;
    case 323u: goto L_001FB53C;
    case 324u: goto L_001FB54C;
    case 325u: goto L_001FB558;
    case 326u: goto L_001FB568;
    case 327u: goto L_001FB574;
    case 328u: goto L_001FB584;
    case 329u: goto L_001FB598;
    case 330u: goto L_001FB5A4;
    case 331u: goto L_001FB5E4;
    case 332u: goto L_001FB5F8;
    case 333u: goto L_001FB604;
    case 334u: goto L_001FB614;
    case 335u: goto L_001FB630;
    case 336u: goto L_001FB63C;
    case 337u: goto L_001FB644;
    case 338u: goto L_001FB660;
    case 339u: goto L_001FB66C;
    case 340u: goto L_001FB698;
    case 341u: goto L_001FB6B8;
    case 342u: goto L_001FB6C8;
    case 343u: goto L_001FB6D8;
    case 344u: goto L_001FB6F8;
    case 345u: goto L_001FB708;
    case 346u: goto L_001FB714;
    case 347u: goto L_001FB730;
    case 348u: goto L_001FB73C;
    case 349u: goto L_001FB744;
    case 350u: goto L_001FB760;
    case 351u: goto L_001FB76C;
    case 352u: goto L_001FB774;
    case 353u: goto L_001FB788;
    case 354u: goto L_001FB794;
    case 355u: goto L_001FB79C;
    case 356u: goto L_001FB7B0;
    case 357u: goto L_001FB7BC;
    case 358u: goto L_001FB7C4;
    case 359u: goto L_001FB7D8;
    case 360u: goto L_001FB7E4;
    case 361u: goto L_001FB7F4;
    case 362u: goto L_001FB80C;
    case 363u: goto L_001FB818;
    case 364u: goto L_001FB830;
    case 365u: goto L_001FB854;
    case 366u: goto L_001FB868;
    case 367u: goto L_001FB874;
    case 368u: goto L_001FB884;
    case 369u: goto L_001FB8B0;
    case 370u: goto L_001FB8BC;
    case 371u: goto L_001FB8CC;
    case 372u: goto L_001FB8D8;
    case 373u: goto L_001FB8E8;
    case 374u: goto L_001FB900;
    case 375u: goto L_001FB90C;
    case 376u: goto L_001FB920;
    case 377u: goto L_001FB940;
    case 378u: goto L_001FB95C;
    case 379u: goto L_001FB96C;
    case 380u: goto L_001FB978;
    case 381u: goto L_001FB988;
    case 382u: goto L_001FB99C;
    case 383u: goto L_001FB9A8;
    case 384u: goto L_001FB9B4;
    case 385u: goto L_001FB9C8;
    case 386u: goto L_001FB9D4;
    case 387u: goto L_001FB9E4;
    case 388u: goto L_001FB9F8;
    case 389u: goto L_001FBA04;
    case 390u: goto L_001FBA14;
    case 391u: goto L_001FBA24;
    case 392u: goto L_001FBA34;
    case 393u: goto L_001FBA40;
    case 394u: goto L_001FBA4C;
    case 395u: goto L_001FBA5C;
    case 396u: goto L_001FBA68;
    case 397u: goto L_001FBA78;
    case 398u: goto L_001FBA88;
    case 399u: goto L_001FBA94;
    case 400u: goto L_001FBAA4;
    case 401u: goto L_001FBAB4;
    case 402u: goto L_001FBAC0;
    case 403u: goto L_001FBADC;
    case 404u: goto L_001FBB38;
    case 405u: goto L_001FBB48;
    case 406u: goto L_001FBB54;
    case 407u: goto L_001FBB90;
    case 408u: goto L_001FBBBC;
    case 409u: goto L_001FBBE8;
    case 410u: goto L_001FBBF0;
    case 411u: goto L_001FBC20;
    case 412u: goto L_001FBC40;
    case 413u: goto L_001FBC70;
    case 414u: goto L_001FBCFC;
    case 415u: goto L_001FBD10;
    case 416u: goto L_001FBD54;
    case 417u: goto L_001FBD68;
    case 418u: goto L_001FBD90;
    case 419u: goto L_001FBD9C;
    case 420u: goto L_001FBDB8;
    case 421u: goto L_001FBDC0;
    case 422u: goto L_001FBDCC;
    case 423u: goto L_001FBE00;
    case 424u: goto L_001FBE14;
    case 425u: goto L_001FBE40;
    case 426u: goto L_001FBE58;
    case 427u: goto L_001FBE8C;
    case 428u: goto L_001FBED4;
    case 429u: goto L_001FBF30;
    case 430u: goto L_001FBF64;
    case 431u: goto L_001FBF98;
    case 432u: goto L_001FBFC0;
    default: bad_entry(c, 0x001F8000u); return;
    }
L_001F8000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] + 8384u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0] + 372u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 373u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[4].w[0] + 728u);  if (t) { goto L_001F8098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F806Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F806Cu) [[unlikely]] return; }
L_001F806C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8088; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F80C8; } }
L_001F8088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F80C8; } }
L_001F8098:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F80B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F80C8; } }
L_001F80B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F80C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F80C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8118; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 572u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F8118; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8992u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001F8118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8130:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F815C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F8158; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F8158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F815C; } }
L_001F8158:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F815C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F81A8; } }
L_001F8184:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001F81A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81A4u);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001F81A4u) [[unlikely]] return; }
L_001F81A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F81A8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8184u | kUnwind; return; } goto L_001F8184; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F81D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 372u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F837C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81F0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F81F0u) [[unlikely]] return; }
L_001F81F0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F837C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 370u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F837C; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F837C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F837C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 716u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F837C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F837C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F837C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x53590000u);
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8274u); c.r[5].d[0] = c.r[2].d[0] | 20035ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001F8274u) [[unlikely]] return; }
L_001F8274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F8280; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001F8280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8288u);  if (depth < kMaxDepth) unit_0033(c, 101u, depth + 1u); else { c.pc = 0x001CD4B0u; return; } if (c.pc != 0x001F8288u) [[unlikely]] return; }
L_001F8288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F837C; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], 0u - 5u);
    st8((c.r[16].w[0] + 372u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31376u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[1].w[0] + 31360u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[1].w[0] + 31360u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 912u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 31424u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 111u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[1].w[0] + 31424u), c.r[3].w[0]);  if (t) { goto L_001F8360; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] - 10000u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_001F832C; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F8328; } }
    breakpoint(c, 0x001F8324u);
    c.budget -= 1;
L_001F8328:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001F832C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001F833C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 86u);  if (t) { goto L_001F8350; } }
L_001F833C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F834C; } }
    breakpoint(c, 0x001F8348u);
    c.budget -= 1;
L_001F834C:
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001F8350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 27616u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8360u); set32(c.r[5], 0u + 310u);  if (depth < kMaxDepth) unit_0058(c, 37u, depth + 1u); else { c.pc = 0x00260310u; return; } if (c.pc != 0x001F8360u) [[unlikely]] return; }
L_001F8360:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 392u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F837Cu); st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001F837Cu) [[unlikely]] return; }
L_001F837C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8390:
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F83C0; } }
L_001F83A8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F83BC; } }
    st32((c.r[3].w[0] + 756u), 0u);
    c.budget -= 1;
L_001F83BC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F83C0:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F83A8u | kUnwind; return; } goto L_001F83A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F83E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F8498; } }
L_001F83F8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F8494; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F8494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8428u);  if (depth < kMaxDepth) unit_0034(c, 97u, depth + 1u); else { c.pc = 0x001D0D70u; return; } if (c.pc != 0x001F8428u) [[unlikely]] return; }
L_001F8428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F8488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8438u);  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001F8438u) [[unlikely]] return; }
L_001F8438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F8488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8448u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001F8448u) [[unlikely]] return; }
L_001F8448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F8488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8458u);  if (depth < kMaxDepth) unit_0034(c, 129u, depth + 1u); else { c.pc = 0x001D1410u; return; } if (c.pc != 0x001F8458u) [[unlikely]] return; }
L_001F8458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8488; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] - 190u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F848C; } }
    set32(c.r[2], 0u + 202u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 198u);  if (t) { goto L_001F8488; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8494; } }
L_001F8488:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F848C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001F84AC; } }
L_001F8494:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F8498:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F83F8u | kUnwind; return; } goto L_001F83F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_001F84AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F84C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F8530; } }
L_001F84E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F852C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 464u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F852C; } }
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F851Cu); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001F851Cu) [[unlikely]] return; }
L_001F851C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F852C; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 2;
L_001F852C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F8530:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F84E0u | kUnwind; return; } goto L_001F84E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F86D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8554u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8554u) [[unlikely]] return; }
L_001F8554:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F85D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8568u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8568u) [[unlikely]] return; }
L_001F8568:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F85D0; } }
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31464u), c.r[3].w[0]);
    set32(c.r[2], 0u + 9u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85B4u); st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F85B4u) [[unlikely]] return; }
L_001F85B4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F86D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85C8u);  if (depth < kMaxDepth) unit_003D(c, 329u, depth + 1u); else { c.pc = 0x001F7DF0u; return; } if (c.pc != 0x001F85C8u) [[unlikely]] return; }
L_001F85C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001F86D8; } }
L_001F85D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F85F8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85F0u); st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 332u, depth + 1u); else { c.pc = 0x001F7E20u; return; } if (c.pc != 0x001F85F0u) [[unlikely]] return; }
L_001F85F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_001F8600; } }
L_001F85F8:
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_001F8600:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F8680; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21808u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F8628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 49u, depth + 1u); else { c.pc = 0x001F87F0u; return; } if (c.pc != 0x001F8630u) [[unlikely]] return; }
L_001F8630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8680; } }
L_001F8638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 139u, depth + 1u); else { c.pc = 0x001F9870u; return; } if (c.pc != 0x001F8640u) [[unlikely]] return; }
L_001F8640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8680; } }
L_001F8648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8650u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 98u, depth + 1u); else { c.pc = 0x001F8FC0u; return; } if (c.pc != 0x001F8650u) [[unlikely]] return; }
L_001F8650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8680; } }
L_001F8658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8660u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 112u, depth + 1u); else { c.pc = 0x001F92F0u; return; } if (c.pc != 0x001F8660u) [[unlikely]] return; }
L_001F8660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8680; } }
L_001F8668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 113u, depth + 1u); else { c.pc = 0x001F9330u; return; } if (c.pc != 0x001F8670u) [[unlikely]] return; }
L_001F8670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8680; } }
L_001F8678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 116u, depth + 1u); else { c.pc = 0x001F9440u; return; } if (c.pc != 0x001F8680u) [[unlikely]] return; }
L_001F8680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F86B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8698u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8698u) [[unlikely]] return; }
L_001F8698:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F86B0; } }
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31464u), c.r[3].w[0]);
    c.budget -= 3;
L_001F86B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F86D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31456u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31456u), c.r[3].w[0]);
    c.budget -= 5;
L_001F86D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001F86D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F86F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F870Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 4u, depth + 1u); else { c.pc = 0x001F8130u; return; } if (c.pc != 0x001F870Cu) [[unlikely]] return; }
L_001F870C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F871C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F877C; } }
L_001F871C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F877C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F873Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F873Cu) [[unlikely]] return; }
L_001F873C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F8770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8754u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8754u) [[unlikely]] return; }
L_001F8754:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8778; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8778; } }
L_001F8770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F877C; } }
L_001F8778:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F877C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_001F87CC; } }
L_001F87A0:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F87C8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] ^ c.r[4].d[0];  if (t) { goto L_001F87C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001F87DC; } }
L_001F87C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001F87CC:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F87A0u | kUnwind; return; } goto L_001F87A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F87DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F87F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F8868; } }
L_001F8818:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F8864; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8864; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8864; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 1653u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8864; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8864u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001F8864u) [[unlikely]] return; }
L_001F8864:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F8868:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8818u | kUnwind; return; } goto L_001F8818; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28320u);  if (t) { goto L_001F88AC; } }
L_001F8888:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F88A8; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F88A8; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001F88A8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F88AC:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8888u | kUnwind; return; } goto L_001F8888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001F8940; } }
L_001F88C0:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88D4u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F88D4u) [[unlikely]] return; }
L_001F88D4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F893C; } }
    set32(c.r[2], 0u + 29u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F893C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001F893C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F893C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F893C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F893C; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8934u); st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_003D(c, 329u, depth + 1u); else { c.pc = 0x001F7DF0u; return; } if (c.pc != 0x001F8934u) [[unlikely]] return; }
L_001F8934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F8FA4; } }
L_001F893C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F8940:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F88C0u | kUnwind; return; } goto L_001F88C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F8C6C; } }
L_001F8954:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F8C68; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8C68; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F898Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F898Cu) [[unlikely]] return; }
L_001F898C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F89A4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001F8C78; } }
L_001F89A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89ACu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F89ACu) [[unlikely]] return; }
L_001F89AC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F89C0u) [[unlikely]] return; }
L_001F89C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8A40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_001F8A34; } }
L_001F89E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F8A30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F8A30; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 371u);  if (t) { goto L_001F8A30; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F8A40; } }
L_001F8A30:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001F8A34:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F89E0u | kUnwind; return; } goto L_001F89E0; } }
L_001F8A40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F8A98; } }
L_001F8A54:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F8A94; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8A94; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8A94; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8A94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001F8AA4; } }
L_001F8A94:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F8A98:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8A54u | kUnwind; return; } goto L_001F8A54; } }
L_001F8AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AACu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8AACu) [[unlikely]] return; }
L_001F8AAC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8AE0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_001F8AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AD0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001F8AD0u) [[unlikely]] return; }
L_001F8AD0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F8AE0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F8AE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001F8C68; } }
L_001F8AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AF0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8AF0u) [[unlikely]] return; }
L_001F8AF0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F8B18; } }
    set32(c.r[2], 0u + 5u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 31336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F8B18; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001F8C78; } }
L_001F8B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B20u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8B20u) [[unlikely]] return; }
L_001F8B20:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F8B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B34u);  if (depth < kMaxDepth) unit_003E(c, 47u, depth + 1u); else { c.pc = 0x001F8790u; return; } if (c.pc != 0x001F8B34u) [[unlikely]] return; }
L_001F8B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8C68; } }
L_001F8B3C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001F8B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B50u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8B50u) [[unlikely]] return; }
L_001F8B50:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B64u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8B64u) [[unlikely]] return; }
L_001F8B64:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8C68; } }
L_001F8B70:
    c.r[17].d[0] = ld8((c.r[18].w[0] + 372u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F8B90; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
L_001F8B90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 3u);  if (t) { goto L_001F8BA4; } }
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.budget -= 3;
L_001F8BA4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001F8C08; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BBCu); st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 275u, depth + 1u); else { c.pc = 0x001F7700u; return; } if (c.pc != 0x001F8BBCu) [[unlikely]] return; }
L_001F8BBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 72u);  if (t) { goto L_001F8BF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8BF0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_001F8BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0041(c, 175u, depth + 1u); else { c.pc = 0x00207310u; return; } if (c.pc != 0x001F8BF0u) [[unlikely]] return; }
L_001F8BF0:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_001F8BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BFCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003D(c, 345u, depth + 1u); else { c.pc = 0x001F7FE0u; return; } if (c.pc != 0x001F8BFCu) [[unlikely]] return; }
L_001F8BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F8C04u) [[unlikely]] return; }
L_001F8C04:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001F8C08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_001F8C20; } }
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
L_001F8C20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_001F8C38; } }
    set32(c.r[2], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
L_001F8C38:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F8C48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.budget -= 2;
L_001F8C48:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 373u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C60u); st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_003D(c, 329u, depth + 1u); else { c.pc = 0x001F7DF0u; return; } if (c.pc != 0x001F8C60u) [[unlikely]] return; }
L_001F8C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8FA0; } }
L_001F8C68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F8C6C:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8954u | kUnwind; return; } goto L_001F8954; } }
L_001F8C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001F8E64; } }
L_001F8C80:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F8E60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8E60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CB8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8CB8u) [[unlikely]] return; }
L_001F8CB8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CD0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F8E60; } }
L_001F8CD0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 372u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001F8D34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CE8u);  if (depth < kMaxDepth) unit_003D(c, 275u, depth + 1u); else { c.pc = 0x001F7700u; return; } if (c.pc != 0x001F8CE8u) [[unlikely]] return; }
L_001F8CE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 72u);  if (t) { goto L_001F8D20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8D1C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_001F8D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0041(c, 175u, depth + 1u); else { c.pc = 0x00207310u; return; } if (c.pc != 0x001F8D1Cu) [[unlikely]] return; }
L_001F8D1C:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_001F8D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D28u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003D(c, 345u, depth + 1u); else { c.pc = 0x001F7FE0u; return; } if (c.pc != 0x001F8D28u) [[unlikely]] return; }
L_001F8D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F8D30u) [[unlikely]] return; }
L_001F8D30:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001F8D34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D3Cu); st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8D3Cu) [[unlikely]] return; }
L_001F8D3C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8D50; } }
    st32((c.r[17].w[0] + 640u), 0u);
    c.budget -= 1;
L_001F8D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D58u);  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001F8D58u) [[unlikely]] return; }
L_001F8D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D60u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8D60u) [[unlikely]] return; }
L_001F8D60:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D74u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8D74u) [[unlikely]] return; }
L_001F8D74:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D88u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8D88u) [[unlikely]] return; }
L_001F8D88:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D9Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8D9Cu) [[unlikely]] return; }
L_001F8D9C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 30u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F8DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8DB0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8DB0u) [[unlikely]] return; }
L_001F8DB0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8E20; } }
L_001F8DBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 31528u), 0u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9076u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 9076u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 372u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001F8DF4; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_001F8DF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8E00; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F8E00:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_001F8E10; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_001F8E10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F8E1C; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_001F8E1C:
    st32((c.r[1].w[0] + 31536u), c.r[4].w[0]);
    c.budget -= 1;
L_001F8E20:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F8E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E38u);  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001F8E38u) [[unlikely]] return; }
L_001F8E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8E60; } }
    st8((c.r[17].w[0] + 372u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 392u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_001F8E60:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F8E64:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8C80u | kUnwind; return; } goto L_001F8C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F8EE4; } }
L_001F8E78:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F8EE0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 393u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F8EE0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 43u, depth + 1u); else { c.pc = 0x001F86F0u; return; } if (c.pc != 0x001F8EB4u) [[unlikely]] return; }
L_001F8EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F8ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EC4u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F8EC4u) [[unlikely]] return; }
L_001F8EC4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_001F8FA0; } }
L_001F8ED8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 640u), 0u);
    c.budget -= 2;
L_001F8EE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F8EE4:
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8E78u | kUnwind; return; } goto L_001F8E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8EF8u) [[unlikely]] return; }
L_001F8EF8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F8F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 114u, depth + 1u); else { c.pc = 0x001F9340u; return; } if (c.pc != 0x001F8F0Cu) [[unlikely]] return; }
L_001F8F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F8F2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F1Cu);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F8F1Cu) [[unlikely]] return; }
L_001F8F1C:
    set32(c.r[3], 0u + 4u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_001F8FA0; } }
L_001F8F2C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F8F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_001F8F98; } }
L_001F8F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F50u); set32(c.r[18], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F8F50u) [[unlikely]] return; }
L_001F8F50:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8F90; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F8F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F6Cu);  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x001F8F6Cu) [[unlikely]] return; }
L_001F8F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F8F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F7Cu);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F8F7Cu) [[unlikely]] return; }
L_001F8F7C:
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_001F8FA0; } }
L_001F8F90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001F8F98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8F38u | kUnwind; return; } goto L_001F8F38; } }
L_001F8FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F8FA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F8FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F92D0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F900Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0034(c, 189u, depth + 1u); else { c.pc = 0x001D2700u; return; } if (c.pc != 0x001F900Cu) [[unlikely]] return; }
L_001F900C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9084; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F9034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9028u);  if (depth < kMaxDepth) unit_003E(c, 16u, depth + 1u); else { c.pc = 0x001F83E0u; return; } if (c.pc != 0x001F9028u) [[unlikely]] return; }
L_001F9028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9084; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F9034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F903Cu);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F903Cu) [[unlikely]] return; }
L_001F903C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9048u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_003D(c, 332u, depth + 1u); else { c.pc = 0x001F7E20u; return; } if (c.pc != 0x001F9048u) [[unlikely]] return; }
L_001F9048:
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[6].w[0] + 28320u);
    set32(c.r[4], 0u - 29u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 393u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 393u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F92DC; } }
L_001F9084:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_001F90F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 90u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F90B4; } }
    breakpoint(c, 0x001F90B0u);
    c.budget -= 1;
L_001F90B4:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F90C0u) [[unlikely]] return; }
L_001F90C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F90E8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 70u);
    set32(c.r[3], c.r[3].w[0] + 60u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001F90E4; } }
    breakpoint(c, 0x001F90E0u);
    c.budget -= 1;
L_001F90E4:
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001F90E8:
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    set32(c.r[16], 0u + 3u);
    c.budget -= 2;
L_001F90F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90F8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F90F8u) [[unlikely]] return; }
L_001F90F8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9108; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001F9108:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 374u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F9150; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F9150; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 560u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9150; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001F9150:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F91E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F919C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001F91E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[3], c.r[3].w[0] - 25200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F91E0; } }
L_001F919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F91A4u) [[unlikely]] return; }
L_001F91A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91ACu); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_003D(c, 310u, depth + 1u); else { c.pc = 0x001F7B60u; return; } if (c.pc != 0x001F91ACu) [[unlikely]] return; }
L_001F91AC:
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    set32(c.r[3], 0u - 29u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(12ll);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 393u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F92DC; } }
L_001F91E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001F9248; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9210u); set32(c.r[4], ld32((c.r[2].w[0] + 60u)));  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001F9210u) [[unlikely]] return; }
L_001F9210:
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 28320u);
    set32(c.r[3], 0u - 29u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(20ll);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 393u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F92DC; } }
L_001F9248:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F92C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F92C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9264u);  if (depth < kMaxDepth) unit_003D(c, 275u, depth + 1u); else { c.pc = 0x001F7700u; return; } if (c.pc != 0x001F9264u) [[unlikely]] return; }
L_001F9264:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F92B8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F92B8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F92B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 374u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92B8u); set32(c.r[4], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0041(c, 175u, depth + 1u); else { c.pc = 0x00207310u; return; } if (c.pc != 0x001F92B8u) [[unlikely]] return; }
L_001F92B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92C4u); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 345u, depth + 1u); else { c.pc = 0x001F7FE0u; return; } if (c.pc != 0x001F92C4u) [[unlikely]] return; }
L_001F92C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_001F92DC; } }
L_001F92D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92D8u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F92D8u) [[unlikely]] return; }
L_001F92D8:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_001F92DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F92F0:
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 28320u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 393u));
    c.r[5].d[0] = c.r[5].d[0] << 59;
    c.r[5].d[0] = c.r[5].d[0] >> 61;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F9324; } }
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 1;
L_001F9324:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9340:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 28320u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001F942C; } }
L_001F935C:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);  if (t) { goto L_001F9424; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9420; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9420; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9420; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 240u)));
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F93B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F93B4; } }
L_001F93B0:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001F93B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21832u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F93F8; } }
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F93E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F93E4; } }
L_001F93E0:
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001F93E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21832u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9420; } }
L_001F93F8:
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9414; } }
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    c.budget -= 2;
L_001F9414:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_001F9428; } }
L_001F9420:
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001F9424:
    st8((c.r[3].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F9428:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001F942C:
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F935Cu | kUnwind; return; } goto L_001F935C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9440:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], 0u + 7u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F94B0; } }
L_001F9474:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F94AC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F94AC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F94AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F94A4u) [[unlikely]] return; }
L_001F94A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { goto L_001F984C; } }
L_001F94AC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F94B0:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9474u | kUnwind; return; } goto L_001F9474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 114u, depth + 1u); else { c.pc = 0x001F9340u; return; } if (c.pc != 0x001F94C4u) [[unlikely]] return; }
L_001F94C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F9840; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9510; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_001F94F8; } }
    breakpoint(c, 0x001F94F4u);
    c.budget -= 1;
L_001F94F8:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_001F950C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_001F950C:
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_001F9510:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001F9544; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F9544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9530u);  if (depth < kMaxDepth) unit_003D(c, 277u, depth + 1u); else { c.pc = 0x001F7760u; return; } if (c.pc != 0x001F9530u) [[unlikely]] return; }
L_001F9530:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9540u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_003D(c, 311u, depth + 1u); else { c.pc = 0x001F7B70u; return; } if (c.pc != 0x001F9540u) [[unlikely]] return; }
L_001F9540:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_001F9544:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F984C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9564u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_003D(c, 329u, depth + 1u); else { c.pc = 0x001F7DF0u; return; } if (c.pc != 0x001F9564u) [[unlikely]] return; }
L_001F9564:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9574u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F9574u) [[unlikely]] return; }
L_001F9574:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9584u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F9584u) [[unlikely]] return; }
L_001F9584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F95D8; } }
L_001F9598:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F95D4; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_001F95D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F95D4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
L_001F95D4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001F95D8:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9598u | kUnwind; return; } goto L_001F9598; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F9708; } }
L_001F95F0:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9608u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F9608u) [[unlikely]] return; }
L_001F9608:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F965C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F961Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F961Cu) [[unlikely]] return; }
L_001F961C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F965C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F965C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F965C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F965C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001F965C; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001F965C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F9704; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);  if (t) { goto L_001F9704; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9704; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F96B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96A0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F96A0u) [[unlikely]] return; }
L_001F96A0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 29u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9704; } }
L_001F96B0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F96C4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F9704; } }
L_001F96C4:
    c.r[20].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96E8u); st32((c.r[3].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F96E8u) [[unlikely]] return; }
L_001F96E8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9704; } }
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_001F9714; } }
L_001F9704:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F9708:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F95F0u | kUnwind; return; } goto L_001F95F0; } }
L_001F9714:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F9818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9724u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F9724u) [[unlikely]] return; }
L_001F9724:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001F9778; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 3;
L_001F973C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9750; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F9750:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F973Cu | kUnwind; return; } goto L_001F973C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_001F9774; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.budget -= 2;
L_001F9774:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F9778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_001F9808; } }
L_001F9780:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F9800; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_001F9800; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F97C0u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001F97C0u) [[unlikely]] return; }
L_001F97C0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F97E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F97E0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001F97E0u) [[unlikely]] return; }
L_001F97E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F97F8; } }
L_001F97E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F97F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001F97F8u) [[unlikely]] return; }
L_001F97F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 2;
L_001F9800:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001F9808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9780u | kUnwind; return; } goto L_001F9780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F9830; } }
L_001F9818:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_001F982C; } }
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);
    c.budget -= 3;
L_001F982C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F9830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9838u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F9838u) [[unlikely]] return; }
L_001F9838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001F9850; } }
L_001F9840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9848u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F9848u) [[unlikely]] return; }
L_001F9848:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_001F984C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001F9850:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F9870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F989Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0034(c, 199u, depth + 1u); else { c.pc = 0x001D2AD0u; return; } if (c.pc != 0x001F989Cu) [[unlikely]] return; }
L_001F989C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F9A28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F98D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 50u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_001F98D0; } }
    breakpoint(c, 0x001F98CCu);
    c.budget -= 1;
L_001F98D0:
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 2;
L_001F98D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F990C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F990C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98F8u);  if (depth < kMaxDepth) unit_003D(c, 275u, depth + 1u); else { c.pc = 0x001F7700u; return; } if (c.pc != 0x001F98F8u) [[unlikely]] return; }
L_001F98F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9908u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_003D(c, 311u, depth + 1u); else { c.pc = 0x001F7B70u; return; } if (c.pc != 0x001F9908u) [[unlikely]] return; }
L_001F9908:
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 1;
L_001F990C:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F9A34; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 120u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_001F9944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9940u);  if (depth < kMaxDepth) unit_003D(c, 329u, depth + 1u); else { c.pc = 0x001F7DF0u; return; } if (c.pc != 0x001F9940u) [[unlikely]] return; }
L_001F9940:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_001F9944:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9950u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F9950u) [[unlikely]] return; }
L_001F9950:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 9073u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_001F99EC; } }
L_001F9990:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F99E8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F99E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F99E8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001F99E8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 9072u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 8984u), c.r[2].w[0]);  if (t) { goto L_001F99F8; } }
L_001F99E8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F99EC:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9990u | kUnwind; return; } goto L_001F9990; } }
L_001F99F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 9072u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A20u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 2u, depth + 1u); else { c.pc = 0x001F8010u; return; } if (c.pc != 0x001F9A20u) [[unlikely]] return; }
L_001F9A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F9A38; } }
L_001F9A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A30u);  if (depth < kMaxDepth) unit_003E(c, 14u, depth + 1u); else { c.pc = 0x001F8390u; return; } if (c.pc != 0x001F9A30u) [[unlikely]] return; }
L_001F9A30:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_001F9A34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F9A38:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7CD0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 320u, depth); }
L_001F9A70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7D70u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 325u, depth); }
L_001F9A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F84C0u | kUnwind; return; } goto L_001F84C0; }
L_001F9A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7F10u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 339u, depth); }
L_001F9AA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9A50u | kUnwind; return; } goto L_001F9A50; }
L_001F9AB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7F10u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 339u, depth); }
L_001F9AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 8u), 0ull);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001F9B28; } }
L_001F9AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001F9B08; } }
L_001F9AE0:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9B04; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F9B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001F9B14; } }
L_001F9B04:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001F9B08:
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9AE0u | kUnwind; return; } goto L_001F9AE0; } }
L_001F9B14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001F9B24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_001F9B3C; } }
L_001F9B24:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F9B28:
    c.r[3].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9AD8u | kUnwind; return; } goto L_001F9AD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_001F9B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9B50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 28320u);  if (t) { goto L_001F9B98; } }
L_001F9B60:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001F9B94; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F9B94; } }
    st32((c.r[4].w[0] + 984u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 912u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 980u), c.r[3].w[0]);  if (t) { goto L_001F9BA4; } }
L_001F9B94:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001F9B98:
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9B60u | kUnwind; return; } goto L_001F9B60; } }
L_001F9BA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 255u);
    st32((c.r[1].w[0] + 26824u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 26832u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 26768u);
    set32(c.r[2], 0u + 43u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26816u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9BF4u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001F9BF4u) [[unlikely]] return; }
L_001F9BF4:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    set32(c.r[3], 0u + 100u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[14].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_001F9C14; } }
    breakpoint(c, 0x001F9C10u);
    c.budget -= 1;
L_001F9C14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 26816u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00420000u);
    set32(c.r[8], c.r[8].w[0] + 21840u);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 26768u);
    set32(c.r[4], 0u + 255u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 25200u);  if (t) { goto L_001F9CA4; } }
    set32(c.r[3], c.r[8].w[0] + c.r[13].w[0]);
    c.budget -= 1;
L_001F9C44:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { goto L_001F9CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { goto L_001F9CA4; } }
L_001F9C58:
    c.r[6].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[3], c.r[9].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[10].w[0]);  if (t) { goto L_001F9C78; } }
    breakpoint(c, 0x001F9C74u);
    c.budget -= 1;
L_001F9C78:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9C58u | kUnwind; return; } goto L_001F9C58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[14], c.r[14].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == c.r[10].d[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_001F9CC4; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_001F9CA4:
    c.r[3].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(44ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] + c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9C44u | kUnwind; return; } goto L_001F9C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001F9CC8; } }
L_001F9CB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[1].w[0] + 28008u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9C58u | kUnwind; return; } goto L_001F9C58; } }
L_001F9CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001F9CC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9CE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26824u)));
    set32(c.r[2], c.r[2].w[0] + 26768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { goto L_001F9D18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 26816u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_001F9D34; } }
L_001F9D18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 26816u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_001F9D34; } }
L_001F9D34:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[1].w[0] + 26824u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  c.pc = t; return; }
L_001F9D70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[1].w[0] + 3840u)));
    c.f[25] = c.f[12];
    c.f[24] = c.f[13];
    c.f[23] = c.f[14];
    c.f[22] = c.f[15];
    c.f[21] = c.f[16];
    c.f[20] = c.f[17];
    c.budget -= 31;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_001F9E24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 28352u);  if (t) { goto L_001F9E18; } }
L_001F9DFC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F9E24; } }
L_001F9E14:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001F9E18:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(72ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9DFCu | kUnwind; return; } goto L_001F9DFC; } }
L_001F9E24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[21].w[0] + 1u);  if (t) { goto L_001F9E7C; } }
L_001F9E40:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F9E7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[21].w[0] + 1u);  if (t) { goto L_001F9E7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F9E7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9E7Cu) [[unlikely]] return; }
L_001F9E7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F9F50; } }
L_001F9E98:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001F9EA8; } }
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_001F9EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9EB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 114u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x001F9EB0u) [[unlikely]] return; }
L_001F9EB0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9EC8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001F9EC8u) [[unlikely]] return; }
L_001F9EC8:
    st32((c.r[30].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9ED8u); st32((c.r[2].w[0] + 464u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001F9ED8u) [[unlikely]] return; }
L_001F9ED8:
    c.f[0] = 0u;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];  if (t) { goto L_001F9F10; } }
    st32((c.r[17].w[0] + 224u), c.f[25]);
    st32((c.r[17].w[0] + 228u), c.f[24]);
    st32((c.r[17].w[0] + 232u), c.f[23]);
    st32((c.r[17].w[0] + 208u), c.f[22]);
    st32((c.r[17].w[0] + 212u), c.f[21]);
    st32((c.r[17].w[0] + 216u), c.f[20]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F9F30; } }
L_001F9F10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F9F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9F30; } }
L_001F9F20:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F9F2C; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001F9F2C:
    st8((c.r[17].w[0] + 370u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001F9F30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 15000u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F48u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001F9F48u) [[unlikely]] return; }
L_001F9F48:
    st32((c.r[17].w[0] + 480u), c.r[23].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001F9F50:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9E98u | kUnwind; return; } goto L_001F9E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9F64u); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001F9F64u) [[unlikely]] return; }
L_001F9F64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001F9FB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FD8u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 303u, depth + 1u); else { c.pc = 0x001FF110u; return; } if (c.pc != 0x001F9FD8u) [[unlikely]] return; }
L_001F9FD8:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 114u, depth + 1u); else { c.pc = 0x002099C0u; return; } if (c.pc != 0x001F9FE4u) [[unlikely]] return; }
L_001F9FE4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001F9FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FF4u);  if (depth < kMaxDepth) unit_0044(c, 27u, depth + 1u); else { c.pc = 0x00210C50u; return; } if (c.pc != 0x001F9FF4u) [[unlikely]] return; }
L_001F9FF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA00Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001FA00Cu) [[unlikely]] return; }
L_001FA00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 464u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 28320u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 370u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[2].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[1].w[0] + 21960u));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 212u), c.f[0]);  if (t) { goto L_001FA058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.f[0]);  if (t) { goto L_001FA064; } }
L_001FA058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2340000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.budget -= 3;
L_001FA064:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15000u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA07Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001FA07Cu) [[unlikely]] return; }
L_001FA07C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 480u), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9FECu | kUnwind; return; } goto L_001F9FEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA094u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FA094u) [[unlikely]] return; }
L_001FA094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FA0B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[12].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28320u);  if (t) { goto L_001FA1D0; } }
L_001FA104:
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001FA1CC; } }
    set32(c.r[11], ld32((c.r[8].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == c.r[6].d[0];  if (t) { goto L_001FA13C; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[5].d[0];  if (t) { goto L_001FA138; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001FA138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[9].w[0] << 5);  if (t) { goto L_001FA140; } }
L_001FA138:
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001FA13C:
    set32(c.r[11], c.r[9].w[0] << 5);
    c.budget -= 1;
L_001FA140:
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 265u)));
    st32((c.r[8].w[0] + 624u), c.r[11].w[0]);
    st16((c.r[8].w[0] + 598u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], ld32((c.r[8].w[0] + 464u)));
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_001FA1CC; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[11], c.r[12].w[0] + 1800u);  if (t) { goto L_001FA194; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[12], c.r[2].w[0] + c.r[11].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[12], c.r[12].w[0] - 128u);
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 3600u);  if (t) { goto L_001FA1C0; } }
L_001FA194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[12].d[0] = ld8((c.r[1].w[0] + 28008u));
    set32(c.r[13], c.r[2].w[0] + c.r[12].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[1].w[0] + 28008u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[13], c.r[13].w[0] - 128u);
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.budget -= 11;
L_001FA1C0:
    c.r[12].d[0] = c.r[11].d[0] << 48;
    st16((c.r[8].w[0] + 598u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 48);
    c.budget -= 3;
L_001FA1CC:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001FA1D0:
    c.r[8].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[9].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA104u | kUnwind; return; } goto L_001FA104; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FA224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FA210; } }
L_001FA1EC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FA20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA20Cu);  if (depth < kMaxDepth) unit_003E(c, 158u, depth + 1u); else { c.pc = 0x001F9B50u; return; } if (c.pc != 0x001FA20Cu) [[unlikely]] return; }
L_001FA20C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FA210:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA1ECu | kUnwind; return; } goto L_001FA1EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 120u);  if (t) { goto L_001FA260; } }
L_001FA224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_001FA254; } }
L_001FA22C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FA24C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA24Cu);  if (depth < kMaxDepth) unit_003E(c, 158u, depth + 1u); else { c.pc = 0x001F9B50u; return; } if (c.pc != 0x001FA24Cu) [[unlikely]] return; }
L_001FA24C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001FA254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA22Cu | kUnwind; return; } goto L_001FA22C; } }
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_001FA260:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA26Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA26Cu) [[unlikely]] return; }
L_001FA26C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[14], 0u + 9u);
    set32(c.r[15], 0u + 3u);
    c.r[13].d[0] = 0ull & 1ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 28320u);  if (t) { goto L_001FA378; } }
L_001FA2A4:
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001FA374; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_001FA374; } }
    c.r[12].d[0] = ld8((c.r[9].w[0] + 400u));
    set32(c.r[8], c.r[10].w[0] << 5);
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[4].d[0];
    st8((c.r[9].w[0] + 400u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 392u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[4].d[0];
    st8((c.r[9].w[0] + 392u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[8].w[0] + 264u));
    c.budget -= 13;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_001FA2FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 736u), c.r[5].w[0]);  if (t) { goto L_001FA300; } }
L_001FA2FC:
    st32((c.r[9].w[0] + 736u), 0u);
    c.budget -= 1;
L_001FA300:
    st8((c.r[9].w[0] + 371u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], ld32((c.r[9].w[0] + 464u)));
    c.budget -= 4;
    { const bool t = c.r[12].sd[0] <= 0;  if (t) { goto L_001FA314; } }
    st8((c.r[9].w[0] + 371u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_001FA314:
    set32(c.r[12], ld32((c.r[9].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FA32C; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[14].d[0];  if (t) { goto L_001FA32C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA32C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FA354; } }
    c.r[12].d[0] = ld8((c.r[9].w[0] + 400u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[9].w[0] + 400u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 392u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[9].w[0] + 392u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 8;
L_001FA354:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 268u)));
    st32((c.r[9].w[0] + 688u), c.r[12].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 269u)));
    st32((c.r[9].w[0] + 684u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 370u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001FA374; } }
    st32((c.r[9].w[0] + 228u), c.r[11].w[0]);
    c.budget -= 1;
L_001FA374:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001FA378:
    c.r[8].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA2A4u | kUnwind; return; } goto L_001FA2A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA38Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA38Cu) [[unlikely]] return; }
L_001FA38C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FA480; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3A8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0010(c, 111u, depth + 1u); else { c.pc = 0x00141670u; return; } if (c.pc != 0x001FA3A8u) [[unlikely]] return; }
L_001FA3A8:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[20], c.r[21].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FA460; } }
L_001FA3C4:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[19], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_001FA45C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001FA45C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 624u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 624u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FA45C; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 371u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 592u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 898u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 898u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);  if (t) { goto L_001FA44C; } }
    set32(c.r[16], c.r[2].w[0] + 112u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA428u);  if (depth < kMaxDepth) unit_003E(c, 155u, depth + 1u); else { c.pc = 0x001F9AC0u; return; } if (c.pc != 0x001FA428u) [[unlikely]] return; }
L_001FA428:
    st32((c.r[18].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[19].w[0] + 740u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA440u); st32((c.r[18].w[0] + 740u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FA440u) [[unlikely]] return; }
L_001FA440:
    st32((c.r[18].w[0] + 736u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001FA44C:
    set32(c.r[2], ld32((c.r[18].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA45C; } }
    st16((c.r[18].w[0] + 592u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001FA45C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001FA460:
    c.r[2].d[0] = c.r[20].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA3C4u | kUnwind; return; } goto L_001FA3C4; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA3ACu | kUnwind; return; } goto L_001FA3AC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_001FA4C8; } }
L_001FA488:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FA4C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001FA4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4B8u);  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001FA4B8u) [[unlikely]] return; }
L_001FA4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4C0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_003E(c, 158u, depth + 1u); else { c.pc = 0x001F9B50u; return; } if (c.pc != 0x001FA4C0u) [[unlikely]] return; }
L_001FA4C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001FA4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA488u | kUnwind; return; } goto L_001FA488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8988u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4E4u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA4E4u) [[unlikely]] return; }
L_001FA4E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[4].w[0] + 9076u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA500u); st16((c.r[1].w[0] + 9092u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA500u) [[unlikely]] return; }
L_001FA500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA508u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA508u) [[unlikely]] return; }
L_001FA508:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FA58C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[3], 0u + 7u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 28320u);  if (t) { goto L_001FA570; } }
L_001FA530:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { goto L_001FA56C; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 274u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001FA56C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9076u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001FA57C; } }
L_001FA56C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001FA570:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA530u | kUnwind; return; } goto L_001FA530; } }
L_001FA57C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA58C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 9076u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FA58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA594u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA594u) [[unlikely]] return; }
L_001FA594:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_001FA610; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], 0u + 25500u);
    set32(c.r[6], c.r[6].w[0] + 8384u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] << 5);
    c.budget -= 5;
L_001FA5B4:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 266u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 265u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[3].w[0] + 260u), 0u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA5B4u | kUnwind; return; } goto L_001FA5B4; } }
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31376u), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31388u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31424u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31384u), c.r[4].w[0]);
    c.budget -= 14;
L_001FA610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FA640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA65Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 8650u)));  if (depth < kMaxDepth) unit_003E(c, 160u, depth + 1u); else { c.pc = 0x001F9BB0u; return; } if (c.pc != 0x001FA65Cu) [[unlikely]] return; }
L_001FA65C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001FA660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA680u); set32(c.r[4], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA680u) [[unlikely]] return; }
L_001FA680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA688u);  if (depth < kMaxDepth) unit_003E(c, 164u, depth + 1u); else { c.pc = 0x001F9CE0u; return; } if (c.pc != 0x001FA688u) [[unlikely]] return; }
L_001FA688:
    st16((c.r[17].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[17].w[0] + 260u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 265u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 256u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA660u | kUnwind; return; } goto L_001FA660; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 21u);
    st8((c.r[1].w[0] + 31352u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 25500u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8810u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8842u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8874u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FA700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA718u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0015(c, 42u, depth + 1u); else { c.pc = 0x00155CE0u; return; } if (c.pc != 0x001FA718u) [[unlikely]] return; }
L_001FA718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA720u);  if (depth < kMaxDepth) unit_0040(c, 225u, depth + 1u); else { c.pc = 0x00202930u; return; } if (c.pc != 0x001FA720u) [[unlikely]] return; }
L_001FA720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA728u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA728u) [[unlikely]] return; }
L_001FA728:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA73Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA73Cu) [[unlikely]] return; }
L_001FA73C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FA76C; } }
    set32(c.r[2], 0u + 35u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA760u); st8((c.r[1].w[0] + 8896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 285u, depth + 1u); else { c.pc = 0x001FB000u; return; } if (c.pc != 0x001FA760u) [[unlikely]] return; }
L_001FA760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31352u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FA774; } }
L_001FA76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA774u);  if (depth < kMaxDepth) unit_003E(c, 205u, depth + 1u); else { c.pc = 0x001FA640u; return; } if (c.pc != 0x001FA774u) [[unlikely]] return; }
L_001FA774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA77Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA77Cu) [[unlikely]] return; }
L_001FA77C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA7F8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 25500u);
    set32(c.r[4], c.r[4].w[0] + 8384u);
    set32(c.r[2], c.r[6].w[0] << 5);
    c.budget -= 6;
L_001FA7A0:
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FA7D4; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 264u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA7D4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA7D4; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001FA7D4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA7A0u | kUnwind; return; } goto L_001FA7A0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001FA7F8; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001FA7F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA80Cu); set32(c.r[6], 0u + 288u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA80Cu) [[unlikely]] return; }
L_001FA80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA814u);  if (depth < kMaxDepth) unit_0040(c, 234u, depth + 1u); else { c.pc = 0x00202BA0u; return; } if (c.pc != 0x001FA814u) [[unlikely]] return; }
L_001FA814:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA828u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FA828u) [[unlikely]] return; }
L_001FA828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 19648u);  if (t) { goto L_001FA9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA844u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FA844u) [[unlikely]] return; }
L_001FA844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FA860; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA85Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 424u, depth + 1u); else { c.pc = 0x00233A50u; return; } if (c.pc != 0x001FA85Cu) [[unlikely]] return; }
L_001FA85C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA860:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 8384u);
    set32(c.r[5], 0u + 25500u);
    set32(c.r[2], c.r[8].w[0] << 5);
    c.budget -= 7;
L_001FA87C:
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 266u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001FA8B0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001FA8A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001FA8A4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA8A4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001FA8B0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001FA8B0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] << 5);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA87Cu | kUnwind; return; } goto L_001FA87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8C8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA8C8u) [[unlikely]] return; }
L_001FA8C8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8DCu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA8DCu) [[unlikely]] return; }
L_001FA8DC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA900; } }
L_001FA8E8:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_001FA904; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31704u), c.r[2].w[0]);
    c.budget -= 3;
L_001FA900:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FA904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_001FA91C; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31704u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
L_001FA91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;  if (t) { goto L_001FA998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA92Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA92Cu) [[unlikely]] return; }
L_001FA92C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA940u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA940u) [[unlikely]] return; }
L_001FA940:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA954u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA954u) [[unlikely]] return; }
L_001FA954:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA968u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA968u) [[unlikely]] return; }
L_001FA968:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FA988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA97Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA97Cu) [[unlikely]] return; }
L_001FA97C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA994; } }
L_001FA988:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31704u), c.r[2].w[0]);
    c.budget -= 3;
L_001FA994:
    c.r[1].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FA998:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FA9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9A8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA9A8u) [[unlikely]] return; }
L_001FA9A8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA9C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FA9B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31704u), c.r[2].w[0]);
    c.budget -= 2;
L_001FA9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9C8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FA9C8u) [[unlikely]] return; }
L_001FA9C8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001FA9DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31704u), c.r[3].w[0]);
    c.budget -= 2;
L_001FA9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FA9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0040(c, 168u, depth + 1u); else { c.pc = 0x002023B0u; return; } if (c.pc != 0x001FAA08u) [[unlikely]] return; }
L_001FAA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA18u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001FAA18u) [[unlikely]] return; }
L_001FAA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA20u);  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001FAA20u) [[unlikely]] return; }
L_001FAA20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 64u);  if (t) { goto L_001FAA78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA40u); st32((c.r[1].w[0] + 8984u), 0u);  if (depth < kMaxDepth) unit_0040(c, 129u, depth + 1u); else { c.pc = 0x00201DE0u; return; } if (c.pc != 0x001FAA40u) [[unlikely]] return; }
L_001FAA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA48u);  if (depth < kMaxDepth) unit_0040(c, 135u, depth + 1u); else { c.pc = 0x00201E90u; return; } if (c.pc != 0x001FAA48u) [[unlikely]] return; }
L_001FAA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA50u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FAA50u) [[unlikely]] return; }
L_001FAA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 334u, depth + 1u); else { c.pc = 0x001F7E70u; return; } if (c.pc != 0x001FAA60u) [[unlikely]] return; }
L_001FAA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA6Cu); st32((c.r[1].w[0] + 31080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 182u, depth + 1u); else { c.pc = 0x001FA0B0u; return; } if (c.pc != 0x001FAA6Cu) [[unlikely]] return; }
L_001FAA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA74u);  if (depth < kMaxDepth) unit_003F(c, 9u, depth + 1u); else { c.pc = 0x001FC110u; return; } if (c.pc != 0x001FAA74u) [[unlikely]] return; }
L_001FAA74:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001FAA78:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28320u);  if (t) { goto L_001FAAD8; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.budget -= 1;
L_001FAAA0:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAAD4; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 224u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 9;
L_001FAAD4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001FAAD8:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAAA0u | kUnwind; return; } goto L_001FAAA0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_001FAB20; } }
    c.f[0] = c.r[7].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 13;
L_001FAB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB28u);  if (depth < kMaxDepth) unit_0041(c, 60u, depth + 1u); else { c.pc = 0x002053A0u; return; } if (c.pc != 0x001FAB28u) [[unlikely]] return; }
L_001FAB28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FAE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB44u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FAB44u) [[unlikely]] return; }
L_001FAB44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FACCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB54u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FAB54u) [[unlikely]] return; }
L_001FAB54:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FACCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FACC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FAB6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[16], 0u + 11u);  if (t) { goto L_001FAB80; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001FAB88; } }
L_001FAB80:
    set32(c.r[16], 0u + 5u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_001FAB88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001FAB94; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_001FAB94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB9Cu);  if (depth < kMaxDepth) unit_0044(c, 27u, depth + 1u); else { c.pc = 0x00210C50u; return; } if (c.pc != 0x001FAB9Cu) [[unlikely]] return; }
L_001FAB9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001FABB4u) [[unlikely]] return; }
L_001FABB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[2].w[0] + 464u), c.r[18].w[0]);  if (t) { goto L_001FAC04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15300u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAC04u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001FAC04u) [[unlikely]] return; }
L_001FAC04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FAC40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15300u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAC3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001FAC3Cu) [[unlikely]] return; }
L_001FAC3C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FAC40:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001FAC90; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAC60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001FAC60u) [[unlikely]] return; }
L_001FAC60:
    set32(c.r[2], c.r[16].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 12;
L_001FAC90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001FACBC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 480u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FACB0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001FACB0u) [[unlikely]] return; }
L_001FACB0:
    st32((c.r[16].w[0] + 224u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    st32((c.r[16].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 3;
L_001FACBC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001FACC0:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAB6Cu | kUnwind; return; } goto L_001FAB6C; } }
L_001FACCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FACD4u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FACD4u) [[unlikely]] return; }
L_001FACD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 56u);  if (t) { goto L_001FAD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FACE4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FACE4u) [[unlikely]] return; }
L_001FACE4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FACF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FACF8u) [[unlikely]] return; }
L_001FACF8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FAD38; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[12] = ld32((c.r[1].w[0] + 21952u));
    set32(c.r[4], 0u - 1u);
    c.f[13] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[6], 0u + 11u);
    c.f[15] = c.f[13];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[16] = ld32((c.r[1].w[0] + 21960u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD38u); c.f[17] = c.f[13];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x001FAD38u) [[unlikely]] return; }
L_001FAD38:
    c.f[14] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    set32(c.r[4], 0u - 1u);
    c.f[12] = c.r[3].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 23u);
    c.f[15] = c.f[14];
    c.f[16] = c.f[14];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD68u); c.f[17] = c.f[14];  if (depth < kMaxDepth) unit_003E(c, 165u, depth + 1u); else { c.pc = 0x001F9D70u; return; } if (c.pc != 0x001FAD68u) [[unlikely]] return; }
L_001FAD68:
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_001FAD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FAD74u) [[unlikely]] return; }
L_001FAD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD84u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 333u, depth + 1u); else { c.pc = 0x001FF510u; return; } if (c.pc != 0x001FAD84u) [[unlikely]] return; }
L_001FAD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD8Cu);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FAD8Cu) [[unlikely]] return; }
L_001FAD8C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FADA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADA0u);  if (depth < kMaxDepth) unit_003E(c, 174u, depth + 1u); else { c.pc = 0x001F9FB0u; return; } if (c.pc != 0x001FADA0u) [[unlikely]] return; }
L_001FADA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADA8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FADA8u) [[unlikely]] return; }
L_001FADA8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 19u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FADBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADBCu);  if (depth < kMaxDepth) unit_0043(c, 128u, depth + 1u); else { c.pc = 0x0020EC30u; return; } if (c.pc != 0x001FADBCu) [[unlikely]] return; }
L_001FADBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADC4u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FADC4u) [[unlikely]] return; }
L_001FADC4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FADF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADD8u); set32(c.r[4], 0u + 752u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FADD8u) [[unlikely]] return; }
L_001FADD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 179u, depth + 1u); else { c.pc = 0x0021B560u; return; } if (c.pc != 0x001FADE8u) [[unlikely]] return; }
L_001FADE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FAE50; } }
L_001FADF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FADF8u) [[unlikely]] return; }
L_001FADF8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE0Cu); set32(c.r[4], 0u + 336u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FAE0Cu) [[unlikely]] return; }
L_001FAE0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 138u, depth + 1u); else { c.pc = 0x0021A7D0u; return; } if (c.pc != 0x001FAE1Cu) [[unlikely]] return; }
L_001FAE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FAE50; } }
L_001FAE24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE2Cu);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FAE2Cu) [[unlikely]] return; }
L_001FAE2C:
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001FAE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE40u); set32(c.r[4], 0u + 720u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FAE40u) [[unlikely]] return; }
L_001FAE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 21u, depth + 1u); else { c.pc = 0x0021C640u; return; } if (c.pc != 0x001FAE50u) [[unlikely]] return; }
L_001FAE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE58u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FAE58u) [[unlikely]] return; }
L_001FAE58:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAE78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8903u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 31200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FAE88; } }
L_001FAE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE80u);  if (depth < kMaxDepth) unit_000F(c, 389u, depth + 1u); else { c.pc = 0x0013FC50u; return; } if (c.pc != 0x001FAE80u) [[unlikely]] return; }
L_001FAE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[1].w[0] + 31200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001FAE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAE90u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FAE90u) [[unlikely]] return; }
L_001FAE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FAED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8896u)));
    c.r[1].d[0] = c.r[2].sd[0] < 39ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FAED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEB4u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FAEB4u) [[unlikely]] return; }
L_001FAEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAEC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 313u, depth + 1u); else { c.pc = 0x001FF240u; return; } if (c.pc != 0x001FAEC4u) [[unlikely]] return; }
L_001FAEC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAED4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FAED4u) [[unlikely]] return; }
L_001FAED4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FAED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_001FAFBC; } }
L_001FAEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF04u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001FAF04u) [[unlikely]] return; }
L_001FAF04:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_001FAFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8644u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001FAFB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);  if (t) { goto L_001FAF54; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    c.budget -= 2;
L_001FAF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF5Cu); c.r[5].d[0] = c.r[2].d[0] | 21071ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001FAF5Cu) [[unlikely]] return; }
L_001FAF5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAF6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001FAF70; } }
L_001FAF6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FAF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAFB4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 378u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FAFA0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31592u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 31592u), c.r[2].w[0]);  if (t) { goto L_001FAFB4; } }
L_001FAFA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31592u)));
    set32(c.r[2], c.r[2].w[0] + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31592u), c.r[2].w[0]);
    c.budget -= 5;
L_001FAFB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001FAFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAEE0u | kUnwind; return; } goto L_001FAEE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31592u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001FAFE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31592u), 0u);
    c.budget -= 2;
L_001FAFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAFE8u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FAFE8u) [[unlikely]] return; }
L_001FAFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FB000:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 100u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 8650u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FB030; } }
    breakpoint(c, 0x001FB02Cu);
    c.budget -= 1;
L_001FB030:
    set32(c.r[2], 0u + 25500u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st16((c.r[1].w[0] + 8714u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 21888u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
L_001FB05C:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 256u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001FB084u) [[unlikely]] return; }
L_001FB084:
    set32(c.r[4], c.r[18].w[0] << 1);
    set32(c.r[3], 0u + 100u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_001FB0A0; } }
    breakpoint(c, 0x001FB09Cu);
    c.budget -= 1;
L_001FB0A0:
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { goto L_001FB0B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001FB0B0:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FB05Cu | kUnwind; return; } goto L_001FB05C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FB100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FB13C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FB13C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB13Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001FB13Cu) [[unlikely]] return; }
L_001FB13C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001FB150:
    set32(c.r[29], c.r[29].w[0] - 592u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_001FB1A4; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001FB1A4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001FB20C; } }
    set32(c.r[3], c.r[3].w[0] - 10000u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], 0u - 1u);  if (t) { goto L_001FB1D4; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FB1D0; } }
    breakpoint(c, 0x001FB1CCu);
    c.budget -= 1;
L_001FB1D0:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001FB1D4:
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 368u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB204u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001FB204u) [[unlikely]] return; }
L_001FB204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 482u)));  if (t) { goto L_001FB258; } }
L_001FB20C:
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FB21C; } }
    breakpoint(c, 0x001FB218u);
    c.budget -= 1;
L_001FB21C:
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 25680u);
    c.r[1].d[0] = 0ull | 43780ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], 0u + 368u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB254u); set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001FB254u) [[unlikely]] return; }
L_001FB254:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 482u)));
    c.budget -= 1;
L_001FB258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st32((c.r[29].w[0] + 204u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 588u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[1].w[0] + 28000u)));
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB298u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FB298u) [[unlikely]] return; }
L_001FB298:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001FB2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2ACu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0010(c, 59u, depth + 1u); else { c.pc = 0x00140BF0u; return; } if (c.pc != 0x001FB2ACu) [[unlikely]] return; }
L_001FB2AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2BCu); st32((c.r[1].w[0] + 28000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001FB2BCu) [[unlikely]] return; }
L_001FB2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  if (t) { goto L_001FB2D8; } }
L_001FB2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2CCu);  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001FB2CCu) [[unlikely]] return; }
L_001FB2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 305u, depth + 1u); else { c.pc = 0x001FF130u; return; } if (c.pc != 0x001FB2D4u) [[unlikely]] return; }
L_001FB2D4:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_001FB2D8:
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 52u);  if (t) { goto L_001FB308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB2ECu) [[unlikely]] return; }
L_001FB2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB308; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB304u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0075(c, 207u, depth + 1u); else { c.pc = 0x002D6BA0u; return; } if (c.pc != 0x001FB304u) [[unlikely]] return; }
L_001FB304:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB308:
    st32((c.r[29].w[0] + 176u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001FB320; } }
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 1;
L_001FB320:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], 0u + 6736u);  if (t) { goto L_001FB38C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB334u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FB334u) [[unlikely]] return; }
L_001FB334:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FB350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB348u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001FB348u) [[unlikely]] return; }
L_001FB348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB354; } }
L_001FB350:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FB388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB364u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001FB364u) [[unlikely]] return; }
L_001FB364:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FB380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB378u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 156u, depth + 1u); else { c.pc = 0x0015DCF0u; return; } if (c.pc != 0x001FB378u) [[unlikely]] return; }
L_001FB378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB388; } }
L_001FB380:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001FB388:
    set32(c.r[4], 0u + 6736u);
    c.budget -= 1;
L_001FB38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB394u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB394u) [[unlikely]] return; }
L_001FB394:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FB3CC; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    c.f[12] = c.f[20];
    c.r[5].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 30u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3C8u); c.r[11].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 118u, depth + 1u); else { c.pc = 0x001B9C40u; return; } if (c.pc != 0x001FB3C8u) [[unlikely]] return; }
L_001FB3C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB3CC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001FB3E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3E0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 23u, depth + 1u); else { c.pc = 0x001A4650u; return; } if (c.pc != 0x001FB3E0u) [[unlikely]] return; }
L_001FB3E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001FB3E4:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], 0u + 400u);
    c.r[5].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    st32((c.r[16].w[0] + 468u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 400u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 400u));
    st64((c.r[16].w[0] + 392u), c.r[2].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB420u); st8((c.r[16].w[0] + 371u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB420u) [[unlikely]] return; }
L_001FB420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB43C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB438u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0033(c, 82u, depth + 1u); else { c.pc = 0x001CD1D0u; return; } if (c.pc != 0x001FB438u) [[unlikely]] return; }
L_001FB438:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB444u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB444u) [[unlikely]] return; }
L_001FB444:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 176u);  if (t) { goto L_001FB4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB460u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CB20u; return; } if (c.pc != 0x001FB460u) [[unlikely]] return; }
L_001FB460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 17273u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB4BC; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB488u); c.r[6].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_004C(c, 137u, depth + 1u); else { c.pc = 0x002313A0u; return; } if (c.pc != 0x001FB488u) [[unlikely]] return; }
L_001FB488:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB494u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB494u) [[unlikely]] return; }
L_001FB494:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB4B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FB4ACu) [[unlikely]] return; }
L_001FB4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB4BC; } }
L_001FB4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FB4BCu) [[unlikely]] return; }
L_001FB4BC:
    set32(c.r[4], 0u + 176u);
    c.budget -= 1;
L_001FB4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4C8u); st32((c.r[16].w[0] + 464u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB4C8u) [[unlikely]] return; }
L_001FB4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 4u, depth + 1u); else { c.pc = 0x001C4020u; return; } if (c.pc != 0x001FB4D8u) [[unlikely]] return; }
L_001FB4D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4E4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB4E4u) [[unlikely]] return; }
L_001FB4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4ECu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB4ECu) [[unlikely]] return; }
L_001FB4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB504; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB500u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 90u, depth + 1u); else { c.pc = 0x001CD310u; return; } if (c.pc != 0x001FB500u) [[unlikely]] return; }
L_001FB500:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB50Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB50Cu) [[unlikely]] return; }
L_001FB50C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_001FB53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB51Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB51Cu) [[unlikely]] return; }
L_001FB51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB534; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB530u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 1u, depth + 1u); else { c.pc = 0x001CC000u; return; } if (c.pc != 0x001FB530u) [[unlikely]] return; }
L_001FB530:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB53Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB53Cu) [[unlikely]] return; }
L_001FB53C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB54Cu);  if (depth < kMaxDepth) unit_0038(c, 47u, depth + 1u); else { c.pc = 0x001E0850u; return; } if (c.pc != 0x001FB54Cu) [[unlikely]] return; }
L_001FB54C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB558u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB558u) [[unlikely]] return; }
L_001FB558:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB568u);  if (depth < kMaxDepth) unit_003C(c, 294u, depth + 1u); else { c.pc = 0x001F3950u; return; } if (c.pc != 0x001FB568u) [[unlikely]] return; }
L_001FB568:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB574u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB574u) [[unlikely]] return; }
L_001FB574:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001FB5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB584u); set32(c.r[4], 0u + 448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB584u) [[unlikely]] return; }
L_001FB584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB59C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB598u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 204u, depth + 1u); else { c.pc = 0x001C6F50u; return; } if (c.pc != 0x001FB598u) [[unlikely]] return; }
L_001FB598:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5A4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB5A4u) [[unlikely]] return; }
L_001FB5A4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB5A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_001FB5DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 2u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB5D8; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_001FB5D8:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_001FB5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB5E4u) [[unlikely]] return; }
L_001FB5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB5FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x001FB5F8u) [[unlikely]] return; }
L_001FB5F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB604u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB604u) [[unlikely]] return; }
L_001FB604:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_001FB84C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB614u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB614u) [[unlikely]] return; }
L_001FB614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB634; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB628; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x001FB630u) [[unlikely]] return; }
L_001FB630:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB63Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB63Cu) [[unlikely]] return; }
L_001FB63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB644u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB644u) [[unlikely]] return; }
L_001FB644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB664; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB658; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB660u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x001FB660u) [[unlikely]] return; }
L_001FB660:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB66Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB66Cu) [[unlikely]] return; }
L_001FB66C:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 10u));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], 0u + 3u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1664u);  if (t) { goto L_001FB6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB698u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB698u) [[unlikely]] return; }
L_001FB698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB6BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB6AC; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB6AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6B8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x001FB6B8u) [[unlikely]] return; }
L_001FB6B8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB6BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6C8u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB6C8u) [[unlikely]] return; }
L_001FB6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 44u);  if (t) { goto L_001FB70C; } }
L_001FB6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB6D8u) [[unlikely]] return; }
L_001FB6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB6FC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB6EC; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB6EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6F8u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x001FB6F8u) [[unlikely]] return; }
L_001FB6F8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB6FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB708u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB708u) [[unlikely]] return; }
L_001FB708:
    set32(c.r[4], 0u + 44u);
    c.budget -= 1;
L_001FB70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB714u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB714u) [[unlikely]] return; }
L_001FB714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB734; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB728; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB730u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x001FB730u) [[unlikely]] return; }
L_001FB730:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB73Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB73Cu) [[unlikely]] return; }
L_001FB73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB744u); set32(c.r[4], 0u + 416u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB744u) [[unlikely]] return; }
L_001FB744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB764; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB758; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB760u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 9u, depth + 1u); else { c.pc = 0x001B83D0u; return; } if (c.pc != 0x001FB760u) [[unlikely]] return; }
L_001FB760:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB76Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB76Cu) [[unlikely]] return; }
L_001FB76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB774u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB774u) [[unlikely]] return; }
L_001FB774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB78C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB788u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 29u, depth + 1u); else { c.pc = 0x001CC750u; return; } if (c.pc != 0x001FB788u) [[unlikely]] return; }
L_001FB788:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB794u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB794u) [[unlikely]] return; }
L_001FB794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB79Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB79Cu) [[unlikely]] return; }
L_001FB79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB7B4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 339u, depth + 1u); else { c.pc = 0x001CBAD0u; return; } if (c.pc != 0x001FB7B0u) [[unlikely]] return; }
L_001FB7B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7BCu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB7BCu) [[unlikely]] return; }
L_001FB7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7C4u); set32(c.r[4], 0u + 12976u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB7C4u) [[unlikely]] return; }
L_001FB7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB7DC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 34u, depth + 1u); else { c.pc = 0x001C0500u; return; } if (c.pc != 0x001FB7D8u) [[unlikely]] return; }
L_001FB7D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7E4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB7E4u) [[unlikely]] return; }
L_001FB7E4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7F4u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB7F4u) [[unlikely]] return; }
L_001FB7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB810; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB80Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 163u, depth + 1u); else { c.pc = 0x001C3D40u; return; } if (c.pc != 0x001FB80Cu) [[unlikely]] return; }
L_001FB80C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB818u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB818u) [[unlikely]] return; }
L_001FB818:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001FB81C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);  if (t) { goto L_001FB828; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001FB828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB830u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001FB830u) [[unlikely]] return; }
L_001FB830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001FB844; } }
L_001FB840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001FB874; } }
L_001FB84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB854u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB854u) [[unlikely]] return; }
L_001FB854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB86C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB868u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 339u, depth + 1u); else { c.pc = 0x001CBAD0u; return; } if (c.pc != 0x001FB868u) [[unlikely]] return; }
L_001FB868:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB874u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB874u) [[unlikely]] return; }
L_001FB874:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 112u);  if (t) { goto L_001FB8BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB884u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB884u) [[unlikely]] return; }
L_001FB884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB8B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB898; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001FB898:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);
    set32(c.r[7], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8B0u); c.r[8].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_0037(c, 132u, depth + 1u); else { c.pc = 0x001DEA70u; return; } if (c.pc != 0x001FB8B0u) [[unlikely]] return; }
L_001FB8B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8BCu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB8BCu) [[unlikely]] return; }
L_001FB8BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FB8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8CCu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DB740u; return; } if (c.pc != 0x001FB8CCu) [[unlikely]] return; }
L_001FB8CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8D8u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB8D8u) [[unlikely]] return; }
L_001FB8D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 1120u);  if (t) { goto L_001FB928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB8E8u) [[unlikely]] return; }
L_001FB8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB904; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB900u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x001FB900u) [[unlikely]] return; }
L_001FB900:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB90Cu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB90Cu) [[unlikely]] return; }
L_001FB90C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], 0u + 448u);  if (t) { goto L_001FB9AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB920u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001FB920u) [[unlikely]] return; }
L_001FB920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB9A8; } }
L_001FB928:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 496u);  if (t) { goto L_001FB980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB940u); set32(c.r[4], 0u + 1120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB940u) [[unlikely]] return; }
L_001FB940:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_001FB964; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB95Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 134u, depth + 1u); else { c.pc = 0x00334BC0u; return; } if (c.pc != 0x001FB95Cu) [[unlikely]] return; }
L_001FB95C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 2;
L_001FB964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB96Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB96Cu) [[unlikely]] return; }
L_001FB96C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB978u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 233u, depth + 1u); else { c.pc = 0x002D6F20u; return; } if (c.pc != 0x001FB978u) [[unlikely]] return; }
L_001FB978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB9A8; } }
L_001FB980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB988u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB988u) [[unlikely]] return; }
L_001FB988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB9A0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB99Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 134u, depth + 1u); else { c.pc = 0x001C5980u; return; } if (c.pc != 0x001FB99Cu) [[unlikely]] return; }
L_001FB99C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9A8u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB9A8u) [[unlikely]] return; }
L_001FB9A8:
    set32(c.r[4], 0u + 448u);
    c.budget -= 1;
L_001FB9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB9B4u) [[unlikely]] return; }
L_001FB9B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB9CC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 114u, depth + 1u); else { c.pc = 0x001C51F0u; return; } if (c.pc != 0x001FB9C8u) [[unlikely]] return; }
L_001FB9C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9D4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FB9D4u) [[unlikely]] return; }
L_001FB9D4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FBA04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FB9E4u) [[unlikely]] return; }
L_001FB9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB9FC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 65u, depth + 1u); else { c.pc = 0x001C1320u; return; } if (c.pc != 0x001FB9F8u) [[unlikely]] return; }
L_001FB9F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001FB9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA04u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBA04u) [[unlikely]] return; }
L_001FBA04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FBA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA14u);  if (depth < kMaxDepth) unit_0037(c, 1u, depth + 1u); else { c.pc = 0x001DC000u; return; } if (c.pc != 0x001FBA14u) [[unlikely]] return; }
L_001FBA14:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FBA44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA24u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FBA24u) [[unlikely]] return; }
L_001FBA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 66u, depth + 1u); else { c.pc = 0x001D8990u; return; } if (c.pc != 0x001FBA34u) [[unlikely]] return; }
L_001FBA34:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA40u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBA40u) [[unlikely]] return; }
L_001FBA40:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_001FBA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FBA4Cu) [[unlikely]] return; }
L_001FBA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBA5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 174u, depth + 1u); else { c.pc = 0x001D6F70u; return; } if (c.pc != 0x001FBA5Cu) [[unlikely]] return; }
L_001FBA5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBA68u) [[unlikely]] return; }
L_001FBA68:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FBA94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA78u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FBA78u) [[unlikely]] return; }
L_001FBA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 34u, depth + 1u); else { c.pc = 0x001D84E0u; return; } if (c.pc != 0x001FBA88u) [[unlikely]] return; }
L_001FBA88:
    set32(c.r[4], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBA94u) [[unlikely]] return; }
L_001FBA94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_001FBAC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001FBAA4u) [[unlikely]] return; }
L_001FBAA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FBAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 93u, depth + 1u); else { c.pc = 0x001D5E90u; return; } if (c.pc != 0x001FBAB4u) [[unlikely]] return; }
L_001FBAB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBAC0u) [[unlikely]] return; }
L_001FBAC0:
    st32((c.r[16].w[0] + 984u), c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001FBADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBADCu); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001FBADCu) [[unlikely]] return; }
L_001FBADC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    st32((c.r[16].w[0] + 624u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 12u)));
    st32((c.r[16].w[0] + 688u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 13u)));
    st32((c.r[16].w[0] + 684u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 692u), 0u);
    c.r[2].d[0] = ld8((c.r[21].w[0]));
    st8((c.r[16].w[0] + 898u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FBB40; } }
    set32(c.r[3], c.r[3].w[0] - 10000u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], 0u - 1u);  if (t) { goto L_001FBB30; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);  if (t) { goto L_001FBB2C; } }
    breakpoint(c, 0x001FBB28u);
    c.budget -= 1;
L_001FBB2C:
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 1;
L_001FBB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB38u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 253u, depth + 1u); else { c.pc = 0x002221D0u; return; } if (c.pc != 0x001FBB38u) [[unlikely]] return; }
L_001FBB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 588u)));  if (t) { goto L_001FBB4C; } }
L_001FBB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB48u);  if (depth < kMaxDepth) unit_0048(c, 269u, depth + 1u); else { c.pc = 0x00222370u; return; } if (c.pc != 0x001FBB48u) [[unlikely]] return; }
L_001FBB48:
    set32(c.r[4], ld32((c.r[29].w[0] + 588u)));
    c.budget -= 1;
L_001FBB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB54u);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001FBB54u) [[unlikely]] return; }
L_001FBB54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_001FBB90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[1].w[0] + 31088u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBBBCu); c.r[5].d[0] = c.r[2].d[0] | 20300ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001FBBBCu) [[unlikely]] return; }
L_001FBBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001FBBC8; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001FBBC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], 0u + 14000u);  if (t) { goto L_001FBBE0; } }
    set32(c.r[17], 0u + 15000u);
    c.budget -= 1;
L_001FBBE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FBC50; } }
L_001FBBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBBF0u);  if (depth < kMaxDepth) unit_003D(c, 81u, depth + 1u); else { c.pc = 0x001F53D0u; return; } if (c.pc != 0x001FBBF0u) [[unlikely]] return; }
L_001FBBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[1].w[0] + 28304u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC20u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 42u, depth + 1u); else { c.pc = 0x00168960u; return; } if (c.pc != 0x001FBC20u) [[unlikely]] return; }
L_001FBC20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FBC30; } }
    set32(c.r[19], c.r[17].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001FBC30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC40u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 356u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x001FBC40u) [[unlikely]] return; }
L_001FBC40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBBE8u | kUnwind; return; } goto L_001FBBE8; } }
L_001FBC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FBC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 8649u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], 0u - 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 912u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], c.r[17].w[0] + 208u);
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st32((c.r[4].w[0] + 624u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 400u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 688u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 684u), 0u);
    st8((c.r[4].w[0] + 370u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st128((c.r[9].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[17].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBCFCu); st16((c.r[17].w[0] + 596u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FBCFCu) [[unlikely]] return; }
L_001FBCFC:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FBD4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD10u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001FBD10u) [[unlikely]] return; }
L_001FBD10:
    st32((c.r[17].w[0] + 224u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 228u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43910000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 65u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 394u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 596u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001FBDD4; } }
L_001FBD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD54u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FBD54u) [[unlikely]] return; }
L_001FBD54:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FBD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 27u, depth + 1u); else { c.pc = 0x001E4510u; return; } if (c.pc != 0x001FBD68u) [[unlikely]] return; }
L_001FBD68:
    st32((c.r[17].w[0] + 224u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    st32((c.r[17].w[0] + 228u), 0u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001FBDD4; } }
L_001FBD84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD90u); st32((c.r[17].w[0] + 684u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126B58u; return; } if (c.pc != 0x001FBD90u) [[unlikely]] return; }
L_001FBD90:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD9Cu); set32(c.r[16], c.r[2].w[0] + 210u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001FBD9Cu) [[unlikely]] return; }
L_001FBD9C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001FBDB0; } }
    set32(c.r[16], 0u + 54u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001FBDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001FBDB8u) [[unlikely]] return; }
L_001FBDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDC0u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_003F(c, 36u, depth + 1u); else { c.pc = 0x001FCAE0u; return; } if (c.pc != 0x001FBDC0u) [[unlikely]] return; }
L_001FBDC0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDCCu); st8((c.r[17].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 82u, depth + 1u); else { c.pc = 0x001F53E0u; return; } if (c.pc != 0x001FBDCCu) [[unlikely]] return; }
L_001FBDCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31600u), c.r[2].w[0]);
    c.budget -= 2;
L_001FBDD4:
    set32(c.r[3], 0u + 55u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 589u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 587u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    ld128((c.r[17].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 876u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBE00u); st32((c.r[17].w[0] + 980u), 0u);  if (depth < kMaxDepth) unit_003E(c, 5u, depth + 1u); else { c.pc = 0x001F8170u; return; } if (c.pc != 0x001FBE00u) [[unlikely]] return; }
L_001FBE00:
    set32(c.r[2], ld32((c.r[17].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001FBE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001FBE48; } }
L_001FBE14:
    set32(c.r[3], ld32((c.r[17].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 624u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 624u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FBE50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 980u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBE40u); st32((c.r[17].w[0] + 980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001FBE40u) [[unlikely]] return; }
L_001FBE40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_001FBE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBE14u | kUnwind; return; } goto L_001FBE14; } }
L_001FBE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBE58u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001FBE58u) [[unlikely]] return; }
L_001FBE58:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { [[clang::musttail]] return unit_003F(c, 8u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43500000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31416u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[2].d[0] | 21071ull;
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBE8Cu); set32(c.r[4], c.r[2].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001FBE8Cu) [[unlikely]] return; }
L_001FBE8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FBE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001FBEA0; } }
L_001FBE9C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FBEA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001FBEB4; } }
    set32(c.r[2], 0u + 1800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 31280u), c.r[2].w[0]);
    c.budget -= 3;
L_001FBEB4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8384u);
    set32(c.r[7], c.r[7].w[0] + 8964u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 8650u);  if (t) { goto L_001FBF04; } }
L_001FBED4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31416u)));
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001FBF00; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001FBF00:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001FBF04:
    c.r[2].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[8].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FBED4u | kUnwind; return; } goto L_001FBED4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { [[clang::musttail]] return unit_003F(c, 5u, depth); } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[4].d[0]; c.r[18].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_001FBF40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF30u);  if (depth < kMaxDepth) unit_003F(c, 349u, depth + 1u); else { c.pc = 0x001FF780u; return; } if (c.pc != 0x001FBF30u) [[unlikely]] return; }
L_001FBF30:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001FBF40; } }
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001FBF40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FBF64u) [[unlikely]] return; }
L_001FBF64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31416u)));
    set32(c.r[4], c.r[4].w[0] + 28320u);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 468u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003F(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 3u, depth); } }
L_001FBF98:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_003F(c, 2u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBFC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 110u, depth + 1u); else { c.pc = 0x001B9B30u; return; } if (c.pc != 0x001FBFC0u) [[unlikely]] return; }
L_001FBFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 31416u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8640u);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[7].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + 8648u);
    set32(c.r[9], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8384u);
    set32(c.r[4], c.r[8].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 16;
    [[clang::musttail]] return unit_003F(c, 1u, depth);
}

}
