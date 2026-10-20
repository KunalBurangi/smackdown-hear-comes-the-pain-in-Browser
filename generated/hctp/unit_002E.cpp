#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002E[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0,
    273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B8000;
    case 2u: goto L_001B8008;
    case 3u: goto L_001B8140;
    case 4u: goto L_001B8174;
    case 5u: goto L_001B8198;
    case 6u: goto L_001B81E8;
    case 7u: goto L_001B824C;
    case 8u: goto L_001B8300;
    case 9u: goto L_001B83D0;
    case 10u: goto L_001B83F8;
    case 11u: goto L_001B8404;
    case 12u: goto L_001B842C;
    case 13u: goto L_001B8454;
    case 14u: goto L_001B847C;
    case 15u: goto L_001B84AC;
    case 16u: goto L_001B851C;
    case 17u: goto L_001B852C;
    case 18u: goto L_001B8538;
    case 19u: goto L_001B8548;
    case 20u: goto L_001B8570;
    case 21u: goto L_001B85A0;
    case 22u: goto L_001B85C8;
    case 23u: goto L_001B85F8;
    case 24u: goto L_001B8620;
    case 25u: goto L_001B8650;
    case 26u: goto L_001B8678;
    case 27u: goto L_001B86A8;
    case 28u: goto L_001B86D0;
    case 29u: goto L_001B86F8;
    case 30u: goto L_001B8720;
    case 31u: goto L_001B8760;
    case 32u: goto L_001B879C;
    case 33u: goto L_001B87A8;
    case 34u: goto L_001B87B4;
    case 35u: goto L_001B87CC;
    case 36u: goto L_001B87F0;
    case 37u: goto L_001B8804;
    case 38u: goto L_001B8860;
    case 39u: goto L_001B888C;
    case 40u: goto L_001B88BC;
    case 41u: goto L_001B88C4;
    case 42u: goto L_001B88D0;
    case 43u: goto L_001B8938;
    case 44u: goto L_001B899C;
    case 45u: goto L_001B89AC;
    case 46u: goto L_001B89B4;
    case 47u: goto L_001B8AB0;
    case 48u: goto L_001B8AF0;
    case 49u: goto L_001B8B28;
    case 50u: goto L_001B8B60;
    case 51u: goto L_001B8BB0;
    case 52u: goto L_001B8C08;
    case 53u: goto L_001B8C5C;
    case 54u: goto L_001B8C80;
    case 55u: goto L_001B8CCC;
    case 56u: goto L_001B8D50;
    case 57u: goto L_001B8D88;
    case 58u: goto L_001B8DA4;
    case 59u: goto L_001B8DCC;
    case 60u: goto L_001B8E10;
    case 61u: goto L_001B8E30;
    case 62u: goto L_001B8E70;
    case 63u: goto L_001B8E9C;
    case 64u: goto L_001B8ECC;
    case 65u: goto L_001B8F20;
    case 66u: goto L_001B8FC8;
    case 67u: goto L_001B8FEC;
    case 68u: goto L_001B9074;
    case 69u: goto L_001B90FC;
    case 70u: goto L_001B916C;
    case 71u: goto L_001B9198;
    case 72u: goto L_001B91B8;
    case 73u: goto L_001B9204;
    case 74u: goto L_001B9220;
    case 75u: goto L_001B92A0;
    case 76u: goto L_001B9330;
    case 77u: goto L_001B9350;
    case 78u: goto L_001B95D8;
    case 79u: goto L_001B9608;
    case 80u: goto L_001B9650;
    case 81u: goto L_001B968C;
    case 82u: goto L_001B96CC;
    case 83u: goto L_001B9738;
    case 84u: goto L_001B97A0;
    case 85u: goto L_001B97CC;
    case 86u: goto L_001B9850;
    case 87u: goto L_001B9860;
    case 88u: goto L_001B9890;
    case 89u: goto L_001B98A8;
    case 90u: goto L_001B98C0;
    case 91u: goto L_001B98F0;
    case 92u: goto L_001B9908;
    case 93u: goto L_001B9920;
    case 94u: goto L_001B9950;
    case 95u: goto L_001B9968;
    case 96u: goto L_001B9980;
    case 97u: goto L_001B9990;
    case 98u: goto L_001B99A0;
    case 99u: goto L_001B99B4;
    case 100u: goto L_001B99C4;
    case 101u: goto L_001B99DC;
    case 102u: goto L_001B99F8;
    case 103u: goto L_001B9A10;
    case 104u: goto L_001B9A30;
    case 105u: goto L_001B9A6C;
    case 106u: goto L_001B9AA0;
    case 107u: goto L_001B9AB0;
    case 108u: goto L_001B9AEC;
    case 109u: goto L_001B9B20;
    case 110u: goto L_001B9B30;
    case 111u: goto L_001B9B50;
    case 112u: goto L_001B9B80;
    case 113u: goto L_001B9B98;
    case 114u: goto L_001B9BD0;
    case 115u: goto L_001B9BF0;
    case 116u: goto L_001B9BFC;
    case 117u: goto L_001B9C30;
    case 118u: goto L_001B9C40;
    case 119u: goto L_001B9C98;
    case 120u: goto L_001B9CA4;
    case 121u: goto L_001B9CB0;
    case 122u: goto L_001B9CC4;
    case 123u: goto L_001B9D08;
    case 124u: goto L_001B9D18;
    case 125u: goto L_001B9D30;
    case 126u: goto L_001B9D64;
    case 127u: goto L_001B9D8C;
    case 128u: goto L_001B9DA8;
    case 129u: goto L_001B9DC0;
    case 130u: goto L_001B9DF4;
    case 131u: goto L_001B9E00;
    case 132u: goto L_001B9E18;
    case 133u: goto L_001B9EB0;
    case 134u: goto L_001B9EB8;
    case 135u: goto L_001B9EC0;
    case 136u: goto L_001B9F04;
    case 137u: goto L_001B9F0C;
    case 138u: goto L_001B9F18;
    case 139u: goto L_001B9F3C;
    case 140u: goto L_001B9F48;
    case 141u: goto L_001B9F90;
    case 142u: goto L_001B9FA0;
    case 143u: goto L_001BA02C;
    case 144u: goto L_001BA034;
    case 145u: goto L_001BA044;
    case 146u: goto L_001BA054;
    case 147u: goto L_001BA05C;
    case 148u: goto L_001BA068;
    case 149u: goto L_001BA07C;
    case 150u: goto L_001BA098;
    case 151u: goto L_001BA0A4;
    case 152u: goto L_001BA0CC;
    case 153u: goto L_001BA0E8;
    case 154u: goto L_001BA0FC;
    case 155u: goto L_001BA118;
    case 156u: goto L_001BA12C;
    case 157u: goto L_001BA138;
    case 158u: goto L_001BA144;
    case 159u: goto L_001BA150;
    case 160u: goto L_001BA15C;
    case 161u: goto L_001BA174;
    case 162u: goto L_001BA17C;
    case 163u: goto L_001BA190;
    case 164u: goto L_001BA224;
    case 165u: goto L_001BA238;
    case 166u: goto L_001BA250;
    case 167u: goto L_001BA270;
    case 168u: goto L_001BA27C;
    case 169u: goto L_001BA2B4;
    case 170u: goto L_001BA2D8;
    case 171u: goto L_001BA2E4;
    case 172u: goto L_001BA2F0;
    case 173u: goto L_001BA2FC;
    case 174u: goto L_001BA314;
    case 175u: goto L_001BA320;
    case 176u: goto L_001BA328;
    case 177u: goto L_001BA330;
    case 178u: goto L_001BA33C;
    case 179u: goto L_001BA350;
    case 180u: goto L_001BA370;
    case 181u: goto L_001BA37C;
    case 182u: goto L_001BA390;
    case 183u: goto L_001BA3A4;
    case 184u: goto L_001BA3B8;
    case 185u: goto L_001BA3C4;
    case 186u: goto L_001BA3D8;
    case 187u: goto L_001BA3F4;
    case 188u: goto L_001BA400;
    case 189u: goto L_001BA40C;
    case 190u: goto L_001BA41C;
    case 191u: goto L_001BA430;
    case 192u: goto L_001BA44C;
    case 193u: goto L_001BA4A4;
    case 194u: goto L_001BA4AC;
    case 195u: goto L_001BA4B8;
    case 196u: goto L_001BA4DC;
    case 197u: goto L_001BA4E8;
    case 198u: goto L_001BA530;
    case 199u: goto L_001BA540;
    case 200u: goto L_001BA5CC;
    case 201u: goto L_001BA5D8;
    case 202u: goto L_001BA5EC;
    case 203u: goto L_001BA608;
    case 204u: goto L_001BA61C;
    case 205u: goto L_001BA63C;
    case 206u: goto L_001BA648;
    case 207u: goto L_001BA660;
    case 208u: goto L_001BA67C;
    case 209u: goto L_001BA698;
    case 210u: goto L_001BA6A0;
    case 211u: goto L_001BA6D0;
    case 212u: goto L_001BA700;
    case 213u: goto L_001BA750;
    case 214u: goto L_001BA75C;
    case 215u: goto L_001BA770;
    case 216u: goto L_001BA78C;
    case 217u: goto L_001BA7A0;
    case 218u: goto L_001BA7C0;
    case 219u: goto L_001BA7CC;
    case 220u: goto L_001BA7E4;
    case 221u: goto L_001BA800;
    case 222u: goto L_001BA81C;
    case 223u: goto L_001BA830;
    case 224u: goto L_001BA860;
    case 225u: goto L_001BA8C0;
    case 226u: goto L_001BA8F0;
    case 227u: goto L_001BA918;
    case 228u: goto L_001BA92C;
    case 229u: goto L_001BA990;
    case 230u: goto L_001BA9A0;
    case 231u: goto L_001BA9AC;
    case 232u: goto L_001BA9BC;
    case 233u: goto L_001BA9D0;
    case 234u: goto L_001BAA04;
    case 235u: goto L_001BAA14;
    case 236u: goto L_001BAA2C;
    case 237u: goto L_001BAAAC;
    case 238u: goto L_001BAAF0;
    case 239u: goto L_001BAB14;
    case 240u: goto L_001BAB20;
    case 241u: goto L_001BAB2C;
    case 242u: goto L_001BAB40;
    case 243u: goto L_001BAB98;
    case 244u: goto L_001BABC4;
    case 245u: goto L_001BABCC;
    case 246u: goto L_001BABE4;
    case 247u: goto L_001BAC14;
    case 248u: goto L_001BAC24;
    case 249u: goto L_001BAC30;
    case 250u: goto L_001BAC40;
    case 251u: goto L_001BAC54;
    case 252u: goto L_001BAC64;
    case 253u: goto L_001BACD0;
    case 254u: goto L_001BACE4;
    case 255u: goto L_001BACF0;
    case 256u: goto L_001BAD6C;
    case 257u: goto L_001BAD88;
    case 258u: goto L_001BADC0;
    case 259u: goto L_001BADDC;
    case 260u: goto L_001BADF8;
    case 261u: goto L_001BAE14;
    case 262u: goto L_001BAE38;
    case 263u: goto L_001BAE68;
    case 264u: goto L_001BAE84;
    case 265u: goto L_001BAEA4;
    case 266u: goto L_001BAEC0;
    case 267u: goto L_001BAEF4;
    case 268u: goto L_001BAF28;
    case 269u: goto L_001BAF4C;
    case 270u: goto L_001BAF54;
    case 271u: goto L_001BAF68;
    case 272u: goto L_001BAF74;
    case 273u: goto L_001BAF80;
    case 274u: goto L_001BAF8C;
    case 275u: goto L_001BAF98;
    case 276u: goto L_001BAFB0;
    case 277u: goto L_001BAFD0;
    case 278u: goto L_001BAFF0;
    case 279u: goto L_001BAFF4;
    case 280u: goto L_001BB01C;
    case 281u: goto L_001BB030;
    case 282u: goto L_001BB06C;
    case 283u: goto L_001BB0CC;
    case 284u: goto L_001BB0E8;
    case 285u: goto L_001BB178;
    case 286u: goto L_001BB1D0;
    case 287u: goto L_001BB200;
    case 288u: goto L_001BB2E0;
    case 289u: goto L_001BB3CC;
    case 290u: goto L_001BB650;
    case 291u: goto L_001BB66C;
    case 292u: goto L_001BB730;
    case 293u: goto L_001BB768;
    case 294u: goto L_001BB774;
    case 295u: goto L_001BB7C8;
    case 296u: goto L_001BB84C;
    case 297u: goto L_001BB8FC;
    case 298u: goto L_001BBAA0;
    case 299u: goto L_001BBAB4;
    case 300u: goto L_001BBB40;
    case 301u: goto L_001BBB54;
    case 302u: goto L_001BBBE0;
    case 303u: goto L_001BBCF4;
    case 304u: goto L_001BBDBC;
    case 305u: goto L_001BBE90;
    default: bad_entry(c, 0x001B8000u); return;
    }
L_001B8000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001B812C; } }
L_001B8008:
    set32(c.r[6], c.r[11].w[0] << 6);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[9], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[10].w[0] << 6);
    set32(c.r[12], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[13], c.r[12].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[13].w[0]) & ~15u, c.r[6]);
    st128((c.r[13].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[13].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 15;
    { const bool t = c.r[10].d[0] == 0ull; st128((c.r[13].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B80F0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[10].w[0] << 6);  if (t) { goto L_001B805C; } }
    set32(c.r[6], c.r[11].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    ld128((c.r[6].w[0] + 1792u) & ~15u, c.r[6]);
    st128((c.r[12].w[0] + 48u) & ~15u, c.r[6]);
    c.budget -= 4;
L_001B805C:
    set32(c.r[6], c.r[10].w[0] << 6);
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[8], c.r[7].w[0]);
    set32(c.r[7], c.r[6].w[0]);
    set32(c.r[6], c.r[10].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 37;
L_001B80F0:
    set32(c.r[6], c.r[10].w[0] << 6);
    set32(c.r[7], c.r[11].w[0] << 6);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[7].w[0] + 896u);
    set32(c.r[9], c.r[6].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 15;
L_001B812C:
    c.r[6].d[0] = c.r[11].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] + c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8008u | kUnwind; return; } goto L_001B8008; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 896u);  c.pc = t; return; }
L_001B8140:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[6].w[0] + 10560u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 13;
L_001B8174:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8174u | kUnwind; return; } goto L_001B8174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B83A0; } }
L_001B8198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001B81D0; } }
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B839C; } }
L_001B81D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10544u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B81E8u); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B81E8u) [[unlikely]] return; }
L_001B81E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[10], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_001B8238; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
L_001B8238:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_001B82EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B824Cu); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B824Cu) [[unlikely]] return; }
L_001B824C:
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[16].w[0] << 6);
    set32(c.r[6], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
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
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], 0u + 8u);
    c.budget -= 40;
L_001B82EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001B839C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8300u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8300u) [[unlikely]] return; }
L_001B8300:
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[16].w[0] << 6);
    set32(c.r[6], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
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
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 39;
L_001B839C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B83A0:
    c.r[3].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8198u | kUnwind; return; } goto L_001B8198; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001B83D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x494B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B83F8u); c.r[5].d[0] = c.r[2].d[0] | 21573ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B83F8u) [[unlikely]] return; }
L_001B83F8:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001B8404u) [[unlikely]] return; }
L_001B8404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9920u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B842Cu); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B842Cu) [[unlikely]] return; }
L_001B842C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B843C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B8440; } }
L_001B843C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B8440:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434D0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8454u); c.r[5].d[0] = c.r[2].d[0] | 19780ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B8454u) [[unlikely]] return; }
L_001B8454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B8464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B8468; } }
L_001B8464:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B8468:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D6F0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B847Cu); c.r[5].d[0] = c.r[2].d[0] | 18543ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B847Cu) [[unlikely]] return; }
L_001B847C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B848C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B8490; } }
L_001B848C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B8490:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 10000u);
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B8500; } }
L_001B84AC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 64u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    st32((c.r[5].w[0] + 136u), 0u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    st32((c.r[4].w[0] + 156u), 0u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 352u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[6].w[0] << 4);
    st32((c.r[4].w[0] + 364u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 76u), c.f[0]);
    st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_001B8500:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B84ACu | kUnwind; return; } goto L_001B84AC; } }
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[4], 0u + 2032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B851Cu); st32((c.r[17].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B851Cu) [[unlikely]] return; }
L_001B851C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B852C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B852Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 253u, depth + 1u); else { c.pc = 0x001B7F00u; return; } if (c.pc != 0x001B852Cu) [[unlikely]] return; }
L_001B852C:
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 80u, depth + 1u); else { c.pc = 0x001B9650u; return; } if (c.pc != 0x001B8538u) [[unlikely]] return; }
L_001B8538:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8548u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8548u) [[unlikely]] return; }
L_001B8548:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 312u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8570u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8570u) [[unlikely]] return; }
L_001B8570:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[0] = ld32((c.r[17].w[0] + 312u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 312u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85A0u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B85A0u) [[unlikely]] return; }
L_001B85A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 328u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85C8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B85C8u) [[unlikely]] return; }
L_001B85C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[0] = ld32((c.r[17].w[0] + 328u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 328u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B85F8u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B85F8u) [[unlikely]] return; }
L_001B85F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 316u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8620u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8620u) [[unlikely]] return; }
L_001B8620:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 316u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8650u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8650u) [[unlikely]] return; }
L_001B8650:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 332u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8678u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8678u) [[unlikely]] return; }
L_001B8678:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86A8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B86A8u) [[unlikely]] return; }
L_001B86A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 320u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86D0u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B86D0u) [[unlikely]] return; }
L_001B86D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 336u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B86F8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B86F8u) [[unlikely]] return; }
L_001B86F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[17].w[0] + 324u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8720u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8720u) [[unlikely]] return; }
L_001B8720:
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 340u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B8760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B87CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9920u);
    set32(c.r[2], c.r[2].w[0] - 9904u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B879Cu); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B879Cu) [[unlikely]] return; }
L_001B879C:
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001B87A8u) [[unlikely]] return; }
L_001B87A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B87B4u) [[unlikely]] return; }
L_001B87B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B87D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B87CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B87CCu) [[unlikely]] return; }
L_001B87CC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B87D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B87F0:
    set32(c.r[3], 0u + 10000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B8848; } }
L_001B8804:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 64u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    st32((c.r[5].w[0] + 156u), 0u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 352u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    st32((c.r[5].w[0] + 364u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 76u), c.f[0]);
    c.budget -= 17;
L_001B8848:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] << 4);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8804u | kUnwind; return; } goto L_001B8804; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B8860:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 11;
L_001B888C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 12288u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B888Cu | kUnwind; return; } goto L_001B888C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B88BCu); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_002E(c, 3u, depth + 1u); else { c.pc = 0x001B8140u; return; } if (c.pc != 0x001B88BCu) [[unlikely]] return; }
L_001B88BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B88C4u); set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  if (depth < kMaxDepth) unit_002D(c, 256u, depth + 1u); else { c.pc = 0x001B7FF0u; return; } if (c.pc != 0x001B88C4u) [[unlikely]] return; }
L_001B88C4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B8A90; } }
L_001B88D0:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B8920; } }
    set32(c.r[2], 0u + 10000u);
    set32(c.r[3], c.r[18].w[0] << 4);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 76u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { goto L_001B8924; } }
    st32((c.r[4].w[0] + 156u), c.r[5].w[0]);
    set32(c.r[16], 0u + 1u);
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[3].w[0] + 352u) & ~15u, c.r[2]);
    c.budget -= 5;
L_001B8920:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_001B8924:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8938u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 252u, depth + 1u); else { c.pc = 0x001B7C20u; return; } if (c.pc != 0x001B8938u) [[unlikely]] return; }
L_001B8938:
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 26672u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[6]);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st128((c.r[3].w[0]) & ~15u, c.r[4]);  if (t) { goto L_001B89EC; } }
    set32(c.r[4], c.r[5].w[0] + 352u);
    set32(c.r[3], c.r[5].w[0] + 64u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001B89C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B899Cu);  if (depth < kMaxDepth) unit_0025(c, 408u, depth + 1u); else { c.pc = 0x00197D00u; return; } if (c.pc != 0x001B899Cu) [[unlikely]] return; }
L_001B899C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B89C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B89ACu);  if (depth < kMaxDepth) unit_0025(c, 408u, depth + 1u); else { c.pc = 0x00197D00u; return; } if (c.pc != 0x001B89ACu) [[unlikely]] return; }
L_001B89AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B89B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 316u, depth + 1u); else { c.pc = 0x00167380u; return; } if (c.pc != 0x001B89B4u) [[unlikely]] return; }
L_001B89B4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001B89C8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B89C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] << 4);  if (t) { goto L_001B89E4; } }
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 364u), c.r[4].w[0]);  if (t) { goto L_001B89EC; } }
L_001B89E4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 364u), 0u);
    c.budget -= 2;
L_001B89EC:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001B8A8C; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    set32(c.r[2], c.r[18].w[0] << 4);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 464u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    c.f[0] = ld32((c.r[1].w[0] + 18528u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 35;
L_001B8A8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B8A90:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B88D0u | kUnwind; return; } goto L_001B88D0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001B8AA8; } }
    st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001B8AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001B931C; } }
L_001B8AB0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 31520u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_001B8AD0; } }
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9314; } }
L_001B8AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8AF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8AF0u) [[unlikely]] return; }
L_001B8AF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10676u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8B28u) [[unlikely]] return; }
L_001B8B28:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[29].w[0] + 420u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8B60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8B60u) [[unlikely]] return; }
L_001B8B60:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 48u);
    st32((c.r[29].w[0] + 424u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[3].w[0] + 328u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[22] = ld32((c.r[3].w[0] + 312u));  if (t) { goto L_001B8BE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8BB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8BB0u) [[unlikely]] return; }
L_001B8BB0:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[8]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.r[9]);  if (t) { goto L_001B8C74; } }
L_001B8BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10684u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8C08u) [[unlikely]] return; }
L_001B8C08:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 352u);
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8C5Cu) [[unlikely]] return; }
L_001B8C5C:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    c.budget -= 6;
L_001B8C74:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8C80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 352u, depth + 1u); else { c.pc = 0x001039B8u; return; } if (c.pc != 0x001B8C80u) [[unlikely]] return; }
L_001B8C80:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[29].w[0] + 336u);
    ld128((c.r[2].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[12]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8CCCu); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0011(c, 17u, depth + 1u); else { c.pc = 0x00144430u; return; } if (c.pc != 0x001B8CCCu) [[unlikely]] return; }
L_001B8CCC:
    c.f[20] = c.f[0];
    c.f[0] = fp::add(c.f[22], c.f[21]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001B8CEC; } }
    c.f[23] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001B8D68; } }
L_001B8CEC:
    c.f[1] = fp::sub(c.f[22], c.f[21]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B8D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B8D10; } }
L_001B8D0C:
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 1;
L_001B8D10:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_001B8D20; } }
    c.f[21] = c.f[22];
    c.budget -= 1;
L_001B8D20:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[22], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[20]));
    fpu_div(c, 23u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D50u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0006(c, 217u, depth + 1u); else { c.pc = 0x0011A5A8u; return; } if (c.pc != 0x001B8D50u) [[unlikely]] return; }
L_001B8D50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.f[1] = ld32((c.r[1].w[0] + 18600u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[23] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_001B8D68; } }
    c.f[23] = c.f[23] ^ fp::kSign;
    c.budget -= 1;
L_001B8D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10676u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8D88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8D88u) [[unlikely]] return; }
L_001B8D88:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = c.f[23];
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DA4u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B8DA4u) [[unlikely]] return; }
L_001B8DA4:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[18].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[13] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8DCCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0006(c, 219u, depth + 1u); else { c.pc = 0x0011A5D8u; return; } if (c.pc != 0x001B8DCCu) [[unlikely]] return; }
L_001B8DCC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.f[23] = c.f[0];  if (t) { goto L_001B8DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[23];  if (t) { goto L_001B8E24; } }
L_001B8DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[22], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[20], c.f[20]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[21], c.f[21]));
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E10u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0006(c, 217u, depth + 1u); else { c.pc = 0x0011A5A8u; return; } if (c.pc != 0x001B8E10u) [[unlikely]] return; }
L_001B8E10:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[21] = c.f[0];  if (t) { goto L_001B8E20; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 1;
L_001B8E20:
    c.f[21] = fp::sub(c.f[23], c.f[21]);
    c.budget -= 1;
L_001B8E24:
    c.f[12] = c.f[23] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E30u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B8E30u) [[unlikely]] return; }
L_001B8E30:
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[29].w[0] + 336u);
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
    c.f[13] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E70u); c.f[12] = ld32((c.r[29].w[0] + 340u));  if (depth < kMaxDepth) unit_0006(c, 219u, depth + 1u); else { c.pc = 0x0011A5D8u; return; } if (c.pc != 0x001B8E70u) [[unlikely]] return; }
L_001B8E70:
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001B91E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8E9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8E9Cu) [[unlikely]] return; }
L_001B8E9C:
    set32(c.r[6], c.r[2].w[0] << 6);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8ECCu); set32(c.r[19], c.r[2].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8ECCu) [[unlikely]] return; }
L_001B8ECC:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[5].w[0]) & ~15u, c.r[6]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.r[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10684u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8F20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8F20u) [[unlikely]] return; }
L_001B8F20:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B8FC8u) [[unlikely]] return; }
L_001B8FC8:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B8FECu); st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B8FECu) [[unlikely]] return; }
L_001B8FEC:
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 208u);
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
    c.f[12] = c.f[20];
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9074u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x001B9074u) [[unlikely]] return; }
L_001B9074:
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 208u);
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
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B90FCu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0011(c, 32u, depth + 1u); else { c.pc = 0x001447F0u; return; } if (c.pc != 0x001B90FCu) [[unlikely]] return; }
L_001B90FC:
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[1].w[0] + 18600u));
    c.f[20] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B9128; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
L_001B9128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18584u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001B9148; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18592u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 3;
L_001B9148:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[1].w[0] + 18576u));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B916Cu); st32((c.r[29].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 40u, depth + 1u); else { c.pc = 0x00144A40u; return; } if (c.pc != 0x001B916Cu) [[unlikely]] return; }
L_001B916C:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st128((c.r[19].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st128((c.r[19].w[0] + 32u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[1].w[0] + 18568u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9198u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 30u, depth + 1u); else { c.pc = 0x001446D0u; return; } if (c.pc != 0x001B9198u) [[unlikely]] return; }
L_001B9198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10684u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B91B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B91B8u) [[unlikely]] return; }
L_001B91B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] << 6);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 204u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);  if (t) { goto L_001B9314; } }
L_001B91E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[18], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9204u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B9204u) [[unlikely]] return; }
L_001B9204:
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = c.f[21];
    set32(c.r[2], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9220u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001B9220u) [[unlikely]] return; }
L_001B9220:
    set32(c.r[2], c.r[29].w[0] + 272u);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.f[12] = c.f[20];
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B92A0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0011(c, 31u, depth + 1u); else { c.pc = 0x00144760u; return; } if (c.pc != 0x001B92A0u) [[unlikely]] return; }
L_001B92A0:
    set32(c.r[3], c.r[29].w[0] + 272u);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[7]);
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
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 29;
L_001B9314:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_001B931C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8AB0u | kUnwind; return; } goto L_001B8AB0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B95C4; } }
L_001B9330:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9350u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_002D(c, 94u, depth + 1u); else { c.pc = 0x001B4FE0u; return; } if (c.pc != 0x001B9350u) [[unlikely]] return; }
L_001B9350:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001B95C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001B9368; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001B9368:
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_001B9378; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_001B9378:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B9384; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_001B9384:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001B94DC; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[8], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] << 6);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[8].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[13]);
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
    set32(c.r[8], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] << 6);
    set32(c.r[7], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[10]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[10].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[10].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[10].w[2]);
    vu::maddbc(c.vu0, 15u, 10u, 7u, c.vu0.vf[10].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[11].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[11].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[11].w[2]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[10]);
    vu::maddbc(c.vu0, 15u, 11u, 7u, c.vu0.vf[11].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[12].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[12].w[2]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[12].w[3]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[13].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[13].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[13].w[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[12]);
    vu::maddbc(c.vu0, 15u, 13u, 7u, c.vu0.vf[13].w[3]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 81;
L_001B94DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] << 5);  if (t) { goto L_001B9508; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_001B9504; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001B9504; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_001B95C0; } }
L_001B9504:
    set32(c.r[3], c.r[19].w[0] << 5);
    c.budget -= 1;
L_001B9508:
    set32(c.r[5], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 184u)));
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[8], c.r[29].w[0] + 112u);
    c.r[9].d[0] = c.r[3].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[6], c.r[9].w[0] << 6);
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[5].w[0] + 48u);
    set32(c.r[5], c.r[3].w[0] << 4);
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 4u, 4u, 5u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], c.r[19].w[0] << 4);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 128u) & ~15u, c.r[4]);
    c.budget -= 46;
L_001B95C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B95C4:
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9330u | kUnwind; return; } goto L_001B9330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_001B9610; } }
L_001B95D8:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9608; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 128u);
    set32(c.r[7], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9608u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 84u, depth + 1u); else { c.pc = 0x001B97A0u; return; } if (c.pc != 0x001B9608u) [[unlikely]] return; }
L_001B9608:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 2;
L_001B9610:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B95D8u | kUnwind; return; } goto L_001B95D8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_001B9650:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], c.r[20].w[0] << 1);
    c.budget -= 15;
L_001B968C:
    set32(c.r[4], 0u + 16u);
    set32(c.r[16], c.r[22].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 176u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 176u);  if (t) { goto L_001B96AC; } }
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001B96AC:
    set32(c.r[3], c.r[20].w[0] << 4);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[20].w[0] - 2u);
    set32(c.r[17], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[20].w[0] << 5);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + c.r[3].w[0]);  if (t) { goto L_001B9748; } }
L_001B96CC:
    set32(c.r[2], c.r[19].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 11296u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0] - 8u)));  if (t) { goto L_001B9708; } }
    set32(c.r[3], c.r[19].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_001B9728; } }
L_001B9708:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001B9728; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 18136u);  if (t) { goto L_001B9728; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[5].w[0] + 18184u);
    c.budget -= 2;
L_001B9728:
    set32(c.r[25], ld32((c.r[21].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9738u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9738u) [[unlikely]] return; }
L_001B9738:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st16((c.r[3].w[0] + 184u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001B9748:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 176u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B96CCu | kUnwind; return; } goto L_001B96CC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B968Cu | kUnwind; return; } goto L_001B968C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B97A0:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 16u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 176u)));
    c.r[11].d[0] = c.r[3].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);  if (t) { goto L_001B9838; } }
L_001B97CC:
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 184u)));  if (t) { goto L_001B97E0; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[8].d[0]; set32(c.r[4], c.r[3].w[0] << 6);  if (t) { goto L_001B981C; } }
L_001B97E0:
    set32(c.r[6], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[5], ld32((c.r[7].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 208u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 4u, 1u);
    vu::add(c.vu0, 14u, 5u, 5u, 1u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);  if (t) { goto L_001B9834; } }
L_001B981C:
    set32(c.r[3], ld32((c.r[7].w[0] + 216u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 48u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::add(c.vu0, 14u, 4u, 4u, 1u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 6;
L_001B9834:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001B9838:
    c.r[3].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[10].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B97CCu | kUnwind; return; } goto L_001B97CC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B98A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9890u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B9890u) [[unlikely]] return; }
L_001B9890:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B98AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B98A8u) [[unlikely]] return; }
L_001B98A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B98AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B98C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9908; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B98F0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B98F0u) [[unlikely]] return; }
L_001B98F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B990C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B9908u) [[unlikely]] return; }
L_001B9908:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B990C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B9968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9950u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001B9950u) [[unlikely]] return; }
L_001B9950:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001B996C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001B9968u) [[unlikely]] return; }
L_001B9968:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B996C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9850u | kUnwind; return; } goto L_001B9850; }
L_001B9990:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 28u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B8760u | kUnwind; return; } goto L_001B8760; }
L_001B99A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 195u, depth + 1u); else { c.pc = 0x00146E20u; return; } if (c.pc != 0x001B99B4u) [[unlikely]] return; }
L_001B99B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99C4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 302u, depth + 1u); else { c.pc = 0x00147D10u; return; } if (c.pc != 0x001B99C4u) [[unlikely]] return; }
L_001B99C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99DCu); st8((c.r[1].w[0] + 19984u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B99DCu) [[unlikely]] return; }
L_001B99DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B99F8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 44u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B99F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 125u, depth + 1u); else { c.pc = 0x0015D850u; return; } if (c.pc != 0x001B99F8u) [[unlikely]] return; }
L_001B99F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9A10:
    c.r[2].d[0] = c.r[4].d[0] ^ 5100ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B9A28; } }
    c.r[2].d[0] = c.r[4].d[0] ^ 5110ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_001B9A28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B9A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B9A74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 64u);
    set32(c.r[11], 0u + 320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9A6Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001B9A6Cu) [[unlikely]] return; }
L_001B9A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B9AA4; } }
L_001B9A74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 256u);
    set32(c.r[11], 0u + 192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001B9AA0u) [[unlikely]] return; }
L_001B9AA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9AA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9AB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001B9AF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 64u);
    set32(c.r[11], 0u + 320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9AECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001B9AECu) [[unlikely]] return; }
L_001B9AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001B9B24; } }
L_001B9AF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 256u);
    set32(c.r[11], 0u + 192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001B9B20u) [[unlikely]] return; }
L_001B9B20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001B9B24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 436u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B50u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B9B50u) [[unlikely]] return; }
L_001B9B50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001B9B5C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001B9B5C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B9B68; } }
    st8((c.r[3].w[0] + 36u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_001B9B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B9B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x434F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9B98u); c.r[5].d[0] = c.r[2].d[0] | 19785ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001B9B98u) [[unlikely]] return; }
L_001B9B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001B9BAC; } }
L_001B9BA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B9BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));  if (t) { goto L_001B9BC0; } }
L_001B9BBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B9BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001B9BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BF0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001B9BF0u) [[unlikely]] return; }
L_001B9BF0:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9BFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001B9BFCu) [[unlikely]] return; }
L_001B9BFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9472u);
    set32(c.r[3], c.r[3].w[0] - 9456u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B9C30:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 40u)));  goto L_001BBBE0; }
L_001B9C40:
    set32(c.r[29], c.r[29].w[0] - 944u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9C98u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x001B9C98u) [[unlikely]] return; }
L_001B9C98:
    set32(c.r[4], c.r[21].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CA4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001B9CA4u) [[unlikely]] return; }
L_001B9CA4:
    set32(c.r[4], c.r[21].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001B9CB0u) [[unlikely]] return; }
L_001B9CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], c.r[21].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] | 16722ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9CC4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001B9CC4u) [[unlikely]] return; }
L_001B9CC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9552u);
    set32(c.r[2], c.r[2].w[0] - 9532u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[21].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9500u);
    st32((c.r[21].w[0] + 424u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], 0u + 44u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D08u); st32((c.r[29].w[0] + 940u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001B9D08u) [[unlikely]] return; }
L_001B9D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B9D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D18u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 114u, depth + 1u); else { c.pc = 0x001B9BD0u; return; } if (c.pc != 0x001B9D18u) [[unlikely]] return; }
L_001B9D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B9D28; } }
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001B9D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D30u); set32(c.r[4], c.r[21].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001B9D30u) [[unlikely]] return; }
L_001B9D30:
    st32((c.r[21].w[0] + 464u), c.r[23].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0] + 48u), c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[21].w[0] + 1232u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0] + 1236u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 468u), 0u);
    st16((c.r[21].w[0] + 472u), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0] + 474u), static_cast<std::uint16_t>(0u));
    st32((c.r[21].w[0] + 1240u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D64u); st8((c.r[21].w[0] + 386u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001B9D64u) [[unlikely]] return; }
L_001B9D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[21].w[0] + 2120u);
    st32((c.r[21].w[0] + 360u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 356u), c.f[20]);
    set32(c.r[6], 0u + 4608u);
    st32((c.r[21].w[0] + 912u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 912u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9D8Cu); st32((c.r[21].w[0] + 988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001B9D8Cu) [[unlikely]] return; }
L_001B9D8C:
    st32((c.r[21].w[0] + 1252u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[21].w[0] + 1248u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[21].w[0] + 1256u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DA8u); st32((c.r[21].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001B9DA8u) [[unlikely]] return; }
L_001B9DA8:
    st32((c.r[21].w[0] + 2116u), 0u);
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 52u), 0u);
    st32((c.r[21].w[0] + 1272u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1276u), 0u);  if (t) { goto L_001B9DD0; } }
L_001B9DC0:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 1284u), 0u);
    st32((c.r[2].w[0] + 1300u), 0u);
    c.budget -= 4;
L_001B9DD0:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9DC0u | kUnwind; return; } goto L_001B9DC0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001BA024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9DF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001B9DF4u) [[unlikely]] return; }
L_001B9DF4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 219u, depth + 1u); else { c.pc = 0x002D6D20u; return; } if (c.pc != 0x001B9E00u) [[unlikely]] return; }
L_001B9E00:
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9E18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B9E18u) [[unlikely]] return; }
L_001B9E18:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[0] = ld32((c.r[3].w[0] + 108u));
    st32((c.r[21].w[0] + 356u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[21].w[0] + 360u), c.f[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 27968u)));
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001B9E5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001B9E64; } }
L_001B9E5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 27976u)));
    c.budget -= 2;
L_001B9E64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B9EA8; } }
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B9EA4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001B9EA4; } }
    set32(c.r[3], c.r[20].w[0] - 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 27968u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_001B9EA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B9EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EB0u);  if (depth < kMaxDepth) unit_0075(c, 223u, depth + 1u); else { c.pc = 0x002D6DA0u; return; } if (c.pc != 0x001B9EB0u) [[unlikely]] return; }
L_001B9EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001B9EB8u) [[unlikely]] return; }
L_001B9EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9EC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 226u, depth + 1u); else { c.pc = 0x002D6DD0u; return; } if (c.pc != 0x001B9EC0u) [[unlikely]] return; }
L_001B9EC0:
    set32(c.r[2], ld32((c.r[21].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001B9EDC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001BA8C0; } }
L_001B9EDC:
    set32(c.r[19], 0u + 192u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F04u); set32(c.r[10], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001B9F04u) [[unlikely]] return; }
L_001B9F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001B9F0Cu) [[unlikely]] return; }
L_001B9F0C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001B9F18u) [[unlikely]] return; }
L_001B9F18:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F3Cu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x001B9F3Cu) [[unlikely]] return; }
L_001B9F3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001B9F48u) [[unlikely]] return; }
L_001B9F48:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = c.r[19].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 31808u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], 0u + 256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9F90u); set32(c.r[16], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001B9F90u) [[unlikely]] return; }
L_001B9F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B9FA0u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001B9FA0u) [[unlikely]] return; }
L_001B9FA0:
    set32(c.r[3], c.r[19].w[0] << 10);
    set32(c.r[16], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_001B9FB8; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001B9FB8:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[3], c.r[19].w[0] << 10);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st64((c.r[16].w[0]), c.r[4].d[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_001B9FF4; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001B9FF4:
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[17].w[0]) & ~15u, c.r[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001BA8C0; } }
L_001BA024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA02Cu); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0040(c, 89u, depth + 1u); else { c.pc = 0x00201AE0u; return; } if (c.pc != 0x001BA02Cu) [[unlikely]] return; }
L_001BA02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA034u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001BA034u) [[unlikely]] return; }
L_001BA034:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BA04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA044u); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_002E(c, 98u, depth + 1u); else { c.pc = 0x001B99A0u; return; } if (c.pc != 0x001BA044u) [[unlikely]] return; }
L_001BA044:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001BA04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA054u);  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001BA054u) [[unlikely]] return; }
L_001BA054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA05Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 16u, depth + 1u); else { c.pc = 0x001C0260u; return; } if (c.pc != 0x001BA05Cu) [[unlikely]] return; }
L_001BA05C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA068u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA068u) [[unlikely]] return; }
L_001BA068:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA07Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001BA07Cu) [[unlikely]] return; }
L_001BA07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA088; } }
L_001BA084:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BA0D0; } }
L_001BA098:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0A4u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA0A4u) [[unlikely]] return; }
L_001BA0A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA0CC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0CCu); set32(c.r[5], c.r[2].w[0] + 2120u);  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001BA0CCu) [[unlikely]] return; }
L_001BA0CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BA0D0:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA098u | kUnwind; return; } goto L_001BA098; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0E8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA0E8u) [[unlikely]] return; }
L_001BA0E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA0FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA0FCu) [[unlikely]] return; }
L_001BA0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA108; } }
L_001BA104:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA118u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA118u) [[unlikely]] return; }
L_001BA118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA130; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA12Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 410u, depth + 1u); else { c.pc = 0x0015B6A0u; return; } if (c.pc != 0x001BA12Cu) [[unlikely]] return; }
L_001BA12C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001BA130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA138u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001BA138u) [[unlikely]] return; }
L_001BA138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA144u); c.r[4].d[0] = c.r[2].d[0] | 36884ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001BA144u) [[unlikely]] return; }
L_001BA144:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA150u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001BA150u) [[unlikely]] return; }
L_001BA150:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA15Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA15Cu) [[unlikely]] return; }
L_001BA15C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA174; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA174u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 147u, depth + 1u); else { c.pc = 0x0015DBB0u; return; } if (c.pc != 0x001BA174u) [[unlikely]] return; }
L_001BA174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA17Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA17Cu) [[unlikely]] return; }
L_001BA17C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BA190; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA190u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 89u, depth + 1u); else { c.pc = 0x0015D1B0u; return; } if (c.pc != 0x001BA190u) [[unlikely]] return; }
L_001BA190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 27968u)));
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[1].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001BA1C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001BA1C8; } }
L_001BA1C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 27976u)));
    c.budget -= 2;
L_001BA1C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[1].w[0] + 25652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BA20C; } }
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001BA20C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001BA20C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[20].w[0] - 3u);
    set32(c.r[4], ld32((c.r[1].w[0] + 27968u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_001BA20C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] + 10808u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[1].w[0] + 10812u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA224u); st32((c.r[21].w[0] + 916u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x001BA224u) [[unlikely]] return; }
L_001BA224:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BA2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA238u);  if (depth < kMaxDepth) unit_003D(c, 84u, depth + 1u); else { c.pc = 0x001F5400u; return; } if (c.pc != 0x001BA238u) [[unlikely]] return; }
L_001BA238:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 86u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BA2E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA250u);  if (depth < kMaxDepth) unit_003F(c, 299u, depth + 1u); else { c.pc = 0x001FF0D0u; return; } if (c.pc != 0x001BA250u) [[unlikely]] return; }
L_001BA250:
    set32(c.r[2], ld32((c.r[21].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001BA268; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);  if (t) { goto L_001BA2BC; } }
L_001BA268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA270u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_002E(c, 104u, depth + 1u); else { c.pc = 0x001B9A30u; return; } if (c.pc != 0x001BA270u) [[unlikely]] return; }
L_001BA270:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA27Cu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_002E(c, 107u, depth + 1u); else { c.pc = 0x001B9AB0u; return; } if (c.pc != 0x001BA27Cu) [[unlikely]] return; }
L_001BA27C:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10800u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 496u);
    set32(c.r[8], c.r[29].w[0] + 384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2B4u); set32(c.r[9], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0025(c, 230u, depth + 1u); else { c.pc = 0x001962B0u; return; } if (c.pc != 0x001BA2B4u) [[unlikely]] return; }
L_001BA2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001BA2DC; } }
L_001BA2BC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10800u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2D8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 230u, depth + 1u); else { c.pc = 0x001962B0u; return; } if (c.pc != 0x001BA2D8u) [[unlikely]] return; }
L_001BA2D8:
    st32((c.r[21].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 1;
L_001BA2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001BA2E4u) [[unlikely]] return; }
L_001BA2E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2F0u);  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001BA2F0u) [[unlikely]] return; }
L_001BA2F0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA2FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001BA2FCu) [[unlikely]] return; }
L_001BA2FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10800u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA314u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 424u, depth + 1u); else { c.pc = 0x0015B880u; return; } if (c.pc != 0x001BA314u) [[unlikely]] return; }
L_001BA314:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA320u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 91u, depth + 1u); else { c.pc = 0x0015D1F0u; return; } if (c.pc != 0x001BA320u) [[unlikely]] return; }
L_001BA320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA328u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001BA328u) [[unlikely]] return; }
L_001BA328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA330u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 304u, depth + 1u); else { c.pc = 0x001FF120u; return; } if (c.pc != 0x001BA330u) [[unlikely]] return; }
L_001BA330:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA33Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA33Cu) [[unlikely]] return; }
L_001BA33C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA350u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA350u) [[unlikely]] return; }
L_001BA350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA360; } }
L_001BA358:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001BA360:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA370u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x001BA370u) [[unlikely]] return; }
L_001BA370:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA37Cu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA37Cu) [[unlikely]] return; }
L_001BA37C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001BA390; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA390u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x001BA390u) [[unlikely]] return; }
L_001BA390:
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3A4u); set32(c.r[4], ld32((c.r[21].w[0] + 52u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x001BA3A4u) [[unlikely]] return; }
L_001BA3A4:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA3B8u) [[unlikely]] return; }
L_001BA3B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3C4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA3C4u) [[unlikely]] return; }
L_001BA3C4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA3D8u) [[unlikely]] return; }
L_001BA3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA3E4; } }
L_001BA3E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA3F4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA3F4u) [[unlikely]] return; }
L_001BA3F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA400u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001BA400u) [[unlikely]] return; }
L_001BA400:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA40Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x001001F0u; return; } if (c.pc != 0x001BA40Cu) [[unlikely]] return; }
L_001BA40C:
    st32((c.r[21].w[0] + 1252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA41Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA41Cu) [[unlikely]] return; }
L_001BA41C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA430u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA430u) [[unlikely]] return; }
L_001BA430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 1252u)));  if (t) { goto L_001BA440; } }
L_001BA438:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 1252u)));
    c.budget -= 2;
L_001BA440:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA44Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001BA44Cu) [[unlikely]] return; }
L_001BA44C:
    set32(c.r[2], ld32((c.r[21].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BA464; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001BA5C4; } }
L_001BA464:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[20], 0u + 192u);  if (t) { goto L_001BA478; } }
    set32(c.r[20], 0u + 96u);
    c.budget -= 1;
L_001BA478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = c.r[20].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4A4u); set32(c.r[10], 0u + 256u);  if (depth < kMaxDepth) unit_0000(c, 191u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001BA4A4u) [[unlikely]] return; }
L_001BA4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 580u, depth + 1u); else { c.pc = 0x0010BEA0u; return; } if (c.pc != 0x001BA4ACu) [[unlikely]] return; }
L_001BA4AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001BA4B8u) [[unlikely]] return; }
L_001BA4B8:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 31808u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4DCu); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 197u, depth + 1u); else { c.pc = 0x00101F30u; return; } if (c.pc != 0x001BA4DCu) [[unlikely]] return; }
L_001BA4DC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA4E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 156u, depth + 1u); else { c.pc = 0x00101770u; return; } if (c.pc != 0x001BA4E8u) [[unlikely]] return; }
L_001BA4E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[11].d[0] = c.r[20].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + 31808u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 27976u)));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], 0u + 256u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA530u); set32(c.r[17], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 182u, depth + 1u); else { c.pc = 0x00101A88u; return; } if (c.pc != 0x001BA530u) [[unlikely]] return; }
L_001BA530:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA540u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0009(c, 40u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x001BA540u) [[unlikely]] return; }
L_001BA540:
    set32(c.r[3], c.r[20].w[0] << 10);
    set32(c.r[17], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_001BA558; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001BA558:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[3], c.r[20].w[0] << 10);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st64((c.r[17].w[0]), c.r[4].d[0]);
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { goto L_001BA594; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_001BA594:
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[19].w[0]) & ~15u, c.r[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_001BA5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001BA740; } }
L_001BA5CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5D8u); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA5D8u) [[unlikely]] return; }
L_001BA5D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA5ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001BA5ECu) [[unlikely]] return; }
L_001BA5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA5F8; } }
L_001BA5F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_001BA738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA608u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA608u) [[unlikely]] return; }
L_001BA608:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA61Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA61Cu) [[unlikely]] return; }
L_001BA61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA62C; } }
L_001BA624:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001BA62C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA63Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x001BA63Cu) [[unlikely]] return; }
L_001BA63C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA648u); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA648u) [[unlikely]] return; }
L_001BA648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] << 2);  if (t) { goto L_001BA664; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA660u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x001BA660u) [[unlikely]] return; }
L_001BA660:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.budget -= 1;
L_001BA664:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 1284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA67Cu); set32(c.r[4], ld32((c.r[3].w[0] + 1284u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x001BA67Cu) [[unlikely]] return; }
L_001BA67C:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1284u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA698u) [[unlikely]] return; }
L_001BA698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001BA72C; } }
L_001BA6A0:
    set32(c.r[3], c.r[20].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1284u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 10848u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA6D0u); set32(c.r[5], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA6D0u) [[unlikely]] return; }
L_001BA6D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 10848u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA700u); set32(c.r[5], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA700u) [[unlikely]] return; }
L_001BA700:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 1316u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[3].w[0] + 1318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_001BA72C:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA6A0u | kUnwind; return; } goto L_001BA6A0; } }
L_001BA738:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_001BA740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[20].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA5CCu | kUnwind; return; } goto L_001BA5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001BA8A8; } }
L_001BA750:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA75Cu); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA75Cu) [[unlikely]] return; }
L_001BA75C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA770u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 143u, depth + 1u); else { c.pc = 0x0015DAE0u; return; } if (c.pc != 0x001BA770u) [[unlikely]] return; }
L_001BA770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BA77C; } }
L_001BA778:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BA77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_001BA8A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA78Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 122u, depth + 1u); else { c.pc = 0x0015D740u; return; } if (c.pc != 0x001BA78Cu) [[unlikely]] return; }
L_001BA78C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BA7A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 142u, depth + 1u); else { c.pc = 0x0015DA70u; return; } if (c.pc != 0x001BA7A0u) [[unlikely]] return; }
L_001BA7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA7B0; } }
L_001BA7A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_001BA7B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 166u, depth + 1u); else { c.pc = 0x0015DEF0u; return; } if (c.pc != 0x001BA7C0u) [[unlikely]] return; }
L_001BA7C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7CCu); set32(c.r[4], 0u + 272u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA7CCu) [[unlikely]] return; }
L_001BA7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] << 2);  if (t) { goto L_001BA7E8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA7E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0013(c, 243u, depth + 1u); else { c.pc = 0x0014F930u; return; } if (c.pc != 0x001BA7E4u) [[unlikely]] return; }
L_001BA7E4:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.budget -= 1;
L_001BA7E8:
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0] + 1284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA800u); set32(c.r[4], ld32((c.r[3].w[0] + 1284u)));  if (depth < kMaxDepth) unit_0014(c, 27u, depth + 1u); else { c.pc = 0x00150390u; return; } if (c.pc != 0x001BA800u) [[unlikely]] return; }
L_001BA800:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1284u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA81Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA81Cu) [[unlikely]] return; }
L_001BA81C:
    c.r[1].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BA8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_001BA88C; } }
L_001BA830:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[3].w[0] + 1284u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA860u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA860u) [[unlikely]] return; }
L_001BA860:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 1316u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 11;
L_001BA88C:
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 1284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA830u | kUnwind; return; } goto L_001BA830; } }
L_001BA8A4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001BA8A8:
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[19].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA750u | kUnwind; return; } goto L_001BA750; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA8C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 413u, depth + 1u); else { c.pc = 0x0015B710u; return; } if (c.pc != 0x001BA8C0u) [[unlikely]] return; }
L_001BA8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 31704u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BA8E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[1].w[0] + 31136u)));  if (t) { goto L_001BA8E4; } }
L_001BA8E0:
    set32(c.r[2], ld32((c.r[1].w[0] + 31128u)));
    c.budget -= 1;
L_001BA8E4:
    st32((c.r[21].w[0] + 1272u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BA95C; } }
L_001BA8F0:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 1272u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA918u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BA918u) [[unlikely]] return; }
L_001BA918:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st16((c.r[3].w[0] + 1032u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA92Cu); set32(c.r[4], ld32((c.r[21].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001BA92Cu) [[unlikely]] return; }
L_001BA92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_001BA958; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1032u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BA958; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BA958; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1030u)));
    st16((c.r[4].w[0] + 1032u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001BA958:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001BA95C:
    set32(c.r[2], ld32((c.r[21].w[0] + 1272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BA8F0u | kUnwind; return; } goto L_001BA8F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[21].w[0] + 980u), c.r[3].w[0]);
    set32(c.r[4], 0u + 28u);
    st32((c.r[21].w[0] + 984u), 0u);
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 1020u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA990u); st32((c.r[21].w[0] + 1024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA990u) [[unlikely]] return; }
L_001BA990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA9A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001BA9A0u) [[unlikely]] return; }
L_001BA9A0:
    st32((c.r[21].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9ACu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BA9ACu) [[unlikely]] return; }
L_001BA9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BA9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001BA9BCu) [[unlikely]] return; }
L_001BA9BC:
    st32((c.r[21].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BA9D0u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001BA9D0u) [[unlikely]] return; }
L_001BA9D0:
    set32(c.r[2], c.r[21].w[0] + 816u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[21].w[0] + 832u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[21].w[0] + 848u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[21].w[0] + 920u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[21].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA04u); st32((c.r[21].w[0] + 352u), 0u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001BAA04u) [[unlikely]] return; }
L_001BAA04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BAA14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 138u, depth + 1u); else { c.pc = 0x0015D9D0u; return; } if (c.pc != 0x001BAA14u) [[unlikely]] return; }
L_001BAA14:
    st32((c.r[21].w[0] + 1028u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001BAA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAA2Cu);  if (depth < kMaxDepth) unit_0030(c, 23u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001BAA2Cu) [[unlikely]] return; }
L_001BAA2C:
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], c.r[2].w[0] + 48u);
    st32((c.r[21].w[0] + 240u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 400u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 398u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[21].w[0] + 398u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 406u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[21].w[0] + 406u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[21].w[0] + 1244u), 0u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAAACu); set32(c.r[4], ld32((c.r[29].w[0] + 940u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x001BAAACu) [[unlikely]] return; }
L_001BAAAC:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 944u);  c.pc = t; return; }
L_001BAAF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB14u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 6u, depth + 1u); else { c.pc = 0x001C0080u; return; } if (c.pc != 0x001BAB14u) [[unlikely]] return; }
L_001BAB14:
    set32(c.r[4], c.r[18].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB20u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001BAB20u) [[unlikely]] return; }
L_001BAB20:
    set32(c.r[4], c.r[18].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 264u, depth + 1u); else { c.pc = 0x0013E560u; return; } if (c.pc != 0x001BAB2Cu) [[unlikely]] return; }
L_001BAB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.r[5].d[0] = c.r[2].d[0] | 16722ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAB40u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001BAB40u) [[unlikely]] return; }
L_001BAB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9552u);
    set32(c.r[3], c.r[3].w[0] - 9532u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 416u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9516u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 424u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9500u);
    st32((c.r[18].w[0] + 460u), c.r[3].w[0]);
    set32(c.r[2], 0u + 7u);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    st32((c.r[18].w[0] + 356u), c.f[0]);
    st32((c.r[18].w[0] + 912u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 1272u), 0u);
    st32((c.r[18].w[0] + 1276u), 0u);
    c.budget -= 22;
L_001BAB98:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 1284u), 0u);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BAB98u | kUnwind; return; } goto L_001BAB98; } }
    set32(c.r[4], c.r[18].w[0] + 2120u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABC4u); set32(c.r[6], 0u + 4608u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001BABC4u) [[unlikely]] return; }
L_001BABC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 16u, depth + 1u); else { c.pc = 0x001C0260u; return; } if (c.pc != 0x001BABCCu) [[unlikely]] return; }
L_001BABCC:
    st32((c.r[18].w[0] + 52u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BABE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BABE4u);  if (depth < kMaxDepth) unit_0030(c, 23u, depth + 1u); else { c.pc = 0x001C0350u; return; } if (c.pc != 0x001BABE4u) [[unlikely]] return; }
L_001BABE4:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 28u);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st32((c.r[18].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 1252u), 0u);
    st32((c.r[18].w[0] + 1248u), 0u);
    st32((c.r[18].w[0] + 980u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 984u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC14u); st32((c.r[18].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BAC14u) [[unlikely]] return; }
L_001BAC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BAC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001BAC24u) [[unlikely]] return; }
L_001BAC24:
    st32((c.r[18].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC30u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001BAC30u) [[unlikely]] return; }
L_001BAC30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001BAC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001BAC40u) [[unlikely]] return; }
L_001BAC40:
    st32((c.r[18].w[0] + 1268u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC54u); set32(c.r[6], 0u + 368u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001BAC54u) [[unlikely]] return; }
L_001BAC54:
    set32(c.r[4], c.r[18].w[0] + 920u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAC64u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0009(c, 49u, depth + 1u); else { c.pc = 0x00124ED8u; return; } if (c.pc != 0x001BAC64u) [[unlikely]] return; }
L_001BAC64:
    st32((c.r[18].w[0] + 1028u), 0u);
    set32(c.r[7], 0u - 17u);
    st32((c.r[18].w[0] + 2116u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 392u));
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 400u));
    c.r[4].d[0] = c.r[4].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    c.r[4].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 1244u), 0u);
    st32((c.r[18].w[0] + 1256u), 0u);
    st32((c.r[18].w[0] + 1260u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001BACD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001BACE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BACE4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001BACE4u) [[unlikely]] return; }
L_001BACE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001BACF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001BAFB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 9552u);
    set32(c.r[2], c.r[2].w[0] - 9532u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[18].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 9516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 9500u);
    st32((c.r[18].w[0] + 424u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 1244u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BAD90; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAD6C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD6Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAD6Cu) [[unlikely]] return; }
L_001BAD6C:
    set32(c.r[4], ld32((c.r[18].w[0] + 1268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAF68; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAD88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAD88u) [[unlikely]] return; }
L_001BAD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[18].w[0] + 436u);  if (t) { goto L_001BAF6C; } }
L_001BAD90:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BADDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001BADC0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BADC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADC0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100210u; return; } if (c.pc != 0x001BADC0u) [[unlikely]] return; }
L_001BADC0:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BADDC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BADDCu) [[unlikely]] return; }
L_001BADDC:
    set32(c.r[4], ld32((c.r[18].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BADF8; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BADF8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BADF8u) [[unlikely]] return; }
L_001BADF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 1268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAE14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAE14u) [[unlikely]] return; }
L_001BAE14:
    set32(c.r[4], ld32((c.r[18].w[0] + 1276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BAE84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAE38; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE38u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAE38u) [[unlikely]] return; }
L_001BAE38:
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAE68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAE68u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAE68u) [[unlikely]] return; }
L_001BAE68:
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 28608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_001BAE84:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] + 1284u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1284u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BAEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEA4u); set32(c.r[4], ld32((c.r[2].w[0] + 200u)));  if (depth < kMaxDepth) unit_002E(c, 253u, depth + 1u); else { c.pc = 0x001BACD0u; return; } if (c.pc != 0x001BAEA4u) [[unlikely]] return; }
L_001BAEA4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAEC0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEC0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAEC0u) [[unlikely]] return; }
L_001BAEC0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BAE84u | kUnwind; return; } goto L_001BAE84; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 2116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAEF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAEF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAEF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAEF4u) [[unlikely]] return; }
L_001BAEF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 912u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BAF14; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_001BAF14:
    set32(c.r[4], ld32((c.r[18].w[0] + 1252u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF28u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001BAF28u) [[unlikely]] return; }
L_001BAF28:
    set32(c.r[4], ld32((c.r[18].w[0] + 1248u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAF4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BAF4C; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001BAF4Cu) [[unlikely]] return; }
L_001BAF4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF54u);  if (depth < kMaxDepth) unit_0025(c, 227u, depth + 1u); else { c.pc = 0x00196270u; return; } if (c.pc != 0x001BAF54u) [[unlikely]] return; }
L_001BAF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BAF68; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 1260u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 228u, depth + 1u); else { c.pc = 0x00196280u; return; } if (c.pc != 0x001BAF68u) [[unlikely]] return; }
L_001BAF68:
    set32(c.r[4], c.r[18].w[0] + 436u);
    c.budget -= 1;
L_001BAF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001BAF74u) [[unlikely]] return; }
L_001BAF74:
    set32(c.r[4], c.r[18].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 266u, depth + 1u); else { c.pc = 0x0013E5B0u; return; } if (c.pc != 0x001BAF80u) [[unlikely]] return; }
L_001BAF80:
    set32(c.r[4], c.r[18].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001BAF8Cu) [[unlikely]] return; }
L_001BAF8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAF98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 13u, depth + 1u); else { c.pc = 0x001C0200u; return; } if (c.pc != 0x001BAF98u) [[unlikely]] return; }
L_001BAF98:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BAFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001BAFB0u) [[unlikely]] return; }
L_001BAFB0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001BAFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BAFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BB01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BAFF4u); set32(c.r[4], c.r[16].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013C5A0u; return; } if (c.pc != 0x001BAFF4u) [[unlikely]] return; }
    goto L_001BAFF4;
L_001BAFF0:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001BAFF4:
    ld128((c.r[16].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[16].w[0] + 288u) & ~15u, c.r[2]);
    ld128((c.r[16].w[0] + 256u) & ~15u, c.r[2]);
    st128((c.r[16].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB01Cu); st128((c.r[16].w[0] + 256u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_002E(c, 281u, depth + 1u); else { c.pc = 0x001BB030u; return; } if (c.pc != 0x001BB01Cu) [[unlikely]] return; }
L_001BB01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BB030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001BB1DC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 980u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001BB06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 984u), 0u);  if (t) { goto L_001BB1DC; } }
L_001BB06C:
    set32(c.r[4], ld32((c.r[19].w[0] + 980u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    st32((c.r[19].w[0] + 980u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 980u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BB134; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001BB134; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BB134; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001BB134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB0CCu);  if (depth < kMaxDepth) unit_007E(c, 22u, depth + 1u); else { c.pc = 0x002F85B0u; return; } if (c.pc != 0x001BB0CCu) [[unlikely]] return; }
L_001BB0CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001BB134; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001BB0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB0E8u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001BB0E8u) [[unlikely]] return; }
L_001BB0E8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001BB134; } }
L_001BB0F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 371u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001BB114; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 371u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001BB134; } }
L_001BB114:
    set32(c.r[4], ld32((c.r[19].w[0] + 980u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 984u), c.r[3].w[0]);  if (t) { goto L_001BB158; } }
L_001BB134:
    set32(c.r[3], ld32((c.r[19].w[0] + 980u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[19].w[0] + 980u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB06Cu | kUnwind; return; } goto L_001BB06C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 912u)));
    st32((c.r[19].w[0] + 980u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 984u), 0u);
    c.budget -= 3;
L_001BB158:
    set32(c.r[16], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001BB1D8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB178u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001BB178u) [[unlikely]] return; }
L_001BB178:
    st32((c.r[19].w[0] + 1020u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 20000u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BB1A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1020u), c.f[0]);  if (t) { goto L_001BB1C4; } }
L_001BB1A4:
    c.f[1] = ld32((c.r[1].w[0] + 19984u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BB1C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 19992u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 1020u), c.f[0]);
    c.budget -= 4;
L_001BB1C4:
    set32(c.r[4], ld32((c.r[19].w[0] + 912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB1D0u); set32(c.r[5], ld32((c.r[16].w[0] + 912u)));  if (depth < kMaxDepth) unit_003F(c, 348u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x001BB1D0u) [[unlikely]] return; }
L_001BB1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1024u), c.f[0]);  if (t) { goto L_001BB1DC; } }
L_001BB1D8:
    st32((c.r[19].w[0] + 1020u), 0u);
    c.budget -= 1;
L_001BB1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001BB200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 912u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001BB23C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1256u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BB394; } }
L_001BB23C:
    set32(c.r[4], ld32((c.r[20].w[0] + 364u)));
    set32(c.r[3], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BB394; } }
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BB268; } }
L_001BB268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_001BB290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_001BB290:
    set32(c.r[4], ld32((c.r[20].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 31808u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    st128((c.r[5].w[0]) & ~15u, c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB2E0u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x001BB2E0u) [[unlikely]] return; }
L_001BB2E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001BB394; } }
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
    set32(c.r[3], 0u + 63u);
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
    st64((c.r[9].w[0] + 48u), 0ull);
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
L_001BB394:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 59;  if (t) { goto L_001BBA80; } }
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001BB3B4; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BB3B4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001BB418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB3CCu);  if (depth < kMaxDepth) unit_0038(c, 208u, depth + 1u); else { c.pc = 0x001E2C80u; return; } if (c.pc != 0x001BB3CCu) [[unlikely]] return; }
L_001BB3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BB418; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 684u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 8990u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[20].w[0] + 684u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 912u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 164u)));
    st32((c.r[20].w[0] + 568u), c.r[3].w[0]);
    st32((c.r[1].w[0] + 31440u), 0u);
    c.budget -= 17;
L_001BB418:
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BBA80; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 64u);  if (t) { goto L_001BB440; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001BB440:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 64u);  if (t) { goto L_001BB45C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001BB45C:
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[3].d[0] = c.r[2].d[0] << 4;
    c.r[2].d[0] = c.r[4].d[0] | 13ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 9000u);
    st64((c.r[5].w[0] + 192u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001BB494; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st64((c.r[2].w[0] + 192u), c.r[4].d[0]);
    c.budget -= 2;
L_001BB494:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001BB4A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], 0u + 4093u);
    st64((c.r[3].w[0] + 192u), c.r[2].d[0]);
    c.budget -= 3;
L_001BB4A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BB57C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001BB63C; } }
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
    set32(c.r[2], 0u + 4u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 59u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);  if (t) { goto L_001BB638; } }
L_001BB57C:
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BB638; } }
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
    set32(c.r[2], 0u + 128u);
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[9].w[0]), c.r[8].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[9].w[0] + 8u), 0ull);
    set32(c.r[2], 0u + 59u);
    st64((c.r[9].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
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
    c.budget -= 40;
L_001BB638:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001BB63C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4C490000u);  if (t) { goto L_001BB648; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001BB648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB650u); c.r[5].d[0] = c.r[2].d[0] | 18248ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001BB650u) [[unlikely]] return; }
L_001BB650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001BB65C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001BB65C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001BB66C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB66Cu);  if (depth < kMaxDepth) unit_0031(c, 15u, depth + 1u); else { c.pc = 0x001C4350u; return; } if (c.pc != 0x001BB66Cu) [[unlikely]] return; }
L_001BB66C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001BB724; } }
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
    c.budget -= 38;
L_001BB724:
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB730u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001BB730u) [[unlikely]] return; }
L_001BB730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BB744; } }
    set32(c.r[3], ld32((c.r[1].w[0] + 31704u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BB748; } }
L_001BB744:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001BB748:
    set32(c.r[3], ld32((c.r[20].w[0] + 364u)));
    set32(c.r[6], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001BB76C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB768u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 43u, depth + 1u); else { c.pc = 0x00155DC0u; return; } if (c.pc != 0x001BB768u) [[unlikely]] return; }
L_001BB768:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BB76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001BB904; } }
L_001BB774:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] << 2);  if (t) { goto L_001BB8FC; } }
    set32(c.r[5], c.r[6].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1284u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001BB8FC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], 0u + 1u);  if (t) { goto L_001BB82C; } }
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);  if (t) { goto L_001BB818; } }
L_001BB7C8:
    set32(c.r[8], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 1318u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 1284u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 216u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 1316u)));
    set32(c.r[9], c.r[9].w[0] << 6);
    set32(c.r[6], ld32((c.r[6].w[0] + 216u)));
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[10].w[0]) & ~15u, c.r[6]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[10].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[10].w[0] + 48u) & ~15u, c.r[9]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 20;
L_001BB818:
    c.r[6].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB7C8u | kUnwind; return; } goto L_001BB7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BB8D8; } }
L_001BB82C:
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);  if (t) { goto L_001BB8B0; } }
L_001BB84C:
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[10].w[0] << 1);  if (t) { goto L_001BB8AC; } }
    set32(c.r[8], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 1284u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 1316u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 216u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 216u)));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    set32(c.r[7], c.r[10].w[0] << 6);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    set32(c.r[9], c.r[9].w[0] << 6);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[12], c.r[6].w[0] + c.r[7].w[0]);
    ld128((c.r[9].w[0]) & ~15u, c.r[6]);
    ld128((c.r[9].w[0] + 16u) & ~15u, c.r[7]);
    ld128((c.r[9].w[0] + 32u) & ~15u, c.r[8]);
    ld128((c.r[9].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[12].w[0]) & ~15u, c.r[6]);
    st128((c.r[12].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[12].w[0] + 32u) & ~15u, c.r[8]);
    st128((c.r[12].w[0] + 48u) & ~15u, c.r[9]);
    c.budget -= 20;
L_001BB8AC:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001BB8B0:
    set32(c.r[6], ld32((c.r[5].w[0] + 1284u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 236u)));
    c.r[6].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[10].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB84Cu | kUnwind; return; } goto L_001BB84C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1300u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001BB8D8; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BB8D8:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001BB8FC; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[6], 0u + 128u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1284u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BB8FCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0015(c, 43u, depth + 1u); else { c.pc = 0x00155DC0u; return; } if (c.pc != 0x001BB8FCu) [[unlikely]] return; }
L_001BB8FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_001BB904:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001BB774u | kUnwind; return; } goto L_001BB774; } }
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001BB9C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] | 1037ull;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[10].w[0] + 8u), 0ull);
    set32(c.r[3], 0u + 71u);
    st64((c.r[10].w[0] + 16u), 0ull);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
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
L_001BB9C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[12], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001BBA80; } }
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
    set32(c.r[4], 0u + 68u);
    set32(c.r[3], 0u + 66u);
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
    c.budget -= 38;
L_001BBA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001BBAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBAB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001BBAB4u) [[unlikely]] return; }
L_001BBAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BBB28; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 18736u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BBB18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18744u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BBB14; } }
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 18740u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BBB14; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18748u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001BBB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBB18; } }
L_001BBB14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BBB2C; } }
L_001BBB28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BBB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001BBB54u) [[unlikely]] return; }
L_001BBB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BBBC8; } }
    c.f[1] = ld32((c.r[16].w[0] + 224u));
    c.f[0] = ld32((c.r[1].w[0] + 18752u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001BBBB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18760u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001BBBB4; } }
    c.f[1] = ld32((c.r[16].w[0] + 232u));
    c.f[0] = ld32((c.r[1].w[0] + 18756u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001BBBB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 18764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001BBBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001BBBB8; } }
L_001BBBB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001BBBCC; } }
L_001BBBC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001BBBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001BBBE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 864u), 0u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 392u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 59;  if (t) { [[clang::musttail]] return unit_002F(c, 12u, depth); } }
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002F(c, 12u, depth); } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 398u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002F(c, 12u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 1u);  if (t) { goto L_001BBDBC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 912u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BBC60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_001BBDA8; } }
L_001BBC60:
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001BBC7C; } }
L_001BBC7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1428u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_001BBCA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[5].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_001BBCA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 912u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 31808u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], c.r[2].w[0] - c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    st128((c.r[5].w[0]) & ~15u, c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBCF4u); set32(c.r[4], ld32((c.r[1].w[0] + 20144u)));  if (depth < kMaxDepth) unit_0013(c, 198u, depth + 1u); else { c.pc = 0x0014E760u; return; } if (c.pc != 0x001BBCF4u) [[unlikely]] return; }
L_001BBCF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[10], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001BBDA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 63u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 48u), 0ull);
    st64((c.r[8].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[1], c.r[10].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1364u), c.r[2].w[0]);
    c.budget -= 37;
L_001BBDA8:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], ld32((c.r[18].w[0] + 364u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBDBCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0015(c, 43u, depth + 1u); else { c.pc = 0x00155DC0u; return; } if (c.pc != 0x001BBDBCu) [[unlikely]] return; }
L_001BBDBC:
    set32(c.r[3], ld32((c.r[18].w[0] + 1272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[10].d[0] = c.r[2].d[0] | 16384ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[3].w[0] + 192u), c.r[10].d[0]);
    set32(c.r[11], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001BBE88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 1380u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[2].d[0] | 3ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 32769ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], 0u + 71u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[8].w[0]), c.r[7].d[0]);
    set32(c.r[1], c.r[11].w[0] + c.r[1].w[0]);
    st64((c.r[8].w[0] + 8u), 0ull);
    st64((c.r[8].w[0] + 16u), 0ull);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[5].w[0]);
    st64((c.r[8].w[0] + 32u), c.r[4].d[0]);
    st64((c.r[8].w[0] + 40u), c.r[3].d[0]);
    st64((c.r[8].w[0] + 48u), c.r[10].d[0]);
    st64((c.r[8].w[0] + 56u), c.r[2].d[0]);
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
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 39;
L_001BBE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001BBE90u);  if (depth < kMaxDepth) unit_002E(c, 298u, depth + 1u); else { c.pc = 0x001BBAA0u; return; } if (c.pc != 0x001BBE90u) [[unlikely]] return; }
L_001BBE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001BBF64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002F(c, 2u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 80u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 169u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 1380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 1364u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_002F(c, 2u, depth); } }
L_001BBF64:
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1364u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_002F(c, 2u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
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
    set32(c.r[3], 0u + 96u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    st64((c.r[10].w[0]), c.r[9].d[0]);
    set32(c.r[3], 0u + 169u);
    st64((c.r[10].w[0] + 8u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[10].w[0] + 16u), 0ull);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[10].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[3], 0u + 66u);
    st32((c.r[10].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st64((c.r[10].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[10].w[0] + 40u), c.r[5].d[0]);
    st64((c.r[10].w[0] + 48u), c.r[4].d[0]);
    st64((c.r[10].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 1380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 32;
    [[clang::musttail]] return unit_002F(c, 1u, depth);
}

}
