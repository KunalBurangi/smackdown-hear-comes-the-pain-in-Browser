#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0027[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29,
    0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114,
    0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211,
    0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226,
    0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0,
    0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425,
    0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0,
    434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0,
    443, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0,
};

void unit_0027(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0019C000;
    case 2u: goto L_0019C008;
    case 3u: goto L_0019C020;
    case 4u: goto L_0019C038;
    case 5u: goto L_0019C05C;
    case 6u: goto L_0019C0AC;
    case 7u: goto L_0019C1F0;
    case 8u: goto L_0019C1FC;
    case 9u: goto L_0019C240;
    case 10u: goto L_0019C288;
    case 11u: goto L_0019C2D0;
    case 12u: goto L_0019C2E4;
    case 13u: goto L_0019C33C;
    case 14u: goto L_0019C348;
    case 15u: goto L_0019C410;
    case 16u: goto L_0019C49C;
    case 17u: goto L_0019C4AC;
    case 18u: goto L_0019C4D0;
    case 19u: goto L_0019C4E0;
    case 20u: goto L_0019C510;
    case 21u: goto L_0019C5A0;
    case 22u: goto L_0019C5D0;
    case 23u: goto L_0019C610;
    case 24u: goto L_0019C668;
    case 25u: goto L_0019C880;
    case 26u: goto L_0019C980;
    case 27u: goto L_0019CB40;
    case 28u: goto L_0019D4EC;
    case 29u: goto L_0019D4FC;
    case 30u: goto L_0019D508;
    case 31u: goto L_0019D510;
    case 32u: goto L_0019D524;
    case 33u: goto L_0019D544;
    case 34u: goto L_0019D580;
    case 35u: goto L_0019D5CC;
    case 36u: goto L_0019D5D4;
    case 37u: goto L_0019D5E0;
    case 38u: goto L_0019D5E8;
    case 39u: goto L_0019D60C;
    case 40u: goto L_0019D624;
    case 41u: goto L_0019D640;
    case 42u: goto L_0019D658;
    case 43u: goto L_0019D660;
    case 44u: goto L_0019D67C;
    case 45u: goto L_0019D6A4;
    case 46u: goto L_0019D6D0;
    case 47u: goto L_0019D6F8;
    case 48u: goto L_0019D70C;
    case 49u: goto L_0019D714;
    case 50u: goto L_0019D724;
    case 51u: goto L_0019D72C;
    case 52u: goto L_0019D754;
    case 53u: goto L_0019D770;
    case 54u: goto L_0019D780;
    case 55u: goto L_0019D79C;
    case 56u: goto L_0019D7B0;
    case 57u: goto L_0019D7C8;
    case 58u: goto L_0019D7DC;
    case 59u: goto L_0019D7E8;
    case 60u: goto L_0019D7F0;
    case 61u: goto L_0019D80C;
    case 62u: goto L_0019D820;
    case 63u: goto L_0019D840;
    case 64u: goto L_0019D864;
    case 65u: goto L_0019D880;
    case 66u: goto L_0019D8DC;
    case 67u: goto L_0019D8E4;
    case 68u: goto L_0019D8EC;
    case 69u: goto L_0019D8F8;
    case 70u: goto L_0019D900;
    case 71u: goto L_0019D930;
    case 72u: goto L_0019D940;
    case 73u: goto L_0019D948;
    case 74u: goto L_0019D954;
    case 75u: goto L_0019D95C;
    case 76u: goto L_0019D96C;
    case 77u: goto L_0019D980;
    case 78u: goto L_0019D9A0;
    case 79u: goto L_0019D9B4;
    case 80u: goto L_0019D9C0;
    case 81u: goto L_0019D9D4;
    case 82u: goto L_0019DA00;
    case 83u: goto L_0019DA10;
    case 84u: goto L_0019DA18;
    case 85u: goto L_0019DA20;
    case 86u: goto L_0019DA30;
    case 87u: goto L_0019DA40;
    case 88u: goto L_0019DA54;
    case 89u: goto L_0019DA70;
    case 90u: goto L_0019DA94;
    case 91u: goto L_0019DAB0;
    case 92u: goto L_0019DAD0;
    case 93u: goto L_0019DAD8;
    case 94u: goto L_0019DAF0;
    case 95u: goto L_0019DB0C;
    case 96u: goto L_0019DB1C;
    case 97u: goto L_0019DB30;
    case 98u: goto L_0019DB50;
    case 99u: goto L_0019DB74;
    case 100u: goto L_0019DB80;
    case 101u: goto L_0019DB9C;
    case 102u: goto L_0019DBB8;
    case 103u: goto L_0019DBF0;
    case 104u: goto L_0019DC0C;
    case 105u: goto L_0019DC1C;
    case 106u: goto L_0019DC30;
    case 107u: goto L_0019DC50;
    case 108u: goto L_0019DC7C;
    case 109u: goto L_0019DC88;
    case 110u: goto L_0019DCA4;
    case 111u: goto L_0019DCC8;
    case 112u: goto L_0019DCE8;
    case 113u: goto L_0019DCF4;
    case 114u: goto L_0019DCFC;
    case 115u: goto L_0019DD14;
    case 116u: goto L_0019DD1C;
    case 117u: goto L_0019DD50;
    case 118u: goto L_0019DD6C;
    case 119u: goto L_0019DD7C;
    case 120u: goto L_0019DD90;
    case 121u: goto L_0019DDB0;
    case 122u: goto L_0019DDD4;
    case 123u: goto L_0019DDE0;
    case 124u: goto L_0019DDFC;
    case 125u: goto L_0019DE18;
    case 126u: goto L_0019DE50;
    case 127u: goto L_0019DE6C;
    case 128u: goto L_0019DE7C;
    case 129u: goto L_0019DE90;
    case 130u: goto L_0019DEB0;
    case 131u: goto L_0019DED4;
    case 132u: goto L_0019DEE0;
    case 133u: goto L_0019DEFC;
    case 134u: goto L_0019DF18;
    case 135u: goto L_0019DF50;
    case 136u: goto L_0019DF6C;
    case 137u: goto L_0019DF7C;
    case 138u: goto L_0019DF90;
    case 139u: goto L_0019DFB0;
    case 140u: goto L_0019DFD4;
    case 141u: goto L_0019DFE0;
    case 142u: goto L_0019DFFC;
    case 143u: goto L_0019E020;
    case 144u: goto L_0019E060;
    case 145u: goto L_0019E07C;
    case 146u: goto L_0019E08C;
    case 147u: goto L_0019E0A0;
    case 148u: goto L_0019E0C0;
    case 149u: goto L_0019E0E8;
    case 150u: goto L_0019E0F4;
    case 151u: goto L_0019E110;
    case 152u: goto L_0019E134;
    case 153u: goto L_0019E150;
    case 154u: goto L_0019E15C;
    case 155u: goto L_0019E164;
    case 156u: goto L_0019E17C;
    case 157u: goto L_0019E184;
    case 158u: goto L_0019E1B0;
    case 159u: goto L_0019E1CC;
    case 160u: goto L_0019E1DC;
    case 161u: goto L_0019E1F0;
    case 162u: goto L_0019E210;
    case 163u: goto L_0019E238;
    case 164u: goto L_0019E244;
    case 165u: goto L_0019E260;
    case 166u: goto L_0019E284;
    case 167u: goto L_0019E33C;
    case 168u: goto L_0019E348;
    case 169u: goto L_0019E350;
    case 170u: goto L_0019E368;
    case 171u: goto L_0019E370;
    case 172u: goto L_0019E390;
    case 173u: goto L_0019E3AC;
    case 174u: goto L_0019E3BC;
    case 175u: goto L_0019E3D0;
    case 176u: goto L_0019E3F0;
    case 177u: goto L_0019E418;
    case 178u: goto L_0019E424;
    case 179u: goto L_0019E440;
    case 180u: goto L_0019E464;
    case 181u: goto L_0019E4D4;
    case 182u: goto L_0019E4E0;
    case 183u: goto L_0019E4E8;
    case 184u: goto L_0019E500;
    case 185u: goto L_0019E508;
    case 186u: goto L_0019E560;
    case 187u: goto L_0019E57C;
    case 188u: goto L_0019E58C;
    case 189u: goto L_0019E5A0;
    case 190u: goto L_0019E5C0;
    case 191u: goto L_0019E5E8;
    case 192u: goto L_0019E5F4;
    case 193u: goto L_0019E610;
    case 194u: goto L_0019E624;
    case 195u: goto L_0019E638;
    case 196u: goto L_0019E668;
    case 197u: goto L_0019E684;
    case 198u: goto L_0019E690;
    case 199u: goto L_0019E6A8;
    case 200u: goto L_0019E6B0;
    case 201u: goto L_0019E6D0;
    case 202u: goto L_0019E6EC;
    case 203u: goto L_0019E6FC;
    case 204u: goto L_0019E710;
    case 205u: goto L_0019E730;
    case 206u: goto L_0019E758;
    case 207u: goto L_0019E764;
    case 208u: goto L_0019E780;
    case 209u: goto L_0019E7A4;
    case 210u: goto L_0019E7F0;
    case 211u: goto L_0019E7FC;
    case 212u: goto L_0019E804;
    case 213u: goto L_0019E81C;
    case 214u: goto L_0019E824;
    case 215u: goto L_0019E850;
    case 216u: goto L_0019E86C;
    case 217u: goto L_0019E87C;
    case 218u: goto L_0019E890;
    case 219u: goto L_0019E8B0;
    case 220u: goto L_0019E8D8;
    case 221u: goto L_0019E8E4;
    case 222u: goto L_0019E900;
    case 223u: goto L_0019E924;
    case 224u: goto L_0019E968;
    case 225u: goto L_0019E974;
    case 226u: goto L_0019E97C;
    case 227u: goto L_0019E994;
    case 228u: goto L_0019E99C;
    case 229u: goto L_0019E9C0;
    case 230u: goto L_0019E9D4;
    case 231u: goto L_0019E9E8;
    case 232u: goto L_0019E9F0;
    case 233u: goto L_0019E9FC;
    case 234u: goto L_0019EA10;
    case 235u: goto L_0019EA30;
    case 236u: goto L_0019EA5C;
    case 237u: goto L_0019EA78;
    case 238u: goto L_0019EA98;
    case 239u: goto L_0019EAB4;
    case 240u: goto L_0019EAC0;
    case 241u: goto L_0019EACC;
    case 242u: goto L_0019EAE4;
    case 243u: goto L_0019EAEC;
    case 244u: goto L_0019EB10;
    case 245u: goto L_0019EB2C;
    case 246u: goto L_0019EB40;
    case 247u: goto L_0019EB54;
    case 248u: goto L_0019EB8C;
    case 249u: goto L_0019EBB0;
    case 250u: goto L_0019EBD8;
    case 251u: goto L_0019EBF4;
    case 252u: goto L_0019EC1C;
    case 253u: goto L_0019EC3C;
    case 254u: goto L_0019EC60;
    case 255u: goto L_0019EC78;
    case 256u: goto L_0019EC8C;
    case 257u: goto L_0019ECA0;
    case 258u: goto L_0019ECC0;
    case 259u: goto L_0019ECE4;
    case 260u: goto L_0019ED18;
    case 261u: goto L_0019ED20;
    case 262u: goto L_0019ED40;
    case 263u: goto L_0019ED54;
    case 264u: goto L_0019ED64;
    case 265u: goto L_0019ED78;
    case 266u: goto L_0019ED90;
    case 267u: goto L_0019EDB4;
    case 268u: goto L_0019EDE0;
    case 269u: goto L_0019EDF8;
    case 270u: goto L_0019EE10;
    case 271u: goto L_0019EE24;
    case 272u: goto L_0019EE40;
    case 273u: goto L_0019EE64;
    case 274u: goto L_0019EE98;
    case 275u: goto L_0019EEA0;
    case 276u: goto L_0019EEC0;
    case 277u: goto L_0019EED8;
    case 278u: goto L_0019EEEC;
    case 279u: goto L_0019EF00;
    case 280u: goto L_0019EF20;
    case 281u: goto L_0019EF44;
    case 282u: goto L_0019EF54;
    case 283u: goto L_0019EF60;
    case 284u: goto L_0019EFA4;
    case 285u: goto L_0019EFAC;
    case 286u: goto L_0019EFC0;
    case 287u: goto L_0019EFD8;
    case 288u: goto L_0019EFEC;
    case 289u: goto L_0019F000;
    case 290u: goto L_0019F020;
    case 291u: goto L_0019F044;
    case 292u: goto L_0019F054;
    case 293u: goto L_0019F060;
    case 294u: goto L_0019F084;
    case 295u: goto L_0019F08C;
    case 296u: goto L_0019F0A0;
    case 297u: goto L_0019F0B8;
    case 298u: goto L_0019F0CC;
    case 299u: goto L_0019F0E0;
    case 300u: goto L_0019F100;
    case 301u: goto L_0019F124;
    case 302u: goto L_0019F134;
    case 303u: goto L_0019F140;
    case 304u: goto L_0019F148;
    case 305u: goto L_0019F190;
    case 306u: goto L_0019F1A8;
    case 307u: goto L_0019F1BC;
    case 308u: goto L_0019F1D0;
    case 309u: goto L_0019F1F0;
    case 310u: goto L_0019F214;
    case 311u: goto L_0019F224;
    case 312u: goto L_0019F230;
    case 313u: goto L_0019F260;
    case 314u: goto L_0019F278;
    case 315u: goto L_0019F28C;
    case 316u: goto L_0019F2A0;
    case 317u: goto L_0019F2C0;
    case 318u: goto L_0019F2E4;
    case 319u: goto L_0019F2F4;
    case 320u: goto L_0019F300;
    case 321u: goto L_0019F330;
    case 322u: goto L_0019F344;
    case 323u: goto L_0019F354;
    case 324u: goto L_0019F368;
    case 325u: goto L_0019F380;
    case 326u: goto L_0019F39C;
    case 327u: goto L_0019F3AC;
    case 328u: goto L_0019F3B8;
    case 329u: goto L_0019F3D0;
    case 330u: goto L_0019F3E0;
    case 331u: goto L_0019F3F0;
    case 332u: goto L_0019F400;
    case 333u: goto L_0019F414;
    case 334u: goto L_0019F430;
    case 335u: goto L_0019F44C;
    case 336u: goto L_0019F45C;
    case 337u: goto L_0019F468;
    case 338u: goto L_0019F478;
    case 339u: goto L_0019F490;
    case 340u: goto L_0019F4A4;
    case 341u: goto L_0019F4AC;
    case 342u: goto L_0019F4BC;
    case 343u: goto L_0019F4D0;
    case 344u: goto L_0019F4F0;
    case 345u: goto L_0019F508;
    case 346u: goto L_0019F51C;
    case 347u: goto L_0019F52C;
    case 348u: goto L_0019F560;
    case 349u: goto L_0019F578;
    case 350u: goto L_0019F58C;
    case 351u: goto L_0019F5A0;
    case 352u: goto L_0019F5C0;
    case 353u: goto L_0019F5E4;
    case 354u: goto L_0019F620;
    case 355u: goto L_0019F634;
    case 356u: goto L_0019F644;
    case 357u: goto L_0019F658;
    case 358u: goto L_0019F670;
    case 359u: goto L_0019F694;
    case 360u: goto L_0019F6A8;
    case 361u: goto L_0019F6B4;
    case 362u: goto L_0019F6D0;
    case 363u: goto L_0019F6EC;
    case 364u: goto L_0019F6FC;
    case 365u: goto L_0019F710;
    case 366u: goto L_0019F730;
    case 367u: goto L_0019F750;
    case 368u: goto L_0019F75C;
    case 369u: goto L_0019F764;
    case 370u: goto L_0019F83C;
    case 371u: goto L_0019F880;
    case 372u: goto L_0019F888;
    case 373u: goto L_0019F8B0;
    case 374u: goto L_0019F8C4;
    case 375u: goto L_0019F8D4;
    case 376u: goto L_0019F8E8;
    case 377u: goto L_0019F900;
    case 378u: goto L_0019F914;
    case 379u: goto L_0019F91C;
    case 380u: goto L_0019F940;
    case 381u: goto L_0019F950;
    case 382u: goto L_0019F964;
    case 383u: goto L_0019F974;
    case 384u: goto L_0019F988;
    case 385u: goto L_0019F998;
    case 386u: goto L_0019F9AC;
    case 387u: goto L_0019F9C0;
    case 388u: goto L_0019F9E4;
    case 389u: goto L_0019FA00;
    case 390u: goto L_0019FA08;
    case 391u: goto L_0019FA60;
    case 392u: goto L_0019FA74;
    case 393u: goto L_0019FA84;
    case 394u: goto L_0019FA98;
    case 395u: goto L_0019FAB0;
    case 396u: goto L_0019FAC0;
    case 397u: goto L_0019FAD4;
    case 398u: goto L_0019FAE4;
    case 399u: goto L_0019FAF8;
    case 400u: goto L_0019FB10;
    case 401u: goto L_0019FB34;
    case 402u: goto L_0019FB50;
    case 403u: goto L_0019FBB0;
    case 404u: goto L_0019FBC8;
    case 405u: goto L_0019FBD0;
    case 406u: goto L_0019FBE8;
    case 407u: goto L_0019FBFC;
    case 408u: goto L_0019FC10;
    case 409u: goto L_0019FC20;
    case 410u: goto L_0019FC30;
    case 411u: goto L_0019FC40;
    case 412u: goto L_0019FC48;
    case 413u: goto L_0019FC54;
    case 414u: goto L_0019FC5C;
    case 415u: goto L_0019FC64;
    case 416u: goto L_0019FC74;
    case 417u: goto L_0019FC88;
    case 418u: goto L_0019FCA0;
    case 419u: goto L_0019FCB0;
    case 420u: goto L_0019FCBC;
    case 421u: goto L_0019FCC8;
    case 422u: goto L_0019FCD0;
    case 423u: goto L_0019FCE0;
    case 424u: goto L_0019FCF0;
    case 425u: goto L_0019FCFC;
    case 426u: goto L_0019FD04;
    case 427u: goto L_0019FD10;
    case 428u: goto L_0019FD18;
    case 429u: goto L_0019FD28;
    case 430u: goto L_0019FD3C;
    case 431u: goto L_0019FD50;
    case 432u: goto L_0019FD60;
    case 433u: goto L_0019FD6C;
    case 434u: goto L_0019FD80;
    case 435u: goto L_0019FD90;
    case 436u: goto L_0019FD9C;
    case 437u: goto L_0019FDA4;
    case 438u: goto L_0019FDB0;
    case 439u: goto L_0019FDB8;
    case 440u: goto L_0019FDC8;
    case 441u: goto L_0019FDDC;
    case 442u: goto L_0019FDF0;
    case 443u: goto L_0019FE00;
    case 444u: goto L_0019FE0C;
    case 445u: goto L_0019FE20;
    case 446u: goto L_0019FE38;
    case 447u: goto L_0019FE4C;
    case 448u: goto L_0019FE60;
    case 449u: goto L_0019FE80;
    case 450u: goto L_0019FEA4;
    case 451u: goto L_0019FEC0;
    case 452u: goto L_0019FF00;
    case 453u: goto L_0019FF1C;
    case 454u: goto L_0019FF34;
    case 455u: goto L_0019FF48;
    case 456u: goto L_0019FF60;
    case 457u: goto L_0019FF8C;
    case 458u: goto L_0019FFA8;
    case 459u: goto L_0019FFD0;
    case 460u: goto L_0019FFE4;
    case 461u: goto L_0019FFF4;
    default: bad_entry(c, 0x0019C000u); return;
    }
L_0019C000:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_0019C008:
    c.r[5].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BEB0u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 269u, depth); } }
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1024u);
    set32(c.r[16], c.r[16].w[0] + 256u);
    c.budget -= 3;
L_0019C020:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[5].d[0] = c.r[15].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BE54u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 268u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_0019C1F4; } }
L_0019C038:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[24], 0u + 1u);
    set32(c.r[5], c.r[20].w[0] - 1u);
    set32(c.r[25], 0u + 3u);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 2ull;  if (t) { goto L_0019C1E0; } }
L_0019C05C:
    set32(c.r[7], ld32((c.r[18].w[0] + 20u)));
    c.r[15].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[30].d[0] != 0ull; mmi::div(c, 0, c.r[7].w[0], c.r[30].w[0]);  if (t) { goto L_0019C078; } }
    breakpoint(c, 0x0019C074u);
    c.budget -= 1;
L_0019C078:
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    c.r[14].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0019C0A4; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    c.r[7].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0019C0A0; } }
    set32(c.r[15], c.r[17].w[0] + c.r[1].w[0]);
    c.budget -= 1;
L_0019C0A0:
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019C0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0019C1CC; } }
L_0019C0AC:
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != 0ull; mmi::div(c, 0, c.r[7].w[0], c.r[23].w[0]);  if (t) { goto L_0019C0C4; } }
    breakpoint(c, 0x0019C0C0u);
    c.budget -= 1;
L_0019C0C4:
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[24].d[0]; c.r[9].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0019C0DC; } }
    set32(c.r[9], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0019C100; } }
L_0019C0DC:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[6].d[0];  if (t) { goto L_0019C0F0; } }
    set32(c.r[8], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[5].w[0] - c.r[14].w[0]);  if (t) { goto L_0019C100; } }
L_0019C0F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != c.r[25].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0019C104; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[5].w[0] - c.r[14].w[0]);
    c.budget -= 2;
L_0019C100:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019C104:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019C118; } }
    set32(c.r[8], c.r[5].w[0] - c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_0019C11C; } }
L_0019C118:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_0019C11C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::mult(c, 0, c.r[9].w[0], c.r[20].w[0]); c.r[8].d[0] = c.lo.d[0];  if (t) { goto L_0019C134; } }
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_0019C138; } }
L_0019C134:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_0019C138:
    set32(c.r[8], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[7], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = ld8((c.r[8].w[0] + 3u));
    c.r[7].d[0] = c.r[12].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0019C16C; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[7].w[0]);  if (t) { goto L_0019C1C0; } }
L_0019C16C:
    c.r[7].d[0] = ld8((c.r[15].w[0] + 3u));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[10], ld32((c.r[15].w[0])));
    set32(c.r[11], ld32((c.r[8].w[0])));
    mmi::pextlb(c.r[8], c.r[0], c.r[10]);
    mmi::pextlb(c.r[9], c.r[0], c.r[11]);
    mmi::psubsh(c.r[10], c.r[9], c.r[8]);
    mmi::pextlh(c.r[9], c.r[0], c.r[10]);
    mmi::pextlw(c.r[11], c.r[12], c.r[12]);
    mmi::pextlw(c.r[10], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[9], c.r[10], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::paddh(c.r[11], c.r[10], c.r[8]);
    mmi::ppacb(c.r[9], c.r[0], c.r[11]);
    st32((c.r[15].w[0]), c.r[9].w[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019C1BC; } }
    c.r[7].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_0019C1BC:
    st8((c.r[15].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0019C1C0:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 4u);
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
L_0019C1CC:
    c.r[7].d[0] = c.r[13].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C0ACu | kUnwind; return; } goto L_0019C0AC; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1024u);
    c.budget -= 2;
L_0019C1E0:
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    c.r[7].d[0] = c.r[16].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C05Cu | kUnwind; return; } goto L_0019C05C; } }
L_0019C1F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_0019C1F4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.budget -= 2;
L_0019C1FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019BD78u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 266u, depth); } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0019C240:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] + 728u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0019C3E0; } }
    set32(c.r[19], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C288u); set32(c.r[4], c.r[5].w[0] + 13u);  if (depth < kMaxDepth) unit_0028(c, 172u, depth + 1u); else { c.pc = 0x001A1260u; return; } if (c.pc != 0x0019C288u) [[unlikely]] return; }
L_0019C288:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019C2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0019C2B0; } }
L_0019C2A0:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0019C2B0:
    st32((c.r[29].w[0] + 136u), 0u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 652u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_0019C2E8; } }
L_0019C2D0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C2E4u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0019C2E4u) [[unlikely]] return; }
L_0019C2E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0019C2E8:
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C2D0u | kUnwind; return; } goto L_0019C2D0; } }
    set32(c.r[11], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[29].w[0] + 156u);
    set32(c.r[9], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[20].w[0] + c.r[11].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0] + 12u));
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[9], c.r[9].w[0] << 8);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] + c.r[9].w[0]);  if (t) { goto L_0019C3D4; } }
L_0019C33C:
    c.r[15].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0019C3BC; } }
L_0019C348:
    c.r[8].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[22].w[0] + c.r[8].w[0]);
    c.r[11].d[0] = ld8((c.r[10].w[0] + 3u));
    c.budget -= 6;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0019C3B0; } }
    set32(c.r[8], ld32((c.r[15].w[0])));
    st32((c.r[29].w[0] + 156u), c.r[8].w[0]);
    c.r[13].d[0] = ld8((c.r[29].w[0] + 159u));
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[10], ld32((c.r[10].w[0])));
    mmi::pextlw(c.r[11], c.r[11], c.r[11]);
    mmi::pextlb(c.r[8], c.r[0], c.r[9]);
    mmi::pextlb(c.r[9], c.r[0], c.r[10]);
    mmi::pextlh(c.r[10], c.r[0], c.r[9]);
    mmi::pextlw(c.r[9], c.r[11], c.r[11]);
    { Reg128 scratch; mmi::pmulth(c, c.r[11], c.r[10], c.r[9], 0); }
    mmi::psraw(c.r[9], c.r[11], 7u);
    mmi::ppach(c.r[10], c.r[0], c.r[9]);
    mmi::psubsh(c.r[11], c.r[8], c.r[10]);
    mmi::pmaxh(c.r[9], c.r[11], c.r[0]);
    mmi::ppacb(c.r[10], c.r[0], c.r[9]);
    st32((c.r[3].w[0]), c.r[10].w[0]);
    st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[8], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[15].w[0]), c.r[8].w[0]);
    c.budget -= 20;
L_0019C3B0:
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 4u);
    c.budget -= 3;
L_0019C3BC:
    c.r[8].d[0] = c.r[14].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C348u | kUnwind; return; } goto L_0019C348; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1024u);
    c.budget -= 3;
L_0019C3D4:
    c.r[8].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C33Cu | kUnwind; return; } goto L_0019C33C; } }
L_0019C3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0019C410:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[21].w[0] + 64u);  if (t) { goto L_0019C5A0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0019C460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[21].w[0] + 640u) & ~15u, c.r[2]);  if (t) { goto L_0019C474; } }
L_0019C460:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    ld128((c.r[21].w[0] + 640u) & ~15u, c.r[2]);
    c.budget -= 5;
L_0019C474:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 656u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    ld128((c.r[2].w[0] + 640u) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 10;
L_0019C49C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C4ACu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0019C4ACu) [[unlikely]] return; }
L_0019C4AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C49Cu | kUnwind; return; } goto L_0019C49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[17], c.r[19].w[0] + 512u);
    set32(c.r[18], 0u + 128u);
    c.r[16].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
L_0019C4D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C4E0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x00199CB0u; return; } if (c.pc != 0x0019C4E0u) [[unlikely]] return; }
L_0019C4E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C4D0u | kUnwind; return; } goto L_0019C4D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 8982u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x70000000u);  if (t) { goto L_0019C564; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[2].d[0] = c.r[7].d[0] | 1024ull;
    c.r[5].d[0] = c.r[3].d[0] | 18725ull;
    c.budget -= 3;
L_0019C510:
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::multu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 2);
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019C510u | kUnwind; return; } goto L_0019C510; } }
L_0019C564:
    set32(c.r[8], ld32((c.r[20].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[22].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C5A0u); set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 261u, depth + 1u); else { c.pc = 0x0019B9B0u; return; } if (c.pc != 0x0019C5A0u) [[unlikely]] return; }
L_0019C5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0019C5D0:
    set32(c.r[29], c.r[29].w[0] - 1264u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C610u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0010(c, 29u, depth + 1u); else { c.pc = 0x00140690u; return; } if (c.pc != 0x0019C610u) [[unlikely]] return; }
L_0019C610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1188u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 1192u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 1196u), 0u);
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1208u), 0u);
    st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1216u), 0u);
    st32((c.r[16].w[0] + 1220u), 0u);
    st32((c.r[16].w[0] + 1224u), 0u);
    st32((c.r[16].w[0] + 1228u), 0u);
    st8((c.r[16].w[0] + 1232u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1236u), 0u);
    st32((c.r[16].w[0] + 1240u), 0u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019C668u); st8((c.r[16].w[0] + 1264u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 54u, depth + 1u); else { c.pc = 0x0037CCD0u; return; } if (c.pc != 0x0019C668u) [[unlikely]] return; }
L_0019C668:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[8], ld32((c.r[1].w[0] + 20144u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    set32(c.r[9], 0u + 1u);
    st8((c.r[1].w[0] + 1586u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4848u);
    c.f[2] = ld32((c.r[7].w[0]));
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[22], c.r[22].w[0] + 5216u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[6].w[0] + 4864u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 4880u);
    st32((c.r[16].w[0] + 12u), c.f[2]);
    set32(c.r[22], c.r[22].w[0] + 5232u);
    st128((c.r[29].w[0] + 1248u) & ~15u, c.r[22]);
    set32(c.r[4], c.r[4].w[0] + 4896u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] + 4912u);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    set32(c.r[22], c.r[22].w[0] + 5248u);
    st128((c.r[29].w[0] + 1232u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 4928u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[21], c.r[21].w[0] + 4944u);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 5264u);
    st128((c.r[29].w[0] + 1216u) & ~15u, c.r[22]);
    set32(c.r[20], c.r[20].w[0] + 4960u);
    c.f[2] = ld32((c.r[6].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5280u);
    set32(c.r[19], c.r[19].w[0] + 4976u);
    set32(c.r[18], c.r[18].w[0] + 4992u);
    set32(c.r[17], c.r[17].w[0] + 5008u);
    set32(c.r[25], c.r[25].w[0] + 5024u);
    set32(c.r[24], c.r[24].w[0] + 5040u);
    set32(c.r[15], c.r[15].w[0] + 5056u);
    set32(c.r[14], c.r[14].w[0] + 5072u);
    set32(c.r[13], c.r[13].w[0] + 5088u);
    set32(c.r[12], c.r[12].w[0] + 5104u);
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[22]);
    set32(c.r[11], c.r[11].w[0] + 5120u);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5296u);
    set32(c.r[10], c.r[10].w[0] + 5136u);
    set32(c.r[9], c.r[9].w[0] + 5152u);
    set32(c.r[8], c.r[8].w[0] + 5168u);
    set32(c.r[7], c.r[7].w[0] + 5184u);
    set32(c.r[30], c.r[30].w[0] + 5200u);
    set32(c.r[23], c.r[23].w[0] + 6352u);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5328u);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[22]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], c.r[6].w[0] + 5312u);
    set32(c.r[22], c.r[22].w[0] + 5344u);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5360u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5376u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5392u);
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5408u);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5424u);
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5440u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5456u);
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5472u);
    st128((c.r[29].w[0] + 1024u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    set32(c.r[22], c.r[22].w[0] + 5488u);
    st128((c.r[29].w[0] + 1008u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 28u), c.f[1]);
    set32(c.r[22], c.r[22].w[0] + 5504u);
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 5520u);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5536u);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5552u);
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 134;
L_0019C880:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5584u);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[22]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[5], c.r[5].w[0] + 5568u);
    set32(c.r[22], c.r[22].w[0] + 5600u);
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5616u);
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5632u);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5648u);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5664u);
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5680u);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5696u);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5712u);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5728u);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    set32(c.r[22], c.r[22].w[0] + 5744u);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    set32(c.r[22], c.r[22].w[0] + 5760u);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 5776u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5792u);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5808u);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5840u);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[22]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[4], c.r[4].w[0] + 5824u);
    set32(c.r[22], c.r[22].w[0] + 5856u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5872u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[22]);
    c.budget -= 64;
L_0019C980:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5888u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5904u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5920u);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5936u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5952u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5968u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 5984u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 48u), c.f[2]);
    set32(c.r[22], c.r[22].w[0] + 6000u);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    set32(c.r[22], c.r[22].w[0] + 6016u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 6032u);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6048u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6064u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6096u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[3], c.r[3].w[0] + 6080u);
    set32(c.r[22], c.r[22].w[0] + 6112u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6128u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6144u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6160u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6176u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6192u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6208u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6224u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6240u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 60u), c.f[2]);
    set32(c.r[22], c.r[22].w[0] + 6256u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 64u), c.f[1]);
    set32(c.r[22], c.r[22].w[0] + 6272u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 6288u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6304u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6320u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6368u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[2], c.r[2].w[0] + 6336u);
    set32(c.r[22], c.r[22].w[0] + 6384u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[22], c.r[22].w[0] + 6400u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st32((c.r[16].w[0] + 72u), c.f[2]);
    st32((c.r[16].w[0] + 76u), c.f[1]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[1] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.budget -= 112;
L_0019CB40:
    st32((c.r[16].w[0] + 84u), c.f[2]);
    st32((c.r[16].w[0] + 88u), c.f[1]);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[16].w[0] + 96u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[16].w[0] + 108u), c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 120u), c.f[2]);
    st32((c.r[16].w[0] + 124u), c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.f[2] = ld32((c.r[25].w[0]));
    c.f[1] = ld32((c.r[25].w[0] + 4u));
    c.f[0] = ld32((c.r[25].w[0] + 8u));
    st32((c.r[16].w[0] + 144u), c.f[2]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[2] = ld32((c.r[24].w[0]));
    c.f[1] = ld32((c.r[24].w[0] + 4u));
    c.f[0] = ld32((c.r[24].w[0] + 8u));
    st32((c.r[16].w[0] + 156u), c.f[2]);
    st32((c.r[16].w[0] + 160u), c.f[1]);
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[0] = ld32((c.r[15].w[0] + 8u));
    st32((c.r[16].w[0] + 168u), c.f[2]);
    st32((c.r[16].w[0] + 172u), c.f[1]);
    st32((c.r[16].w[0] + 176u), c.f[0]);
    c.f[2] = ld32((c.r[14].w[0]));
    c.f[1] = ld32((c.r[14].w[0] + 4u));
    c.f[0] = ld32((c.r[14].w[0] + 8u));
    st32((c.r[16].w[0] + 180u), c.f[2]);
    st32((c.r[16].w[0] + 184u), c.f[1]);
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.f[2] = ld32((c.r[13].w[0]));
    c.f[1] = ld32((c.r[13].w[0] + 4u));
    c.f[0] = ld32((c.r[13].w[0] + 8u));
    st32((c.r[16].w[0] + 192u), c.f[2]);
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[2] = ld32((c.r[12].w[0]));
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[0] = ld32((c.r[12].w[0] + 8u));
    st32((c.r[16].w[0] + 204u), c.f[2]);
    st32((c.r[16].w[0] + 208u), c.f[1]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[2] = ld32((c.r[11].w[0]));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    st32((c.r[16].w[0] + 216u), c.f[2]);
    st32((c.r[16].w[0] + 220u), c.f[1]);
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[2] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[16].w[0] + 228u), c.f[2]);
    st32((c.r[16].w[0] + 232u), c.f[1]);
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.f[2] = ld32((c.r[9].w[0]));
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[16].w[0] + 240u), c.f[2]);
    st32((c.r[16].w[0] + 244u), c.f[1]);
    st32((c.r[16].w[0] + 248u), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0]));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[16].w[0] + 252u), c.f[2]);
    st32((c.r[16].w[0] + 256u), c.f[1]);
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 264u), c.f[2]);
    st32((c.r[16].w[0] + 268u), c.f[1]);
    st32((c.r[16].w[0] + 272u), c.f[0]);
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[1] = ld32((c.r[30].w[0] + 4u));
    c.f[0] = ld32((c.r[30].w[0] + 8u));
    st32((c.r[16].w[0] + 276u), c.f[2]);
    st32((c.r[16].w[0] + 280u), c.f[1]);
    st32((c.r[16].w[0] + 284u), c.f[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 288u), c.f[2]);
    st32((c.r[16].w[0] + 292u), c.f[1]);
    st32((c.r[16].w[0] + 296u), c.f[0]);
    ld128((c.r[29].w[0] + 1248u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 300u), c.f[2]);
    st32((c.r[16].w[0] + 304u), c.f[1]);
    st32((c.r[16].w[0] + 308u), c.f[0]);
    ld128((c.r[29].w[0] + 1232u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 312u), c.f[2]);
    st32((c.r[16].w[0] + 316u), c.f[1]);
    st32((c.r[16].w[0] + 320u), c.f[0]);
    ld128((c.r[29].w[0] + 1216u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 324u), c.f[2]);
    st32((c.r[16].w[0] + 328u), c.f[1]);
    st32((c.r[16].w[0] + 332u), c.f[0]);
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 336u), c.f[2]);
    st32((c.r[16].w[0] + 340u), c.f[1]);
    st32((c.r[16].w[0] + 344u), c.f[0]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[7]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 348u), c.f[2]);
    st32((c.r[16].w[0] + 352u), c.f[1]);
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 360u), c.f[2]);
    st32((c.r[16].w[0] + 364u), c.f[1]);
    st32((c.r[16].w[0] + 368u), c.f[0]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 372u), c.f[2]);
    st32((c.r[16].w[0] + 376u), c.f[1]);
    st32((c.r[16].w[0] + 380u), c.f[0]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 384u), c.f[2]);
    st32((c.r[16].w[0] + 388u), c.f[1]);
    st32((c.r[16].w[0] + 392u), c.f[0]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 396u), c.f[2]);
    st32((c.r[16].w[0] + 400u), c.f[1]);
    st32((c.r[16].w[0] + 404u), c.f[0]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 408u), c.f[2]);
    st32((c.r[16].w[0] + 412u), c.f[1]);
    st32((c.r[16].w[0] + 416u), c.f[0]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 420u), c.f[2]);
    st32((c.r[16].w[0] + 424u), c.f[1]);
    st32((c.r[16].w[0] + 428u), c.f[0]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 432u), c.f[2]);
    st32((c.r[16].w[0] + 436u), c.f[1]);
    st32((c.r[16].w[0] + 440u), c.f[0]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 444u), c.f[2]);
    st32((c.r[16].w[0] + 448u), c.f[1]);
    st32((c.r[16].w[0] + 452u), c.f[0]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 456u), c.f[2]);
    st32((c.r[16].w[0] + 460u), c.f[1]);
    st32((c.r[16].w[0] + 464u), c.f[0]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 468u), c.f[2]);
    st32((c.r[16].w[0] + 472u), c.f[1]);
    st32((c.r[16].w[0] + 476u), c.f[0]);
    ld128((c.r[29].w[0] + 1024u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 480u), c.f[2]);
    st32((c.r[16].w[0] + 484u), c.f[1]);
    st32((c.r[16].w[0] + 488u), c.f[0]);
    ld128((c.r[29].w[0] + 1008u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 492u), c.f[2]);
    st32((c.r[16].w[0] + 496u), c.f[1]);
    st32((c.r[16].w[0] + 500u), c.f[0]);
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 504u), c.f[2]);
    st32((c.r[16].w[0] + 508u), c.f[1]);
    st32((c.r[16].w[0] + 512u), c.f[0]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 516u), c.f[2]);
    st32((c.r[16].w[0] + 520u), c.f[1]);
    st32((c.r[16].w[0] + 524u), c.f[0]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 528u), c.f[2]);
    st32((c.r[16].w[0] + 532u), c.f[1]);
    st32((c.r[16].w[0] + 536u), c.f[0]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[6]);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 540u), c.f[2]);
    st32((c.r[16].w[0] + 544u), c.f[1]);
    st32((c.r[16].w[0] + 548u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 552u), c.f[2]);
    st32((c.r[16].w[0] + 556u), c.f[1]);
    st32((c.r[16].w[0] + 560u), c.f[0]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 564u), c.f[2]);
    st32((c.r[16].w[0] + 568u), c.f[1]);
    st32((c.r[16].w[0] + 572u), c.f[0]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 576u), c.f[2]);
    st32((c.r[16].w[0] + 580u), c.f[1]);
    st32((c.r[16].w[0] + 584u), c.f[0]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 588u), c.f[2]);
    st32((c.r[16].w[0] + 592u), c.f[1]);
    st32((c.r[16].w[0] + 596u), c.f[0]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 600u), c.f[2]);
    st32((c.r[16].w[0] + 604u), c.f[1]);
    st32((c.r[16].w[0] + 608u), c.f[0]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 612u), c.f[2]);
    st32((c.r[16].w[0] + 616u), c.f[1]);
    st32((c.r[16].w[0] + 620u), c.f[0]);
    ld128((c.r[29].w[0] + 848u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 624u), c.f[2]);
    st32((c.r[16].w[0] + 628u), c.f[1]);
    st32((c.r[16].w[0] + 632u), c.f[0]);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 636u), c.f[2]);
    st32((c.r[16].w[0] + 640u), c.f[1]);
    st32((c.r[16].w[0] + 644u), c.f[0]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 648u), c.f[2]);
    st32((c.r[16].w[0] + 652u), c.f[1]);
    st32((c.r[16].w[0] + 656u), c.f[0]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 660u), c.f[2]);
    st32((c.r[16].w[0] + 664u), c.f[1]);
    st32((c.r[16].w[0] + 668u), c.f[0]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 672u), c.f[2]);
    st32((c.r[16].w[0] + 676u), c.f[1]);
    st32((c.r[16].w[0] + 680u), c.f[0]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 684u), c.f[2]);
    st32((c.r[16].w[0] + 688u), c.f[1]);
    st32((c.r[16].w[0] + 692u), c.f[0]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 696u), c.f[2]);
    st32((c.r[16].w[0] + 700u), c.f[1]);
    st32((c.r[16].w[0] + 704u), c.f[0]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 708u), c.f[2]);
    st32((c.r[16].w[0] + 712u), c.f[1]);
    st32((c.r[16].w[0] + 716u), c.f[0]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 720u), c.f[2]);
    st32((c.r[16].w[0] + 724u), c.f[1]);
    st32((c.r[16].w[0] + 728u), c.f[0]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[5]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 732u), c.f[2]);
    st32((c.r[16].w[0] + 736u), c.f[1]);
    st32((c.r[16].w[0] + 740u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 744u), c.f[2]);
    st32((c.r[16].w[0] + 748u), c.f[1]);
    st32((c.r[16].w[0] + 752u), c.f[0]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 756u), c.f[2]);
    st32((c.r[16].w[0] + 760u), c.f[1]);
    st32((c.r[16].w[0] + 764u), c.f[0]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 768u), c.f[2]);
    st32((c.r[16].w[0] + 772u), c.f[1]);
    st32((c.r[16].w[0] + 776u), c.f[0]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 780u), c.f[2]);
    st32((c.r[16].w[0] + 784u), c.f[1]);
    st32((c.r[16].w[0] + 788u), c.f[0]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 792u), c.f[2]);
    st32((c.r[16].w[0] + 796u), c.f[1]);
    st32((c.r[16].w[0] + 800u), c.f[0]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 804u), c.f[2]);
    st32((c.r[16].w[0] + 808u), c.f[1]);
    st32((c.r[16].w[0] + 812u), c.f[0]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 816u), c.f[2]);
    st32((c.r[16].w[0] + 820u), c.f[1]);
    st32((c.r[16].w[0] + 824u), c.f[0]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 828u), c.f[2]);
    st32((c.r[16].w[0] + 832u), c.f[1]);
    st32((c.r[16].w[0] + 836u), c.f[0]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 840u), c.f[2]);
    st32((c.r[16].w[0] + 844u), c.f[1]);
    st32((c.r[16].w[0] + 848u), c.f[0]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 852u), c.f[2]);
    st32((c.r[16].w[0] + 856u), c.f[1]);
    st32((c.r[16].w[0] + 860u), c.f[0]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 864u), c.f[2]);
    st32((c.r[16].w[0] + 868u), c.f[1]);
    st32((c.r[16].w[0] + 872u), c.f[0]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 876u), c.f[2]);
    st32((c.r[16].w[0] + 880u), c.f[1]);
    st32((c.r[16].w[0] + 884u), c.f[0]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 888u), c.f[2]);
    st32((c.r[16].w[0] + 892u), c.f[1]);
    st32((c.r[16].w[0] + 896u), c.f[0]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 900u), c.f[2]);
    st32((c.r[16].w[0] + 904u), c.f[1]);
    st32((c.r[16].w[0] + 908u), c.f[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 912u), c.f[2]);
    st32((c.r[16].w[0] + 916u), c.f[1]);
    st32((c.r[16].w[0] + 920u), c.f[0]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 924u), c.f[2]);
    st32((c.r[16].w[0] + 928u), c.f[1]);
    st32((c.r[16].w[0] + 932u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 936u), c.f[2]);
    st32((c.r[16].w[0] + 940u), c.f[1]);
    st32((c.r[16].w[0] + 944u), c.f[0]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 948u), c.f[2]);
    st32((c.r[16].w[0] + 952u), c.f[1]);
    st32((c.r[16].w[0] + 956u), c.f[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 960u), c.f[2]);
    st32((c.r[16].w[0] + 964u), c.f[1]);
    st32((c.r[16].w[0] + 968u), c.f[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 972u), c.f[2]);
    st32((c.r[16].w[0] + 976u), c.f[1]);
    st32((c.r[16].w[0] + 980u), c.f[0]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 984u), c.f[2]);
    st32((c.r[16].w[0] + 988u), c.f[1]);
    st32((c.r[16].w[0] + 992u), c.f[0]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 996u), c.f[2]);
    st32((c.r[16].w[0] + 1000u), c.f[1]);
    st32((c.r[16].w[0] + 1004u), c.f[0]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1008u), c.f[2]);
    st32((c.r[16].w[0] + 1012u), c.f[1]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1020u), c.f[2]);
    st32((c.r[16].w[0] + 1024u), c.f[1]);
    st32((c.r[16].w[0] + 1028u), c.f[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1032u), c.f[2]);
    st32((c.r[16].w[0] + 1036u), c.f[1]);
    st32((c.r[16].w[0] + 1040u), c.f[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1044u), c.f[2]);
    st32((c.r[16].w[0] + 1048u), c.f[1]);
    st32((c.r[16].w[0] + 1052u), c.f[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1056u), c.f[2]);
    st32((c.r[16].w[0] + 1060u), c.f[1]);
    st32((c.r[16].w[0] + 1064u), c.f[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1068u), c.f[2]);
    st32((c.r[16].w[0] + 1072u), c.f[1]);
    st32((c.r[16].w[0] + 1076u), c.f[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1080u), c.f[2]);
    st32((c.r[16].w[0] + 1084u), c.f[1]);
    st32((c.r[16].w[0] + 1088u), c.f[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1092u), c.f[2]);
    st32((c.r[16].w[0] + 1096u), c.f[1]);
    st32((c.r[16].w[0] + 1100u), c.f[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1104u), c.f[2]);
    st32((c.r[16].w[0] + 1108u), c.f[1]);
    st32((c.r[16].w[0] + 1112u), c.f[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 1116u), c.f[2]);
    st32((c.r[16].w[0] + 1120u), c.f[1]);
    st32((c.r[16].w[0] + 1124u), c.f[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 1128u), c.f[2]);
    st32((c.r[16].w[0] + 1132u), c.f[1]);
    st32((c.r[16].w[0] + 1136u), c.f[0]);
    c.f[2] = ld32((c.r[23].w[0]));
    c.f[1] = ld32((c.r[23].w[0] + 4u));
    c.f[0] = ld32((c.r[23].w[0] + 8u));
    st32((c.r[16].w[0] + 1140u), c.f[2]);
    st32((c.r[16].w[0] + 1144u), c.f[1]);
    st32((c.r[16].w[0] + 1148u), c.f[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 1152u), c.f[2]);
    st32((c.r[16].w[0] + 1156u), c.f[1]);
    st32((c.r[16].w[0] + 1160u), c.f[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 1164u), c.f[2]);
    st32((c.r[16].w[0] + 1168u), c.f[1]);
    st32((c.r[16].w[0] + 1172u), c.f[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 1176u), c.f[2]);
    st32((c.r[16].w[0] + 1180u), c.f[1]);
    c.budget -= 619;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4ECu); st32((c.r[16].w[0] + 1184u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D4ECu) [[unlikely]] return; }
L_0019D4EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D4FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x0019D4FCu) [[unlikely]] return; }
L_0019D4FC:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 389u, depth + 1u); else { c.pc = 0x002EB100u; return; } if (c.pc != 0x0019D508u) [[unlikely]] return; }
L_0019D508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D510u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0019D510u) [[unlikely]] return; }
L_0019D510:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D524u);  if (depth < kMaxDepth) unit_009F(c, 193u, depth + 1u); else { c.pc = 0x0037DC00u; return; } if (c.pc != 0x0019D524u) [[unlikely]] return; }
L_0019D524:
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D544u); set32(c.r[25], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x0019D544u) [[unlikely]] return; }
L_0019D544:
    st32((c.r[16].w[0] + 1196u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1264u);  c.pc = t; return; }
L_0019D580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0019D624; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D5CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D5CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D5CCu) [[unlikely]] return; }
L_0019D5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5D4u); st32((c.r[17].w[0] + 1196u), 0u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D5D4u) [[unlikely]] return; }
L_0019D5D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x0019D5E0u) [[unlikely]] return; }
L_0019D5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D5E8u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019D5E8u) [[unlikely]] return; }
L_0019D5E8:
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 20144u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D60Cu); st8((c.r[1].w[0] + 1586u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 31u, depth + 1u); else { c.pc = 0x00140700u; return; } if (c.pc != 0x0019D60Cu) [[unlikely]] return; }
L_0019D60C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019D628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D624u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x0019D624u) [[unlikely]] return; }
L_0019D624:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0019D628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019D640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D658u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D658u) [[unlikely]] return; }
L_0019D658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D660u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 393u, depth + 1u); else { c.pc = 0x002EB180u; return; } if (c.pc != 0x0019D660u) [[unlikely]] return; }
L_0019D660:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D758; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D67Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D67Cu) [[unlikely]] return; }
L_0019D67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D758; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6A4u); set32(c.r[25], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x0019D6A4u) [[unlikely]] return; }
L_0019D6A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 1200u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D6D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_0019D6D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6D0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D6D0u) [[unlikely]] return; }
L_0019D6D0:
    set32(c.r[2], 0u + 49u);
    c.budget -= 1;
L_0019D6D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 1196u), 0u);  if (t) { goto L_0019D734; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019D6F8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D6F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D6F8u) [[unlikely]] return; }
L_0019D6F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[1].w[0] + 3840u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D70Cu); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0019D70Cu) [[unlikely]] return; }
L_0019D70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D714u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019D714u) [[unlikely]] return; }
L_0019D714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 26u, depth + 1u); else { c.pc = 0x0016C330u; return; } if (c.pc != 0x0019D724u) [[unlikely]] return; }
L_0019D724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D72Cu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0010(c, 58u, depth + 1u); else { c.pc = 0x00140BE0u; return; } if (c.pc != 0x0019D72Cu) [[unlikely]] return; }
L_0019D72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0019D75C; } }
L_0019D734:
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D754u); set32(c.r[25], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 106u, depth + 1u); else { c.pc = 0x00100B10u; return; } if (c.pc != 0x0019D754u) [[unlikely]] return; }
L_0019D754:
    st32((c.r[16].w[0] + 1196u), c.r[2].w[0]);
    c.budget -= 1;
L_0019D758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0019D75C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019D770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D780u);  if (depth < kMaxDepth) unit_009F(c, 200u, depth + 1u); else { c.pc = 0x0037DCF0u; return; } if (c.pc != 0x0019D780u) [[unlikely]] return; }
L_0019D780:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0019D79C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D79Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D79Cu) [[unlikely]] return; }
L_0019D79C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019D7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019D7C8u) [[unlikely]] return; }
L_0019D7C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7DCu); st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D7DCu) [[unlikely]] return; }
L_0019D7DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x0019D7E8u) [[unlikely]] return; }
L_0019D7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D7F0u); set32(c.r[4], 0u + 624u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019D7F0u) [[unlikely]] return; }
L_0019D7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D80C; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1204u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1188u));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1264u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D80Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 301u, depth + 1u); else { c.pc = 0x0033ECB0u; return; } if (c.pc != 0x0019D80Cu) [[unlikely]] return; }
L_0019D80C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D820u) [[unlikely]] return; }
L_0019D820:
    st8((c.r[17].w[0] + 1204u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019D840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D864u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D864u) [[unlikely]] return; }
L_0019D864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D910; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D880u) [[unlikely]] return; }
L_0019D880:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0019D8D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0019D8CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0019D8C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0019D8BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019D8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0019D908; } }
L_0019D8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019D914; } }
L_0019D8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0019D914; } }
L_0019D8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0019D914; } }
L_0019D8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 46u);  if (t) { goto L_0019D914; } }
L_0019D8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8DCu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019D8DCu) [[unlikely]] return; }
L_0019D8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 173u, depth + 1u); else { c.pc = 0x0031D440u; return; } if (c.pc != 0x0019D8E4u) [[unlikely]] return; }
L_0019D8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8ECu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019D8ECu) [[unlikely]] return; }
L_0019D8EC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D8F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 113u, depth + 1u); else { c.pc = 0x0031CD80u; return; } if (c.pc != 0x0019D8F8u) [[unlikely]] return; }
L_0019D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D900u); set32(c.r[4], ld32((c.r[16].w[0] + 1192u)));  if (depth < kMaxDepth) unit_00AA(c, 288u, depth + 1u); else { c.pc = 0x003AA850u; return; } if (c.pc != 0x0019D900u) [[unlikely]] return; }
L_0019D900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_0019D914; } }
L_0019D908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019D918; } }
L_0019D910:
    set32(c.r[2], 0u + 49u);
    c.budget -= 1;
L_0019D914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019D918:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019D930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D940u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019D940u) [[unlikely]] return; }
L_0019D940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D948u); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D948u) [[unlikely]] return; }
L_0019D948:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D954u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 387u, depth + 1u); else { c.pc = 0x002EB060u; return; } if (c.pc != 0x0019D954u) [[unlikely]] return; }
L_0019D954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D95Cu); set32(c.r[4], 0u + 400u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019D95Cu) [[unlikely]] return; }
L_0019D95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019D96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D96Cu);  if (depth < kMaxDepth) unit_009F(c, 410u, depth + 1u); else { c.pc = 0x0037F8D0u; return; } if (c.pc != 0x0019D96Cu) [[unlikely]] return; }
L_0019D96C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D980u) [[unlikely]] return; }
L_0019D980:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019D9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D9B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019D9B4u) [[unlikely]] return; }
L_0019D9B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D9C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019D9C0u) [[unlikely]] return; }
L_0019D9C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019D9D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019D9D4u) [[unlikely]] return; }
L_0019D9D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 49u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA10u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0019DA10u) [[unlikely]] return; }
L_0019DA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA18u);  if (depth < kMaxDepth) unit_00A2(c, 285u, depth + 1u); else { c.pc = 0x0038A980u; return; } if (c.pc != 0x0019DA18u) [[unlikely]] return; }
L_0019DA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA20u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019DA20u) [[unlikely]] return; }
L_0019DA20:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA30u); st8((c.r[2].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DA30u) [[unlikely]] return; }
L_0019DA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019DA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA40u);  if (depth < kMaxDepth) unit_008F(c, 337u, depth + 1u); else { c.pc = 0x0033F130u; return; } if (c.pc != 0x0019DA40u) [[unlikely]] return; }
L_0019DA40:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DA54u) [[unlikely]] return; }
L_0019DA54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DA94u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DA94u) [[unlikely]] return; }
L_0019DA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DAC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DAB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DAB0u) [[unlikely]] return; }
L_0019DAB0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019DADC; } }
L_0019DAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DAD0u);  if (depth < kMaxDepth) unit_00A2(c, 282u, depth + 1u); else { c.pc = 0x0038A940u; return; } if (c.pc != 0x0019DAD0u) [[unlikely]] return; }
L_0019DAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DAD8u);  if (depth < kMaxDepth) unit_00A2(c, 288u, depth + 1u); else { c.pc = 0x0038A9C0u; return; } if (c.pc != 0x0019DAD8u) [[unlikely]] return; }
L_0019DAD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019DADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB0Cu); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DB0Cu) [[unlikely]] return; }
L_0019DB0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019DB1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 353u, depth + 1u); else { c.pc = 0x0033F2E0u; return; } if (c.pc != 0x0019DB1Cu) [[unlikely]] return; }
L_0019DB1C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DB30u) [[unlikely]] return; }
L_0019DB30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DB88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB74u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DB74u) [[unlikely]] return; }
L_0019DB74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DB80u) [[unlikely]] return; }
L_0019DB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019DBD4; } }
L_0019DB88:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DB9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DB9Cu) [[unlikely]] return; }
L_0019DB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DBD0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DBB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DBB8u) [[unlikely]] return; }
L_0019DBB8:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019DBD4; } }
L_0019DBD0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0019DBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC0Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DC0Cu) [[unlikely]] return; }
L_0019DC0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019DC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 368u, depth + 1u); else { c.pc = 0x0033F490u; return; } if (c.pc != 0x0019DC1Cu) [[unlikely]] return; }
L_0019DC1C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DC30u) [[unlikely]] return; }
L_0019DC30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DC90; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC7Cu); st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DC7Cu) [[unlikely]] return; }
L_0019DC7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DC88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DC88u) [[unlikely]] return; }
L_0019DC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019DD30; } }
L_0019DC90:
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DCA4u) [[unlikely]] return; }
L_0019DCA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DD2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1200u)));
    st32((c.r[17].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DCC8u) [[unlikely]] return; }
L_0019DCC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCE8u); st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DCE8u) [[unlikely]] return; }
L_0019DCE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DCF4u) [[unlikely]] return; }
L_0019DCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DCFCu); st32((c.r[17].w[0] + 1212u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019DCFCu) [[unlikely]] return; }
L_0019DCFC:
    set32(c.r[5], ld32((c.r[17].w[0] + 1216u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 1212u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019DD14u) [[unlikely]] return; }
L_0019DD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019DD1Cu) [[unlikely]] return; }
L_0019DD1C:
    set32(c.r[2], 0u + 23u);
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[16].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0019DD30; } }
L_0019DD2C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0019DD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019DD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD6Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DD6Cu) [[unlikely]] return; }
L_0019DD6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019DD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 370u, depth + 1u); else { c.pc = 0x0033F550u; return; } if (c.pc != 0x0019DD7Cu) [[unlikely]] return; }
L_0019DD7C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DD90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DD90u) [[unlikely]] return; }
L_0019DD90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DDE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDD4u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DDD4u) [[unlikely]] return; }
L_0019DDD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DDE0u) [[unlikely]] return; }
L_0019DDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019DE34; } }
L_0019DDE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DDFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DDFCu) [[unlikely]] return; }
L_0019DDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DE30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DE18u) [[unlikely]] return; }
L_0019DE18:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019DE34; } }
L_0019DE30:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0019DE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE6Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DE6Cu) [[unlikely]] return; }
L_0019DE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019DE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 372u, depth + 1u); else { c.pc = 0x0033F610u; return; } if (c.pc != 0x0019DE7Cu) [[unlikely]] return; }
L_0019DE7C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DE90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DE90u) [[unlikely]] return; }
L_0019DE90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DEE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DED4u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DED4u) [[unlikely]] return; }
L_0019DED4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DEE0u) [[unlikely]] return; }
L_0019DEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019DF34; } }
L_0019DEE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DEFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DEFCu) [[unlikely]] return; }
L_0019DEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019DF30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DF18u) [[unlikely]] return; }
L_0019DF18:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019DF34; } }
L_0019DF30:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0019DF34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF6Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019DF6Cu) [[unlikely]] return; }
L_0019DF6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019DF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 374u, depth + 1u); else { c.pc = 0x0033F6D0u; return; } if (c.pc != 0x0019DF7Cu) [[unlikely]] return; }
L_0019DF7C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DF90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DF90u) [[unlikely]] return; }
L_0019DF90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019DFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019DFE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFD4u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019DFD4u) [[unlikely]] return; }
L_0019DFD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019DFE0u) [[unlikely]] return; }
L_0019DFE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E044; } }
L_0019DFE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019DFFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019DFFCu) [[unlikely]] return; }
L_0019DFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E040; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E020u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E020u) [[unlikely]] return; }
L_0019E020:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14304u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 14u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);  if (t) { goto L_0019E044; } }
L_0019E040:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0019E044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E07Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E07Cu) [[unlikely]] return; }
L_0019E07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E08Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 376u, depth + 1u); else { c.pc = 0x0033F790u; return; } if (c.pc != 0x0019E08Cu) [[unlikely]] return; }
L_0019E08C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E0A0u) [[unlikely]] return; }
L_0019E0A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E0C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E0FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0E8u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E0E8u) [[unlikely]] return; }
L_0019E0E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E0F4u) [[unlikely]] return; }
L_0019E0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E190; } }
L_0019E0FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E110u) [[unlikely]] return; }
L_0019E110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E18C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E134u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E134u) [[unlikely]] return; }
L_0019E134:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14336u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E150u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E150u) [[unlikely]] return; }
L_0019E150:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E15Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E15Cu) [[unlikely]] return; }
L_0019E15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E164u); st32((c.r[16].w[0] + 1212u), 0u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E164u) [[unlikely]] return; }
L_0019E164:
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E17Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E17Cu) [[unlikely]] return; }
L_0019E17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E184u) [[unlikely]] return; }
L_0019E184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0019E190; } }
L_0019E18C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0019E190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E1CCu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E1CCu) [[unlikely]] return; }
L_0019E1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E1DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E1DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 394u, depth + 1u); else { c.pc = 0x0033F9E0u; return; } if (c.pc != 0x0019E1DCu) [[unlikely]] return; }
L_0019E1DC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E1F0u) [[unlikely]] return; }
L_0019E1F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E24C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E238u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E238u) [[unlikely]] return; }
L_0019E238:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E244u) [[unlikely]] return; }
L_0019E244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E37C; } }
L_0019E24C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E260u) [[unlikely]] return; }
L_0019E260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E378; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E284u) [[unlikely]] return; }
L_0019E284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 1212u), 0u);  if (t) { goto L_0019E2D0; } }
    set32(c.r[3], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14384u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_0019E334; } }
L_0019E2D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] - 3u);  if (t) { goto L_0019E308; } }
    set32(c.r[3], 0u + 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14400u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_0019E334; } }
L_0019E308:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019E320; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E334; } }
L_0019E320:
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);
    c.budget -= 5;
L_0019E334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E33Cu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E33Cu) [[unlikely]] return; }
L_0019E33C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E348u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E348u) [[unlikely]] return; }
L_0019E348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E350u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E350u) [[unlikely]] return; }
L_0019E350:
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E368u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E368u) [[unlikely]] return; }
L_0019E368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E370u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E370u) [[unlikely]] return; }
L_0019E370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0019E37C; } }
L_0019E378:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0019E37C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E3ACu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E3ACu) [[unlikely]] return; }
L_0019E3AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E3BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 412u, depth + 1u); else { c.pc = 0x0033FC40u; return; } if (c.pc != 0x0019E3BCu) [[unlikely]] return; }
L_0019E3BC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E3D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E3D0u) [[unlikely]] return; }
L_0019E3D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E3F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E42C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E418u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E418u) [[unlikely]] return; }
L_0019E418:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E424u) [[unlikely]] return; }
L_0019E424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E544; } }
L_0019E42C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E440u) [[unlikely]] return; }
L_0019E440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E540; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E464u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E464u) [[unlikely]] return; }
L_0019E464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14416u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 1216u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 1212u), 0u);  if (t) { goto L_0019E4AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_0019E4CC; } }
L_0019E4AC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0019E4C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E4CC; } }
L_0019E4C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);
    c.budget -= 3;
L_0019E4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4D4u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E4D4u) [[unlikely]] return; }
L_0019E4D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E4E0u) [[unlikely]] return; }
L_0019E4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E4E8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E4E8u) [[unlikely]] return; }
L_0019E4E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E500u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E500u) [[unlikely]] return; }
L_0019E500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E508u) [[unlikely]] return; }
L_0019E508:
    set32(c.r[3], ld32((c.r[16].w[0] + 1216u)));
    c.r[2].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0019E538; } }
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0019E52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E534; } }
L_0019E52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019E538; } }
L_0019E534:
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_0019E538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0019E548; } }
L_0019E540:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0019E544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0019E548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E57Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E57Cu) [[unlikely]] return; }
L_0019E57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E58Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 431u, depth + 1u); else { c.pc = 0x0033FEC0u; return; } if (c.pc != 0x0019E58Cu) [[unlikely]] return; }
L_0019E58C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E5A0u) [[unlikely]] return; }
L_0019E5A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E5FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5E8u); st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E5E8u) [[unlikely]] return; }
L_0019E5E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E5F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E5F4u) [[unlikely]] return; }
L_0019E5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E6BC; } }
L_0019E5FC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E610u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E610u) [[unlikely]] return; }
L_0019E610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E6B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E624u); st32((c.r[17].w[0] + 1220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E624u) [[unlikely]] return; }
L_0019E624:
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E638u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E638u) [[unlikely]] return; }
L_0019E638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14480u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 1216u), c.r[4].w[0]);  if (t) { goto L_0019E67C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 216u, depth + 1u); else { c.pc = 0x0031DAC0u; return; } if (c.pc != 0x0019E668u) [[unlikely]] return; }
L_0019E668:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E67C; } }
    set32(c.r[2], 0u + 11u);
    st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 2;
L_0019E67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E684u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E684u) [[unlikely]] return; }
L_0019E684:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E690u) [[unlikely]] return; }
L_0019E690:
    st32((c.r[17].w[0] + 1212u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1216u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 1212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E6A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E6A8u) [[unlikely]] return; }
L_0019E6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E6B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E6B0u) [[unlikely]] return; }
L_0019E6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0019E6BC; } }
L_0019E6B8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0019E6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E6ECu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E6ECu) [[unlikely]] return; }
L_0019E6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 14u, depth + 1u); else { c.pc = 0x00340160u; return; } if (c.pc != 0x0019E6FCu) [[unlikely]] return; }
L_0019E6FC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E710u) [[unlikely]] return; }
L_0019E710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E76C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E758u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E758u) [[unlikely]] return; }
L_0019E758:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E764u) [[unlikely]] return; }
L_0019E764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E830; } }
L_0019E76C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E780u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E780u) [[unlikely]] return; }
L_0019E780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E82C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E7A4u) [[unlikely]] return; }
L_0019E7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14496u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 1216u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 1212u), 0u);  if (t) { goto L_0019E7DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0019E7DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E7E8; } }
L_0019E7DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);
    c.budget -= 3;
L_0019E7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7F0u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E7F0u) [[unlikely]] return; }
L_0019E7F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E7FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E7FCu) [[unlikely]] return; }
L_0019E7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E804u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E804u) [[unlikely]] return; }
L_0019E804:
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E81Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E81Cu) [[unlikely]] return; }
L_0019E81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E824u) [[unlikely]] return; }
L_0019E824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0019E830; } }
L_0019E82C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0019E830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1233u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E86Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E86Cu) [[unlikely]] return; }
L_0019E86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1233u);  if (t) { goto L_0019E87C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E87Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 16u, depth + 1u); else { c.pc = 0x00340230u; return; } if (c.pc != 0x0019E87Cu) [[unlikely]] return; }
L_0019E87C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E890u) [[unlikely]] return; }
L_0019E890:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019E8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1233u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019E8EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E8D8u); st32((c.r[16].w[0] + 1228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E8D8u) [[unlikely]] return; }
L_0019E8D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E8E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E8E4u) [[unlikely]] return; }
L_0019E8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019E9A8; } }
L_0019E8EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E900u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E900u) [[unlikely]] return; }
L_0019E900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019E9A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E924u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019E924u) [[unlikely]] return; }
L_0019E924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 14520u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);  if (t) { goto L_0019E94C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0019E95C; } }
L_0019E94C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);  if (t) { goto L_0019E960; } }
L_0019E95C:
    st32((c.r[16].w[0] + 1212u), 0u);
    c.budget -= 1;
L_0019E960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E968u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019E968u) [[unlikely]] return; }
L_0019E968:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E974u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019E974u) [[unlikely]] return; }
L_0019E974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E97Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E97Cu) [[unlikely]] return; }
L_0019E97C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E994u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019E994u) [[unlikely]] return; }
L_0019E994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E99Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019E99Cu) [[unlikely]] return; }
L_0019E99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0019E9A8; } }
L_0019E9A4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0019E9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019E9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 512u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019E9D4u) [[unlikely]] return; }
L_0019E9D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019EA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9E8u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019E9E8u) [[unlikely]] return; }
L_0019E9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 312u, depth + 1u); else { c.pc = 0x0031EE80u; return; } if (c.pc != 0x0019E9F0u) [[unlikely]] return; }
L_0019E9F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019E9FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 18u, depth + 1u); else { c.pc = 0x00340300u; return; } if (c.pc != 0x0019E9FCu) [[unlikely]] return; }
L_0019E9FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019EA00:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EA10u) [[unlikely]] return; }
L_0019EA10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EA30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EA5Cu) [[unlikely]] return; }
L_0019EA5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EAF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EA78u) [[unlikely]] return; }
L_0019EA78:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[18], 0u + 18u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EA98u); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019EA98u) [[unlikely]] return; }
L_0019EA98:
    set32(c.r[3], ld32((c.r[16].w[0] + 1216u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 51u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0019EAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAB4u);  if (depth < kMaxDepth) unit_0087(c, 286u, depth + 1u); else { c.pc = 0x0031E6F0u; return; } if (c.pc != 0x0019EAB4u) [[unlikely]] return; }
L_0019EAB4:
    set32(c.r[18], 0u + 16u);
    c.budget -= 1;
L_0019EAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAC0u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019EAC0u) [[unlikely]] return; }
L_0019EAC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019EACCu) [[unlikely]] return; }
L_0019EACC:
    st32((c.r[16].w[0] + 1212u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 238u, depth + 1u); else { c.pc = 0x0031DDE0u; return; } if (c.pc != 0x0019EAE4u) [[unlikely]] return; }
L_0019EAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EAECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 321u, depth + 1u); else { c.pc = 0x0031EFF0u; return; } if (c.pc != 0x0019EAECu) [[unlikely]] return; }
L_0019EAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0019EAF8; } }
L_0019EAF4:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0019EAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0019EB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB2Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019EB2Cu) [[unlikely]] return; }
L_0019EB2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0019EB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB40u);  if (depth < kMaxDepth) unit_0090(c, 20u, depth + 1u); else { c.pc = 0x003403C0u; return; } if (c.pc != 0x0019EB40u) [[unlikely]] return; }
L_0019EB40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019EB44:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EB54u) [[unlikely]] return; }
L_0019EB54:
    set32(c.r[3], ld32((c.r[17].w[0] + 1216u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0019EB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0019EB7C; } }
L_0019EB6C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0019EB7C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0019EB7C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EB8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EB8Cu) [[unlikely]] return; }
L_0019EB8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019EBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EBD8u) [[unlikely]] return; }
L_0019EBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EC48; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EBF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EBF4u) [[unlikely]] return; }
L_0019EBF4:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1216u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0019EC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC1Cu);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019EC1Cu) [[unlikely]] return; }
L_0019EC1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC3Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 247u, depth + 1u); else { c.pc = 0x0031DFB0u; return; } if (c.pc != 0x0019EC3Cu) [[unlikely]] return; }
L_0019EC3C:
    st32((c.r[17].w[0] + 1216u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0019EC4C; } }
L_0019EC48:
    set32(c.r[2], 0u + 29u);
    c.budget -= 1;
L_0019EC4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019EC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC78u); set32(c.r[4], 0u + 19216u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019EC78u) [[unlikely]] return; }
L_0019EC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EC8C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EC8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 392u, depth + 1u); else { c.pc = 0x003AB530u; return; } if (c.pc != 0x0019EC8Cu) [[unlikely]] return; }
L_0019EC8C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019ECA0u) [[unlikely]] return; }
L_0019ECA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019ECC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ECE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019ECE4u) [[unlikely]] return; }
L_0019ECE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019ECFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019ED24; } }
L_0019ECFC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019ED10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019ED28; } }
L_0019ED10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED18u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019ED18u) [[unlikely]] return; }
L_0019ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x0019ED20u) [[unlikely]] return; }
L_0019ED20:
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    c.budget -= 1;
L_0019ED24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019ED28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019ED40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 252u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019ED54u) [[unlikely]] return; }
L_0019ED54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019ED64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED64u);  if (depth < kMaxDepth) unit_00AB(c, 96u, depth + 1u); else { c.pc = 0x003ACB60u; return; } if (c.pc != 0x0019ED64u) [[unlikely]] return; }
L_0019ED64:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019ED78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019ED78u) [[unlikely]] return; }
L_0019ED78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019ED90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EDB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EDB4u) [[unlikely]] return; }
L_0019EDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EDCC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019EDD0; } }
L_0019EDCC:
    set32(c.r[2], 0u + 29u);
    c.budget -= 1;
L_0019EDD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EDE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EDF8u); set32(c.r[4], 0u + 24064u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019EDF8u) [[unlikely]] return; }
L_0019EDF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 331u, depth + 1u); else { c.pc = 0x0037AA60u; return; } if (c.pc != 0x0019EE10u) [[unlikely]] return; }
L_0019EE10:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EE24u) [[unlikely]] return; }
L_0019EE24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EE64u) [[unlikely]] return; }
L_0019EE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EE7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019EEA4; } }
L_0019EE7C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019EE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019EEA8; } }
L_0019EE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EE98u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019EE98u) [[unlikely]] return; }
L_0019EE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x0019EEA0u) [[unlikely]] return; }
L_0019EEA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    c.budget -= 1;
L_0019EEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019EEA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EED8u); set32(c.r[4], 0u + 23840u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019EED8u) [[unlikely]] return; }
L_0019EED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EEEC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EEECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 231u, depth + 1u); else { c.pc = 0x0037A1F0u; return; } if (c.pc != 0x0019EEECu) [[unlikely]] return; }
L_0019EEEC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EF00u) [[unlikely]] return; }
L_0019EF00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019EF44u) [[unlikely]] return; }
L_0019EF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF54u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019EF54u) [[unlikely]] return; }
L_0019EF54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EF60u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019EF60u) [[unlikely]] return; }
L_0019EF60:
    set32(c.r[3], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 28u);  if (t) { goto L_0019EF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019EFB4; } }
L_0019EF78:
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019EFB0; } }
L_0019EF88:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019EF9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019EFB0; } }
L_0019EF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EFA4u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019EFA4u) [[unlikely]] return; }
L_0019EFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EFACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x0019EFACu) [[unlikely]] return; }
L_0019EFAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    c.budget -= 1;
L_0019EFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019EFB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019EFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EFD8u); set32(c.r[4], 0u + 23824u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019EFD8u) [[unlikely]] return; }
L_0019EFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019EFEC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019EFECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 258u, depth + 1u); else { c.pc = 0x0037A420u; return; } if (c.pc != 0x0019EFECu) [[unlikely]] return; }
L_0019EFEC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F000u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F000u) [[unlikely]] return; }
L_0019F000:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F044u) [[unlikely]] return; }
L_0019F044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F054u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F054u) [[unlikely]] return; }
L_0019F054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F060u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F060u) [[unlikely]] return; }
L_0019F060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_0019F090; } }
L_0019F068:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 29u);  if (t) { goto L_0019F07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019F094; } }
L_0019F07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F084u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019F084u) [[unlikely]] return; }
L_0019F084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F08Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 322u, depth + 1u); else { c.pc = 0x0031F030u; return; } if (c.pc != 0x0019F08Cu) [[unlikely]] return; }
L_0019F08C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    c.budget -= 1;
L_0019F090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019F094:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F0B8u); set32(c.r[4], 0u + 23840u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F0B8u) [[unlikely]] return; }
L_0019F0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F0CC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F0CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 286u, depth + 1u); else { c.pc = 0x0037A670u; return; } if (c.pc != 0x0019F0CCu) [[unlikely]] return; }
L_0019F0CC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F0E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F0E0u) [[unlikely]] return; }
L_0019F0E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F124u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F124u) [[unlikely]] return; }
L_0019F124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F134u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F134u) [[unlikely]] return; }
L_0019F134:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F140u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F140u) [[unlikely]] return; }
L_0019F140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F148u);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037E6E0u; return; } if (c.pc != 0x0019F148u) [[unlikely]] return; }
L_0019F148:
    set32(c.r[2], ld32((c.r[2].w[0] + 196u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0019F160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 22u);  if (t) { goto L_0019F174; } }
L_0019F160:
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019F174; } }
L_0019F170:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0019F174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1A8u); set32(c.r[4], 0u + 23840u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F1A8u) [[unlikely]] return; }
L_0019F1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F1BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 310u, depth + 1u); else { c.pc = 0x0037A880u; return; } if (c.pc != 0x0019F1BCu) [[unlikely]] return; }
L_0019F1BC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F1D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F1D0u) [[unlikely]] return; }
L_0019F1D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F214u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F214u) [[unlikely]] return; }
L_0019F214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F224u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F224u) [[unlikely]] return; }
L_0019F224:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F230u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F230u) [[unlikely]] return; }
L_0019F230:
    set32(c.r[3], ld32((c.r[16].w[0] + 1200u)));
    set32(c.r[2], 0u + 27u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1224u), c.r[3].w[0]);  if (t) { goto L_0019F244; } }
L_0019F240:
    set32(c.r[2], 0u + 21u);
    c.budget -= 1;
L_0019F244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F278u); set32(c.r[4], 0u + 23840u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F278u) [[unlikely]] return; }
L_0019F278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F28C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F28Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009E(c, 231u, depth + 1u); else { c.pc = 0x0037A1F0u; return; } if (c.pc != 0x0019F28Cu) [[unlikely]] return; }
L_0019F28C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F2A0u) [[unlikely]] return; }
L_0019F2A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F2E4u) [[unlikely]] return; }
L_0019F2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F2F4u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F2F4u) [[unlikely]] return; }
L_0019F2F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F300u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F300u) [[unlikely]] return; }
L_0019F300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_0019F318; } }
L_0019F308:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1232u));
    set32(c.r[2], 0u + 29u);
    set32(c.r[3], 0u + 4u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0019F318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 544u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F344u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F344u) [[unlikely]] return; }
L_0019F344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F354u);  if (depth < kMaxDepth) unit_009B(c, 137u, depth + 1u); else { c.pc = 0x0036D1B0u; return; } if (c.pc != 0x0019F354u) [[unlikely]] return; }
L_0019F354:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F368u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F368u) [[unlikely]] return; }
L_0019F368:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F39Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F39Cu) [[unlikely]] return; }
L_0019F39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3ACu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F3ACu) [[unlikely]] return; }
L_0019F3AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F3B8u) [[unlikely]] return; }
L_0019F3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_0019F3C4; } }
L_0019F3C0:
    set32(c.r[2], 0u + 23u);
    c.budget -= 1;
L_0019F3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019F3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019F3E0u) [[unlikely]] return; }
L_0019F3E0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 2384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F3F0u); st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F3F0u) [[unlikely]] return; }
L_0019F3F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F400u);  if (depth < kMaxDepth) unit_00A4(c, 72u, depth + 1u); else { c.pc = 0x00390D00u; return; } if (c.pc != 0x0019F400u) [[unlikely]] return; }
L_0019F400:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F414u) [[unlikely]] return; }
L_0019F414:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F44Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F44Cu) [[unlikely]] return; }
L_0019F44C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F45Cu);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F45Cu) [[unlikely]] return; }
L_0019F45C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F468u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F468u) [[unlikely]] return; }
L_0019F468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { goto L_0019F480; } }
L_0019F470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F478u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019F478u) [[unlikely]] return; }
L_0019F478:
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 24u);
    c.budget -= 2;
L_0019F480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019F490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A2(c, 291u, depth + 1u); else { c.pc = 0x0038AA00u; return; } if (c.pc != 0x0019F4A4u) [[unlikely]] return; }
L_0019F4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4ACu); set32(c.r[4], 0u + 5344u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F4ACu) [[unlikely]] return; }
L_0019F4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4BCu);  if (depth < kMaxDepth) unit_00A4(c, 274u, depth + 1u); else { c.pc = 0x00392690u; return; } if (c.pc != 0x0019F4BCu) [[unlikely]] return; }
L_0019F4BC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F4D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F4D0u) [[unlikely]] return; }
L_0019F4D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F508u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 291u, depth + 1u); else { c.pc = 0x0038AA00u; return; } if (c.pc != 0x0019F508u) [[unlikely]] return; }
L_0019F508:
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F51Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F51Cu) [[unlikely]] return; }
L_0019F51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F52Cu);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019F52Cu) [[unlikely]] return; }
L_0019F52C:
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 30u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1232u));
    set32(c.r[2], 0u + 29u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0019F548; } }
L_0019F544:
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_0019F548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F578u); set32(c.r[4], 0u + 3152u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F578u) [[unlikely]] return; }
L_0019F578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F58C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F58Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 357u, depth + 1u); else { c.pc = 0x0038B520u; return; } if (c.pc != 0x0019F58Cu) [[unlikely]] return; }
L_0019F58C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F5A0u) [[unlikely]] return; }
L_0019F5A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F5E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F5E4u) [[unlikely]] return; }
L_0019F5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F600; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1232u));
    set32(c.r[2], 0u + 29u);
    set32(c.r[3], 0u + 30u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0019F604; } }
L_0019F600:
    set32(c.r[2], ld32((c.r[16].w[0] + 1224u)));
    c.budget -= 1;
L_0019F604:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 560u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F634u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F634u) [[unlikely]] return; }
L_0019F634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F644u);  if (depth < kMaxDepth) unit_00A3(c, 127u, depth + 1u); else { c.pc = 0x0038D680u; return; } if (c.pc != 0x0019F644u) [[unlikely]] return; }
L_0019F644:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F658u) [[unlikely]] return; }
L_0019F658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F694u) [[unlikely]] return; }
L_0019F694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019F6BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6A8u); st32((c.r[16].w[0] + 1224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F6A8u) [[unlikely]] return; }
L_0019F6A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6B4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F6B4u) [[unlikely]] return; }
L_0019F6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 27u);  if (t) { goto L_0019F6C0; } }
L_0019F6BC:
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_0019F6C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1232u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6ECu); set32(c.r[4], 0u + 5152u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F6ECu) [[unlikely]] return; }
L_0019F6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1232u);  if (t) { goto L_0019F6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 192u, depth + 1u); else { c.pc = 0x003A1ED0u; return; } if (c.pc != 0x0019F6FCu) [[unlikely]] return; }
L_0019F6FC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F710u) [[unlikely]] return; }
L_0019F710:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1232u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0019F878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F750u);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019F750u) [[unlikely]] return; }
L_0019F750:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F75Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019F75Cu) [[unlikely]] return; }
L_0019F75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F764u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019F764u) [[unlikely]] return; }
L_0019F764:
    set32(c.r[3], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));  if (t) { goto L_0019F788; } }
L_0019F784:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0019F788:
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0019F7A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 23u);  if (t) { goto L_0019F89C; } }
L_0019F7A4:
    c.r[3].d[0] = c.r[6].sd[0] < 12ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F7B8; } }
    c.r[3].d[0] = c.r[6].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 1;
L_0019F7B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0019F804; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 384u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], ld32((c.r[2].w[0] + 272u)));
    set32(c.r[2], 0u + 8u);
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019F7F8; } }
    set32(c.r[2], c.r[6].w[0] - 14u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_0019F7FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0019F89C; } }
L_0019F7F8:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0019F7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019F8A0; } }
L_0019F804:
    c.r[3].d[0] = c.r[6].d[0] ^ 56ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019F81C; } }
    set32(c.r[3], c.r[6].w[0] - 46u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0019F81C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0019F82C; } }
    set32(c.r[3], c.r[6].w[0] - 51u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0019F82C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F83Cu);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031E690u; return; } if (c.pc != 0x0019F83Cu) [[unlikely]] return; }
L_0019F83C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1216u)));
    set32(c.r[2], c.r[2].w[0] - 51u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019F864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_0019F868; } }
L_0019F864:
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_0019F868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0019F89C; } }
L_0019F870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0019F89C; } }
L_0019F878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F880u);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019F880u) [[unlikely]] return; }
L_0019F880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F888u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x0019F888u) [[unlikely]] return; }
L_0019F888:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0019F898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0019F89C; } }
L_0019F898:
    set32(c.r[2], ld32((c.r[16].w[0] + 1228u)));
    c.budget -= 1;
L_0019F89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0019F8A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 5152u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F8C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F8C4u) [[unlikely]] return; }
L_0019F8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F8D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F8D4u);  if (depth < kMaxDepth) unit_00A8(c, 357u, depth + 1u); else { c.pc = 0x003A2C20u; return; } if (c.pc != 0x0019F8D4u) [[unlikely]] return; }
L_0019F8D4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F8E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F8E8u) [[unlikely]] return; }
L_0019F8E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019F914u) [[unlikely]] return; }
L_0019F914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F91Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EBA0u; return; } if (c.pc != 0x0019F91Cu) [[unlikely]] return; }
L_0019F91C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0019F92C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0019F930; } }
L_0019F92C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1220u)));
    c.budget -= 1;
L_0019F930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F950u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019F950u) [[unlikely]] return; }
L_0019F950:
    set32(c.r[2], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 608u);  if (t) { goto L_0019F980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F964u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F964u) [[unlikely]] return; }
L_0019F964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F974u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 38u, depth + 1u); else { c.pc = 0x00340620u; return; } if (c.pc != 0x0019F974u) [[unlikely]] return; }
L_0019F974:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019F978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0])));  if (t) { goto L_0019F9A0; } }
L_0019F980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F988u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019F988u) [[unlikely]] return; }
L_0019F988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019F99C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F998u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0090(c, 22u, depth + 1u); else { c.pc = 0x00340480u; return; } if (c.pc != 0x0019F998u) [[unlikely]] return; }
L_0019F998:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019F99C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0019F9A0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F9ACu) [[unlikely]] return; }
L_0019F9AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019F9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019F9E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019F9E4u) [[unlikely]] return; }
L_0019F9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FA48; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FA00u) [[unlikely]] return; }
L_0019FA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA08u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 136u, depth + 1u); else { c.pc = 0x0031D080u; return; } if (c.pc != 0x0019FA08u) [[unlikely]] return; }
L_0019FA08:
    set32(c.r[2], ld32((c.r[2].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FA2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019FA40; } }
L_0019FA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_0019FA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0019FA50; } }
L_0019FA48:
    set32(c.r[2], 0u + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0019FA50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 1120u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA74u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FA74u) [[unlikely]] return; }
L_0019FA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA84u);  if (depth < kMaxDepth) unit_00A0(c, 147u, depth + 1u); else { c.pc = 0x00381030u; return; } if (c.pc != 0x0019FA84u) [[unlikely]] return; }
L_0019FA84:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FA98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FA98u) [[unlikely]] return; }
L_0019FA98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 31u);  c.pc = t; return; }
L_0019FAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 512u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAD4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FAD4u) [[unlikely]] return; }
L_0019FAD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAE4u);  if (depth < kMaxDepth) unit_0090(c, 54u, depth + 1u); else { c.pc = 0x003407C0u; return; } if (c.pc != 0x0019FAE4u) [[unlikely]] return; }
L_0019FAE4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FAF8u) [[unlikely]] return; }
L_0019FAF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FB34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FB34u) [[unlikely]] return; }
L_0019FB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FB94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FB50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FB50u) [[unlikely]] return; }
L_0019FB50:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1208u)));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0019FB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 34u);  if (t) { goto L_0019FB98; } }
L_0019FB80:
    set32(c.r[3], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[2], 0u + 34u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1212u), c.r[3].w[0]);  if (t) { goto L_0019FB98; } }
L_0019FB94:
    set32(c.r[2], 0u + 31u);
    c.budget -= 1;
L_0019FB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBC8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A2(c, 291u, depth + 1u); else { c.pc = 0x0038AA00u; return; } if (c.pc != 0x0019FBC8u) [[unlikely]] return; }
L_0019FBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBD0u); set32(c.r[4], 0u + 5024u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FBD0u) [[unlikely]] return; }
L_0019FBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FBE8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1208u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 1212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 338u, depth + 1u); else { c.pc = 0x0037EE50u; return; } if (c.pc != 0x0019FBE8u) [[unlikely]] return; }
L_0019FBE8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FBFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FBFCu) [[unlikely]] return; }
L_0019FBFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 291u, depth + 1u); else { c.pc = 0x0038AA00u; return; } if (c.pc != 0x0019FC20u) [[unlikely]] return; }
L_0019FC20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 33u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019FC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019FC40u) [[unlikely]] return; }
L_0019FC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC48u); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FC48u) [[unlikely]] return; }
L_0019FC48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FC54u) [[unlikely]] return; }
L_0019FC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC5Cu);  if (depth < kMaxDepth) unit_00A2(c, 288u, depth + 1u); else { c.pc = 0x0038A9C0u; return; } if (c.pc != 0x0019FC5Cu) [[unlikely]] return; }
L_0019FC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC64u); set32(c.r[4], 0u + 2048u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FC64u) [[unlikely]] return; }
L_0019FC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FC74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC74u);  if (depth < kMaxDepth) unit_00A0(c, 59u, depth + 1u); else { c.pc = 0x00380600u; return; } if (c.pc != 0x0019FC74u) [[unlikely]] return; }
L_0019FC74:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FC88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FC88u) [[unlikely]] return; }
L_0019FC88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FCA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCB0u);  if (depth < kMaxDepth) unit_009F(c, 127u, depth + 1u); else { c.pc = 0x0037D270u; return; } if (c.pc != 0x0019FCB0u) [[unlikely]] return; }
L_0019FCB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCBCu); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FCBCu) [[unlikely]] return; }
L_0019FCBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FCC8u) [[unlikely]] return; }
L_0019FCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCD0u);  if (depth < kMaxDepth) unit_00A2(c, 285u, depth + 1u); else { c.pc = 0x0038A980u; return; } if (c.pc != 0x0019FCD0u) [[unlikely]] return; }
L_0019FCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019FCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019FCF0u) [[unlikely]] return; }
L_0019FCF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FCFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019FCFCu) [[unlikely]] return; }
L_0019FCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD04u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FD04u) [[unlikely]] return; }
L_0019FD04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FD10u) [[unlikely]] return; }
L_0019FD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD18u); set32(c.r[4], 0u + 532u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FD18u) [[unlikely]] return; }
L_0019FD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD28u);  if (depth < kMaxDepth) unit_009B(c, 178u, depth + 1u); else { c.pc = 0x0036D620u; return; } if (c.pc != 0x0019FD28u) [[unlikely]] return; }
L_0019FD28:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FD3Cu) [[unlikely]] return; }
L_0019FD3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD60u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FD60u) [[unlikely]] return; }
L_0019FD60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FD6Cu) [[unlikely]] return; }
L_0019FD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019FD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD90u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 98u, depth + 1u); else { c.pc = 0x0031CBB0u; return; } if (c.pc != 0x0019FD90u) [[unlikely]] return; }
L_0019FD90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FD9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031CEF0u; return; } if (c.pc != 0x0019FD9Cu) [[unlikely]] return; }
L_0019FD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDA4u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FDA4u) [[unlikely]] return; }
L_0019FDA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FDB0u) [[unlikely]] return; }
L_0019FDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDB8u); set32(c.r[4], 0u + 520u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FDB8u) [[unlikely]] return; }
L_0019FDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDC8u);  if (depth < kMaxDepth) unit_009B(c, 209u, depth + 1u); else { c.pc = 0x0036DA00u; return; } if (c.pc != 0x0019FDC8u) [[unlikely]] return; }
L_0019FDC8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FDDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FDDCu) [[unlikely]] return; }
L_0019FDDC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE00u);  if (depth < kMaxDepth) unit_007A(c, 321u, depth + 1u); else { c.pc = 0x002EA9B0u; return; } if (c.pc != 0x0019FE00u) [[unlikely]] return; }
L_0019FE00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007A(c, 412u, depth + 1u); else { c.pc = 0x002EB480u; return; } if (c.pc != 0x0019FE0Cu) [[unlikely]] return; }
L_0019FE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0019FE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE38u); set32(c.r[4], 0u + 608u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FE38u) [[unlikely]] return; }
L_0019FE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FE4C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1204u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 335u, depth + 1u); else { c.pc = 0x0033F0A0u; return; } if (c.pc != 0x0019FE4Cu) [[unlikely]] return; }
L_0019FE4C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FE60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FE60u) [[unlikely]] return; }
L_0019FE60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FEA4u) [[unlikely]] return; }
L_0019FEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FEE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FEC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FEC0u) [[unlikely]] return; }
L_0019FEC0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_0019FED0; } }
    st32((c.r[16].w[0] + 1240u), 0u);
    c.budget -= 1;
L_0019FED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 14672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_0019FEEC; } }
L_0019FEE4:
    st8((c.r[16].w[0] + 1204u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0019FEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF1Cu); set32(c.r[4], 0u + 432u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FF1Cu) [[unlikely]] return; }
L_0019FF1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0019FF38; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 358u, depth + 1u); else { c.pc = 0x00367EA0u; return; } if (c.pc != 0x0019FF34u) [[unlikely]] return; }
L_0019FF34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0019FF38:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FF48u) [[unlikely]] return; }
L_0019FF48:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0019FF60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 1264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FF8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FF8Cu) [[unlikely]] return; }
L_0019FF8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0019FFB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019FFA8u) [[unlikely]] return; }
L_0019FFA8:
    st32((c.r[16].w[0] + 1240u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { goto L_0019FFB8; } }
L_0019FFB4:
    set32(c.r[2], 0u + 38u);
    c.budget -= 1;
L_0019FFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0019FFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 312u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFE4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x0019FFE4u) [[unlikely]] return; }
L_0019FFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0019FFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019FFF4u);  if (depth < kMaxDepth) unit_009B(c, 87u, depth + 1u); else { c.pc = 0x0036CB90u; return; } if (c.pc != 0x0019FFF4u) [[unlikely]] return; }
L_0019FFF4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_0028(c, 1u, depth);
}

}
