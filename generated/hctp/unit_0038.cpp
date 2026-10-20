#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 22, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177,
    0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E0000;
    case 2u: goto L_001E002C;
    case 3u: goto L_001E0050;
    case 4u: goto L_001E007C;
    case 5u: goto L_001E00A8;
    case 6u: goto L_001E00D4;
    case 7u: goto L_001E00E0;
    case 8u: goto L_001E00FC;
    case 9u: goto L_001E01E0;
    case 10u: goto L_001E01F0;
    case 11u: goto L_001E0200;
    case 12u: goto L_001E0214;
    case 13u: goto L_001E02B4;
    case 14u: goto L_001E02E8;
    case 15u: goto L_001E02FC;
    case 16u: goto L_001E030C;
    case 17u: goto L_001E031C;
    case 18u: goto L_001E0330;
    case 19u: goto L_001E03D0;
    case 20u: goto L_001E042C;
    case 21u: goto L_001E0430;
    case 22u: goto L_001E043C;
    case 23u: goto L_001E0440;
    case 24u: goto L_001E044C;
    case 25u: goto L_001E0480;
    case 26u: goto L_001E0490;
    case 27u: goto L_001E04A0;
    case 28u: goto L_001E04B0;
    case 29u: goto L_001E04C0;
    case 30u: goto L_001E04E0;
    case 31u: goto L_001E0500;
    case 32u: goto L_001E0520;
    case 33u: goto L_001E0530;
    case 34u: goto L_001E0580;
    case 35u: goto L_001E05C8;
    case 36u: goto L_001E0660;
    case 37u: goto L_001E06F0;
    case 38u: goto L_001E0700;
    case 39u: goto L_001E0720;
    case 40u: goto L_001E0748;
    case 41u: goto L_001E0770;
    case 42u: goto L_001E07AC;
    case 43u: goto L_001E07C0;
    case 44u: goto L_001E07F0;
    case 45u: goto L_001E0808;
    case 46u: goto L_001E0820;
    case 47u: goto L_001E0850;
    case 48u: goto L_001E0868;
    case 49u: goto L_001E0878;
    case 50u: goto L_001E0890;
    case 51u: goto L_001E08F0;
    case 52u: goto L_001E0904;
    case 53u: goto L_001E092C;
    case 54u: goto L_001E0990;
    case 55u: goto L_001E0A0C;
    case 56u: goto L_001E0A70;
    case 57u: goto L_001E0AE4;
    case 58u: goto L_001E0AF0;
    case 59u: goto L_001E0B6C;
    case 60u: goto L_001E0BD0;
    case 61u: goto L_001E0C44;
    case 62u: goto L_001E0C50;
    case 63u: goto L_001E0CC4;
    case 64u: goto L_001E0CD0;
    case 65u: goto L_001E0D30;
    case 66u: goto L_001E0DC0;
    case 67u: goto L_001E0E24;
    case 68u: goto L_001E0E34;
    case 69u: goto L_001E0E68;
    case 70u: goto L_001E0F00;
    case 71u: goto L_001E1024;
    case 72u: goto L_001E1040;
    case 73u: goto L_001E1080;
    case 74u: goto L_001E10C0;
    case 75u: goto L_001E1140;
    case 76u: goto L_001E1190;
    case 77u: goto L_001E11B4;
    case 78u: goto L_001E1270;
    case 79u: goto L_001E128C;
    case 80u: goto L_001E1340;
    case 81u: goto L_001E1350;
    case 82u: goto L_001E137C;
    case 83u: goto L_001E13B4;
    case 84u: goto L_001E13D8;
    case 85u: goto L_001E13E8;
    case 86u: goto L_001E140C;
    case 87u: goto L_001E1418;
    case 88u: goto L_001E142C;
    case 89u: goto L_001E1460;
    case 90u: goto L_001E14E0;
    case 91u: goto L_001E1610;
    case 92u: goto L_001E1700;
    case 93u: goto L_001E1730;
    case 94u: goto L_001E173C;
    case 95u: goto L_001E1750;
    case 96u: goto L_001E1780;
    case 97u: goto L_001E17A8;
    case 98u: goto L_001E17D0;
    case 99u: goto L_001E17F0;
    case 100u: goto L_001E181C;
    case 101u: goto L_001E1840;
    case 102u: goto L_001E1844;
    case 103u: goto L_001E1870;
    case 104u: goto L_001E1880;
    case 105u: goto L_001E1940;
    case 106u: goto L_001E1950;
    case 107u: goto L_001E1A30;
    case 108u: goto L_001E1A68;
    case 109u: goto L_001E1AB0;
    case 110u: goto L_001E1AE8;
    case 111u: goto L_001E1B2C;
    case 112u: goto L_001E1BB8;
    case 113u: goto L_001E1BF0;
    case 114u: goto L_001E1C00;
    case 115u: goto L_001E1C30;
    case 116u: goto L_001E1C48;
    case 117u: goto L_001E1C60;
    case 118u: goto L_001E1C80;
    case 119u: goto L_001E1CB0;
    case 120u: goto L_001E1CE4;
    case 121u: goto L_001E1D40;
    case 122u: goto L_001E1D5C;
    case 123u: goto L_001E1D70;
    case 124u: goto L_001E1DA0;
    case 125u: goto L_001E1DB8;
    case 126u: goto L_001E1DD0;
    case 127u: goto L_001E1DF0;
    case 128u: goto L_001E1E20;
    case 129u: goto L_001E1E50;
    case 130u: goto L_001E1E98;
    case 131u: goto L_001E1EF0;
    case 132u: goto L_001E1F10;
    case 133u: goto L_001E1F34;
    case 134u: goto L_001E1F4C;
    case 135u: goto L_001E1F94;
    case 136u: goto L_001E20C4;
    case 137u: goto L_001E20D8;
    case 138u: goto L_001E20E4;
    case 139u: goto L_001E2100;
    case 140u: goto L_001E211C;
    case 141u: goto L_001E2168;
    case 142u: goto L_001E2184;
    case 143u: goto L_001E21CC;
    case 144u: goto L_001E21E0;
    case 145u: goto L_001E220C;
    case 146u: goto L_001E2218;
    case 147u: goto L_001E2280;
    case 148u: goto L_001E22C0;
    case 149u: goto L_001E22CC;
    case 150u: goto L_001E22E4;
    case 151u: goto L_001E2300;
    case 152u: goto L_001E237C;
    case 153u: goto L_001E2390;
    case 154u: goto L_001E23BC;
    case 155u: goto L_001E23C8;
    case 156u: goto L_001E2410;
    case 157u: goto L_001E2450;
    case 158u: goto L_001E245C;
    case 159u: goto L_001E2474;
    case 160u: goto L_001E2490;
    case 161u: goto L_001E253C;
    case 162u: goto L_001E2550;
    case 163u: goto L_001E2580;
    case 164u: goto L_001E268C;
    case 165u: goto L_001E26C0;
    case 166u: goto L_001E26EC;
    case 167u: goto L_001E2738;
    case 168u: goto L_001E2754;
    case 169u: goto L_001E2778;
    case 170u: goto L_001E278C;
    case 171u: goto L_001E2798;
    case 172u: goto L_001E27A0;
    case 173u: goto L_001E27BC;
    case 174u: goto L_001E27C8;
    case 175u: goto L_001E27D0;
    case 176u: goto L_001E27F0;
    case 177u: goto L_001E27FC;
    case 178u: goto L_001E2804;
    case 179u: goto L_001E2820;
    case 180u: goto L_001E282C;
    case 181u: goto L_001E2834;
    case 182u: goto L_001E2850;
    case 183u: goto L_001E285C;
    case 184u: goto L_001E2874;
    case 185u: goto L_001E2920;
    case 186u: goto L_001E2988;
    case 187u: goto L_001E29A8;
    case 188u: goto L_001E29C0;
    case 189u: goto L_001E29E0;
    case 190u: goto L_001E2A30;
    case 191u: goto L_001E2A54;
    case 192u: goto L_001E2A84;
    case 193u: goto L_001E2AB8;
    case 194u: goto L_001E2AD0;
    case 195u: goto L_001E2B00;
    case 196u: goto L_001E2B20;
    case 197u: goto L_001E2B3C;
    case 198u: goto L_001E2B50;
    case 199u: goto L_001E2B98;
    case 200u: goto L_001E2BAC;
    case 201u: goto L_001E2BD0;
    case 202u: goto L_001E2BF8;
    case 203u: goto L_001E2C0C;
    case 204u: goto L_001E2C1C;
    case 205u: goto L_001E2C34;
    case 206u: goto L_001E2C3C;
    case 207u: goto L_001E2C40;
    case 208u: goto L_001E2C80;
    case 209u: goto L_001E2D4C;
    case 210u: goto L_001E2DA4;
    case 211u: goto L_001E2DB8;
    case 212u: goto L_001E2DD0;
    case 213u: goto L_001E2DF0;
    case 214u: goto L_001E2E04;
    case 215u: goto L_001E2E24;
    case 216u: goto L_001E2F18;
    case 217u: goto L_001E2F6C;
    case 218u: goto L_001E2F84;
    case 219u: goto L_001E2FAC;
    case 220u: goto L_001E2FC4;
    case 221u: goto L_001E3030;
    case 222u: goto L_001E3040;
    case 223u: goto L_001E3048;
    case 224u: goto L_001E3070;
    case 225u: goto L_001E3088;
    case 226u: goto L_001E3094;
    case 227u: goto L_001E30D4;
    case 228u: goto L_001E3100;
    case 229u: goto L_001E3118;
    case 230u: goto L_001E313C;
    case 231u: goto L_001E3154;
    case 232u: goto L_001E3174;
    case 233u: goto L_001E31A0;
    case 234u: goto L_001E31B8;
    case 235u: goto L_001E3204;
    case 236u: goto L_001E3214;
    case 237u: goto L_001E3230;
    case 238u: goto L_001E3240;
    case 239u: goto L_001E3250;
    case 240u: goto L_001E3264;
    case 241u: goto L_001E32BC;
    case 242u: goto L_001E32D0;
    case 243u: goto L_001E336C;
    case 244u: goto L_001E3384;
    case 245u: goto L_001E33BC;
    case 246u: goto L_001E33D8;
    case 247u: goto L_001E33F8;
    case 248u: goto L_001E3414;
    case 249u: goto L_001E342C;
    case 250u: goto L_001E3444;
    case 251u: goto L_001E3488;
    case 252u: goto L_001E3494;
    case 253u: goto L_001E352C;
    case 254u: goto L_001E3540;
    case 255u: goto L_001E3554;
    case 256u: goto L_001E3568;
    case 257u: goto L_001E3588;
    case 258u: goto L_001E35A4;
    case 259u: goto L_001E35CC;
    case 260u: goto L_001E35E4;
    case 261u: goto L_001E3648;
    case 262u: goto L_001E3658;
    case 263u: goto L_001E3678;
    case 264u: goto L_001E3694;
    case 265u: goto L_001E36C0;
    case 266u: goto L_001E36DC;
    case 267u: goto L_001E36F4;
    case 268u: goto L_001E371C;
    case 269u: goto L_001E3734;
    case 270u: goto L_001E3764;
    case 271u: goto L_001E376C;
    case 272u: goto L_001E377C;
    case 273u: goto L_001E3788;
    case 274u: goto L_001E37A0;
    case 275u: goto L_001E37B8;
    case 276u: goto L_001E37F0;
    case 277u: goto L_001E381C;
    case 278u: goto L_001E3834;
    case 279u: goto L_001E384C;
    case 280u: goto L_001E3874;
    case 281u: goto L_001E388C;
    case 282u: goto L_001E38B8;
    case 283u: goto L_001E38D0;
    case 284u: goto L_001E38FC;
    case 285u: goto L_001E390C;
    case 286u: goto L_001E3924;
    case 287u: goto L_001E394C;
    case 288u: goto L_001E3964;
    case 289u: goto L_001E398C;
    case 290u: goto L_001E39B8;
    case 291u: goto L_001E39C8;
    case 292u: goto L_001E39E0;
    case 293u: goto L_001E3A08;
    case 294u: goto L_001E3A20;
    case 295u: goto L_001E3A40;
    case 296u: goto L_001E3A6C;
    case 297u: goto L_001E3A7C;
    case 298u: goto L_001E3A94;
    case 299u: goto L_001E3ABC;
    case 300u: goto L_001E3AD4;
    case 301u: goto L_001E3AF8;
    case 302u: goto L_001E3B24;
    case 303u: goto L_001E3B34;
    case 304u: goto L_001E3B4C;
    case 305u: goto L_001E3B74;
    case 306u: goto L_001E3B8C;
    case 307u: goto L_001E3B98;
    case 308u: goto L_001E3BA8;
    case 309u: goto L_001E3BC4;
    case 310u: goto L_001E3BD4;
    case 311u: goto L_001E3BE4;
    case 312u: goto L_001E3C08;
    case 313u: goto L_001E3C18;
    case 314u: goto L_001E3C88;
    case 315u: goto L_001E3CC8;
    case 316u: goto L_001E3D0C;
    case 317u: goto L_001E3D54;
    case 318u: goto L_001E3D70;
    case 319u: goto L_001E3D88;
    case 320u: goto L_001E3DA8;
    case 321u: goto L_001E3DE8;
    case 322u: goto L_001E3E2C;
    case 323u: goto L_001E3E74;
    case 324u: goto L_001E3EAC;
    case 325u: goto L_001E3EC8;
    case 326u: goto L_001E3ED8;
    case 327u: goto L_001E3EEC;
    case 328u: goto L_001E3EFC;
    case 329u: goto L_001E3F44;
    case 330u: goto L_001E3F6C;
    case 331u: goto L_001E3F98;
    case 332u: goto L_001E3FB0;
    case 333u: goto L_001E3FEC;
    default: bad_entry(c, 0x001E0000u); return;
    }
L_001E0000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E042C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E002Cu); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001E002Cu) [[unlikely]] return; }
L_001E002C:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_001E0058; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0058; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0050u); set32(c.r[4], ld32((c.r[3].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E0050u) [[unlikely]] return; }
L_001E0050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[0];  if (t) { goto L_001E00D8; } }
L_001E0058:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0084; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E007Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E007Cu) [[unlikely]] return; }
L_001E007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E00D4; } }
L_001E0084:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E00B0; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 240u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00A8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E00A8u) [[unlikely]] return; }
L_001E00A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E00D4; } }
L_001E00B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00D4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E00D4u) [[unlikely]] return; }
L_001E00D4:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_001E00D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00E0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 29u, depth + 1u); else { c.pc = 0x00144640u; return; } if (c.pc != 0x001E00E0u) [[unlikely]] return; }
L_001E00E0:
    set32(c.r[2], c.r[29].w[0] + 144u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E00FCu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E00FCu) [[unlikely]] return; }
L_001E00FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0148; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[6], c.r[18].w[0] << 2);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_001E0188; } }
L_001E0148:
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 20808u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 16;
L_001E0188:
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 144u);
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
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001E02E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01E0u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001E01E0u) [[unlikely]] return; }
L_001E01E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E01F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E01F0u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001E01F0u) [[unlikely]] return; }
L_001E01F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E02DC; } }
L_001E01F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0200u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E0200u) [[unlikely]] return; }
L_001E0200:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E02DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0214u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001E0214u) [[unlikely]] return; }
L_001E0214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0240; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 9;
L_001E0240:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E0280; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 144u);  if (t) { goto L_001E0284; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[1].w[0] + 20808u));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001E02A0; } }
L_001E0280:
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001E0284:
    c.f[0] = ld32((c.r[1].w[0] + 20712u));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 7;
L_001E02A0:
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E02DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02B4u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E02B4u) [[unlikely]] return; }
L_001E02B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E02DC; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[29].w[0] + 144u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 8;
L_001E02DC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E02E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02E8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0037(c, 172u, depth + 1u); else { c.pc = 0x001DFD90u; return; } if (c.pc != 0x001E02E8u) [[unlikely]] return; }
L_001E02E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E03FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E02FCu); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x001B9A10u; return; } if (c.pc != 0x001E02FCu) [[unlikely]] return; }
L_001E02FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E030Cu); set32(c.r[4], ld32((c.r[21].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001E030Cu) [[unlikely]] return; }
L_001E030C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E03FC; } }
L_001E0314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E031Cu); set32(c.r[4], ld32((c.r[21].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E031Cu) [[unlikely]] return; }
L_001E031C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E03FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0330u); set32(c.r[4], ld32((c.r[21].w[0] + 28u)));  if (depth < kMaxDepth) unit_0034(c, 90u, depth + 1u); else { c.pc = 0x001D0BC0u; return; } if (c.pc != 0x001E0330u) [[unlikely]] return; }
L_001E0330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E035C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 9;
L_001E035C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E039C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 128u);  if (t) { goto L_001E03A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[1].w[0] + 20704u));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001E03BC; } }
L_001E039C:
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001E03A0:
    c.f[0] = ld32((c.r[1].w[0] + 20744u));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 7;
L_001E03BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E0420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E03D0u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E03D0u) [[unlikely]] return; }
L_001E03D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001E0424; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[29].w[0] + 128u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_001E0420; } }
L_001E03FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[0] = c.r[2].w[0];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[5] = c.r[2];
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.budget -= 9;
L_001E0420:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001E0424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E042Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0037(c, 172u, depth + 1u); else { c.pc = 0x001DFD90u; return; } if (c.pc != 0x001E042Cu) [[unlikely]] return; }
L_001E042C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001E0430:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFF68u | kUnwind; return; } [[clang::musttail]] return unit_0037(c, 180u, depth); } }
L_001E043C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E0440:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DFEBCu | kUnwind; return; } [[clang::musttail]] return unit_0037(c, 176u, depth); } }
L_001E044C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001E0480:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE1B0u | kUnwind; return; } [[clang::musttail]] return unit_0037(c, 110u, depth); }
L_001E0490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE060u | kUnwind; return; } [[clang::musttail]] return unit_0037(c, 101u, depth); }
L_001E04A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DE060u | kUnwind; return; } [[clang::musttail]] return unit_0037(c, 101u, depth); }
L_001E04B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E04C0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001E04C0u) [[unlikely]] return; }
L_001E04C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21779u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E04E0:
    set32(c.r[2], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  c.pc = t; return; }
L_001E0500:
    set32(c.r[2], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[2].w[0]));  c.pc = t; return; }
L_001E0520:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 476u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001E0530:
    c.r[4].d[0] = ld16((c.r[4].w[0] + 474u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 2ull;  if (t) { goto L_001E0550; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001E056C; } }
L_001E0550:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E0560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E056C; } }
L_001E0560:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[2], 0u + 2u);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_001E056C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[1].w[0] + 31472u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E05B4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1240u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[29].w[0] + 48u);  if (t) { goto L_001E05BC; } }
L_001E05B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E06D8; } }
L_001E05BC:
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E05C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 112u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001E05C8u) [[unlikely]] return; }
L_001E05C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E05DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] | 8ull;  if (t) { goto L_001E05E0; } }
L_001E05DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_001E05E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[1].w[0] - 1536u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    set32(c.r[3], c.r[5].w[0] - 127u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[4].w[0] - 127u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.f[0]);  if (t) { goto L_001E0654; } }
    c.r[1].d[0] = c.r[5].sd[0] < 191ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_001E0654; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 191ll ? 1ull : 0ull;  if (t) { goto L_001E0654; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E06D4; } }
L_001E0654:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0660u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E0660u) [[unlikely]] return; }
L_001E0660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E06A4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E06C0; } }
L_001E06A4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E06C0:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 512u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_001E06D8; } }
L_001E06D4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001E06D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E06F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0700u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0012CB10u; return; } if (c.pc != 0x001E0700u) [[unlikely]] return; }
L_001E0700:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 21784u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x67470000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0748u); c.r[5].d[0] = c.r[2].d[0] | 28740ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001E0748u) [[unlikely]] return; }
L_001E0748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8336u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 164u)));
    c.r[3].d[0] = c.r[5].sd[0] < 8100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 8200ll ? 1ull : 0ull;  if (t) { goto L_001E0794; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E07AC; } }
L_001E0794:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[6].w[0] + 900u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E07AC; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E07ACu) [[unlikely]] return; }
L_001E07AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E07C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E0808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E07F0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001E07F0u) [[unlikely]] return; }
L_001E07F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E080C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E0808u) [[unlikely]] return; }
L_001E0808:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E080C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0820:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001E0850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0868u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E0868u) [[unlikely]] return; }
L_001E0868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E0878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0878u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 106u, depth + 1u); else { c.pc = 0x001E55C0u; return; } if (c.pc != 0x001E0878u) [[unlikely]] return; }
L_001E0878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0890:
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001E08AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 28336u), c.r[2].w[0]);  if (t) { goto L_001E08B4; } }
L_001E08AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28336u), c.r[2].w[0]);
    c.budget -= 2;
L_001E08B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001E08D0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);  if (t) { goto L_001E08DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_001E08D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 28328u), c.r[2].w[0]);  if (t) { goto L_001E08E4; } }
L_001E08DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[1].w[0] - 28328u), c.r[2].w[0]);
    c.budget -= 2;
L_001E08E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28336u);  c.pc = t; return; }
L_001E08F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0904u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 50u, depth + 1u); else { c.pc = 0x001E0890u; return; } if (c.pc != 0x001E0904u) [[unlikely]] return; }
L_001E0904:
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[13] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E092Cu); c.f[12] = c.f[2] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001E092Cu) [[unlikely]] return; }
L_001E092C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E095C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E0978; } }
L_001E095C:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0978; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E0978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E0990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E09AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[3];  if (t) { goto L_001E09F4; } }
L_001E09AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E09D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[5].w[0] + 8u));  if (t) { goto L_001E09F8; } }
L_001E09D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);  if (t) { goto L_001E09E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[3];  if (t) { goto L_001E09F4; } }
L_001E09E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
L_001E09F4:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 1;
L_001E09F8:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[13] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0A0Cu); c.f[12] = c.f[1] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001E0A0Cu) [[unlikely]] return; }
L_001E0A0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E0A3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E0A58; } }
L_001E0A3C:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0A58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E0A58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E0A8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0AD0; } }
L_001E0A8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0AAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0AD0; } }
L_001E0AAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42820000u);  if (t) { goto L_001E0AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0AD0; } }
L_001E0AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2820000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_001E0AD0:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0AE4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001E0AE4u) [[unlikely]] return; }
L_001E0AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E0B0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[3];  if (t) { goto L_001E0B54; } }
L_001E0B0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0B30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[5].w[0] + 8u));  if (t) { goto L_001E0B58; } }
L_001E0B30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_001E0B48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[3] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[3];  if (t) { goto L_001E0B54; } }
L_001E0B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
L_001E0B54:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 1;
L_001E0B58:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[13] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0B6Cu); c.f[12] = c.f[1] ^ fp::kSign;  if (depth < kMaxDepth) unit_0011(c, 97u, depth + 1u); else { c.pc = 0x00145DD0u; return; } if (c.pc != 0x001E0B6Cu) [[unlikely]] return; }
L_001E0B6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E0B9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E0BB8; } }
L_001E0B9C:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E0BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E0BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E0BEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0C30; } }
L_001E0BEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0C0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0C30; } }
L_001E0C0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_001E0C24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0C30; } }
L_001E0C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1D00000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_001E0C30:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0C44u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001E0C44u) [[unlikely]] return; }
L_001E0C44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E0C6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0CB0; } }
L_001E0C6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0C8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0CB0; } }
L_001E0C8C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001E0CA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_001E0CB0; } }
L_001E0CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_001E0CB0:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0CC4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 13u, depth + 1u); else { c.pc = 0x00144360u; return; } if (c.pc != 0x001E0CC4u) [[unlikely]] return; }
L_001E0CC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E0CD0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0D0C; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E0CFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E0CFC:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_001E0D24; } }
L_001E0D0C:
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001E0D24; } }
L_001E0D24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0D30:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = c.f[2] ^ fp::kSign;  if (t) { goto L_001E0D4C; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_001E0D4C:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[1] ^ fp::kSign;  if (t) { goto L_001E0D68; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_001E0D68:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E0D94; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001E0D8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E0D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0DB0; } }
L_001E0D94:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 3u);  if (t) { goto L_001E0DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E0DB0; } }
L_001E0DB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E0DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.f[21] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E0DF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_001E0DFC; } }
L_001E0DF4:
    c.f[21] = c.f[21] ^ fp::kSign;
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_001E0DFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E0E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E0E1C; } }
L_001E0E18:
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_001E0E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E24u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x00223900u; return; } if (c.pc != 0x001E0E24u) [[unlikely]] return; }
L_001E0E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E116C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E34u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E0E34u) [[unlikely]] return; }
L_001E0E34:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E0E9C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1561u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E0E60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E0E9C; } }
L_001E0E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0E68u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E0E68u) [[unlikely]] return; }
L_001E0E68:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E0E9C; } }
    c.f[1] = ld32((c.r[16].w[0] + 228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_001E0E9C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E1178; } }
L_001E0E9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[3].w[0] - 1202u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1200u);  if (t) { goto L_001E0EC4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0EC4; } }
    set32(c.r[2], 0u + 1201u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E0EDC; } }
L_001E0EC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E0EDC; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E1178; } }
L_001E0EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], 0u + 5950u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E0EF8; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E1178; } }
L_001E0EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E0F00u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E0F00u) [[unlikely]] return; }
L_001E0F00:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E0F54; } }
    c.f[0] = ld32((c.r[1].w[0] + 21656u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);  if (t) { goto L_001E0F58; } }
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0F54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC22C0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);  if (t) { goto L_001E0F54; } }
    set32(c.r[3], 0u + 10u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E1178; } }
L_001E0F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.budget -= 1;
L_001E0F58:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E0F78; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E0FCC; } }
L_001E0F78:
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 153u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 60u);  if (t) { goto L_001E0FCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0FCC; } }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 62u);  if (t) { goto L_001E0FCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0FCC; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 560u);  if (t) { goto L_001E0FCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E0FCC; } }
    set32(c.r[2], 0u + 710u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 713u);  if (t) { goto L_001E0FCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E0FEC; } }
L_001E0FCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 220u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1672u);  if (t) { goto L_001E105C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E1058; } }
L_001E0FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1050; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1024u);  if (depth < kMaxDepth) unit_0008(c, 168u, depth + 1u); else { c.pc = 0x00121A30u; return; } if (c.pc != 0x001E1024u) [[unlikely]] return; }
L_001E1024:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
L_001E1040:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E1050; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001E1050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 228u));  if (t) { goto L_001E1178; } }
L_001E1058:
    set32(c.r[2], 0u + 1672u);
    c.budget -= 1;
L_001E105C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_001E1094; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E1088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC23C0000u);
    set32(c.r[3], 0u + 10u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_001E1080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E1178; } }
L_001E1088:
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 228u));  if (t) { goto L_001E1178; } }
L_001E1094:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E10B4; } }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E1118; } }
L_001E10B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 386u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E1118; } }
    goto L_001E10C4;
L_001E10C0:
    c.budget -= 1;
L_001E10C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001E110C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1108; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E1118; } }
L_001E1108:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E110C:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E1178; } }
L_001E1118:
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E1134; } }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);  if (t) { goto L_001E1160; } }
L_001E1134:
    c.f[0] = ld32((c.r[1].w[0] + 21648u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001E1150; } }
    goto L_001E1144;
L_001E1140:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E1144:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E115C; } }
L_001E1150:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001E1178; } }
L_001E115C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.budget -= 1;
L_001E1160:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E1178; } }
L_001E116C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 370u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 228u));
    c.budget -= 3;
L_001E1178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E11B4u); set32(c.r[5], c.r[16].w[0] + 336u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E11B4u) [[unlikely]] return; }
L_001E11B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21672u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[1] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 60u), c.f[1]);  if (t) { goto L_001E11E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_001E1208; } }
L_001E11E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1208; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 4;
L_001E1208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E1234; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_001E1254; } }
L_001E1234:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1254; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 4;
L_001E1254:
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E1270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], c.r[4].w[0] + 336u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E128Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E128Cu) [[unlikely]] return; }
L_001E128C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21672u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[1] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 44u), c.f[1]);  if (t) { goto L_001E12BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_001E12E0; } }
L_001E12BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E12E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 4;
L_001E12E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E130C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_001E132C; } }
L_001E130C:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E132C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 4;
L_001E132C:
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1340:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001E1350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E137Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E137Cu) [[unlikely]] return; }
L_001E137C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E143C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_001E143C; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E143C; } }
    c.r[18].d[0] = ld8((c.r[19].w[0] + 368u));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] + 3u);
    c.r[16].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
L_001E13B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001E142C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E13D8u);  if (depth < kMaxDepth) unit_0034(c, 71u, depth + 1u); else { c.pc = 0x001D0810u; return; } if (c.pc != 0x001E13D8u) [[unlikely]] return; }
L_001E13D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001E13F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E13E8u);  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001E13E8u) [[unlikely]] return; }
L_001E13E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E142C; } }
L_001E13F0:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001E1404; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001E142C; } }
L_001E1404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E140Cu);  if (depth < kMaxDepth) unit_003F(c, 310u, depth + 1u); else { c.pc = 0x001FF1A0u; return; } if (c.pc != 0x001E140Cu) [[unlikely]] return; }
L_001E140C:
    set32(c.r[20], c.r[2].w[0] + 620u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1418u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001E1418u) [[unlikely]] return; }
L_001E1418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001E1424; } }
    set32(c.r[20], 0u + 622u);
    c.budget -= 1;
L_001E1424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E142Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E142Cu) [[unlikely]] return; }
L_001E142C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E13B4u | kUnwind; return; } goto L_001E13B4; } }
L_001E143C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001E1460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[1].w[0] + 21688u));
    c.f[3] = ld32((c.r[4].w[0] + 212u));
    c.f[0] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21696u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E14A0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E14BC; } }
L_001E14A0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E14BC:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    set32(c.r[2], c.r[2].w[0] >> 10);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_001E14E0:
    set32(c.r[3], 0u + 2u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[2] = ld32((c.r[4].w[0] + 8u));  if (t) { goto L_001E14FC; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E1510; } }
L_001E14FC:
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_001E1554; } }
L_001E1510:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E1524; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E1534; } }
L_001E1524:
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_001E1554; } }
L_001E1534:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[0] = c.f[2] ^ fp::kSign;  if (t) { goto L_001E154C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E1554; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001E154C:
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 2;
L_001E1554:
    c.f[2] = c.r[5].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21680u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E159C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_001E15BC; } }
L_001E159C:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E15BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_001E15BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E15E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_001E1608; } }
L_001E15E8:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1608; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_001E1608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1610:
    set32(c.r[3], 0u + 2u);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[2] = ld32((c.r[4].w[0] + 24u));  if (t) { goto L_001E162C; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E1640; } }
L_001E162C:
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.f[0]);  if (t) { goto L_001E1684; } }
L_001E1640:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001E1654; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001E1664; } }
L_001E1654:
    st32((c.r[4].w[0] + 16u), c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.f[0]);  if (t) { goto L_001E1684; } }
L_001E1664:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.f[0] = c.f[2] ^ fp::kSign;  if (t) { goto L_001E167C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E1684; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001E167C:
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    c.budget -= 2;
L_001E1684:
    c.f[2] = c.r[5].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21680u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E16CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_001E16EC; } }
L_001E16CC:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E16EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_001E16EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 75u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 944u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E1728; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[5], c.r[2].w[0] + 76u);
    c.budget -= 2;
L_001E1728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E1730u) [[unlikely]] return; }
L_001E1730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E173Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E173Cu) [[unlikely]] return; }
L_001E173C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1750:
    set32(c.r[5], ld32((c.r[4].w[0] + 944u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (t) { goto L_001E1768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 632u), 0u);  if (t) { goto L_001E1770; } }
L_001E1768:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 632u), c.r[3].w[0]);
    c.budget -= 2;
L_001E1770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 394u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E1860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17A8u);  if (depth < kMaxDepth) unit_0038(c, 33u, depth + 1u); else { c.pc = 0x001E0530u; return; } if (c.pc != 0x001E17A8u) [[unlikely]] return; }
L_001E17A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E1860; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 612u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E1804; } }
    st32((c.r[16].w[0] + 612u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17D0u); st32((c.r[16].w[0] + 616u), 0u);  if (depth < kMaxDepth) unit_0038(c, 33u, depth + 1u); else { c.pc = 0x001E0530u; return; } if (c.pc != 0x001E17D0u) [[unlikely]] return; }
L_001E17D0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E17E8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 616u), c.r[3].w[0]);  if (t) { goto L_001E1860; } }
L_001E17E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E17F0u);  if (depth < kMaxDepth) unit_0038(c, 33u, depth + 1u); else { c.pc = 0x001E0530u; return; } if (c.pc != 0x001E17F0u) [[unlikely]] return; }
L_001E17F0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E1860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 616u), c.r[3].w[0]);  if (t) { goto L_001E1860; } }
L_001E1804:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_001E1860; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E1860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E181Cu);  if (depth < kMaxDepth) unit_0038(c, 33u, depth + 1u); else { c.pc = 0x001E0530u; return; } if (c.pc != 0x001E181Cu) [[unlikely]] return; }
L_001E181C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001E183C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E183C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 616u), c.r[4].w[0]);  if (t) { goto L_001E1860; } }
L_001E183C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 33u, depth + 1u); else { c.pc = 0x001E0530u; return; } if (c.pc != 0x001E1844u) [[unlikely]] return; }
    goto L_001E1844;
L_001E1840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E1844:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001E1860; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001E1860; } }
    st32((c.r[16].w[0] + 616u), c.r[3].w[0]);
    c.budget -= 1;
L_001E1860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1870:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1940; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.budget -= 2;
L_001E1880:
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1894; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1940; } }
L_001E1894:
    set32(c.r[3], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_001E18AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1940; } }
L_001E18AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E18BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1940; } }
L_001E18BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 15000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E18F0; } }
    set32(c.r[2], 0u + 15010u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15300u);  if (t) { goto L_001E18EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E18EC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E18F8; } }
L_001E18EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E18F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1940; } }
L_001E18F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E193C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 101u);  if (t) { goto L_001E1924; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1924; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E193C; } }
L_001E1924:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E193C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1940; } }
L_001E193C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1950:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1A20; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 397u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1A20; } }
L_001E1974:
    set32(c.r[3], ld32((c.r[4].w[0] + 480u)));
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_001E198C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1A20; } }
L_001E198C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E199C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E1A20; } }
L_001E199C:
    set32(c.r[3], ld32((c.r[4].w[0] + 164u)));
    set32(c.r[2], 0u + 15000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E19D0; } }
    set32(c.r[2], 0u + 15010u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15300u);  if (t) { goto L_001E19CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E19CC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E19D8; } }
L_001E19CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001E19D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1A20; } }
L_001E19D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1A1C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 101u);  if (t) { goto L_001E1A04; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E1A04; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E1A1C; } }
L_001E1A04:
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E1A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1A20; } }
L_001E1A1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E1A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E1A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D550000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[2].d[0] | 19285ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1A68u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013C370u; return; } if (c.pc != 0x001E1A68u) [[unlikely]] return; }
L_001E1A68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8352u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 44u), c.f[20]);
    st32((c.r[18].w[0] + 40u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E1AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E1AF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E1BF0; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1AE8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1AE8u) [[unlikely]] return; }
L_001E1AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E1BF4; } }
L_001E1AF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    c.f[12] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 212u);
    fpu_div(c, 13u, c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1B2Cu);  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00143F70u; return; } if (c.pc != 0x001E1B2Cu) [[unlikely]] return; }
L_001E1B2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[3].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E1B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_001E1B50; } }
L_001E1B4C:
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 1;
L_001E1B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E1B88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1B88; } }
    c.f[2] = c.f[2] ^ fp::kSign;
    c.budget -= 1;
L_001E1B88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21640u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E1BC0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E1BF0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1BB8u) [[unlikely]] return; }
L_001E1BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E1BF0; } }
L_001E1BC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1BF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E1BF0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1BF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1BF0u) [[unlikely]] return; }
L_001E1BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E1BF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E1C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E1C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C30u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001E1C30u) [[unlikely]] return; }
L_001E1C30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E1C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E1C48u) [[unlikely]] return; }
L_001E1C48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E1C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1C80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001E1C80u) [[unlikely]] return; }
L_001E1C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8368u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 644u)));
    st32((c.r[3].w[0] + 644u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 28320u);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 13;
L_001E1CE4:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 644u);  if (t) { goto L_001E1D04; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001E1D04; } }
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001E1D04:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E1CE4u | kUnwind; return; } goto L_001E1CE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1D40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1D40u) [[unlikely]] return; }
L_001E1D40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_001E1D5C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1D5Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1D5Cu) [[unlikely]] return; }
L_001E1D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E1DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DA0u); st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x001E1DA0u) [[unlikely]] return; }
L_001E1DA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E1DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E1DB8u) [[unlikely]] return; }
L_001E1DB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E1DBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1DF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013C330u; return; } if (c.pc != 0x001E1DF0u) [[unlikely]] return; }
L_001E1DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8384u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 164u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 31072u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x52490000u);  if (t) { goto L_001E1E48; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E1E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E50u); c.r[5].d[0] = c.r[2].d[0] | 20039ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E1E50u) [[unlikely]] return; }
L_001E1E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E1E5C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E1E5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 368u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 168u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1E98u); set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x001E1E98u) [[unlikely]] return; }
L_001E1E98:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E1EF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 368u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 464u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E1EF0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1EF0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E1EF0u) [[unlikely]] return; }
L_001E1EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E1F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 27u, depth + 1u); else { c.pc = 0x00210C50u; return; } if (c.pc != 0x001E1F34u) [[unlikely]] return; }
L_001E1F34:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 171u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001E1F4Cu) [[unlikely]] return; }
L_001E1F4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 464u), c.r[19].w[0]);
    set32(c.r[3], 0u + 264u);
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[6], ld32((c.r[18].w[0] + 168u)));
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[7], 0u + 2u);  if (t) { goto L_001E1F84; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_001E1F84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E1F94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E1F94u) [[unlikely]] return; }
L_001E1F94:
    set32(c.r[2], c.r[16].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] + 20848u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] + 20852u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 368u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 368u));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001E2004; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001E201C; } }
L_001E2004:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001E201C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21680u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E2054; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 212u), c.f[0]);  if (t) { goto L_001E2074; } }
L_001E2054:
    c.f[0] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E2074; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[0] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.budget -= 4;
L_001E2074:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 393u));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 129u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u + 36u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 393u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 392u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 392u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 397u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20C4u); st8((c.r[16].w[0] + 397u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E20C4u) [[unlikely]] return; }
L_001E20C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 436u);  if (t) { goto L_001E20DC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 126u, depth + 1u); else { c.pc = 0x001E1DD0u; return; } if (c.pc != 0x001E20D8u) [[unlikely]] return; }
L_001E20D8:
    set32(c.r[4], c.r[16].w[0] + 436u);
    c.budget -= 1;
L_001E20DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E20E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E20E4u) [[unlikely]] return; }
L_001E20E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E2100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E211Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E211Cu) [[unlikely]] return; }
L_001E211C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E21CC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E21CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E21CC; } }
    c.f[1] = ld32((c.r[17].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E21CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2168u);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E2168u) [[unlikely]] return; }
L_001E2168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E21CC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x52450000u);  if (t) { goto L_001E217C; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E217C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2184u); c.r[5].d[0] = c.r[2].d[0] | 17996ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E2184u) [[unlikely]] return; }
L_001E2184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E2190; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_001E2190:
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 4u);  if (t) { goto L_001E21A8; } }
    set32(c.r[6], 0u + 6u);
    c.budget -= 1;
L_001E21A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E21CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 660u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E21CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 19u, depth + 1u); else { c.pc = 0x001C02C0u; return; } if (c.pc != 0x001E21CCu) [[unlikely]] return; }
L_001E21CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E21E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E220Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001E220Cu) [[unlikely]] return; }
L_001E220C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2218u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001E2218u) [[unlikely]] return; }
L_001E2218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8432u);
    set32(c.r[2], c.r[2].w[0] - 8416u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], 0u - 129u);
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 402u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E2280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E22E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8432u);
    set32(c.r[2], c.r[2].w[0] - 8416u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001E22C0u) [[unlikely]] return; }
L_001E22C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001E22CCu) [[unlikely]] return; }
L_001E22CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E22E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E22E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E22E4u) [[unlikely]] return; }
L_001E22E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E22E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E2300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 129u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 402u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E2348; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E237C; } }
L_001E2348:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 402u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[7].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E237C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E237Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E237Cu) [[unlikely]] return; }
L_001E237C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2390:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23BCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 249u, depth + 1u); else { c.pc = 0x0013E370u; return; } if (c.pc != 0x001E23BCu) [[unlikely]] return; }
L_001E23BC:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E23C8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 256u, depth + 1u); else { c.pc = 0x0013E440u; return; } if (c.pc != 0x001E23C8u) [[unlikely]] return; }
L_001E23C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8480u);
    set32(c.r[3], c.r[3].w[0] - 8464u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E2410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E2474; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8480u);
    set32(c.r[2], c.r[2].w[0] - 8464u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E490u; return; } if (c.pc != 0x001E2450u) [[unlikely]] return; }
L_001E2450:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E245Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 252u, depth + 1u); else { c.pc = 0x0013E3C0u; return; } if (c.pc != 0x001E245Cu) [[unlikely]] return; }
L_001E245C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001E2478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2474u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E2474u) [[unlikely]] return; }
L_001E2474:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E2478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E2490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u - 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 401u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 401u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E24EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 372u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E253C; } }
L_001E24EC:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[3].w[0] << 1);
    set32(c.r[6], 0u - 3u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 393u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 393u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 401u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0] + 401u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] + 640u), 0u);  if (t) { goto L_001E253C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E253Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E253Cu) [[unlikely]] return; }
L_001E253C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E2550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 240u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2580u); st128((c.r[4].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E2580u) [[unlikely]] return; }
L_001E2580:
    c.f[2] = ld32((c.r[16].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E25AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E25C8; } }
L_001E25AC:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E25C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E25C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E25EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E2608; } }
L_001E25EC:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E2608; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E2608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21696u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E2644; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E2660; } }
L_001E2644:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E2660:
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1153ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2684; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2945ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E2680; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001E2680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E2684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E268Cu);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001E268Cu) [[unlikely]] return; }
L_001E268C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E26A0; } }
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_001E26A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E26C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E26ECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x001BAAF0u; return; } if (c.pc != 0x001E26ECu) [[unlikely]] return; }
L_001E26EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8560u);
    set32(c.r[2], c.r[2].w[0] - 8540u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8524u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[19].w[0] + 424u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8508u);
    st32((c.r[19].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 5950u);
    st32((c.r[19].w[0] + 6736u), c.r[18].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 168u), c.r[16].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2738u); st32((c.r[19].w[0] + 172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E2738u) [[unlikely]] return; }
L_001E2738:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E274C; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 2;
L_001E274C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2754u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E2754u) [[unlikely]] return; }
L_001E2754:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2768; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 2;
L_001E2768:
    st32((c.r[19].w[0] + 176u), 0u);
    set32(c.r[4], 0u + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2778u); st32((c.r[19].w[0] + 52u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E2778u) [[unlikely]] return; }
L_001E2778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2790; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E278Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 90u, depth + 1u); else { c.pc = 0x001B4F50u; return; } if (c.pc != 0x001E278Cu) [[unlikely]] return; }
L_001E278C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E2790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2798u); set32(c.r[4], c.r[19].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E2798u) [[unlikely]] return; }
L_001E2798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27A0u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E27A0u) [[unlikely]] return; }
L_001E27A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E27C0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E27B4; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E27B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B5050u; return; } if (c.pc != 0x001E27BCu) [[unlikely]] return; }
L_001E27BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E27C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27C8u); set32(c.r[4], c.r[19].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E27C8u) [[unlikely]] return; }
L_001E27C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27D0u); set32(c.r[4], 0u + 1664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E27D0u) [[unlikely]] return; }
L_001E27D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E27F4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E27E4; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E27E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27F0u); set32(c.r[6], 0u + 21u);  if (depth < kMaxDepth) unit_002D(c, 119u, depth + 1u); else { c.pc = 0x001B54E0u; return; } if (c.pc != 0x001E27F0u) [[unlikely]] return; }
L_001E27F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E27F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E27FCu); set32(c.r[4], c.r[19].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E27FCu) [[unlikely]] return; }
L_001E27FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2804u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E2804u) [[unlikely]] return; }
L_001E2804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2824; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2818; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E2818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2820u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B63B0u; return; } if (c.pc != 0x001E2820u) [[unlikely]] return; }
L_001E2820:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E2824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E282Cu); set32(c.r[4], c.r[19].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E282Cu) [[unlikely]] return; }
L_001E282C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2834u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E2834u) [[unlikely]] return; }
L_001E2834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E2854; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2848; } }
    set32(c.r[5], c.r[5].w[0] + 436u);
    c.budget -= 1;
L_001E2848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2850u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 471u, depth + 1u); else { c.pc = 0x001B3010u; return; } if (c.pc != 0x001E2850u) [[unlikely]] return; }
L_001E2850:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E2854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E285Cu); set32(c.r[4], c.r[19].w[0] + 436u);  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013C4A0u; return; } if (c.pc != 0x001E285Cu) [[unlikely]] return; }
L_001E285C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2868; } }
    set32(c.r[4], c.r[4].w[0] + 436u);
    c.budget -= 1;
L_001E2868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D430000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2874u); c.r[5].d[0] = c.r[2].d[0] | 21580ull;  if (depth < kMaxDepth) unit_000F(c, 53u, depth + 1u); else { c.pc = 0x0013C640u; return; } if (c.pc != 0x001E2874u) [[unlikely]] return; }
L_001E2874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001E2888; } }
L_001E2884:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2888:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u - 2u);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 400u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 395u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 395u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 403u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 403u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[1].w[0] + 26752u), c.r[19].w[0]);
    st32((c.r[19].w[0] + 6740u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E2920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E29C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] - 8560u);
    set32(c.r[2], c.r[2].w[0] - 8540u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st32((c.r[16].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8524u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] - 8508u);
    st32((c.r[16].w[0] + 424u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E2988; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2988u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E2988u) [[unlikely]] return; }
L_001E2988:
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 6740u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E29A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[1].w[0] + 26752u), 0u);
    c.budget -= 2;
L_001E29A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 255u, depth + 1u); else { c.pc = 0x001BACF0u; return; } if (c.pc != 0x001E29A8u) [[unlikely]] return; }
L_001E29A8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E29C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E29C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100200u; return; } if (c.pc != 0x001E29C0u) [[unlikely]] return; }
L_001E29C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E29C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E29E0:
    set32(c.r[2], c.r[4].w[0] + 208u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[4].w[0] + 224u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1400000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 228u), c.f[2]);
    st32((c.r[4].w[0] + 228u), c.f[1]);
    st32((c.r[4].w[0] + 232u), c.f[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 436u);
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001E0000u < 16384u) { entry = entries_0038[(t - 0x001E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E2A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A54u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 43u, depth + 1u); else { c.pc = 0x00155DC0u; return; } if (c.pc != 0x001E2A54u) [[unlikely]] return; }
L_001E2A54:
    set32(c.r[5], ld32((c.r[16].w[0] + 6736u)));
    set32(c.r[3], 0u + 5950u);
    set32(c.r[4], ld32((c.r[5].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E2A8C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E2AB8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2A84u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E2A84u) [[unlikely]] return; }
L_001E2A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001E2ABC; } }
L_001E2A8C:
    set32(c.r[4], ld32((c.r[5].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E2AB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E2AB8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2AB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E2AB8u) [[unlikely]] return; }
L_001E2AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001E2ABC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E2AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 984u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 56u, depth + 1u); else { c.pc = 0x001C4830u; return; } if (c.pc != 0x001E2B00u) [[unlikely]] return; }
L_001E2B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E2BB4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    set32(c.r[6], 0u + 90u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B20u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 48u, depth + 1u); else { c.pc = 0x00168BD0u; return; } if (c.pc != 0x001E2B20u) [[unlikely]] return; }
L_001E2B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_001E2B44; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 984u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B3Cu); set32(c.r[7], 0u + 90u);  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001E2B3Cu) [[unlikely]] return; }
L_001E2B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E2BB8; } }
L_001E2B44:
    set32(c.r[4], ld32((c.r[1].w[0] + 28288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 52u, depth + 1u); else { c.pc = 0x00168C40u; return; } if (c.pc != 0x001E2B50u) [[unlikely]] return; }
L_001E2B50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1103u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001E2B80; } }
    set32(c.r[2], 0u + 1056u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1007u);  if (t) { goto L_001E2B80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001E2B80; } }
    set32(c.r[2], 0u + 1154u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001E2B98; } }
L_001E2B80:
    set32(c.r[4], ld32((c.r[18].w[0] + 984u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2B98u);  if (depth < kMaxDepth) unit_0035(c, 196u, depth + 1u); else { c.pc = 0x001D7760u; return; } if (c.pc != 0x001E2B98u) [[unlikely]] return; }
L_001E2B98:
    set32(c.r[5], ld32((c.r[18].w[0] + 984u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001E2BACu) [[unlikely]] return; }
L_001E2BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E2BB8; } }
L_001E2BB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E2BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 984u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 370u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E2C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2BF8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E2BF8u) [[unlikely]] return; }
L_001E2BF8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C0Cu);  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E2C0Cu) [[unlikely]] return; }
L_001E2C0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 175u, depth + 1u); else { c.pc = 0x001D2340u; return; } if (c.pc != 0x001E2C1Cu) [[unlikely]] return; }
L_001E2C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E2C2C; } }
L_001E2C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2C64; } }
L_001E2C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C34u);  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001E2C34u) [[unlikely]] return; }
L_001E2C34:
    set32(c.r[4], ld32((c.r[16].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2C40u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0034(c, 173u, depth + 1u); else { c.pc = 0x001D2260u; return; } if (c.pc != 0x001E2C40u) [[unlikely]] return; }
    goto L_001E2C40;
L_001E2C3C:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E2C40:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E2C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2C64; } }
L_001E2C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E2C64; } }
L_001E2C60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2C64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E2C80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 984u)));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 984u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E2CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 6u, depth); } }
L_001E2CC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2CDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_0039(c, 7u, depth); } }
L_001E2CDC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 372u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);  if (t) { goto L_001E2CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 6u, depth); } }
L_001E2CF0:
    set32(c.r[2], ld32((c.r[1].w[0] + 8984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E2D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 6u, depth); } }
L_001E2D04:
    set32(c.r[3], ld32((c.r[19].w[0] + 944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 8u);  if (t) { goto L_001E2D2C; } }
    set32(c.r[2], 0u + 9u);
    set32(c.r[20], c.r[29].w[0] + 236u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_001E2D3C; } }
L_001E2D2C:
    set32(c.r[20], c.r[29].w[0] + 236u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_001E2D3C:
    set32(c.r[4], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 164u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2D4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 243u, depth + 1u); else { c.pc = 0x001C7790u; return; } if (c.pc != 0x001E2D4Cu) [[unlikely]] return; }
L_001E2D4C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_001E2D60; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 2;
L_001E2D60:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001E2DC4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_001E2DC8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 684u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E2DC4; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DA4u); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E2DA4u) [[unlikely]] return; }
L_001E2DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2DB0; } }
    set32(c.r[17], 0u + 4u);
    c.budget -= 1;
L_001E2DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DB8u);  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0800u; return; } if (c.pc != 0x001E2DB8u) [[unlikely]] return; }
L_001E2DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E2DC4; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_001E2DC4:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E2DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[23].sd[0] < 2ll ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 4u, depth); } }
L_001E2DD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 232u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2DF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E2DF0u) [[unlikely]] return; }
L_001E2DF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001E2E08; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E04u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E2E04u) [[unlikely]] return; }
L_001E2E04:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001E2E08:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[2].w[0] + 240u)));
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2E24u); set32(c.r[5], ld32((c.r[19].w[0] + 240u)));  if (depth < kMaxDepth) unit_0011(c, 24u, depth + 1u); else { c.pc = 0x00144550u; return; } if (c.pc != 0x001E2E24u) [[unlikely]] return; }
L_001E2E24:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    c.f[2] = ld32((c.r[2].w[0] + 212u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E2E54; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E2E70; } }
L_001E2E54:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E2E70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E2E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21672u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E2E94; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_001E2EB0; } }
L_001E2E94:
    c.f[1] = ld32((c.r[1].w[0] + 21664u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E2EB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = ld32((c.r[1].w[0] + 21688u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 3;
L_001E2EB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[3] = ld32((c.r[1].w[0] + 21688u));
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[2] = ld32((c.r[1].w[0] + 21696u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E2EEC; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E2F08; } }
L_001E2EEC:
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_001E2F08:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_001E2FC8; } }
L_001E2F18:
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 811u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2FC4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E2FC4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E2FC4; } }
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 20880u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001E2FC4; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F6Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E2F6Cu) [[unlikely]] return; }
L_001E2F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E2FBC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2F84u); set32(c.r[6], 0u + 870u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E2F84u) [[unlikely]] return; }
L_001E2F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E2FACu) [[unlikely]] return; }
L_001E2FAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E2FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E2FC4u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E2FC4u) [[unlikely]] return; }
L_001E2FC4:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001E2FC8:
    c.r[2].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E2F18u | kUnwind; return; } goto L_001E2F18; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 809u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E308C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3088; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3088; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001E3088; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 20888u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001E3088; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 20890u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3030u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3030u) [[unlikely]] return; }
L_001E3030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3080; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E3040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3048u); set32(c.r[6], 0u + 898u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3048u) [[unlikely]] return; }
L_001E3048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3070u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3070u) [[unlikely]] return; }
L_001E3070:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3088u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3088u) [[unlikely]] return; }
L_001E3088:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E308C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3094u);  if (depth < kMaxDepth) unit_0034(c, 93u, depth + 1u); else { c.pc = 0x001D0C90u; return; } if (c.pc != 0x001E3094u) [[unlikely]] return; }
L_001E3094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E30A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 587u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3300ll ? 1ull : 0ull;  if (t) { goto L_001E30B8; } }
L_001E30A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3248; } }
    c.r[2].d[0] = c.r[16].sd[0] < 3300ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E30B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 4550ll ? 1ull : 0ull;  if (t) { goto L_001E315C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 3500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E315C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E30D4u);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E30D4u) [[unlikely]] return; }
L_001E30D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B90; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3100u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3100u) [[unlikely]] return; }
L_001E3100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E314C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3118u); set32(c.r[6], 0u + 808u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3118u) [[unlikely]] return; }
L_001E3118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E313Cu); st32((c.r[19].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E313Cu) [[unlikely]] return; }
L_001E313C:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E314C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3154u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3154u) [[unlikely]] return; }
L_001E3154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E315C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 4700ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3174u);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3174u) [[unlikely]] return; }
L_001E3174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31A0u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E31A0u) [[unlikely]] return; }
L_001E31A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3238; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E31B8u); set32(c.r[6], 0u + 813u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E31B8u) [[unlikely]] return; }
L_001E31B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3224; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 53u);  if (t) { goto L_001E3228; } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3204u); st32((c.r[19].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E3204u) [[unlikely]] return; }
L_001E3204:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3214u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3214u) [[unlikely]] return; }
L_001E3214:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3224:
    set32(c.r[5], 0u + 53u);
    c.budget -= 1;
L_001E3228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3230u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E3230u) [[unlikely]] return; }
L_001E3230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 920u), static_cast<std::uint16_t>(0u));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3240u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3240u) [[unlikely]] return; }
L_001E3240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E3248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3250u);  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001E3250u) [[unlikely]] return; }
L_001E3250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3264u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 103u, depth + 1u); else { c.pc = 0x001C50A0u; return; } if (c.pc != 0x001E3264u) [[unlikely]] return; }
L_001E3264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    set32(c.r[2], 0u + 5950u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5970u);  if (t) { goto L_001E32B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001E32B4; } }
    set32(c.r[2], c.r[16].w[0] - 6000u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 6005u);  if (t) { goto L_001E32B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001E32B4; } }
    set32(c.r[2], 0u + 6007u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 6250ll ? 1ull : 0ull;  if (t) { goto L_001E32B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 6270ll ? 1ull : 0ull;  if (t) { goto L_001E344C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5950ll ? 1ull : 0ull;  if (t) { goto L_001E3450; } }
L_001E32B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32BCu);  if (depth < kMaxDepth) unit_0034(c, 215u, depth + 1u); else { c.pc = 0x001D3140u; return; } if (c.pc != 0x001E32BCu) [[unlikely]] return; }
L_001E32BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E32D0u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 218u, depth + 1u); else { c.pc = 0x001D31B0u; return; } if (c.pc != 0x001E32D0u) [[unlikely]] return; }
L_001E32D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[1].d[0] = c.r[2].sd[0] < 1153ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001E32F8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 2945ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E32F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001E32F8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3B8C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 370u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = c.r[18].sd[0] < 441ll ? 1ull : 0ull;  if (t) { goto L_001E335C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 453ll ? 1ull : 0ull;  if (t) { goto L_001E3348; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E335C; } }
L_001E3348:
    c.r[2].d[0] = c.r[18].sd[0] < 450ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 458ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E335C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E336Cu);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E336Cu) [[unlikely]] return; }
L_001E336C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E343C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3384u); set32(c.r[6], 0u + 1007u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3384u) [[unlikely]] return; }
L_001E3384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    set32(c.r[2], 0u + 5950u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 580u), 0u);  if (t) { goto L_001E341C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 6752u);  if (t) { goto L_001E33E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E33BCu) [[unlikely]] return; }
L_001E33BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E33D8; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 1288u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0038(c, 165u, depth + 1u); else { c.pc = 0x001E26C0u; return; } if (c.pc != 0x001E33D8u) [[unlikely]] return; }
L_001E33D8:
    st32((c.r[19].w[0] + 1288u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001E341C; } }
L_001E33E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 1284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 4u);  if (t) { goto L_001E341C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E33F8u); set32(c.r[4], 0u + 6752u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E33F8u) [[unlikely]] return; }
L_001E33F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3414; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 1284u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3414u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0038(c, 165u, depth + 1u); else { c.pc = 0x001E26C0u; return; } if (c.pc != 0x001E3414u) [[unlikely]] return; }
L_001E3414:
    st32((c.r[19].w[0] + 1284u), 0u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 2;
L_001E341C:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E342Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 34u, depth + 1u); else { c.pc = 0x001E45E0u; return; } if (c.pc != 0x001E342Cu) [[unlikely]] return; }
L_001E342C:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E343C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3444u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3444u) [[unlikely]] return; }
L_001E3444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E344C:
    c.r[2].d[0] = c.r[16].sd[0] < 5950ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E3450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 6100ll ? 1ull : 0ull;  if (t) { goto L_001E3468; } }
    c.r[2].d[0] = c.r[16].sd[0] < 6100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E347C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 6100ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E3468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 4700ll ? 1ull : 0ull;  if (t) { goto L_001E35EC; } }
    c.r[1].d[0] = c.r[16].sd[0] < 6250ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E35EC; } }
L_001E347C:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3488u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 162u, depth + 1u); else { c.pc = 0x001E2550u; return; } if (c.pc != 0x001E3488u) [[unlikely]] return; }
L_001E3488:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3494u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3494u) [[unlikely]] return; }
L_001E3494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[18].sd[0] < 441ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 453ll ? 1ull : 0ull;  if (t) { goto L_001E34C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E34EC; } }
L_001E34C8:
    c.r[2].d[0] = c.r[18].sd[0] < 471ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 483ll ? 1ull : 0ull;  if (t) { goto L_001E34DC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E34EC; } }
L_001E34DC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E34EC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001E3B8C; } }
L_001E34EC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5950ll ? 1ull : 0ull;  if (t) { goto L_001E3508; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3508; } }
    c.r[2].d[0] = c.r[16].sd[0] < 6100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001E3524; } }
L_001E3508:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 6100ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 6269ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_001E3524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E352Cu);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001E352Cu) [[unlikely]] return; }
L_001E352C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001E3544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3540u);  if (depth < kMaxDepth) unit_0034(c, 106u, depth + 1u); else { c.pc = 0x001D0ED0u; return; } if (c.pc != 0x001E3540u) [[unlikely]] return; }
L_001E3540:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001E3544:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3554u); st32((c.r[19].w[0] + 672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3554u) [[unlikely]] return; }
L_001E3554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E35DC; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3568u); set32(c.r[18], 0u + 1103u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001E3568u) [[unlikely]] return; }
L_001E3568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3574; } }
    set32(c.r[18], 0u + 1056u);
    c.budget -= 1;
L_001E3574:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E3598; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3588u); set32(c.r[18], 0u + 1007u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0940u; return; } if (c.pc != 0x001E3588u) [[unlikely]] return; }
L_001E3588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3594; } }
    set32(c.r[18], 0u + 1154u);
    c.budget -= 1;
L_001E3594:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E3598:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E35A4u) [[unlikely]] return; }
L_001E35A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E35CCu) [[unlikely]] return; }
L_001E35CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E35DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E35E4u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E35E4u) [[unlikely]] return; }
L_001E35E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E35EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3600; } }
    c.r[2].d[0] = c.r[16].sd[0] < 5300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001E3640; } }
L_001E3600:
    c.r[2].d[0] = c.r[16].sd[0] < 5500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 6270ll ? 1ull : 0ull;  if (t) { goto L_001E361C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 5550ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E363C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 6270ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E361C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5300ll ? 1ull : 0ull;  if (t) { goto L_001E37C4; } }
    c.r[1].d[0] = c.r[16].sd[0] < 6300ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E37C0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 370u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E37C0; } }
L_001E363C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E3640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3648u);  if (depth < kMaxDepth) unit_0034(c, 214u, depth + 1u); else { c.pc = 0x001D30C0u; return; } if (c.pc != 0x001E3648u) [[unlikely]] return; }
L_001E3648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3658u);  if (depth < kMaxDepth) unit_0034(c, 215u, depth + 1u); else { c.pc = 0x001D3140u; return; } if (c.pc != 0x001E3658u) [[unlikely]] return; }
L_001E3658:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E3B8C; } }
L_001E3664:
    set32(c.r[2], 0u + 6274u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E368C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3678u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E3678u) [[unlikely]] return; }
L_001E3678:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 9u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E3B8C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E368C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3694u);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3694u) [[unlikely]] return; }
L_001E3694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36C0u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001E36C0u) [[unlikely]] return; }
L_001E36C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36DCu);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E36DCu) [[unlikely]] return; }
L_001E36DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E37B0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E36F4u); set32(c.r[6], 0u + 808u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E36F4u) [[unlikely]] return; }
L_001E36F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[3], 0u + 600u);
    set32(c.r[2], 0u + 4830u);
    st32((c.r[19].w[0] + 572u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 580u), 0u);  if (t) { goto L_001E3790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E371Cu);  if (depth < kMaxDepth) unit_0044(c, 27u, depth + 1u); else { c.pc = 0x00210C50u; return; } if (c.pc != 0x001E371Cu) [[unlikely]] return; }
L_001E371C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], 0u + 162u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3734u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 116u, depth + 1u); else { c.pc = 0x002099F0u; return; } if (c.pc != 0x001E3734u) [[unlikely]] return; }
L_001E3734:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 464u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 644u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3764u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001E3764u) [[unlikely]] return; }
L_001E3764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E376Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E376Cu) [[unlikely]] return; }
L_001E376C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E377C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E377Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E1C60u; return; } if (c.pc != 0x001E377Cu) [[unlikely]] return; }
L_001E377C:
    set32(c.r[4], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3788u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x001E3788u) [[unlikely]] return; }
L_001E3788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 984u)));  if (t) { goto L_001E37A4; } }
L_001E3790:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E37A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E37A0u) [[unlikely]] return; }
L_001E37A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 1;
L_001E37A4:
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E37B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E37B8u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E37B8u) [[unlikely]] return; }
L_001E37B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E37C0:
    c.r[2].d[0] = c.r[16].sd[0] < 5300ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E37C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5650ll ? 1ull : 0ull;  if (t) { goto L_001E3894; } }
    c.r[1].d[0] = c.r[16].sd[0] < 5500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E3894; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001E37E8; } }
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E37E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E37F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E37F0u) [[unlikely]] return; }
L_001E37F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E381Cu); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001E381Cu) [[unlikely]] return; }
L_001E381C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3834u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3834u) [[unlikely]] return; }
L_001E3834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3884; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E384Cu); set32(c.r[6], 0u + 903u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E384Cu) [[unlikely]] return; }
L_001E384C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3874u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3874u) [[unlikely]] return; }
L_001E3874:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E388Cu);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E388Cu) [[unlikely]] return; }
L_001E388C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E3894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 5750ll ? 1ull : 0ull;  if (t) { goto L_001E396C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5750ll ? 1ull : 0ull;  if (t) { goto L_001E3970; } }
    set32(c.r[2], 0u + 5708u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E38C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38B8u);  if (depth < kMaxDepth) unit_003D(c, 83u, depth + 1u); else { c.pc = 0x001F53F0u; return; } if (c.pc != 0x001E38B8u) [[unlikely]] return; }
L_001E38B8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E396C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E38C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38D0u);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E38D0u) [[unlikely]] return; }
L_001E38D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E38FCu); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 102u, depth + 1u); else { c.pc = 0x001D0E50u; return; } if (c.pc != 0x001E38FCu) [[unlikely]] return; }
L_001E38FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E390Cu);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E390Cu) [[unlikely]] return; }
L_001E390C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E395C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3924u); set32(c.r[6], 0u + 808u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3924u) [[unlikely]] return; }
L_001E3924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E394Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E394Cu) [[unlikely]] return; }
L_001E394C:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E395C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3964u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3964u) [[unlikely]] return; }
L_001E3964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E396C:
    c.r[2].d[0] = c.r[16].sd[0] < 5750ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E3970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5820ll ? 1ull : 0ull;  if (t) { goto L_001E3A28; } }
    c.r[1].d[0] = c.r[16].sd[0] < 5820ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E398Cu);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E398Cu) [[unlikely]] return; }
L_001E398C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39B8u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 104u, depth + 1u); else { c.pc = 0x001D0E90u; return; } if (c.pc != 0x001E39B8u) [[unlikely]] return; }
L_001E39B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39C8u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E39C8u) [[unlikely]] return; }
L_001E39C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3A18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E39E0u); set32(c.r[6], 0u + 903u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E39E0u) [[unlikely]] return; }
L_001E39E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A08u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3A08u) [[unlikely]] return; }
L_001E3A08:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A20u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3A20u) [[unlikely]] return; }
L_001E3A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E3A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 5850ll ? 1ull : 0ull;  if (t) { goto L_001E3ADC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 5850ll ? 1ull : 0ull;  if (t) { goto L_001E3AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A40u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3A40u) [[unlikely]] return; }
L_001E3A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A6Cu); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 69u, depth + 1u); else { c.pc = 0x001D07F0u; return; } if (c.pc != 0x001E3A6Cu) [[unlikely]] return; }
L_001E3A6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A7Cu);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3A7Cu) [[unlikely]] return; }
L_001E3A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3ACC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3A94u); set32(c.r[6], 0u + 811u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3A94u) [[unlikely]] return; }
L_001E3A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3ABCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3ABCu) [[unlikely]] return; }
L_001E3ABC:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AD4u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3AD4u) [[unlikely]] return; }
L_001E3AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E3B8C; } }
L_001E3ADC:
    c.r[2].d[0] = c.r[16].sd[0] < 5850ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E3AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 5900ll ? 1ull : 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3AF8u);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3AF8u) [[unlikely]] return; }
L_001E3AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3B8C; } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B24u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 107u, depth + 1u); else { c.pc = 0x001D0EE0u; return; } if (c.pc != 0x001E3B24u) [[unlikely]] return; }
L_001E3B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B34u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3B34u) [[unlikely]] return; }
L_001E3B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3B84; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B4Cu); set32(c.r[6], 0u + 808u);  if (depth < kMaxDepth) unit_0038(c, 194u, depth + 1u); else { c.pc = 0x001E2AD0u; return; } if (c.pc != 0x001E3B4Cu) [[unlikely]] return; }
L_001E3B4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[2], 0u + 600u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B74u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E45D0u; return; } if (c.pc != 0x001E3B74u) [[unlikely]] return; }
L_001E3B74:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B8Cu);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3B8Cu) [[unlikely]] return; }
L_001E3B8C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3B98u);  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0800u; return; } if (c.pc != 0x001E3B98u) [[unlikely]] return; }
L_001E3B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001E3BA8u) [[unlikely]] return; }
L_001E3BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3BFC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BC4u);  if (depth < kMaxDepth) unit_007E(c, 21u, depth + 1u); else { c.pc = 0x002F85A0u; return; } if (c.pc != 0x001E3BC4u) [[unlikely]] return; }
L_001E3BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BD4u);  if (depth < kMaxDepth) unit_0035(c, 78u, depth + 1u); else { c.pc = 0x001D5900u; return; } if (c.pc != 0x001E3BD4u) [[unlikely]] return; }
L_001E3BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3BE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 99u, depth + 1u); else { c.pc = 0x001D0E10u; return; } if (c.pc != 0x001E3BE4u) [[unlikely]] return; }
L_001E3BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3BFC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], 0u + 1600u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E3EE0; } }
L_001E3BFC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C08u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 70u, depth + 1u); else { c.pc = 0x001D0800u; return; } if (c.pc != 0x001E3C08u) [[unlikely]] return; }
L_001E3C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3C24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C18u);  if (depth < kMaxDepth) unit_0034(c, 73u, depth + 1u); else { c.pc = 0x001D0850u; return; } if (c.pc != 0x001E3C18u) [[unlikely]] return; }
L_001E3C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E3C24; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_001E3C24:
    c.r[2].d[0] = c.r[16].sd[0] < 3550ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].sd[0] < 3500ll ? 1ull : 0ull;  if (t) { goto L_001E3D90; } }
    c.r[1].d[0] = c.r[16].sd[0] < 3700ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_001E3D90; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 15700u);  if (t) { goto L_001E3C90; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001E3C90; } }
    c.r[2].d[0] = c.r[18].sd[0] < 441ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].sd[0] < 471ll ? 1ull : 0ull;  if (t) { goto L_001E3C64; } }
    c.r[1].d[0] = c.r[18].sd[0] < 453ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3C90; } }
L_001E3C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 483ll ? 1ull : 0ull;  if (t) { goto L_001E3C74; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E3C90; } }
L_001E3C74:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001E3C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3C88u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 89u, depth + 1u); else { c.pc = 0x001D0B90u; return; } if (c.pc != 0x001E3C88u) [[unlikely]] return; }
L_001E3C88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_001E3C90:
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3CC8u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3CC8u) [[unlikely]] return; }
L_001E3CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3D80; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], 0u + 600u);  if (t) { goto L_001E3CF4; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 400u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 600u);
    c.budget -= 7;
L_001E3CF4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D0Cu); st32((c.r[19].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E3D0Cu) [[unlikely]] return; }
L_001E3D0C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_001E3D4C; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 400u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 40u);
    c.budget -= 14;
L_001E3D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E3D54u) [[unlikely]] return; }
L_001E3D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E3D70; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 984u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 144u, depth + 1u); else { c.pc = 0x001E21E0u; return; } if (c.pc != 0x001E3D70u) [[unlikely]] return; }
L_001E3D70:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3D88u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3D88u) [[unlikely]] return; }
L_001E3D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_0039(c, 3u, depth); } }
L_001E3D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 3550ll ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DA8u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001E3DA8u) [[unlikely]] return; }
L_001E3DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3DE8u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3DE8u) [[unlikely]] return; }
L_001E3DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3ED0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[2], 0u + 600u);  if (t) { goto L_001E3E14; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 400u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 600u);
    c.budget -= 7;
L_001E3E14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E2Cu); st32((c.r[19].w[0] + 580u), 0u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E3E2Cu) [[unlikely]] return; }
L_001E3E2C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001E3E68; } }
    c.r[6].d[0] = ld8((c.r[19].w[0] + 400u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 400u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 392u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 392u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
L_001E3E68:
    set32(c.r[4], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3E74u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0030(c, 17u, depth + 1u); else { c.pc = 0x001C02A0u; return; } if (c.pc != 0x001E3E74u) [[unlikely]] return; }
L_001E3E74:
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[6], 0u + 1000u);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u + 40u);
    st32((c.r[5].w[0] + 640u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 984u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 393u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 393u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EACu); st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x001001E0u; return; } if (c.pc != 0x001E3EACu) [[unlikely]] return; }
L_001E3EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
    set32(c.r[6], ld32((c.r[19].w[0] + 984u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EC8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 153u, depth + 1u); else { c.pc = 0x001E2390u; return; } if (c.pc != 0x001E3EC8u) [[unlikely]] return; }
L_001E3EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3ED8u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E3ED8u) [[unlikely]] return; }
L_001E3ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_001E3EE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001E3EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EECu);  if (depth < kMaxDepth) unit_0034(c, 131u, depth + 1u); else { c.pc = 0x001D14A0u; return; } if (c.pc != 0x001E3EECu) [[unlikely]] return; }
L_001E3EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3EFCu);  if (depth < kMaxDepth) unit_0034(c, 132u, depth + 1u); else { c.pc = 0x001D14B0u; return; } if (c.pc != 0x001E3EFCu) [[unlikely]] return; }
L_001E3EFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_001E3F04:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] & 61440ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_001E3F28; } }
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_001E3F34; } }
L_001E3F28:
    set32(c.r[2], 0u + 7u);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001E3F34:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 25u, depth + 1u); else { c.pc = 0x001E44B0u; return; } if (c.pc != 0x001E3F44u) [[unlikely]] return; }
L_001E3F44:
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3F64; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
L_001E3F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F6Cu);  if (depth < kMaxDepth) unit_0038(c, 201u, depth + 1u); else { c.pc = 0x001E2BD0u; return; } if (c.pc != 0x001E3F6Cu) [[unlikely]] return; }
L_001E3F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.f[1] = ld32((c.r[19].w[0] + 1024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3F98u); set32(c.r[4], ld32((c.r[19].w[0] + 984u)));  if (depth < kMaxDepth) unit_0034(c, 61u, depth + 1u); else { c.pc = 0x001D06C0u; return; } if (c.pc != 0x001E3F98u) [[unlikely]] return; }
L_001E3F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0039(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FB0u);  if (depth < kMaxDepth) unit_0038(c, 32u, depth + 1u); else { c.pc = 0x001E0520u; return; } if (c.pc != 0x001E3FB0u) [[unlikely]] return; }
L_001E3FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001E3FFC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_001E3FCC; } }
    set32(c.r[16], 0u + 15261u);
    c.budget -= 1;
L_001E3FCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 572u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 576u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 580u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 168u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E3FECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 280u, depth + 1u); else { c.pc = 0x001EBEE0u; return; } if (c.pc != 0x001E3FECu) [[unlikely]] return; }
L_001E3FEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 984u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0039(c, 5u, depth); } }
L_001E3FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4004u);  if (depth < kMaxDepth) unit_0038(c, 80u, depth + 1u); else { c.pc = 0x001E1340u; return; } if (c.pc != 0x001E4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0039(c, 2u, depth);
}

}
